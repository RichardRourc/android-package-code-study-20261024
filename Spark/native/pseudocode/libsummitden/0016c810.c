// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016c810; body: [[0016c810, 0016cfdf]]

undefined1  [16] FUN_0016c810(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  uint unaff_w26;
  undefined1 auVar11 [16];
  ulong local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined1 local_94 [4];
  undefined1 auStack_90 [24];
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_2;
  local_70 = param_1;
  uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_70);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aad)])(auStack_90,uVar5);
  lVar10 = local_78 - 0x18;
  pcVar8 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)];
  iVar7 = -0x48cf3ad3;
LAB_0016c914:
  iVar9 = iVar7;
  iVar7 = iVar9;
  if (iVar9 < 0x113086d6) {
    if (iVar9 < -0x279f1d6f) {
      if (iVar9 < -0x552230f1) {
        if (iVar9 == -0x6945d958) {
          uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_3,auStack_90,local_70);
          unaff_w26 = uVar4 ^ 1;
          iVar7 = 0x1265e4f9;
          goto LAB_0016c914;
        }
        if (iVar9 != -0x67e122cf) {
          if (iVar9 == -0x5c4727d6) {
            uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                              (param_3,auStack_90,local_70);
            iVar7 = 0x338dcbc4;
            if ((uVar6 & 1) == 0) {
              iVar7 = -0x1402ce21;
            }
          }
          goto LAB_0016c914;
        }
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_3,auStack_90,local_78);
        bVar3 = (uVar6 & 1) == 0;
        iVar7 = -0x35ccccfd;
        iVar9 = 0x480bc24f;
      }
      else {
        if (iVar9 < -0x48cf3ad3) {
          iVar7 = -0x1402ce21;
          if ((iVar9 != -0x552230f1) && (iVar7 = iVar9, iVar9 == -0x4fb1a088)) {
            unaff_w26 = 0;
            local_70 = local_70 + 0x18;
            iVar7 = -0x6945d958;
            if (local_78 <= local_70) {
              iVar7 = 0x1265e4f9;
            }
          }
          goto LAB_0016c914;
        }
        if (iVar9 != -0x48cf3ad3) {
          if (iVar9 == -0x35ccccfd) {
            local_78 = local_78 - 0x18;
            iVar7 = -0x67e122cf;
          }
          goto LAB_0016c914;
        }
        uVar6 = (*pcVar8)(param_3,auStack_90,lVar10);
        bVar3 = (uVar6 & 1) == 0;
        iVar7 = -0x552230f1;
        iVar9 = 0x476eb8a2;
      }
LAB_0016ce9c:
      if (bVar3) {
        iVar7 = iVar9;
      }
      goto LAB_0016c914;
    }
    if (iVar9 < 0xdae6f7) {
      if (iVar9 < -0x7e29932) {
        if (iVar9 == -0x1402ce21) {
          local_70 = local_70 + 0x18;
          iVar7 = -0x5c4727d6;
        }
        else if (iVar9 == -0x279f1d6f) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(local_b8,auStack_90);
          auVar11 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b5b)])
                              (&local_b8,local_94);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_90);
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          auVar11._8_8_ = auVar11._8_8_ & 0xff;
          return auVar11;
        }
      }
      else if (iVar9 == -0x7e29932) {
        iVar7 = 0x70772590;
        if (local_a8 != 0) {
          iVar7 = 0x1fe24abe;
        }
      }
      else if (iVar9 == -0x2862503) {
        iVar7 = -0x35ccccfd;
      }
    }
    else if (iVar9 == 0xdae6f7) {
      iVar7 = -0x7e29932;
      if ((long)(local_a0 - local_70) < 0xbd1) {
        iVar7 = 0x5bc72ce0;
      }
    }
    else if (iVar9 == 0x2be1362) {
LAB_0016cce8:
      iVar7 = -0x4fb1a088;
    }
    else if (iVar9 == 0x923c8bc) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b44)])
                (local_70,local_a0,&local_a8,&local_b0);
      lVar1 = 0x600;
      if (local_a8 != 0) {
        lVar1 = 0;
      }
      local_70 = local_70 + lVar1;
      lVar1 = -0x600;
      if (local_b0 != 0) {
        lVar1 = 0;
      }
      local_a0 = local_a0 + lVar1;
      iVar7 = 0xdae6f7;
    }
    goto LAB_0016c914;
  }
  if (iVar9 < 0x480bc24f) {
    if (iVar9 < 0x1fe24abe) {
      if (iVar9 == 0x113086d6) {
        local_b0 = 0;
        local_a0 = local_78 - 0x18;
        local_a8 = 0;
        iVar7 = 0xdae6f7;
      }
      else {
        if (iVar9 == 0x1265e4f9) {
          bVar3 = (unaff_w26 & 1) == 0;
          iVar7 = 0x2be1362;
          iVar9 = 0x539dab7d;
          goto LAB_0016ce9c;
        }
        if (iVar9 == 0x1e7ccb15) {
          iVar7 = -0x2862503;
          if (local_78 <= local_70) {
            iVar7 = 0x56bc5e36;
          }
        }
      }
      goto LAB_0016c914;
    }
    if (0x34e3bd2e < iVar9) {
      if (iVar9 == 0x34e3bd2f) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_b8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(param_1,uVar5);
        iVar7 = -0x279f1d6f;
      }
      else if (iVar9 == 0x476eb8a2) goto LAB_0016cce8;
      goto LAB_0016c914;
    }
    if (iVar9 == 0x1fe24abe) {
      iVar7 = 0x6a04ca3e;
      if (local_b0 != 0) {
        iVar7 = 0x923c8bc;
      }
      goto LAB_0016c914;
    }
    if (iVar9 != 0x338dcbc4) goto LAB_0016c914;
  }
  else {
    if (0x5bc72cdf < iVar9) {
      if (iVar9 < 0x6d7067a4) {
        if (iVar9 == 0x5bc72ce0) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b45)])
                    (&local_70,&local_a0,param_3,auStack_90,&local_a8,&local_b0);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b5a)])
                    (&local_70,&local_a0,&local_a8,&local_b0);
          local_b8 = local_70 - 0x18;
          iVar7 = -0x279f1d6f;
          if (param_1 != local_b8) {
            iVar7 = 0x34e3bd2f;
          }
        }
        else if (iVar9 == 0x6a04ca3e) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b47)])
                    (local_a0,param_3,auStack_90,&local_b0);
          iVar7 = 0x923c8bc;
        }
      }
      else if (iVar9 == 0x6d7067a4) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_70,&local_78);
        local_70 = local_70 + 0x18;
        iVar7 = 0x113086d6;
      }
      else if (iVar9 == 0x70772590) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b46)])
                  (local_70,param_3,auStack_90,&local_a8);
        iVar7 = 0x1fe24abe;
      }
      goto LAB_0016c914;
    }
    iVar7 = 0x56bc5e36;
    if (iVar9 == 0x480bc24f) goto LAB_0016c914;
    if (iVar9 != 0x539dab7d) {
      iVar7 = iVar9;
      if (iVar9 == 0x56bc5e36) {
        local_94[0] = local_78 <= local_70;
        iVar7 = 0x113086d6;
        if (!(bool)local_94[0]) {
          iVar7 = 0x6d7067a4;
        }
      }
      goto LAB_0016c914;
    }
  }
  iVar7 = 0x1e7ccb15;
  goto LAB_0016c914;
}


