// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00151a9c; body: [[00151a9c, 00151b7b]]

void FUN_00151a9c(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bd2)])();
  iVar1 = 0x594f4289;
  if (*param_1 != 0) {
    iVar1 = -0x363770b8;
  }
  iVar4 = 0xd6b0a81;
  do {
    while (iVar4 == -0x363770b8) {
      lVar5 = param_1[4];
      lVar6 = *param_1;
      uVar3 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bd3)])(param_1);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bd4)])(lVar5,lVar6,uVar3);
      iVar4 = 0x594f4289;
    }
    bVar2 = iVar4 == 0xd6b0a81;
    iVar4 = iVar1;
  } while (bVar2);
  return;
}


