// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c201c; body: [[001c201c, 001c21d7]]

undefined ** FUN_001c201c(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  ppuVar6 = &PTR_FUN_00203000;
  uVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb77)])();
  iVar3 = 0x23393c84;
  if (param_2 <= uVar2) {
    iVar3 = 0x3d032ab6;
  }
  iVar1 = -0x3c9a11fd;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
  } while (iVar4 == -0x3c9a11fd);
  if (iVar4 != 0x3d032ab6) {
    auVar8 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb5b)])();
    pcVar7 = (code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb59)];
    lVar5 = auVar8._0_8_ * 0x30;
    do {
      uVar2 = (*pcVar7)(auVar8._8_8_);
      iVar3 = -0x1a273f15;
      if ((uVar2 & 1) == 0) {
        iVar3 = 0x3cc95742;
      }
    } while (iVar3 == 0x2b959f2b);
    do {
      if (iVar3 == -0x1a273f15) {
        ppuVar6 = (undefined **)
                  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb58)])
                            (lVar5,auVar8._8_8_);
      }
      else {
        if (iVar3 != 0x3cc95742) {
          return ppuVar6;
        }
        ppuVar6 = (undefined **)
                  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb5f)])(lVar5);
      }
      iVar3 = 0x50c75b1b;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x001c20bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar6 = (undefined **)
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb09)])(param_2,8);
  return ppuVar6;
}


