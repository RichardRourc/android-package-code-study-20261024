// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00166298; body: [[00166298, 001663a3]]

void FUN_00166298(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])();
  iVar1 = 0x33088ed6;
  if (2 < uVar3) {
    iVar1 = -0x29946c2c;
  }
  iVar5 = 0x7877a9ac;
  while( true ) {
    while (0x33088ed5 < iVar5) {
      bVar2 = iVar5 == 0x33088ed6;
      iVar5 = iVar1;
      if (bVar2) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
        iVar5 = 0x2521bd06;
      }
    }
    if (iVar5 != -0x29946c2c) break;
    lVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])(param_2);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa7)])(param_1,param_2,1,lVar4 + -2);
    iVar5 = 0x2521bd06;
  }
  return;
}


