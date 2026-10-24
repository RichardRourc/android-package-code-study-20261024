// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00155fb8; body: [[00155fb8, 0015607f]]

void FUN_00155fb8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  while( true ) {
    iVar1 = 0x3ff18565;
    if (param_2 != lVar5) {
      iVar1 = -0x28a6d960;
    }
    iVar2 = -0xdb6da9a;
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0xdb6da9a);
    if (iVar4 != -0x28a6d960) break;
    lVar5 = lVar5 + -4;
    uVar3 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a5a)])(lVar5);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ab2)])(param_1 + 0x10,uVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


