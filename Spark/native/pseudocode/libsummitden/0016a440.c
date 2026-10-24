// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016a440; body: [[0016a440, 0016afb3]]

void FUN_0016a440(long param_1,long param_2,undefined8 param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  undefined8 in_x9;
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
  uVar5 = local_68;
  iVar2 = -0x7f870746;
  local_78 = param_2;
  local_70 = param_1;
LAB_0016a4c0:
  iVar6 = iVar2;
  local_90 = auVar10._8_8_;
  local_a8 = auVar10._0_8_;
  uVar8 = uVar5 & 0xffffffff;
  iVar2 = iVar6;
  if (iVar6 < -0x8ab1173) {
    if (iVar6 < -0x3dee0428) {
      if (iVar6 < -0x63ed0383) {
        if (iVar6 < -0x764b5d32) {
          if (iVar6 == -0x7f870746) {
LAB_0016a4b4:
            uVar5 = uVar8;
            iVar2 = -0x20ecc535;
          }
          else if (iVar6 == -0x7e776aca) {
            uVar5 = uVar8;
            iVar2 = -0x303694ef;
          }
          else {
            uVar5 = uVar8;
            if (iVar6 == -0x7b3ac40d) {
LAB_0016a530:
              local_78 = local_78 + -0x18;
              uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                                (param_3,local_78,local_70);
              uVar5 = uVar8;
              iVar2 = 0x3009ed85;
              if ((uVar3 & 1) == 0) {
                iVar2 = 0x3be5a192;
              }
            }
          }
        }
        else {
          uVar5 = uVar8;
          iVar2 = 0x1ea3dca9;
          if (iVar6 != -0x764b5d32) {
            if (iVar6 == -0x6a4591b8) {
              auVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b49)])
                                  (local_70,local_78,param_3);
              iVar2 = -0x5b210db6;
            }
            else {
              iVar2 = iVar6;
              if (iVar6 == -0x6ff7886d) goto LAB_0016af7c;
            }
          }
        }
        goto LAB_0016a4c0;
      }
      if (iVar6 < -0x589ffbcf) {
        if (iVar6 == -0x63ed0383) {
          uVar7 = 0x98a52b75;
LAB_0016ad90:
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar7)])(local_70,local_78,param_3);
          uVar5 = uVar8;
          iVar2 = -0x376980f5;
        }
        else {
          uVar5 = uVar8;
          if ((iVar6 == -0x5b210db6) &&
             (unaff_x22 = local_a8, iVar2 = -0x121a8773, (local_90 & 1) == 0)) {
            iVar2 = -0x3dee0428;
          }
        }
        goto LAB_0016a4c0;
      }
      if (iVar6 != -0x589ffbcf) {
        if (iVar6 == -0x50737ef2) {
LAB_0016ad38:
          local_78 = local_78 + -0x18;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b71)])
                    (local_70,local_70 + 0x18,local_78,param_3);
          uVar5 = 1;
          iVar2 = 0x1ea3dca9;
        }
        else {
          uVar5 = uVar8;
          if ((iVar6 == -0x501b16e1) && (iVar2 = -0x7e776aca, (param_5 & 1) == 0)) {
            iVar2 = 0x71ce0c8b;
          }
        }
        goto LAB_0016a4c0;
      }
