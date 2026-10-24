// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b60e8; body: [[001b60e8, 001b61af]]

void FUN_001b60e8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  while( true ) {
    iVar1 = 0x6ae4172f;
    if (param_2 != lVar5) {
      iVar1 = -0x2e9e50ca;
    }
    iVar2 = 0x2b7ca31b;
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x2b7ca31b);
    if (iVar4 != -0x2e9e50ca) break;
    lVar5 = lVar5 + -0x38;
    uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48b)])(lVar5);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4fc)])(param_1 + 0x10,uVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


