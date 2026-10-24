// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a9ac4; body: [[001a9ac4, 001a9c83]]

undefined ** FUN_001a9ac4(undefined8 param_1,ulong param_2)

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
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4c3)])();
  iVar3 = 0x3d8e430f;
  if (param_2 <= uVar2) {
    iVar3 = 0x1c237366;
  }
  iVar1 = -0x4e980211;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
  } while (iVar4 == -0x4e980211);
  if (iVar4 != 0x1c237366) {
    auVar8 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4a1)])();
    pcVar7 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b54a)];
    lVar5 = auVar8._0_8_ << 5;
    do {
      uVar2 = (*pcVar7)(auVar8._8_8_);
      iVar3 = -0x4655dd17;
      if ((uVar2 & 1) == 0) {
        iVar3 = 0x4eb4089e;
      }
    } while (iVar3 == 0x7aac910c);
    do {
      if (iVar3 == -0x4655dd17) {
        ppuVar6 = (undefined **)
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4a7)])
                            (lVar5,auVar8._8_8_);
      }
      else {
        if (iVar3 == -0x2d23a1aa) {
          return ppuVar6;
        }
        ppuVar6 = (undefined **)
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4a4)])(lVar5);
      }
      iVar3 = -0x2d23a1aa;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x001a9b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar6 = (undefined **)
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4c7)])(param_2,8);
  return ppuVar6;
}


