// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bbb20; body: [[001bbb20, 001bbbd7]]

undefined ** FUN_001bbb20(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  ppuVar6 = &PTR_FUN_00202000;
  uVar2 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab06)])();
  iVar3 = -0x417de16;
  if (param_2 <= uVar2) {
    iVar3 = 0x2bfc5365;
  }
  iVar1 = 0x24925c0f;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
  } while (iVar4 == 0x24925c0f);
  if (iVar4 != 0x2bfc5365) {
    auVar8 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caab8)])();
    lVar5 = auVar8._0_8_ * 0x30;
    pcVar7 = (code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5e)];
    do {
      uVar2 = (*pcVar7)(auVar8._8_8_);
      iVar3 = 0x38ba84fd;
      if ((uVar2 & 1) == 0) {
        iVar3 = 0x4eff8d6e;
      }
    } while (iVar3 == -0x65d338ac);
    while (iVar3 != -0x7f578f79) {
      if (iVar3 == 0x38ba84fd) {
        ppuVar6 = (undefined **)
                  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caabe)])
                            (lVar5,auVar8._8_8_);
      }
      else {
        ppuVar6 = (undefined **)
                  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caabd)])(lVar5);
      }
      iVar3 = -0x7f578f79;
    }
    return ppuVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x001bbbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar6 = (undefined **)
            (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab1b)])(param_2,8);
  return ppuVar6;
}


