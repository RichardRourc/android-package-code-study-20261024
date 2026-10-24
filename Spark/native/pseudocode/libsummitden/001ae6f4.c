// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ae6f4; body: [[001ae6f4, 001aeacb]]

ulong FUN_001ae6f4(undefined8 *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long unaff_x22;
  ulong unaff_x23;
  ulong uVar6;
  
  iVar1 = -0x2fe9cf71;
  if (param_2 != 0) {
    iVar1 = -0x6bbf04b8;
  }
  uVar3 = param_2;
  iVar4 = -0x842c795;
LAB_001ae77c:
  do {
    while( true ) {
      while (iVar5 = iVar4, uVar6 = uVar3 & 0xffffffff, uVar3 = uVar6, iVar5 < 0x374a0362) {
        if (iVar5 < -0x842c795) {
          if (iVar5 < -0x2fe9cf71) {
            if (iVar5 == -0x6bbf04b8) {
              unaff_x22 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b535)])
                                    (*(undefined8 *)*param_1,*(undefined8 *)param_1[1],param_2);
              cVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53c)])
                                (*(undefined8 *)*param_1);
              iVar4 = 0x3ca1f281;
              if (cVar2 != '\0') {
                iVar4 = 0x70c3c31b;
              }
            }
            else {
              iVar4 = iVar5;
              if (iVar5 == -0x7c7f3925) {
                return uVar6;
              }
            }
          }
          else {
            uVar3 = (ulong)param_3;
            iVar4 = -0x7c7f3925;
            if ((iVar5 != -0x2fe9cf71) && (uVar3 = uVar6, iVar4 = iVar5, iVar5 == -0x2574c859)) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b531)])
                        (*(undefined8 *)*param_1,unaff_x22);
              uVar3 = unaff_x23 & 0xffffffff;
              iVar4 = 0x29a3946;
            }
          }
        }
        else {
          iVar4 = iVar1;
          if (iVar5 != -0x842c795) {
            if (iVar5 == -0x647107f) {
              uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b530)])
                                (*(undefined8 *)*param_1,*(undefined8 *)param_1[2],
                                 *(undefined8 *)param_1[3],unaff_x22,param_3);
              unaff_x23 = uVar6 & 0xffffffff;
              cVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53c)])
                                (*(undefined8 *)*param_1);
              iVar4 = -0x2574c859;
              if (cVar2 != '\0') {
                iVar4 = 0x46e39fb3;
              }
            }
            else {
              iVar4 = iVar5;
              if (iVar5 == 0x29a3946) {
                iVar4 = 0x4987b1ee;
              }
            }
          }
        }
      }
      if (iVar5 < 0x46e39fb3) goto code_r0x001ae80c;
      if (iVar5 != 0x46e39fb3) break;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53b)])(*(undefined8 *)*param_1);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b531)])
                (*(undefined8 *)*param_1,unaff_x22);
      uVar3 = (ulong)param_3;
      iVar4 = 0x29a3946;
    }
    iVar4 = -0x7c7f3925;
  } while ((iVar5 == 0x4987b1ee) || (iVar4 = iVar5, iVar5 != 0x70c3c31b));
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53b)])(*(undefined8 *)*param_1);
  iVar4 = 0x374a0362;
  iVar5 = 0x419f74ff;
  goto LAB_001aea84;
code_r0x001ae80c:
  uVar3 = (ulong)param_3;
  iVar4 = 0x4987b1ee;
  if (iVar5 != 0x374a0362) {
    if (iVar5 == 0x3ca1f281) {
      iVar4 = 0x70c3c31b;
      iVar5 = -0x647107f;
LAB_001aea84:
      uVar3 = uVar6;
      if (unaff_x22 != 0) {
        iVar4 = iVar5;
      }
    }
    else {
      uVar3 = uVar6;
      iVar4 = iVar5;
      if (iVar5 == 0x419f74ff) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b531)])
                  (*(undefined8 *)*param_1,unaff_x22);
        iVar4 = 0x374a0362;
      }
    }
  }
  goto LAB_001ae77c;
}


