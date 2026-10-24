// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001692d4; body: [[001692d4, 001693b7]]

void FUN_001692d4(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b9b)])();
  iVar1 = 0x6e171624;
  if (*param_1 != 0) {
    iVar1 = 0x3e0d85cf;
  }
  iVar2 = -0x2410d503;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x2410d503);
    if (iVar4 != 0x3e0d85cf) break;
    lVar5 = param_1[4];
    lVar6 = *param_1;
    uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b98)])(param_1);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b99)])(lVar5,lVar6,uVar3);
    iVar2 = 0x6e171624;
  }
  return;
}


