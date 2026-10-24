// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00175f90; body: [[00175f90, 0017662f]]

ulong FUN_00175f90(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  uint unaff_w26;
  ulong local_b0;
  undefined1 auStack_a8 [48];
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  local_70 = param_1;
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_70);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f4)])(auStack_a8,uVar4);
  lVar10 = local_78 - 0x30;
  pcVar8 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)];
  iVar9 = -0x21c8b1f7;
LAB_00176084:
  while (iVar6 = iVar9, iVar9 = iVar6, iVar6 < 0x589782d) {
    if (iVar6 < -0x30b57662) {
      if (iVar6 < -0x65a57f7b) {
        if (iVar6 < -0x74a87fa5) {
          if (iVar6 != -0x7fb57a32) {
            iVar7 = -0x7c50d785;
            goto LAB_00176308;
          }
          iVar9 = 0xf1e8743;
          if (local_78 <= local_70) {
            iVar9 = -0x4edbaa3e;
          }
        }
        else {
          iVar9 = 0x36e6c9dd;
          if ((iVar6 != -0x6c20811a) && (iVar9 = iVar6, iVar6 == -0x74a87fa5)) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(local_b0,auStack_a8);
            uVar5 = local_70;
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_a8);
            if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return uVar5;
          }
        }
      }
      else if (iVar6 == -0x65a57f7b) {
        local_70 = local_70 + 0x30;
        iVar9 = 0x56d54aeb;
      }
      else if (iVar6 == -0x4edbaa3e) {
        local_b0 = local_70 - 0x30;
        iVar9 = -0x74a87fa5;
        if (param_1 != local_b0) {
          iVar9 = 0x57cf5c88;
        }
      }
      else {
        iVar7 = -0x3a485844;
LAB_00176308:
        if (iVar6 == iVar7) {
          iVar9 = -0x1fb3b64c;
        }
      }
    }
    else if (iVar6 < -0x1fb3b64c) {
      if (iVar6 == -0x30b57662) {
LAB_0017634c:
        iVar9 = -0x7fb57a32;
      }
      else if (iVar6 == -0x232b99be) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_3,auStack_a8,local_78);
        iVar9 = -0x58a53cc;
        if ((uVar5 & 1) == 0) {
          iVar9 = -0x6c20811a;
        }
      }
      else if (iVar6 == -0x21c8b1f7) {
        uVar5 = (*pcVar8)(param_3,auStack_a8,lVar10);
        bVar2 = (uVar5 & 1) == 0;
        iVar6 = 0x52b8ea4f;
        iVar9 = 0x20582d67;
        goto LAB_00176080;
      }
    }
    else if (iVar6 < -0x58a53cc) {
      if (iVar6 == -0x1fb3b64c) {
        iVar9 = 0x51b66115;
        if (local_78 <= local_70) {
          iVar9 = 0x36e6c9dd;
        }
      }
      else if (iVar6 == -0x124b3cc4) {
        local_70 = local_70 + 0x30;
        iVar9 = 0x6c1a8960;
      }
    }
    else if (iVar6 == -0x58a53cc) {
      local_78 = local_78 - 0x30;
      iVar9 = -0x232b99be;
    }
    else if (iVar6 == 0x171bc2b) {
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                        (param_3,auStack_a8,local_78);
      iVar9 = 0x56428d2d;
      if ((uVar5 & 1) == 0) {
        iVar9 = -0x30b57662;
      }
    }
  }
  if (iVar6 < 0x3da7081f) {
    if (iVar6 < 0x1e3ba913) {
      if (iVar6 == 0x589782d) {
        unaff_w26 = 0;
        local_70 = local_70 + 0x30;
        iVar9 = 0x1bfb930b;
        if (local_78 <= local_70) {
          iVar9 = 0x3da7081f;
        }
      }
      else if (iVar6 == 0xf1e8743) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_70,&local_78);
        iVar9 = -0x65a57f7b;
      }
      else if (iVar6 == 0x1bfb930b) {
        uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_3,auStack_a8,local_70);
        unaff_w26 = uVar3 ^ 1;
        iVar9 = 0x3da7081f;
      }
    }
    else if (iVar6 < 0x20582d67) {
      iVar9 = 0x56428d2d;
      if (iVar6 != 0x1e3ba913) {
        iVar7 = 0x1fd4cef2;
LAB_0017626c:
        iVar9 = iVar6;
        if (iVar6 == iVar7) {
          iVar9 = 0x589782d;
        }
      }
    }
    else {
      iVar9 = -0x124b3cc4;
      if ((iVar6 != 0x20582d67) && (iVar9 = iVar6, iVar6 == 0x36e6c9dd)) goto LAB_0017634c;
    }
    goto LAB_00176084;
  }
  if (iVar6 < 0x56428d2d) {
    if (iVar6 != 0x3da7081f) {
      iVar9 = -0x58a53cc;
      if (iVar6 != 0x51b66115) {
        iVar7 = 0x52b8ea4f;
        goto LAB_0017626c;
      }
      goto LAB_00176084;
    }
    bVar2 = (unaff_w26 & 1) == 0;
    iVar6 = -0x3a485844;
    iVar9 = 0x1fd4cef2;
  }
  else if (iVar6 < 0x57cf5c88) {
    if (iVar6 == 0x56428d2d) {
      local_78 = local_78 - 0x30;
      iVar9 = 0x171bc2b;
      goto LAB_00176084;
    }
    if (iVar6 != 0x56d54aeb) goto LAB_00176084;
    uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                      (param_3,auStack_a8,local_70);
    bVar2 = (uVar5 & 1) == 0;
    iVar6 = -0x65a57f7b;
    iVar9 = 0x1e3ba913;
  }
  else {
    if (iVar6 == 0x57cf5c88) {
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_b0);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(param_1,uVar4);
      iVar9 = -0x74a87fa5;
      goto LAB_00176084;
    }
    if (iVar6 != 0x6c1a8960) goto LAB_00176084;
    uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                      (param_3,auStack_a8,local_70);
    bVar2 = (uVar5 & 1) == 0;
    iVar6 = -0x124b3cc4;
    iVar9 = -0x7c50d785;
  }
LAB_00176080:
  if (bVar2) {
    iVar9 = iVar6;
  }
  goto LAB_00176084;
}


