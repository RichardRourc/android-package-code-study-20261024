// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017d0fc; body: [[0017d0fc, 0017d183]]

uint FUN_0017d0fc(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])
                    ((param_1 ^ 0x410ee0ad) + 0xf5dce0c2,0xb);
  iVar2 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c36)])(uVar1 ^ 0x839840d4,0x11);
  return iVar2 + uVar1 ^ (iVar2 + uVar1) * 0x10;
}


