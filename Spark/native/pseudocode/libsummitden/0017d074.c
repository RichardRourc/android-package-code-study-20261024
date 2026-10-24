// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017d074; body: [[0017d074, 0017d0fb]]

uint FUN_0017d074(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])
                    ((param_1 ^ 0x7d3568eb) + 0x9958143a,0xd);
  iVar2 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])(uVar1 ^ 0x9db4dab1,5);
  return iVar2 + uVar1 ^ (iVar2 + uVar1) * 0x20;
}


