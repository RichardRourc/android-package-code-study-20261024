// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017ceac; body: [[0017ceac, 0017cf33]]

uint FUN_0017ceac(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])
                    ((param_1 ^ 0x762da297) + 0x57747e28,0xe);
  iVar2 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])(uVar1 ^ 0x157916d0,0x10);
  return iVar2 + uVar1 ^ (iVar2 + uVar1) * 0x20;
}


