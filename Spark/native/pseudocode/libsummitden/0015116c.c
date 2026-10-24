// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015116c; body: [[0015116c, 00151273]]

void FUN_0015116c(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  iVar1 = -0x1ebdc061;
  if (*param_1 != 0) {
    iVar1 = 0x56393c26;
  }
  iVar2 = -0x4fb5a506;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x4fb5a506);
    if (iVar4 != 0x56393c26) break;
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b52)])(param_1);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be7)])(param_1);
    lVar5 = *param_1;
    uVar3 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be2)])(param_1);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bed)])(param_1 + 2,lVar5,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar2 = -0x1ebdc061;
  }
  return;
}


