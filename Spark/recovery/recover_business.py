"""Offline reconstruction of Spark's local carrier pipeline; never contacts a server.

Derived from the supplied libsummitden.so, not an original project source file.
No actual response value is embedded or logged. Addresses use Ghidra base +0x100000.
"""
from pathlib import Path
import argparse
import collections
import hashlib
import json
import re
import struct
import sys
import zipfile
import zlib
from contextlib import nullcontext

ROOT = Path(__file__).resolve().parents[1]
OUT = Path(__file__).resolve().parent
MASK = (1 << 64) - 1
FALLBACK = 0xa5a55a5af0f00f0f
ORDER = [
    'kreift/khaess/twodreempKhourk.cache',
    'zreist/breandkos-6d2b511d.map',
    'styz/smeon/82ecb48be40c90ea2c8dd1d4.blob',
    'kaelk/pheamp/e66cf9181385a4f7307d086a.cache',
    '4761/shraurmskoarm-daef10b32f.zo',
    '2903/threntbruck-95df389e.kre',
    'config/cache/sloos_c9a7716e87f4454c.scai',
    'res/data/af4bf22624f7.blob',
    '6899/94f6004f-7c74-4306-519eb549d62e.vra',
    '7010/3041/dba72b21-eb14-fedd-d558c3381a5d.dat',
]


def sha(data):
    return hashlib.sha256(data).hexdigest()


