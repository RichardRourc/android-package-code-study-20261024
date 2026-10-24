// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b0340; body: [[001b0340, 001b03ef]]

void FUN_001b0340(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_1;
  iVar1 = 0x296d0a2e;
  if (lVar4 != 0) {
    iVar1 = 0x1f667eed;
  }
  *param_1 = param_2;
  iVar2 = -0x6834b139;
  while( true ) {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == -0x6834b139);
    if (iVar3 != 0x1f667eed) break;
    (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b7bc])(param_1 + 1,lVar4);
    iVar2 = 0x296d0a2e;
  }
  return;
}


