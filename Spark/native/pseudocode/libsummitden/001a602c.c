// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a602c; body: [[001a602c, 001a6107]]

ulong FUN_001a602c(uint param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4bb)])(0x41,param_1,0x5a);
  iVar1 = 0x98c66bd;
  if ((int)uVar3 != 0) {
    iVar1 = -0x74eb3959;
  }
  iVar2 = -0x423449b3;
  while( true ) {
    while( true ) {
      do {
        iVar4 = iVar2;
        iVar2 = iVar1;
      } while (iVar4 == -0x423449b3);
      if (iVar4 != -0x74eb3959) break;
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4b8)])(param_1);
      iVar2 = 0x13b40239;
    }
    if (iVar4 != 0x98c66bd) break;
    uVar3 = (ulong)param_1;
    iVar2 = 0x13b40239;
  }
  return uVar3;
}