LAB_0016af24:
      local_78 = local_78 + -0x18;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b76)])
                (local_70,local_70 + 0x18,local_70 + 0x30,local_78,param_3);
    }
    else {
      if (-0x20ecc536 < iVar6) {
        if (iVar6 < -0x1340e9c6) {
          if (iVar6 != -0x20ecc535) {
            uVar5 = uVar8;
            if (iVar6 == -0x1cfa2c14) {
              iVar2 = 0x6e6b3945;
              if ((local_9c & 1) == 0) {
                iVar2 = 0x25ce8225;
              }
            }
            goto LAB_0016a4c0;
          }
          lVar9 = local_78 - local_70;
          uVar3 = (lVar9 >> 3) * -0x5555555555555555;
          uVar5 = 1;
          iVar2 = 0x1ea3dca9;
          local_88 = uVar3;
          if ((lVar9 == 0) || (lVar9 == 0x18)) goto LAB_0016a4c0;
          local_88 = lVar9 - 0x30U >> 3 | lVar9 << 0x3d;
          if ((long)local_88 < 6) {
            if (local_88 == 0) {
              local_88 = 2;
              goto LAB_0016a530;
            }
            if (local_88 == 3) goto LAB_0016ad38;
          }
          else {
            if (local_88 == 6) {
              local_88 = 4;
              goto LAB_0016af24;
            }
            if (local_88 == 9) {
              local_88 = 5;
              goto LAB_0016a930;
            }
          }
        }
        else {
          if (iVar6 == -0x1340e9c6) {
            uVar5 = 0;
            iVar2 = 0x80d11a0;
            goto LAB_0016a4c0;
          }
          if (iVar6 == -0x121a8773) {
            local_9c = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b4f)])
                                 (local_70,unaff_x22,param_3);
            uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b4f)])
                              (unaff_x22 + 0x18,local_78,param_3);
            uVar5 = uVar8;
            iVar2 = -0x1cfa2c14;
            if ((uVar3 & 1) == 0) {
              iVar2 = -0x38c48af;
            }
            goto LAB_0016a4c0;
          }
          uVar5 = uVar8;
          uVar3 = local_88;
          if (iVar6 != -0xf6b1d9a) goto LAB_0016a4c0;
        }
        local_88 = uVar3;
        uVar5 = uVar8;
        iVar2 = -0x27e3f1ce;
        if (0x17 < (long)local_88) {
          iVar2 = 0xe4a65a8;
        }
        goto LAB_0016a4c0;
      }
      if (-0x303694f0 < iVar6) {
        if (iVar6 == -0x303694ef) {
          auVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b4e)])
                              (local_70,local_78,param_3);
          uVar5 = uVar8;
          iVar2 = -0x5b210db6;
        }
        else if (iVar6 == -0x2d8b2cda) {
          local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b48)])
                               (local_70,local_78,param_3);
          uVar5 = 2;
          iVar2 = 0x1ea3dca9;
        }
        else {
          uVar5 = uVar8;
          if (iVar6 == -0x27e3f1ce) {
            iVar2 = 0xc140c7c;
            if ((param_5 & 1) == 0) {
              iVar2 = -0x63ed0383;
            }
          }
        }
        goto LAB_0016a4c0;
      }
      if (iVar6 == -0x3dee0428) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b7c)])
                  (local_70,unaff_x22,param_3,param_4,param_5 & 1);
        unaff_x22 = unaff_x22 + 0x18;
        param_5 = 0;
        uVar5 = 0;
        iVar2 = -0x764b5d32;
        local_70 = unaff_x22;
        goto LAB_0016a4c0;
      }
      iVar4 = -0x376980f5;
