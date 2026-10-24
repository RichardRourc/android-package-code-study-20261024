// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ce1b0; body: [[001ce1b0, 001ce567]]

byte * FUN_001ce1b0(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (999999 < param_2) {
    if (99999999 < param_2) {
      uVar1 = param_2 % 100000000;
      if (param_2 < 1000000000) {
        *param_1 = (byte)(param_2 / 100000000) | 0x30;
        uVar2 = (uVar1 % 1000000) % 10000;
        *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&DAT_0011f1a0 + ((ulong)uVar1 / 1000000) * 2)
        ;
        *(undefined2 *)(param_1 + 3) =
             *(undefined2 *)(&DAT_0011f1a0 + ((ulong)(uVar1 % 1000000) / 10000) * 2);
        *(undefined2 *)(param_1 + 5) = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(uVar2 / 100) * 2);
        *(undefined2 *)(param_1 + 7) = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(uVar2 % 100) * 2);
        return param_1 + 9;
      }
      uVar2 = (uVar1 % 1000000) % 10000;
      *(undefined2 *)param_1 = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(param_2 / 100000000) * 2);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&DAT_0011f1a0 + ((ulong)uVar1 / 1000000) * 2);
      *(undefined2 *)(param_1 + 4) =
           *(undefined2 *)(&DAT_0011f1a0 + ((ulong)(uVar1 % 1000000) / 10000) * 2);
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(uVar2 / 100) * 2);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(uVar2 % 100) * 2);
      return param_1 + 10;
    }
    uVar1 = param_2 % 1000000;
    if (param_2 < 10000000) {
      *param_1 = (char)(param_2 / 1000000) + 0x30;
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&DAT_0011f1a0 + ((ulong)uVar1 / 10000) * 2);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)(&DAT_0011f1a0 + (ulong)((uVar1 % 10000) / 100) * 2);
      *(undefined2 *)(param_1 + 5) =
           *(undefined2 *)(&DAT_0011f1a0 + (ulong)((uVar1 % 10000) % 100) * 2);
      return param_1 + 7;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(param_2 / 1000000) * 2);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&DAT_0011f1a0 + ((ulong)uVar1 / 10000) * 2);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)(&DAT_0011f1a0 + (ulong)((uVar1 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 6) =
         *(undefined2 *)(&DAT_0011f1a0 + (ulong)((uVar1 % 10000) % 100) * 2);
    return param_1 + 8;
  }
  if (0x270 < param_2 >> 4) {
    if (param_2 >> 5 < 0xc35) {
      *param_1 = (byte)(param_2 / 10000) | 0x30;
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)(&DAT_0011f1a0 + (ulong)((param_2 % 10000) / 100) * 2);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)(&DAT_0011f1a0 + (ulong)((param_2 % 10000) % 100) * 2);
      return param_1 + 5;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(param_2 / 10000) * 2);
    *(undefined2 *)(param_1 + 2) =
         *(undefined2 *)(&DAT_0011f1a0 + (ulong)((param_2 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)(&DAT_0011f1a0 + (ulong)((param_2 % 10000) % 100) * 2);
    return param_1 + 6;
  }
  if (param_2 < 100) {
    if (param_2 < 10) {
      *param_1 = (byte)param_2 | 0x30;
      return param_1 + 1;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&DAT_0011f1a0 + (ulong)param_2 * 2);
    return param_1 + 2;
  }
  uVar1 = (param_2 >> 2 & 0x3fff) / 0x19;
  uVar3 = (ulong)(param_2 + uVar1 * -100);
  if (param_2 < 1000) {
    *param_1 = (byte)uVar1 | 0x30;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&DAT_0011f1a0 + (uVar3 & 0xffff) * 2);
    return param_1 + 3;
  }
  *(undefined2 *)param_1 = *(undefined2 *)(&DAT_0011f1a0 + (ulong)uVar1 * 2);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&DAT_0011f1a0 + (uVar3 & 0xffff) * 2);
  return param_1 + 4;
}


