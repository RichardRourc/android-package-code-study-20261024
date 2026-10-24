// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015b400; body: [[0015b400, 0015b643]]

undefined4 FUN_0015b400(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  int unaff_w28;
  
  ppuVar6 = &PTR_FUN_001fda20;
  uVar5 = 0;
  puVar1 = (undefined8 *)
           (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aaa)])(&PTR_DAT_001f33b0);
  puVar2 = (undefined8 *)
           (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aab)])(&PTR_DAT_001f33b0);
  iVar4 = -0x3b75995c;
  do {
    while( true ) {
      while (-0x26df3f21 < iVar4) {
        if (iVar4 < 0x60c5a8a5) {
          if (iVar4 == -0x26df3f20) {
            uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa8)])
                              (param_1,ppuVar6);
            iVar4 = -0x58544c04;
            if ((uVar3 & 1) == 0) {
              iVar4 = -0x583d8056;
            }
          }
          else if (iVar4 == 0x51d41065) {
            puVar1 = puVar1 + 1;
            iVar4 = -0x3b75995c;
          }
          else if (iVar4 == 0x4ff83abc) {
            return uVar5;
          }
        }
        else if (iVar4 == 0x60c5a8a5) {
          unaff_w28 = 2;
          iVar4 = 0x669f2cb6;
        }
        else if (iVar4 == 0x669f2cb6) goto LAB_0015b580;
      }
      if (-0x51c2c839 < iVar4) break;
      if (iVar4 == -0x58544c04) {
        uVar5 = 1;
        unaff_w28 = 1;
        iVar4 = -0x388586d5;
      }
      else if (iVar4 == -0x583d8056) {
        unaff_w28 = 0;
        iVar4 = -0x388586d5;
      }
    }
    if (iVar4 == -0x51c2c838) {
      ppuVar6 = (undefined **)*puVar1;
      iVar4 = -0x583d8056;
      if (ppuVar6 != (undefined **)0x0) {
        iVar4 = -0x26df3f20;
      }
    }
    else if (iVar4 == -0x3b75995c) {
      iVar4 = 0x60c5a8a5;
      if (puVar1 != puVar2) {
        iVar4 = -0x51c2c838;
      }
    }
    else if ((iVar4 == -0x388586d5) && (iVar4 = 0x51d41065, unaff_w28 != 0)) {
LAB_0015b580:
      if (unaff_w28 != 2) {
        return uVar5;
      }
      uVar5 = 0;
      iVar4 = 0x4ff83abc;
    }
  } while( true );
}


