"""Compare recovered algorithms against isolated original ARM64 subroutines.

Uses synthetic input only. No APK, JNI entry point, target network, or business
module is executed. Import shims are bounded memory/allocator operations only.
"""
from pathlib import Path
import hashlib
import json
import struct
import sys

HERE = Path(__file__).resolve().parent
sys.path[:0] = [str(HERE / 'deps'), 'D:/Android/Analysis/HeavensRelic-1.4.0-cf8b563a/unity-audit/deps']
from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE
from unicorn.arm64_const import *
from elftools.elf.elffile import ELFFile
import recover_business as recovery
from recover_business import fnv64, step, header, unshuffle, inner_decode, native_magic, blocks

BASE = 0x100000
HEAP = 0x60000000
STACK = 0x70000000
TLS = 0x71000000
STUB = 0x72000000
STOP = 0x73000000
REGS = [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,
        UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X7]


class Native:
    def __init__(self):
        self.uc = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
        self.path = recovery.ROOT / 'native/split-1/lib/arm64-v8a/libsummitden.so'
        if not self.path.is_file():
            self.path = recovery.ROOT / 'native/raw/libsummitden.so'
        self.data = self.path.read_bytes()
        self.next = HEAP
        self.stubs = {}
        self.import_calls = {}
        self.allocations = {}
        self.error = None
        with self.path.open('rb') as stream:
            elf = ELFFile(stream)
            segments = [s for s in elf.iter_segments() if s['p_type'] == 'PT_LOAD']
            low = min(s['p_vaddr'] & ~4095 for s in segments) + BASE
            high = max((s['p_vaddr'] + s['p_memsz'] + 4095) & ~4095 for s in segments) + BASE
            self.uc.mem_map(low, high-low)
            for seg in segments:
                self.uc.mem_write(BASE + seg['p_vaddr'], seg.data())
            self.uc.mem_map(HEAP, 0x1000000)
            self.uc.mem_map(STACK, 0x100000)
            self.uc.mem_map(TLS, 4096)
            self.uc.mem_map(STUB, 0x10000)
            self.uc.mem_map(STOP, 4096)
            self.uc.reg_write(UC_ARM64_REG_TPIDR_EL0, TLS)
            self.uc.mem_write(TLS+0x28, struct.pack('<Q',0x1122334455667788))
            for section in elf.iter_sections():
                if section['sh_type'] != 'SHT_RELA':
                    continue
                syms = elf.get_section(section['sh_link'])
                for rel in section.iter_relocations():
                    address = BASE + rel['r_offset']
                    if rel['r_info_type'] == 1027:
                        value = BASE + rel['r_addend']
                    elif rel['r_info_sym']:
                        symbol = syms.get_symbol(rel['r_info_sym'])
                        if symbol['st_shndx'] == 'SHN_UNDEF':
                            value = STUB + 16 * len(self.stubs)
                            self.stubs[value] = symbol.name
                        else:
                            value = BASE + symbol['st_value'] + rel['r_addend']
                    else:
                        continue
                    self.uc.mem_write(address, struct.pack('<Q',value))
        self.uc.hook_add(UC_HOOK_CODE,self.hook,begin=STUB,end=STUB+0xffff)

    def alloc(self,size,data=None):
        size=max(size,1)
        address=self.next
        self.next += (size+15)&~15
        if self.next>=HEAP+0x1000000:
            raise ValueError('isolated_heap_exhausted')
        self.allocations[address]=size
        if data is not None:
            self.uc.mem_write(address,bytes(data))
        return address

    def vector(self,data):
        address=self.alloc(len(data),data)
        return self.alloc(24,struct.pack('<QQQ',address,address+len(data),address+len(data)))

    def read_vector(self,addr):
        start,end,cap=struct.unpack('<QQQ',self.uc.mem_read(addr,24))
        if end<start or end-start>0x100000:
            raise ValueError('invalid_isolated_vector')
        return bytes(self.uc.mem_read(start,end-start))

    def hook(self,uc,address,size,user):
        name=self.stubs.get(address)
        args=[uc.reg_read(reg) for reg in REGS]
        self.import_calls[name]=self.import_calls.get(name,0)+1
        result=0
        try:
            if name=='malloc' or name in ('_Znwm','_Znam'):
                result=self.alloc(args[0])
            elif name=='calloc':
                result=self.alloc(args[0]*args[1])
            elif name=='realloc':
                result=self.alloc(args[1])
                if args[0]:
                    uc.mem_write(result,bytes(uc.mem_read(args[0],min(self.allocations.get(args[0],0),args[1]))))
            elif name in ('free','_ZdlPv','_ZdaPv'):
                pass
            elif name in ('memcpy','memmove','__memcpy_chk','__memmove_chk'):
                uc.mem_write(args[0],bytes(uc.mem_read(args[1],args[2])))
                result=args[0]
            elif name in ('memset','__memset_chk'):
                uc.mem_write(args[0],bytes([args[1]&255])*args[2])
                result=args[0]
            elif name=='memcmp':
                left=bytes(uc.mem_read(args[0],args[2]));right=bytes(uc.mem_read(args[1],args[2]))
                result=(left>right)-(left<right)
            elif name=='strlen':
                while uc.mem_read(args[0]+result,1)!=b'\x00':
                    result+=1
            else:
                raise ValueError('unsupported_import:'+str(name))
            uc.reg_write(UC_ARM64_REG_X0,result&((1<<64)-1))
            uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_LR))
        except Exception as exc:
            self.error=str(exc)
            uc.emu_stop()

    def call(self,address,*args):
        for reg in range(31):
            self.uc.reg_write(UC_ARM64_REG_X0+reg,0)
        self.uc.reg_write(UC_ARM64_REG_SP,STACK+0xf0000)
        self.uc.reg_write(UC_ARM64_REG_LR,STOP)
        for reg,arg in zip(REGS,args):
            self.uc.reg_write(reg,arg)
        self.error=None
        self.uc.emu_start(address,STOP,count=10000000)
        if self.error:
            raise ValueError(self.error)
        if self.uc.reg_read(UC_ARM64_REG_PC)!=STOP:
            raise ValueError('isolated_instruction_budget_exceeded')
        return self.uc.reg_read(UC_ARM64_REG_X0)


