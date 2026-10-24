// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00178744; body: [[00178744, 00178887]]

void FUN_00178744(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (param_2 - param_1 >> 4) * -0x5555555555555555;
  lVar5 = param_2;
  while( true ) {
    iVar1 = 0x1a691139;
    if (lVar4 + -1 == 0 || lVar4 < 1) {
      iVar1 = -0x7479a9dc;
    }
    iVar3 = -0x77e69cbe;
    do {
      bVar2 = iVar3 != -0x77e69cbe;
      iVar3 = iVar1;
      if (bVar2) {
        iVar3 = -0x4e4552da;
      }
    } while (iVar3 < -0x4e4552da);
    while (iVar3 == 0x1a691139) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528b2)])(param_1,lVar5,param_3,lVar4);
      iVar3 = 0x72e6b1b2;
    }
    if (iVar3 == -0x4e4552da) break;
    lVar5 = lVar5 + -0x30;
    lVar4 = lVar4 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00178884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528dd)])(param_1,param_2,param_3);
  return;
}


