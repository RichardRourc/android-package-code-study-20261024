// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017cf90; body: [[0017cf90, 0017d017]]

uint FUN_0017cf90(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])
                    ((param_1 ^ 0x6b07692f) + 0xe498e736,9);
  iVar2 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])(uVar1 ^ 0x90ae047,0x11);
  return iVar2 + uVar1 ^ (iVar2 + uVar1) * 0x80;
}


