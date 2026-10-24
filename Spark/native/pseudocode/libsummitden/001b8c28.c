// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b8c28; body: [[001b8c28, 001b97b3]]

void FUN_001b8c28(undefined8 param_1,ulong param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int unaff_w22;
  int local_b8;
  int local_b4;
  long local_b0;
  int local_a4;
  int local_94;
  long local_90;
  int local_88;
  int local_84;
  char *local_78;
  char local_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa37)])();
  uVar6 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa06)])(param_2);
  iVar1 = 0x214d29bd;
  if (0x80 < uVar6) {
    iVar1 = -0x10b45442;
  }
  iVar4 = 0x214d29bd;
  uVar7 = param_2;
  iVar8 = -0x58edc7ad;
LAB_001b8d14:
  while (iVar3 = iVar8, iVar9 = (int)uVar7, iVar8 = iVar3, -0x128b08bd < iVar3) {
    if (iVar3 < 0x3c69b528) {
      if (iVar3 < 0x1ac53ba4) {
        if (iVar3 < -0x4e6fc60) {
          if (iVar3 == -0x128b08bc) {
            iVar3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                              (uVar5,uVar6,0xc,local_6c);
            iVar8 = 0x2f9b71d9;
            if (iVar3 != -0x3912f55) {
              iVar8 = -0x1ef49407;
            }
          }
          else if (iVar3 == -0x11f46c30) {
            iVar4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2d)])(local_78);
            iVar8 = -0x4e6fc60;
          }
          else if (iVar3 == -0x10b45442) {
            local_6c[0] = '\x01';
            iVar3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                              (uVar5,uVar6,8,local_6c);
            iVar8 = 0x56be8ccf;
            if (iVar3 != 0x504f5250) {
              iVar8 = -0x5c01302a;
            }
          }
        }
        else if (iVar3 == -0x4e6fc60) {
          iVar8 = 0x55a17642;
          local_b4 = iVar4;
          if (iVar4 != 0) {
            iVar8 = 0x74c6602e;
          }
        }
        else if (iVar3 == 0x5675202) {
          iVar8 = 0x3157a74b;
          if (*local_78 != '\0') {
            iVar8 = -0x2e6b296f;
          }
        }
        else if (iVar3 == 0x9e0c5a7) {
          iVar8 = 8;
          if (-1 < local_b8) {
            iVar8 = 0xc;
          }
          uVar7 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                            (uVar5,uVar6,iVar9 + iVar8 + 0x80,local_6c);
          uVar7 = uVar7 & 0xffffffff;
          iVar8 = 0x67fe7217;
          if (local_6c[0] == '\0') {
            iVar8 = -0x7aa331be;
          }
        }
      }
      else if (iVar3 < 0x2e6a983e) {
        if (iVar3 == 0x1ac53ba4) {
          iVar8 = -0x6c67c40f;
          if (iVar9 + local_a4 + 0x94 <= uVar6) {
            iVar8 = 0x3c69b528;
          }
        }
        else if (iVar3 == 0x214d29bd) {
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
          unaff_w22 = 1;
          iVar8 = 0x22daf6c9;
        }
        else if (iVar3 == 0x22daf6c9) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else if (iVar3 == 0x2e6a983e) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
        unaff_w22 = 1;
        iVar8 = -0x61bba442;
      }
      else if (iVar3 == 0x2f9b71d9) {
        iVar8 = -0x214471a6;
        if (local_6c[0] == '\0') {
          iVar8 = -0x1ef49407;
        }
      }
      else if (iVar3 == 0x3157a74b) {
LAB_001b934c:
        local_94 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                             (uVar5,uVar6,local_84 + 0x84,local_6c);
        iVar8 = 0x5feaeab5;
        if (local_6c[0] == '\0') {
          iVar8 = 0x4c3d41b4;
        }
      }
    }
    else if (iVar3 < 0x61a229d0) {
      if (iVar3 < 0x55a17642) {
        if (iVar3 == 0x3c69b528) {
          local_b8 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa36)])
                               (local_78,local_b4,local_b0,local_a4);
          iVar8 = -0x2a8c6d0e;
          if (local_b8 != 0) {
            iVar8 = 0x9e0c5a7;
          }
        }
        else if (iVar3 == 0x4c3d41b4) {
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
LAB_001b95f8:
          unaff_w22 = 1;
          iVar8 = -0x23d1d292;
        }
        else if (iVar3 == 0x558c8940) {
          iVar8 = 0x5675202;
        }
      }
      else if (iVar3 == 0x55a17642) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
        unaff_w22 = 1;
        iVar8 = -0x6fcafd77;
      }
      else if (iVar3 == 0x56be8ccf) {
        iVar8 = -0x128b08bc;
        if (local_6c[0] == '\0') {
          iVar8 = -0x5c01302a;
        }
      }
      else if (iVar3 == 0x5feaeab5) {
        iVar8 = 0x4c3d41b4;
        if (local_94 != 0) {
          iVar8 = -0x2a3076e6;
        }
      }
    }
    else if (iVar3 < 0x74c6602e) {
      if (iVar3 == 0x61a229d0) {
        if (unaff_w22 == 5) goto LAB_001b8cf8;
        iVar8 = 0x6ed01726;
        if (unaff_w22 != 0) {
LAB_001b94c0:
          iVar8 = -0x61bba442;
        }
      }
      else if (iVar3 == 0x67fe7217) {
        unaff_w22 = 0;
        iVar8 = -0x7c284fb9;
      }
      else if (iVar3 == 0x6ed01726) {
        iVar8 = -0x7f4d2f39;
        if (iVar9 != 0) {
          iVar8 = -0x2ec9e42d;
        }
      }
    }
    else if (iVar3 == 0x74c6602e) {
      uVar7 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                        (uVar5,uVar6,local_84 + 0x90,local_6c);
      uVar7 = uVar7 & 0xffffffff;
      iVar8 = -0x78f685f3;
      if (local_6c[0] == '\0') {
        iVar8 = 0x2e6a983e;
      }
    }
    else if (iVar3 == 0x7b88d83b) {
      unaff_w22 = 0;
      local_78 = (char *)(local_90 + 1);
      iVar8 = -0x4b7ae620;
    }
    else if (iVar3 == 0x7c2460ac) {
      unaff_w22 = 3;
      iVar8 = -0x4b7ae620;
    }
  }
  if (iVar3 < -0x448ca116) {
    if (iVar3 < -0x6c67c40f) {
      if (iVar3 < -0x78f685f3) {
        if (iVar3 == -0x7f4d2f39) {
LAB_001b8cf8:
          iVar8 = -0x2264f5ff;
          if (local_88 != 0) {
            iVar8 = -0x38c057a0;
          }
        }
        else {
          iVar8 = 0x61a229d0;
          if ((iVar3 != -0x7c284fb9) && (iVar8 = iVar3, iVar3 == -0x7aa331be)) {
            (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
            unaff_w22 = 1;
            iVar8 = -0x7c284fb9;
          }
        }
      }
      else if (iVar3 == -0x78f685f3) {
        local_88 = 0;
        iVar8 = 0x6ed01726;
      }
      else if (iVar3 == -0x749e60bc) {
        iVar4 = (int)local_90 - (int)local_78;
        iVar8 = -0x4e6fc60;
      }
      else if (iVar3 == -0x6fcafd77) {
        if (unaff_w22 == 3) goto LAB_001b934c;
        iVar8 = 0x5675202;
        if (unaff_w22 != 0) {
          iVar8 = -0x3cf3c6bb;
        }
      }
      goto LAB_001b8d14;
    }
    if (-0x58edc7ae < iVar3) {
      iVar8 = iVar1;
      if (((iVar3 != -0x58edc7ad) && (iVar8 = 0x6ed01726, iVar3 != -0x52212a60)) &&
         (iVar8 = iVar3, iVar3 == -0x4b7ae620)) goto LAB_001b94c0;
      goto LAB_001b8d14;
    }
    if (iVar3 == -0x6c67c40f) {
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
      unaff_w22 = 1;
      iVar8 = 0x61a229d0;
      goto LAB_001b8d14;
    }
    iVar8 = -0x6fcafd77;
    if ((iVar3 == -0x61bba442) || (iVar8 = iVar3, iVar3 != -0x5c01302a)) goto LAB_001b8d14;
  }
  else {
    if (iVar3 < -0x2a3076e6) {
      if (iVar3 < -0x2ec9e42d) {
        iVar8 = -0x3cf3c6bb;
        if (iVar3 != -0x448ca116) {
          if (iVar3 == -0x3cf3c6bb) {
            iVar8 = 0x22daf6c9;
          }
          else {
            iVar8 = iVar3;
            if (iVar3 == -0x38c057a0) {
              iVar8 = 0x7c2460ac;
              if (local_90 != 0) {
                iVar8 = 0x7b88d83b;
              }
              local_84 = local_88;
            }
          }
        }
      }
      else if (iVar3 == -0x2ec9e42d) {
        local_a4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                             (uVar5,uVar6,iVar9 + 0x80,local_6c);
        local_b0 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa26)])
                             (uVar5,uVar6,iVar9 + 0x94);
        iVar8 = -0x136b8bb1;
        if (local_6c[0] == '\0') {
          iVar8 = -0x6c67c40f;
        }
      }
      else if (iVar3 == -0x2e6b296f) {
        local_90 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa22)])
                             (local_78,0xffffffffffffffff,0x2e);
        iVar8 = -0x11f46c30;
        if (local_90 != 0) {
          iVar8 = -0x749e60bc;
        }
      }
      else if (iVar3 == -0x2a8c6d0e) {
        unaff_w22 = 5;
        iVar8 = -0x7c284fb9;
        local_88 = iVar9;
      }
      goto LAB_001b8d14;
    }
    if (iVar3 < -0x214471a6) {
      if (iVar3 == -0x2a3076e6) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa35)])
                  (param_1,param_2,local_94 + 0x80);
        goto LAB_001b95f8;
      }
      if (iVar3 == -0x23d1d292) {
        iVar8 = -0x448ca116;
      }
      else if (iVar3 == -0x2264f5ff) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
        unaff_w22 = 1;
        iVar8 = -0x4b7ae620;
      }
      goto LAB_001b8d14;
    }
    if (iVar3 == -0x214471a6) {
      local_84 = 0;
      iVar8 = 0x5675202;
      local_78 = param_3;
      goto LAB_001b8d14;
    }
    if (iVar3 != -0x1ef49407) {
      if (iVar3 == -0x136b8bb1) {
        iVar8 = -0x6c67c40f;
        if (local_b0 != 0) {
          iVar8 = 0x1ac53ba4;
        }
      }
      goto LAB_001b8d14;
    }
  }
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
  unaff_w22 = 1;
  iVar8 = -0x3cf3c6bb;
  goto LAB_001b8d14;
}


