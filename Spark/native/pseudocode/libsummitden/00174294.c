// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00174294; body: [[00174294, 00174e1b]]

void FUN_00174294(long param_1,long param_2,undefined8 param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  undefined8 in_x9;
  int iVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  undefined1 auVar10 [16];
  long local_a8;
  uint local_9c;
  long local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  long local_78;
  long local_70;
  ulong local_68;
  
  auVar10._8_8_ = in_x9;
  auVar10._0_8_ = local_a8;
  lVar1 = tpidr_el0;
  local_68 = *(ulong *)(lVar1 + 0x28);
  uVar3 = local_68;
  iVar2 = 0x3ff7817f;
  local_78 = param_2;
  local_70 = param_1;
LAB_00174314:
  while( true ) {
    iVar5 = iVar2;
    local_90 = auVar10._8_8_;
    local_a8 = auVar10._0_8_;
    uVar8 = uVar3 & 0xffffffff;
    iVar7 = (int)uVar3;
    uVar3 = uVar8;
    iVar2 = -0x72a51b05;
    if (0x525a61a < iVar5) break;
    if (iVar5 < -0x3411985a) {
      if (iVar5 < -0x6130132a) {
        if (iVar5 < -0x7b6d7d4b) {
          if (iVar5 == -0x7fa65860) {
            uVar3 = 0;
            iVar2 = -0x7b6d7d4b;
          }
          else {
            iVar2 = iVar5;
            if (iVar5 == -0x7ddfd655) {
              iVar2 = -0x52beee31;
              if ((local_9c & 1) == 0) {
                iVar2 = 0x317dd73e;
              }
            }
          }
        }
        else if (iVar5 == -0x7b6d7d4b) {
          iVar2 = 0x627c5ec3;
          if (iVar7 != 0) {
            iVar2 = -0x3411985a;
          }
        }
        else if (iVar5 == -0x72a51b05) {
          iVar2 = -0x49448c6c;
        }
        else {
          iVar2 = iVar5;
          if (iVar5 == -0x6c4b0a1d) {
LAB_0017473c:
            local_78 = local_78 + -0x30;
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d6)])
                      (local_70,local_70 + 0x30,local_78,param_3);
            uVar3 = 1;
            iVar2 = -0x3411985a;
          }
        }
      }
      else if (iVar5 < -0x4d8f34d9) {
        if (iVar5 == -0x56f4cbf1) {
          if ((param_5 & 1) == 0) {
            iVar2 = 0x637892f9;
          }
        }
        else if (iVar5 == -0x52beee31) {
          uVar3 = 1;
          iVar2 = -0x7b6d7d4b;
        }
        else {
          iVar2 = iVar5;
          if (iVar5 == -0x6130132a) goto LAB_00174de4;
        }
      }
      else {
        if (iVar5 == -0x4d8f34d9) goto LAB_00174dbc;
        if (iVar5 == -0x49448c6c) {
          auVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528af)])
                              (local_70,local_78,param_3);
          iVar2 = -0x304879c5;
        }
        else {
          iVar2 = iVar5;
          if (iVar5 == -0x3ccf61d3) {
            uVar6 = 0x98a528d5;
LAB_001749a4:
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar6)])(local_70,local_78,param_3);
            iVar2 = -0x4d8f34d9;
          }
        }
      }
    }
    else if (iVar5 < -0x9a2ab94) {
      if (iVar5 < -0x304879c5) {
        if (iVar5 == -0x3411985a) {
          if (iVar7 == 2) goto LAB_00174308;
          iVar2 = 0x3ff7817f;
          if (iVar7 != 0) {
LAB_00174de4:
            if (*(ulong *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
        else {
          iVar2 = iVar5;
          if (iVar5 == -0x33aaf854) {
            uVar6 = 0x98a528aa;
            goto LAB_001749a4;
          }
        }
      }
      else if (iVar5 == -0x304879c5) {
        unaff_x22 = local_a8;
        iVar2 = 0x6140f19a;
        if ((local_90 & 1) == 0) {
          iVar2 = 0x627c5ec3;
        }
      }
      else {
        if (iVar5 == -0x15c5942d) {
LAB_00174d8c:
          local_78 = local_78 + -0x30;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d7)])
                    (local_70,local_70 + 0x30,local_70 + 0x60,local_78,param_3);
          goto LAB_00174dbc;
        }
        iVar2 = iVar5;
        if (iVar5 == -0x12550ea9) {
          lVar9 = local_98 * 0x30;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d6)])
                    (local_70,local_70 + lVar9,local_78 + -0x30,param_3);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d6)])
                    (local_70 + 0x30,local_70 + lVar9 + -0x30,local_78 + -0x60,param_3);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d6)])
                    (local_70 + 0x60,local_70 + lVar9 + 0x30,local_78 + -0x90,param_3);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d6)])
                    (local_70 + lVar9 + -0x30,local_70 + lVar9,local_70 + lVar9 + 0x30,param_3);
          local_80 = local_70 + lVar9;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a8)])(&local_70,&local_80);
          goto LAB_00174b48;
        }
      }
    }
    else if (iVar5 < -0x1b499d5) {
      if (iVar5 == -0x9a2ab94) {
LAB_00174d3c:
        local_78 = local_78 + -0x30;
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_3,local_78,local_70);
        uVar3 = uVar8;
        iVar2 = 0x37f2e33c;
        if ((uVar4 & 1) == 0) {
          iVar2 = 0x1bb6e10b;
        }
      }
      else {
        iVar2 = iVar5;
        if (iVar5 == -0x63f5c9a) {
          local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a9)])
                               (local_70,local_78,param_3);
          uVar3 = 2;
          iVar2 = -0x3411985a;
        }
      }
    }
    else if (iVar5 == -0x1b499d5) {
      lVar9 = local_78 - local_70;
      uVar4 = (lVar9 >> 4) * -0x5555555555555555;
      uVar3 = 1;
      iVar2 = -0x3411985a;
      local_88 = uVar4;
      if ((lVar9 != 0) && (lVar9 != 0x30)) {
        local_88 = lVar9 - 0x60U >> 4 | lVar9 << 0x3c;
        if ((long)local_88 < 6) {
          if (local_88 == 0) {
            local_88 = 2;
            goto LAB_00174d3c;
          }
          if (local_88 == 3) goto LAB_0017473c;
        }
        else {
          if (local_88 == 6) {
            local_88 = 4;
            goto LAB_00174d8c;
          }
          if (local_88 == 9) {
            local_88 = 5;
            goto LAB_001748ec;
          }
        }
LAB_00174874:
        local_88 = uVar4;
        uVar3 = uVar8;
        iVar2 = 0x5e16355;
        if (0x17 < (long)local_88) {
          iVar2 = 0x79184c66;
        }
      }
    }
    else {
      iVar2 = -0x3411985a;
      if ((iVar5 != -0xdaf7ae) && (iVar2 = iVar5, iVar5 == -0xb9ed18)) {
        iVar2 = -0x7fa65860;
      }
    }
  }
  if (iVar5 < 0x5617dcf4) {
    if (iVar5 < 0x1bb6e10b) {
      if (iVar5 < 0xbbef4e6) {
        if (iVar5 == 0x525a61b) {
          param_4 = param_4 + -1;
          local_98 = (long)local_88 / 2;
          iVar2 = -0x12550ea9;
          if ((long)local_88 < 0x81) {
            iVar2 = 0x615905be;
          }
        }
        else {
          iVar2 = iVar5;
          if (iVar5 == 0x5e16355) {
            iVar2 = -0x3ccf61d3;
            if ((param_5 & 1) == 0) {
              iVar2 = -0x33aaf854;
            }
          }
        }
        goto LAB_00174314;
      }
      iVar2 = 0x627c5ec3;
      if (iVar5 == 0xbbef4e6) goto LAB_00174314;
      if (iVar5 == 0xd0b75e6) {
        iVar2 = 0x775548bc;
        if ((local_9c & 1) == 0) {
          iVar2 = -0xb9ed18;
        }
        goto LAB_00174314;
      }
      iVar2 = iVar5;
      if (iVar5 != 0x19f8f031) goto LAB_00174314;
    }
    else if (iVar5 < 0x37f2e33c) {
      if (iVar5 != 0x1bb6e10b) {
        iVar2 = iVar5;
        lVar9 = unaff_x22;
        if (iVar5 == 0x317dd73e) goto LAB_00174acc;
        goto LAB_00174314;
      }
    }
    else {
      if (iVar5 == 0x37f2e33c) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_70,&local_78);
        iVar2 = 0x1bb6e10b;
        goto LAB_00174314;
      }
      if (iVar5 == 0x3ff7817f) {
LAB_00174308:
        iVar2 = -0x1b499d5;
        goto LAB_00174314;
      }
      iVar2 = iVar5;
      if (iVar5 != 0x4c2fd8e7) goto LAB_00174314;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528ab)])
                (local_70,local_78,local_78,param_3);
    }
  }
  else {
    if (iVar5 < 0x637892f9) {
      if (iVar5 < 0x6140f19a) {
        if (iVar5 == 0x5617dcf4) {
          auVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528ae)])
                              (local_70,local_78,param_3);
          iVar2 = -0x304879c5;
        }
        else {
          iVar2 = iVar5;
          uVar4 = local_88;
          if (iVar5 == 0x574615ef) goto LAB_00174874;
        }
      }
      else if (iVar5 == 0x6140f19a) {
        local_9c = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528ac)])
                             (local_70,unaff_x22,param_3);
        uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528ac)])
                          (unaff_x22 + 0x30,local_78,param_3);
        iVar2 = -0x7ddfd655;
        if ((uVar8 & 1) == 0) {
          iVar2 = 0xd0b75e6;
        }
      }
      else if (iVar5 == 0x615905be) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d6)])
                  (local_70 + local_98 * 0x30,local_70,local_78 + -0x30,param_3);
