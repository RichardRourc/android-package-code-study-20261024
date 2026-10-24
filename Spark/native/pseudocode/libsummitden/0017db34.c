// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017db34; body: [[0017db34, 0017e03b]]

uint FUN_0017db34(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  byte unaff_w21;
  int unaff_w22;
  uint unaff_w24;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar8 = (code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e1)];
  iVar7 = 0x557de90c;
LAB_0017dbd8:
  while( true ) {
    while (iVar7 < 0x1b7f59d2) {
      if (iVar7 < 0x1e1bd1) {
        if (iVar7 < -0x20c5c974) {
          if (iVar7 == -0x58bb67f6) {
            (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                      (&DAT_001fee51,5,&DAT_00204444,&DAT_001fee51);
            unaff_w24 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ea)])
                                  (auStack_80,&DAT_001fee51);
            iVar7 = -0x20c5c974;
          }
          else if (iVar7 == -0x3303aa55) {
            if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return local_94 & 1;
          }
        }
        else if (iVar7 == -0x20c5c974) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_80);
          unaff_w22 = 1;
          iVar7 = -0x3303aa55;
          local_94 = unaff_w24;
        }
        else if (iVar7 == -0x1f37680d) {
          unaff_w22 = 3;
          iVar7 = 0x7bf09b74;
        }
      }
      else if (iVar7 < 0x7b8eadf) {
        if (iVar7 == 0x1e1bd1) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                    (&DAT_001fee4e,3,&DAT_00204440,&DAT_001fee4e);
          uVar5 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ea)])
                            (auStack_80,&DAT_001fee4e);
          unaff_w24 = 1;
          bVar2 = (uVar5 & 1) == 0;
          iVar7 = -0x20c5c974;
          iVar9 = -0x58bb67f6;
          goto LAB_0017dbd4;
        }
        if (iVar7 == 0x175b768) {
          uVar5 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ec)])
                            (&local_88,&local_90);
          iVar7 = 0x6c066d4d;
          if ((uVar5 & 1) == 0) {
            iVar7 = 0x2ebff97d;
          }
        }
      }
      else if (iVar7 == 0x7b8eadf) {
        local_94 = 1;
        iVar7 = -0x3303aa55;
      }
      else if (iVar7 == 0x1361dca2) {
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fd)])(auStack_80);
        uVar4 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e0)])(param_1);
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e3)])(auStack_80,uVar4);
        local_88 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e2)])(param_1);
        local_90 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ed)])(param_1);
        iVar7 = 0x175b768;
      }
    }
    if (0x557de90b < iVar7) break;
    if (iVar7 < 0x2ebff97d) {
      if (iVar7 == 0x1b7f59d2) {
        uVar5 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e1)])(auStack_80);
        unaff_w24 = 1;
        bVar2 = (uVar5 & 1) == 0;
        iVar7 = -0x20c5c974;
        iVar9 = 0x1e1bd1;
LAB_0017dbd4:
        if (bVar2) {
          iVar7 = iVar9;
        }
      }
      else if (iVar7 == 0x2900c1ba) {
        uVar3 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ee)])(unaff_w21);
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e9)])(auStack_80,uVar3);
        unaff_w22 = 0;
        iVar7 = 0x7bf09b74;
      }
    }
    else if (iVar7 == 0x2ebff97d) {
      unaff_w22 = 2;
      iVar7 = 0x1b7f59d2;
    }
    else if (iVar7 == 0x3e42bdb1) {
LAB_0017dd80:
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e8)])(&local_88);
      iVar7 = 0x175b768;
    }
  }
  if (iVar7 < 0x6c066d4d) {
    if (iVar7 == 0x557de90c) {
      uVar5 = (*pcVar8)(param_1);
      bVar2 = (uVar5 & 1) == 0;
      iVar7 = 0x7b8eadf;
      iVar9 = 0x1361dca2;
      goto LAB_0017dbd4;
    }
    if (iVar7 != 0x6a548c73) goto LAB_0017dbd8;
  }
  else {
    if (iVar7 == 0x6c066d4d) {
      pbVar6 = (byte *)(*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ef)])(&local_88);
      unaff_w21 = *pbVar6;
      iVar7 = -0x1f37680d;
      if (0x20 < unaff_w21) {
        iVar7 = 0x2900c1ba;
      }
      goto LAB_0017dbd8;
    }
    if (iVar7 != 0x7bf09b74) goto LAB_0017dbd8;
    if (unaff_w22 != 0) goto LAB_0017dd80;
  }
  iVar7 = 0x3e42bdb1;
  goto LAB_0017dbd8;
}


