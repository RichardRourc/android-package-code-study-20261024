// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00169554; body: [[00169554, 0016960b]]

undefined8 FUN_00169554(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  uVar6 = 0x1fe000;
  uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b9e)])();
  iVar3 = -0x1dd02033;
  if (param_2 <= uVar2) {
    iVar3 = 0x5e9f8a75;
  }
  iVar1 = 0x64c31364;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
  } while (iVar4 == 0x64c31364);
  if (iVar4 != 0x5e9f8a75) {
    auVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5e)])();
    lVar5 = auVar8._0_8_ * 0x18;
    pcVar7 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
    do {
      uVar2 = (*pcVar7)(auVar8._8_8_);
      iVar3 = -0x378c72d9;
      if ((uVar2 & 1) == 0) {
        iVar3 = -0xb336a2f;
      }
    } while (iVar3 == 0x62f52700);
    while (iVar3 != -0x4f900f5f) {
      if (iVar3 == -0x378c72d9) {
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5d)])(lVar5,auVar8._8_8_)
        ;
      }
      else {
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a52)])(lVar5);
      }
      iVar3 = -0x4f900f5f;
    }
    return uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x001695f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b92)])(param_2,8);
  return uVar6;
}