LAB_00174b48:
        iVar2 = -0x56f4cbf1;
      }
      else {
        iVar2 = iVar5;
        if (iVar5 == 0x627c5ec3) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d2)])
                    (local_70,unaff_x22,param_3,param_4,param_5 & 1);
          unaff_x22 = unaff_x22 + 0x30;
          param_5 = 0;
          uVar3 = 0;
          iVar2 = -0xdaf7ae;
          local_70 = unaff_x22;
        }
      }
      goto LAB_00174314;
    }
    if (0x775548bb < iVar5) {
      if (iVar5 == 0x775548bc) {
        unaff_x22 = unaff_x22 + 0x30;
        lVar9 = local_78;
        local_70 = unaff_x22;
LAB_00174acc:
        local_78 = lVar9;
        uVar3 = 2;
        iVar2 = -0x7b6d7d4b;
      }
      else if (iVar5 == 0x79184c66) {
        iVar2 = 0x4c2fd8e7;
        if (param_4 != 0) {
          iVar2 = 0x525a61b;
        }
      }
      else {
        iVar2 = iVar5;
        if (iVar5 == 0x7a3aefb2) {
          iVar2 = 0x3ff7817f;
        }
      }
      goto LAB_00174314;
    }
    if (iVar5 == 0x637892f9) {
      uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                        (param_3,local_70 + -0x30);
      if ((uVar8 & 1) == 0) {
        iVar2 = -0x63f5c9a;
      }
      goto LAB_00174314;
    }
    iVar2 = iVar5;
    if (iVar5 != 0x676f40ca) goto LAB_00174314;
LAB_001748ec:
    local_78 = local_78 + -0x30;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d4)])
              (local_70,local_70 + 0x30,local_70 + 0x60,local_70 + 0x90,local_78,param_3);
  }
LAB_00174dbc:
  uVar3 = 1;
  iVar2 = -0x3411985a;
  goto LAB_00174314;
}