LAB_0016aa38:
      uVar5 = uVar8;
      if (iVar6 != iVar4) goto LAB_0016a4c0;
    }
  }
  else {
    iVar4 = (int)uVar5;
    if (iVar6 < 0x412bb327) {
      if (iVar6 < 0xe4a65a8) {
        if (iVar6 < 0x80d11a0) {
          if (iVar6 == -0x8ab1173) goto LAB_0016af54;
          uVar5 = uVar8;
          if (iVar6 == -0x38c48af) {
            iVar2 = 0x6ede3a62;
            if ((local_9c & 1) == 0) {
              iVar2 = 0x66a92594;
            }
          }
        }
        else if (iVar6 == 0x80d11a0) {
          uVar5 = uVar8;
          iVar2 = -0x3dee0428;
          if (iVar4 != 0) {
            iVar2 = 0x1ea3dca9;
          }
        }
        else {
          uVar5 = uVar8;
          iVar2 = -0x3dee0428;
          if ((iVar6 != 0x8bf9487) && (iVar2 = iVar6, iVar6 == 0xc140c7c)) {
            uVar7 = 0x98a52b74;
            goto LAB_0016ad90;
          }
        }
      }
      else if (iVar6 < 0x25ce8225) {
        if (iVar6 == 0xe4a65a8) {
          uVar5 = uVar8;
          iVar2 = 0x707072e5;
          if (param_4 != 0) {
            iVar2 = 0x412bb327;
          }
        }
        else {
          uVar5 = uVar8;
          if (iVar6 == 0x1ea3dca9) {
            if (iVar4 == 2) goto LAB_0016a4b4;
            iVar2 = -0x7f870746;
            if (iVar4 != 0) {
LAB_0016af7c:
              if (*(ulong *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
      }
      else {
        lVar9 = unaff_x22;
        if (iVar6 == 0x25ce8225) goto LAB_0016abec;
        if (iVar6 != 0x3009ed85) {
          iVar4 = 0x3be5a192;
          goto LAB_0016aa38;
        }
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_70,&local_78);
        uVar5 = uVar8;
        iVar2 = 0x3be5a192;
      }
      goto LAB_0016a4c0;
    }
    if (iVar6 < 0x6e6b3945) {
      if (iVar6 < 0x47883263) {
        if (iVar6 == 0x412bb327) {
          param_4 = param_4 + -1;
          local_98 = (long)local_88 / 2;
          uVar5 = uVar8;
          iVar2 = 0x47883263;
          if ((long)local_88 < 0x81) {
            iVar2 = 0x74018fd5;
          }
        }
        else {
          uVar5 = uVar8;
          if (iVar6 == 0x46c36985) {
LAB_0016a930:
            local_78 = local_78 + -0x18;
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b77)])
                      (local_70,local_70 + 0x18,local_70 + 0x30,local_70 + 0x48,local_78,param_3);
            goto LAB_0016af54;
          }
        }
      }
      else if (iVar6 == 0x47883263) {
        lVar9 = local_98 * 0x18;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b71)])
                  (local_70,local_70 + lVar9,local_78 + -0x18,param_3);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b71)])
                  (local_70 + 0x18,local_70 + lVar9 + -0x18,local_78 + -0x30,param_3);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b71)])
                  (local_70 + 0x30,local_70 + lVar9 + 0x18,local_78 + -0x48,param_3);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b71)])
                  (local_70 + lVar9 + -0x18,local_70 + lVar9,local_70 + lVar9 + 0x18,param_3);
        local_80 = local_70 + lVar9;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b4b)])(&local_70,&local_80);
LAB_0016abd8:
        uVar5 = uVar8;
        iVar2 = -0x501b16e1;
      }
      else {
        uVar5 = uVar8;
        iVar2 = -0x7f870746;
        if ((iVar6 != 0x63571e01) && (iVar2 = iVar6, iVar6 == 0x66a92594)) {
          iVar2 = -0x1340e9c6;
        }
      }
      goto LAB_0016a4c0;
    }
    if (iVar6 < 0x707072e5) {
      if (iVar6 == 0x6e6b3945) {
        uVar5 = 1;
        iVar2 = 0x80d11a0;
      }
      else {
        uVar5 = uVar8;
        if (iVar6 == 0x6ede3a62) {
          unaff_x22 = unaff_x22 + 0x18;
          lVar9 = local_78;
          local_70 = unaff_x22;
LAB_0016abec:
          local_78 = lVar9;
          uVar5 = 2;
          iVar2 = 0x80d11a0;
        }
      }
      goto LAB_0016a4c0;
    }
    if (iVar6 != 0x707072e5) {
      if (iVar6 == 0x71ce0c8b) {
        uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_3,local_70 + -0x18);
        uVar5 = uVar8;
        iVar2 = -0x7e776aca;
        if ((uVar3 & 1) == 0) {
          iVar2 = -0x2d8b2cda;
        }
      }
      else {
        uVar5 = uVar8;
        if (iVar6 == 0x74018fd5) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b71)])
                    (local_70 + local_98 * 0x18,local_70,local_78 + -0x18,param_3);
          goto LAB_0016abd8;
        }
      }
      goto LAB_0016a4c0;
    }
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b4a)])
              (local_70,local_78,local_78,param_3);
  }
LAB_0016af54:
  uVar5 = 1;
  iVar2 = 0x1ea3dca9;
  goto LAB_0016a4c0;
}


