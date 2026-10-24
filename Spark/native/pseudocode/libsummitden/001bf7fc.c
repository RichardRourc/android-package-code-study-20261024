// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bf7fc; body: [[001bf7fc, 001bfe6f]]

uint FUN_001bf7fc(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  code *pcVar6;
  int unaff_w19;
  long unaff_x20;
  int iVar7;
  uint unaff_w27;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb89)])(auStack_80);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb88)])(&LAB_001c2cf8,auStack_80);
  pcVar6 = (code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8f)];
  iVar5 = -0x7222d72b;
LAB_001bf8fc:
  while (iVar7 = 0x26d31783, iVar5 < -0x2fbe9986) {
    if (iVar5 < -0x54685cac) {
      if (iVar5 < -0x7140d4cb) {
        if (iVar5 == -0x75f2cb7c) {
          unaff_w19 = 0;
          iVar5 = -0x7140d4cb;
        }
        else {
          if (iVar5 == -0x7222d72b) {
            uVar4 = (*pcVar6)(auStack_80);
            iVar7 = -0x1754f3c3;
            iVar5 = 0x20db7cb3;
            goto LAB_001bfdf0;
          }
          if (iVar5 == -0x7d0dc8bb) {
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb9a)])(auStack_80);
            if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return unaff_w27 & 1;
          }
        }
      }
      else if (iVar5 == -0x7140d4cb) {
        if (unaff_w19 == 3) goto LAB_001bfc58;
        if (unaff_w19 != 0) goto LAB_001bfc7c;
LAB_001bfc4c:
        iVar5 = 0x1cc9bcae;
      }
      else if (iVar5 == -0x6d505985) {
LAB_001bfb88:
        unaff_w19 = 3;
        iVar5 = -0x7140d4cb;
      }
      else if (iVar5 == -0x62284669) {
        uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcd)])(unaff_x20 + 0x18);
        iVar5 = iVar7;
        if ((uVar4 & 1) == 0) {
          iVar5 = -0x35fa3bb5;
        }
      }
    }
    else if (iVar5 < -0x353d967f) {
      if (iVar5 == -0x54685cac) {
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb87)])
                  (auStack_e0,unaff_x20 + 0x18);
        local_c8 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb86)])
                             (auStack_80,auStack_e0);
        local_e8 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb85)])(auStack_80);
        uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb84)])
                          (&local_c8,&local_e8);
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_e0);
        iVar7 = -0x75f2cb7c;
        iVar5 = -0x244a2ad9;
LAB_001bfdf0:
        if ((uVar4 & 1) == 0) {
          iVar5 = iVar7;
        }
      }
      else if (iVar5 == -0x4f3851f9) {
        unaff_x20 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb81)])(&local_b8);
        uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb80)])();
        iVar5 = -0x62284669;
        if ((uVar4 & 1) == 0) {
          iVar5 = iVar7;
        }
      }
      else if (iVar5 == -0x35fa3bb5) {
        pcVar2 = (char *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8a)])
                                   (unaff_x20 + 0x18,0);
        iVar5 = 0x7f3c6c4e;
        if (*pcVar2 != '/') {
          iVar5 = iVar7;
        }
      }
    }
    else if (iVar5 == -0x353d967f) {
LAB_001bfcb8:
      unaff_w27 = 0;
      unaff_w19 = 1;
      iVar5 = 0x73993055;
    }
    else if (iVar5 == -0x3450fcad) {
      uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb82)])(&local_b8,&local_c0);
      iVar5 = -0x4f3851f9;
      if ((uVar4 & 1) == 0) {
        iVar5 = -0x2fbe9986;
      }
    }
    else if (iVar5 == -0x30ed1481) {
      lVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcc)])
                        (unaff_x20 + 0x18,auStack_98,0);
      iVar5 = -0x54685cac;
      if (lVar3 != -1) {
        iVar5 = -0x278c7230;
      }
    }
  }
  if (iVar5 < 0x20db7cb3) {
    if (iVar5 < -0x244a2ad9) {
      if (iVar5 == -0x2fbe9986) {
        unaff_w19 = 2;
        iVar5 = 0x2814ccb9;
        goto LAB_001bf8fc;
      }
      if (iVar5 != -0x278c7230) goto LAB_001bf8fc;
    }
    else if (iVar5 != -0x244a2ad9) {
      if (iVar5 == -0x1754f3c3) {
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8e)])(auStack_98,auStack_e0);
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8d)])(auStack_b0,auStack_e0);
        local_b8 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8c)])(param_1);
        local_c0 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb83)])(param_1);
        iVar5 = -0x3450fcad;
      }
      else if (iVar5 == 0x1cc9bcae) {
LAB_001bfc58:
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb9b)])(&local_b8);
        iVar5 = -0x3450fcad;
      }
      goto LAB_001bf8fc;
    }
    unaff_w27 = 1;
    unaff_w19 = 1;
    iVar5 = -0x7140d4cb;
    goto LAB_001bf8fc;
  }
  if (iVar5 < 0x375afd20) {
    if (iVar5 == 0x20db7cb3) {
      unaff_w27 = 0;
      unaff_w19 = 1;
      iVar5 = -0x7d0dc8bb;
      goto LAB_001bf8fc;
    }
    if (iVar5 == 0x26d31783) goto LAB_001bfb88;
    if (iVar5 != 0x2814ccb9) goto LAB_001bf8fc;
LAB_001bfc7c:
    if (unaff_w19 == 2) goto LAB_001bfcb8;
  }
  else {
    if (iVar5 == 0x375afd20) goto LAB_001bfc4c;
    if (iVar5 != 0x73993055) {
      if (iVar5 == 0x7f3c6c4e) {
        lVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcc)])
                          (unaff_x20 + 0x18,auStack_b0,0);
        iVar5 = -0x6d505985;
        if (lVar3 != -1) {
          iVar5 = -0x30ed1481;
        }
      }
      goto LAB_001bf8fc;
    }
  }
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_b0);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_98);
  iVar5 = -0x7d0dc8bb;
  goto LAB_001bf8fc;
}


