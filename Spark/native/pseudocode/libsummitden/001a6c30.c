// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a6c30; body: [[001a6c30, 001a6df3]]

undefined ** FUN_001a6c30(undefined8 param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  ppuVar6 = &PTR_FUN_00202000;
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b496)])();
  iVar4 = -0x4b9aac54;
  if (param_2 <= uVar3) {
    iVar4 = -0x7a3dea4a;
  }
  iVar2 = -0x7dd3a2d4;
  do {
    iVar5 = iVar2;
    iVar2 = iVar4;
  } while (iVar5 == -0x7dd3a2d4);
  if (iVar5 != -0x7a3dea4a) {
    auVar8 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4a1)])();
    lVar1 = auVar8._0_8_ * 0x38;
    pcVar7 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b54a)];
    do {
      uVar3 = (*pcVar7)(auVar8._8_8_);
      iVar4 = 0x5d7f0aac;
      if ((uVar3 & 1) == 0) {
        iVar4 = -0x216546b0;
      }
    } while (iVar4 == 0x6663d178);
    do {
      if (iVar4 == -0x216546b0) {
        ppuVar6 = (undefined **)
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4a4)])(lVar1);
      }
      else {
        if (iVar4 == -0xa6fe1d3) {
          return ppuVar6;
        }
        ppuVar6 = (undefined **)
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4a7)])
                            (lVar1,auVar8._8_8_);
      }
      iVar4 = -0xa6fe1d3;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x001a6cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar6 = (undefined **)
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b487)])(param_2,8);
  return ppuVar6;
}


