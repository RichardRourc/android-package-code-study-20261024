// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c3898; body: [[001c3898, 001c3d17]]

undefined ** FUN_001c3898(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  undefined **ppuVar9;
  
  ppuVar3 = (undefined **)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb37)])();
  ppuVar4 = (undefined **)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb36)])(param_1);
  iVar1 = -0x383111b9;
  if (ppuVar3 != (undefined **)0x0) {
    iVar1 = 0x65c53247;
  }
  ppuVar5 = &PTR_FUN_00203130;
  iVar2 = 0x3d28a79d;
LAB_001c3970:
  do {
    while (iVar8 = iVar2, ppuVar9 = ppuVar3, ppuVar3 = ppuVar9, iVar2 = iVar8, 0x31b2a05c < iVar8) {
      if (iVar8 < 0x6ebbf03c) {
        if (iVar8 < 0x46ea4395) {
          if (iVar8 == 0x320be090) {
            ppuVar3 = (undefined **)*ppuVar9;
            ppuVar4 = ppuVar9;
            iVar2 = 0x70682ff3;
          }
          else {
            iVar2 = iVar1;
            if ((iVar8 != 0x3d28a79d) && (iVar2 = iVar8, iVar8 == 0x31b2a05d)) {
              return ppuVar5;
            }
          }
        }
        else if (iVar8 == 0x46ea4395) {
          ppuVar4 = ppuVar9 + 1;
          ppuVar3 = (undefined **)*ppuVar4;
          iVar2 = -0x45bfaf26;
        }
        else if (iVar8 == 0x65c53247) goto LAB_001c3b40;
      }
      else if (iVar8 < 0x70682ff3) {
        if (iVar8 == 0x6ebbf03c) {
LAB_001c3b40:
          iVar2 = 0x6fcfdf8d;
        }
        else if (iVar8 == 0x6fcfdf8d) {
          iVar2 = -0x4f4a33ee;
        }
      }
      else {
        if (iVar8 == 0x70682ff3) goto LAB_001c3964;
        if (iVar8 == 0x75e4f7e5) {
          iVar2 = -0x4f5691e5;
          if (ppuVar9[1] != (undefined *)0x0) {
            iVar2 = 0x46ea4395;
          }
        }
      }
    }
    if (-0x4f4a33ef < iVar8) {
      if (iVar8 < -0x446031b8) {
        if (iVar8 == -0x4f4a33ee) {
          uVar6 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb35)])(param_1);
          uVar7 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb34)])
                            (uVar6,param_3,ppuVar9 + 4);
          iVar2 = -0xa72d1de;
          if ((uVar7 & 1) == 0) {
            iVar2 = -0x59d82f75;
          }
        }
        else if (iVar8 == -0x45bfaf26) {
          iVar2 = -0x6be42886;
        }
      }
      else if (iVar8 == -0x446031b8) {
        *param_2 = (long)ppuVar9;
        ppuVar5 = ppuVar4;
        iVar2 = 0x31b2a05d;
      }
      else if (iVar8 == -0x383111b9) {
        ppuVar5 = (undefined **)
                  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2e)])(param_1);
        *param_2 = (long)ppuVar5;
        iVar2 = 0x31b2a05d;
      }
      else if (iVar8 == -0xa72d1de) {
        iVar2 = -0x64dd19df;
        if (*ppuVar9 != (undefined *)0x0) {
          iVar2 = 0x320be090;
        }
      }
      goto LAB_001c3970;
    }
    if (iVar8 < -0x59d82f75) {
      if (iVar8 == -0x6be42886) {
LAB_001c3964:
        iVar2 = 0x6ebbf03c;
      }
      else if (iVar8 == -0x64dd19df) {
        *param_2 = (long)ppuVar9;
        ppuVar5 = ppuVar9;
        iVar2 = 0x31b2a05d;
      }
    }
    else if (iVar8 == -0x59d82f75) {
      uVar6 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb35)])(param_1);
      uVar7 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb34)])
                        (uVar6,ppuVar9 + 4,param_3);
      iVar2 = 0x75e4f7e5;
      if ((uVar7 & 1) == 0) {
        iVar2 = -0x446031b8;
      }
    }
    else if (iVar8 == -0x4f5691e5) {
      *param_2 = (long)ppuVar9;
      ppuVar5 = ppuVar9 + 1;
      iVar2 = 0x31b2a05d;
    }
  } while( true );
}