def save_json(name, obj):
    (OUT / name).write_text(json.dumps(obj, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')


def fnv64(data):  # 0x154d84, 0x156c30
    result = 0xcbf29ce484222325
    for byte in data:
        result = ((result ^ byte) * 0x100000001b3) & MASK
    return result


def step(state):  # 0x154e38, 0x156f5c
    state ^= state >> 12
    state ^= (state << 25) & MASK
    state ^= state >> 27
    state &= MASK
    return state, (state * 0x2545f4914f6cdd1d) & MASK


def permutation(size, key):  # 0x15450c
    values = list(range(size))
    state = (fnv64(key) ^ 0x7061636b73686631) or FALLBACK
    for index in range(size - 1, 0, -1):
        state, value = step(state)
        other = value % (index + 1)
        values[index], values[other] = values[other], values[index]
    return values


def unshuffle(data, key):  # 0x1525b4: output[permutation[i]] = input[i]
    result = bytearray(len(data))
    for index, target in enumerate(permutation(len(data), key)):
        result[target] = data[index]
    return bytes(result)


def header(data, key):  # 0x15623c called by 0x1527d8
    if len(key) != 16 or len(data) < 16:
        raise ValueError('invalid_key_length_or_short_envelope')
    seed, = struct.unpack_from('<I', data)
    state = (fnv64(key) ^ seed ^ 0x686472763200ff5a) or FALLBACK
    decoded = bytearray()
    for byte in data[4:16]:
        state, value = step(state)
        decoded.append(byte ^ (value & 255))
    version, flags, padding, size, crc = struct.unpack('<BBHII', decoded)
    return version, flags, padding, size, crc


def blocks(data, key):  # 0x1527d8 with CRC helper 0x1564c0
    version, flags, padding, size, crc = header(data, key)
    if version != 2 or padding + 16 > len(data) or size > len(data):
        raise ValueError('envelope_header_rejected')
    pos = 16 + padding
    result = bytearray()
    lengths = []
    while len(result) < size:
        if pos + 2 > len(data):
            raise ValueError('truncated_block_length')
        length, = struct.unpack_from('<H', data, pos)
        pos += 2
        if pos + length > len(data) or len(result) + length > size:
            raise ValueError('invalid_block_boundary')
        result.extend(data[pos:pos + length])
        lengths.append(length)
        pos += length
    if zlib.crc32(result) & 0xffffffff != crc:
        raise ValueError('crc_mismatch')
    return bytes(result), dict(version=version, flags=flags, padding=padding,
                              payload_size=size, crc32=f'{crc:08x}',
                              block_lengths=lengths, trailing_bytes=len(data) - pos)


def inner_decode(data, key, magic):  # 0x153188, 0x156ff0
    if len(key) != 16 or len(data) < 8:
        raise ValueError('short_inner_or_key')
    offset = 12 if len(data) >= 12 and data.startswith(magic) else 8
    seed, = struct.unpack_from('<Q', data, offset - 8)
    size = len(data) - offset
    state = (fnv64(key) ^ seed ^ ((size * 0x9e3779b97f4a7c15) & MASK)) or FALLBACK
    result = bytearray(size)
    for index, byte in enumerate(data[offset:]):
        state, value = step(state)
        k = key[index % 16]
        shift = (k ^ index) & 7
        rotated = ((byte >> shift) | (byte << ((-shift) & 7))) & 255
        result[index] = rotated ^ (value & 255) ^ k
    return bytes(result)


def dex_validation(data):
    if len(data) < 112 or not re.match(rb'dex\n0[0-9]{2}\x00', data[:8]):
        raise ValueError('not_standard_dex')
    checksum, = struct.unpack_from('<I', data, 8)
    signature = data[12:32]
    file_size, header_size, endian = struct.unpack_from('<III', data, 32)
    if file_size != len(data) or header_size != 112 or endian != 0x12345678:
        raise ValueError('dex_header_rejected')
    if checksum != zlib.adler32(data[12:]) & 0xffffffff:
        raise ValueError('dex_adler32_rejected')
    if signature != hashlib.sha1(data[32:]).digest():
        raise ValueError('dex_sha1_rejected')
    sections = {}
    for name, field, width in [('strings',56,4),('types',64,4),('protos',72,12),
                               ('fields',80,8),('methods',88,8),('classes',96,32)]:
        count, offset = struct.unpack_from('<II', data, field)
        if count and (offset < 112 or offset + count * width > len(data)):
            raise ValueError('dex_section_out_of_bounds')
        sections[name] = count
    return dict(sha256=sha(data), size=len(data), version=data[4:7].decode(),
                sections=sections, sha1_valid=True, adler32_valid=True)


def prepare():
    records = []
    merged = bytearray()
    apk = ROOT / 'apks/base.apk'
    assets = ROOT / 'java/outer/resources/assets'
    if not apk.is_file() and not assets.is_dir():
        raise ValueError('sample root requires apks/base.apk or java/outer/resources/assets')
    with (zipfile.ZipFile(apk) if apk.is_file() else nullcontext(None)) as archive:
        for order, name in enumerate(ORDER):
            member = 'assets/' + name
            raw = archive.read(member) if archive else (assets / name).read_bytes()
            if len(raw) < 8 or raw[4] != 2:
                raise ValueError('invalid_outer_carrier')
            padding, = struct.unpack_from('<H', raw, 6)
            offset = 8 + padding
            if offset > len(raw):
                raise ValueError('invalid_outer_padding')
            chunk = raw[offset:]
            records.append(dict(order=order, apk_member=member, carrier_size=len(raw),
                                carrier_sha256=sha(raw), magic=raw[:4].decode('ascii'),
                                version=raw[4], padding_size=padding, payload_offset=offset,
                                payload_size=len(chunk), merged_offset=len(merged),
                                payload_sha256=sha(chunk)))
            (OUT / f'part-{order:02}.bin').write_bytes(chunk)
            merged.extend(chunk)
    (OUT / 'assembled-permuted.bin').write_bytes(merged)
    record = dict(base_apk_sha256=sha(apk.read_bytes()) if apk.is_file() else None,
                  input_kind='original_apk' if apk.is_file() else 'exported_resources',
                  order_source='native-audit/resolved/00180458.c',
                  strip_source='native-audit/resolved/00152344.c',
                  parts=records, assembled_size=len(merged), assembled_sha256=sha(merged),
                  status='opaque_permuted_carrier_not_a_dex')
    save_json('carrier-manifest.json', record)
    return bytes(merged), record


def candidate_strings():
    candidates = collections.defaultdict(set)
    def add(value, source):
        if isinstance(value, str):
            value = value.encode('utf-8')
        if len(value) == 16 and all(32 < byte < 127 for byte in value):
            candidates[value].add(source)
    for name in ['strings.json', 'xor-aa-strings.json']:
        inventory = ROOT / 'native-audit' / name
        if not inventory.is_file():
            inventory = OUT / 'evidence' / name
        items = json.loads(inventory.read_text(encoding='utf-8-sig'))
        for item in items:
            value = item.get('text','') if isinstance(item,dict) else item[1]
            add(value, 'native_' + name)
    apk = ROOT / 'apks/base.apk'
    if not apk.is_file():
        raise ValueError('exact candidate scan requires original apks/base.apk; use prepare/decode with exported resources')
    with zipfile.ZipFile(apk) as archive:
        for name in archive.namelist():
            if name.endswith('/'):
                continue
            data = archive.read(name)
            for match in re.finditer(rb'[\x21-\x7e]{16}', data):
                start, end = match.span()
                if (start == 0 or not 33 <= data[start-1] < 127) and (end == len(data) or not 33 <= data[end] < 127):
                    add(match.group(), 'apk_printable_run')
    return candidates


def decode(data, key, magic):
    reordered = unshuffle(data, key)
    payload, meta = blocks(reordered, key)
    recovered = inner_decode(payload, key, magic)
    valid = dex_validation(recovered)
    return recovered, meta, valid


def scan(data, magic):
    candidates = candidate_strings()
    failures = collections.Counter()
    hits = []
    for index, key in enumerate(candidates):
        try:
            dex, meta, valid = decode(data, key, magic)
            output = OUT / 'recovered-business.dex'
            output.write_bytes(dex)
            hits.append(dict(output=output.name, envelope=meta, dex=valid))
        except ValueError as exc:
            failures[str(exc)] += 1
        if (index + 1) % 100 == 0:
            print(json.dumps(dict(processed=index+1, total=len(candidates))), flush=True)
    record = dict(candidate_count=len(candidates),
                  candidate_boundary='whole strings of exactly 16 visible ASCII bytes (0x21-0x7e, no spaces) in APK members and existing native plain/XOR-aa inventories; no arbitrary keyspace brute force',
                  failure_counts=dict(failures), validated_dex_hits=hits,
                  limitations=['No observed backend response or runtime process memory.',
                               'A negative scan does not prove absence of encoded, derived, non-ASCII, or remotely supplied values.',
                               'Local decoder is an analysis reconstruction; no real-key/native end-to-end comparison yet.'])
    save_json('candidate-scan.json', record)
    print(json.dumps(record, ensure_ascii=False), flush=True)


def native_magic():
    path = ROOT / 'native/split-1/lib/arm64-v8a/libsummitden.so'
    if not path.is_file():
        path = ROOT / 'native/raw/libsummitden.so'
    raw = path.read_bytes()
    if raw[:6] != b'\x7fELF\x02\x01':
        raise ValueError('expected_little_endian_elf64')
    phoff, = struct.unpack_from('<Q',raw,32)
    phsize, phnum = struct.unpack_from('<HH',raw,54)
    for index in range(phnum):
        kind, flags, offset, va, pa, filesz, memsz, align = struct.unpack_from('<IIQQQQQQ',raw,phoff+index*phsize)
        if kind == 1 and va <= 0x1eef9 and 0x1eef9+4 <= va+filesz:
            position = offset + 0x1eef9 - va
            return bytes(byte ^ 0x5a for byte in raw[position:position+4])
    raise ValueError('inner_magic_not_file_backed')


def main():
    global ROOT, OUT
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=['prepare','scan','decode'])
    parser.add_argument('--key-file', type=Path, help='existing local file holding exactly 16 raw bytes; never logged')
    parser.add_argument('--sample-root', type=Path, default=ROOT, help='analysis root or exported Spark directory')
    parser.add_argument('--output-dir', type=Path, default=OUT, help='directory for derived files')
    args = parser.parse_args()
    ROOT = args.sample_root.resolve()
    OUT = args.output_dir.resolve()
    OUT.mkdir(parents=True,exist_ok=True)
    data, manifest = prepare()
    if args.action == 'prepare':
        print(json.dumps(dict(parts=len(manifest['parts']), assembled_size=len(data), sha256=sha(data))))
    elif args.action == 'scan':
        scan(data, native_magic())
    else:
        if not args.key_file:
            parser.error('decode requires --key-file; no network fallback')
        key = args.key_file.read_bytes()
        if len(key) != 16:
            parser.error('key file must contain exactly 16 bytes')
        dex, meta, valid = decode(data, key, native_magic())
        (OUT / 'recovered-business.dex').write_bytes(dex)
        save_json('recovered-business-validation.json', dict(envelope=meta, dex=valid))
        print(json.dumps(valid))


if __name__ == '__main__':
    sys.stdout.reconfigure(encoding='utf-8')
    main()