def main():
    n=Native()
    key=bytes(range(65,81))  # synthetic, never a real sample response
    keyp=n.alloc(16,key)
    checks=[]
    def check(name,condition):
        checks.append(dict(name=name,passed=bool(condition)))
        if not condition:
            raise AssertionError(name)
    for i,data in enumerate([b'',key,bytes(range(256))]):
        check('fnv64_'+str(i),n.call(0x154d84,n.alloc(len(data),data),len(data))==fnv64(data))
    for i,state in enumerate([1,0x123456789abcdef0,0xffffffffffffffff]):
        p=n.alloc(8,struct.pack('<Q',state))
        expected,value=step(state)
        check('xorshift64star_'+str(i),n.call(0x154e38,p)==value and struct.unpack('<Q',n.uc.mem_read(p,8))[0]==expected)
    fake=bytes(range(32))
    maskp=n.alloc(12)
    n.call(0x15623c,keyp,0x03020100,maskp)
    native_mask=bytes(n.uc.mem_read(maskp,12))
    decoded=header(fake,key)
    check('header_mask',native_mask==bytes(x^y for x,y in zip(fake[4:16],struct.pack('<BBHII',*decoded))))
    for size in [2,17,257]:
        data=bytes((i*31+7)&255 for i in range(size))
        vector=n.vector(data)
        n.call(0x1525b4,vector,keyp)
        check('unshuffle_'+str(size),n.read_vector(vector)==unshuffle(data,key))
    # Native envelope acceptance plus damage rejection, using synthetic content.
    import zlib
    payload=bytes(range(51))
    seed=0x12345678
    padding=7
    head=struct.pack('<BBHII',2,0,padding,len(payload),zlib.crc32(payload)&0xffffffff)
    maskp=n.alloc(12)
    n.call(0x15623c,keyp,seed,maskp)
    mask=bytes(n.uc.mem_read(maskp,12))
    envelope=struct.pack('<I',seed)+bytes(a^b for a,b in zip(head,mask))+b'P'*padding+struct.pack('<H',len(payload))+payload
    # libc++ short-string representation: length<<1, inline characters, null.
    key_string=n.alloc(24,bytes([32])+key+b'\x00'*7)
    output=n.vector(b'')
    status=n.call(0x1527d8,n.vector(envelope),key_string,output)
    check('native_envelope_and_crc',status&1==1 and n.read_vector(output)==payload and blocks(envelope,key)[0]==payload)
    with_empty_block=envelope[:16+padding]+b'\x00\x00'+envelope[16+padding:]
    output=n.vector(b'')
    status=n.call(0x1527d8,n.vector(with_empty_block),key_string,output)
    check('native_empty_block_accepted',status&1==1 and n.read_vector(output)==payload and blocks(with_empty_block,key)[0]==payload)
    damaged=bytearray(envelope);damaged[-1]^=1
    check('native_crc_rejection',n.call(0x1527d8,n.vector(damaged),key_string,n.vector(b''))&1==0)
    for tagged in [False,True]:
        data=(native_magic() if tagged else b'')+struct.pack('<Q',0x12345678)+bytes(range(127))
        output=n.vector(b'')
        status=n.call(0x153188,n.vector(data),key_string,output)
        check('inner_decode_'+str(tagged),status&1==1 and n.read_vector(output)==inner_decode(data,key,native_magic()))
    record=dict(sample_sha256=hashlib.sha256(n.data).hexdigest(),
                engine='Unicorn 2.1.4 ARM64 isolated function emulation',
                synthetic_input_only=True,app_executed=False,network_used=False,
                checks=checks,passed=all(x['passed'] for x in checks),
                checked_scripts={name:hashlib.sha256((HERE/name).read_bytes()).hexdigest() for name in ['recover_business.py','verify_native.py']},
                import_shims=n.import_calls,
                limitation='Algorithm equivalence on synthetic cases is not recovery or a real-key end-to-end validation.')
    (HERE/'native-equivalence-check.json').write_text(json.dumps(record,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(record,indent=2))


if __name__=='__main__':
    sys.stdout.reconfigure(encoding='utf-8')
    main()
