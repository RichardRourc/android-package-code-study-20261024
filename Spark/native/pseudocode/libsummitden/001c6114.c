// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c6114; body: [[001c6114, 001c61e7]]

void FUN_001c6114(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  while( true ) {
    iVar1 = -0x7bf17a41;
    if (param_2 != lVar5) {
      iVar1 = -0x28fcbefb;
    }
    iVar2 = -0x783915ba;
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x783915ba);
    if (iVar4 == -0x7bf17a41) break;
    lVar5 = lVar5 + -0x30;
    uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb6f)])(lVar5);
    (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb02)])(param_1 + 0x10,uVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


