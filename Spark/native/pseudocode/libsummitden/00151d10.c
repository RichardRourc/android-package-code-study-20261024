// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00151d10; body: [[00151d10, 00151dc7]]

undefined8 FUN_00151d10(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  uVar6 = 0x1fc000;
  uVar2 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bd5)])();
  iVar3 = 0x35c8b55e;
  if (param_2 <= uVar2) {
    iVar3 = -0x24081685;
  }
  iVar1 = 0x2a4befa2;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
  } while (iVar4 == 0x2a4befa2);
  if (iVar4 != -0x24081685) {
    auVar8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b79)])();
    lVar5 = auVar8._0_8_ * 0x18;
    pcVar7 = (code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7b)];
    do {
      uVar2 = (*pcVar7)(auVar8._8_8_);
      iVar3 = 0x19e7a0a4;
      if ((uVar2 & 1) == 0) {
        iVar3 = 0x68d627a1;
      }
    } while (iVar3 == -0x2f768193);
    while (iVar3 != -0xf8a4305) {
      if (iVar3 == 0x19e7a0a4) {
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7c)])(lVar5,auVar8._8_8_)
        ;
      }
      else {
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7d)])(lVar5);
      }
      iVar3 = -0xf8a4305;
    }
    return uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00151db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bd8)])(param_2,8);
  return uVar6;
}


