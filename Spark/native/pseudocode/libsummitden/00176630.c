// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00176630; body: [[00176630, 00176e07]]

undefined1  [16] FUN_00176630(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  long lVar11;
  uint unaff_w20;
  undefined1 auVar12 [16];
  ulong local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined1 local_ac [4];
  undefined1 auStack_a8 [48];
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_2;
  local_70 = param_1;
  uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_70);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f4)])(auStack_a8,uVar5);
  lVar11 = local_78 - 0x30;
  pcVar9 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)];
  iVar10 = 0x209214db;
LAB_00176730:
  while (iVar8 = iVar10, iVar10 = iVar8, -0x3168ee6 < iVar8) {
    if (iVar8 < 0x2e82b6ed) {
      if (iVar8 < 0x1269ce3f) {
        if (iVar8 == -0x3168ee5) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a4)])
                    (local_b8,param_3,auStack_a8,&local_c8);
          iVar10 = 0x32dffa91;
        }
        else {
          iVar10 = -0x1ce5b179;
          if ((iVar8 != 0x5f5fcde) && (iVar10 = iVar8, iVar8 == 0x8b0fbb7)) {
            iVar10 = -0x78bfa38;
          }
        }
      }
      else if (iVar8 < 0x241729cc) {
        if (iVar8 == 0x1269ce3f) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_d0);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(param_1,uVar5);
          iVar10 = 0x241729cc;
        }
        else if (iVar8 == 0x209214db) {
          uVar6 = (*pcVar9)(param_3,auStack_a8,lVar11);
          bVar3 = (uVar6 & 1) == 0;
          iVar8 = -0x498839ba;
          iVar10 = 0x3eb67d11;
          goto LAB_00176c64;
        }
      }
      else if (iVar8 == 0x26b1d048) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_70,&local_78);
        local_70 = local_70 + 0x30;
        iVar10 = -0x389762e7;
      }
      else if (iVar8 == 0x241729cc) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(local_d0,auStack_a8);
        auVar12 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528b8)])
                            (&local_d0,local_ac);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_a8);
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        auVar12._8_8_ = auVar12._8_8_ & 0xff;
        return auVar12;
      }
    }
    else if (iVar8 < 0x4e6fe795) {
      if (iVar8 == 0x2e82b6ed) {
        local_70 = local_70 + 0x30;
        iVar10 = 0x4e6fe795;
      }
      else if (iVar8 == 0x32dffa91) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a5)])
                  (local_70,local_b8,&local_c0,&local_c8);
        lVar1 = 0xc00;
        if (local_c0 != 0) {
          lVar1 = 0;
        }
        local_70 = local_70 + lVar1;
        lVar1 = -0xc00;
        if (local_c8 != 0) {
          lVar1 = 0;
        }
        local_b8 = local_b8 + lVar1;
        iVar10 = -0x63789501;
      }
      else if (iVar8 == 0x3eb67d11) {
        iVar10 = 0x2e82b6ed;
      }
    }
    else if (iVar8 < 0x58e72a98) {
      if (iVar8 != 0x4e6fe795) {
        iVar7 = 0x57f9d5db;
        goto LAB_00176a38;
      }
      uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                        (param_3,auStack_a8,local_70);
      bVar3 = (uVar6 & 1) == 0;
      iVar8 = 0x2e82b6ed;
      iVar10 = 0x57f9d5db;
LAB_00176c64:
      if (bVar3) {
        iVar10 = iVar8;
      }
    }
    else if (iVar8 == 0x58e72a98) {
      iVar10 = -0x62941641;
      if (local_c0 != 0) {
        iVar10 = -0x5e4ee61e;
      }
    }
    else if (iVar8 == 0x5ec33315) {
      iVar10 = 0x5f5fcde;
      if (local_78 <= local_70) {
        iVar10 = -0x78bfa38;
      }
    }
  }
  if (iVar8 < -0x389762e7) {
    if (iVar8 < -0x54cefd8d) {
      if (iVar8 == -0x63789501) {
        iVar10 = 0x58e72a98;
        if ((long)(local_b8 - local_70) < 0x17a1) {
          iVar10 = -0x1d63f7ee;
        }
      }
      else if (iVar8 == -0x62941641) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a7)])
                  (local_70,param_3,auStack_a8,&local_c0);
        iVar10 = -0x5e4ee61e;
      }
      else if (iVar8 == -0x5e4ee61e) {
        iVar10 = -0x3168ee5;
        if (local_c8 != 0) {
          iVar10 = 0x32dffa91;
        }
      }
      goto LAB_00176730;
    }
    if (iVar8 < -0x498839ba) {
      if (iVar8 == -0x54cefd8d) {
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_3,auStack_a8,local_70);
        unaff_w20 = uVar4 ^ 1;
        iVar10 = -0x49cb99dc;
      }
      else if (iVar8 == -0x49cb99dc) {
        bVar3 = (unaff_w20 & 1) == 0;
        iVar8 = -0x463bd886;
        iVar10 = -0x2adf0d19;
        goto LAB_00176c64;
      }
      goto LAB_00176730;
    }
    if (iVar8 != -0x498839ba) {
      iVar7 = -0x463bd886;
LAB_00176a38:
      if (iVar8 == iVar7) {
        iVar10 = 0x5ec33315;
      }
      goto LAB_00176730;
    }
  }
  else {
    if (-0x1f9a8f16 < iVar8) {
      if (iVar8 < -0x1ce5b179) {
        if (iVar8 == -0x1f9a8f15) {
          uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                            (param_3,auStack_a8,local_78);
          iVar10 = -0x1ce5b179;
          if ((uVar6 & 1) == 0) {
            iVar10 = 0x8b0fbb7;
          }
        }
        else if (iVar8 == -0x1d63f7ee) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528ba)])
                    (&local_70,&local_b8,param_3,auStack_a8,&local_c0,&local_c8);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528bb)])
                    (&local_70,&local_b8,&local_c0,&local_c8);
          local_d0 = local_70 - 0x30;
          iVar10 = 0x241729cc;
          if (param_1 != local_d0) {
            iVar10 = 0x1269ce3f;
          }
        }
      }
      else if (iVar8 == -0x1ce5b179) {
        local_78 = local_78 - 0x30;
        iVar10 = -0x1f9a8f15;
      }
      else if (iVar8 == -0x78bfa38) {
        local_ac[0] = local_78 <= local_70;
        iVar10 = -0x389762e7;
        if (!(bool)local_ac[0]) {
          iVar10 = 0x26b1d048;
        }
      }
      goto LAB_00176730;
    }
    if (iVar8 == -0x389762e7) {
      local_c8 = 0;
      local_b8 = local_78 - 0x30;
      local_c0 = 0;
      iVar10 = -0x63789501;
      goto LAB_00176730;
    }
    if (iVar8 == -0x3046baef) {
      unaff_w20 = 0;
      local_70 = local_70 + 0x30;
      iVar10 = -0x54cefd8d;
      if (local_78 <= local_70) {
        iVar10 = -0x49cb99dc;
      }
      goto LAB_00176730;
    }
    if (iVar8 != -0x2adf0d19) goto LAB_00176730;
  }
  iVar10 = -0x3046baef;
  goto LAB_00176730;
}


