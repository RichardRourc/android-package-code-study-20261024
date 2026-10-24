// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017ce24; body: [[0017ce24, 0017ceab]]

uint FUN_0017ce24(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])
                    ((param_1 ^ 0xfa3ea211) + 0xbbabd7b1,6);
  iVar2 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])(uVar1 ^ 0x54013a15,10);
  return iVar2 + uVar1 ^ (iVar2 + uVar1) * 0x10;
}


