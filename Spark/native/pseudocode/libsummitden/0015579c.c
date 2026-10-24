// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015579c; body: [[0015579c, 0015587f]]

void FUN_0015579c(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8aa7)])();
  iVar1 = -0x71c7fba9;
  if (*param_1 != 0) {
    iVar1 = -0x104e1113;
  }
  iVar2 = -0x7d905deb;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x7d905deb);
    if (iVar4 != -0x104e1113) break;
    lVar5 = param_1[4];
    lVar6 = *param_1;
    uVar3 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8aa8)])(param_1);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8aa9)])(lVar5,lVar6,uVar3);
    iVar2 = -0x71c7fba9;
  }
  return;
}


