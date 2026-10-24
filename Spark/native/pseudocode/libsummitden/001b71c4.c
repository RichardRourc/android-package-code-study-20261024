// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b71c4; body: [[001b71c4, 001b843b]]

int FUN_001b71c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_w23;
  int unaff_w27;
  int local_134;
  long local_130;
  uint local_124;
  ulong local_120;
  int local_114;
  ulong local_110;
  int local_104;
  int local_100;
  uint local_fc;
  ulong local_f8;
  undefined4 local_ec;
  ulong local_e8;
  int local_dc;
  int local_d8;
  uint local_d4;
  long local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  undefined4 local_ac;
  long local_a8;
  long local_a0;
  long local_98;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  long local_78;
  char local_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6c[0] = '\x01';
  iVar5 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                    (param_1,param_2,0x14,local_6c);
  iVar1 = 0x13e8b4a1;
  if (local_6c[0] == '\0') {
    iVar1 = -0x4fbe7d80;
  }
  iVar3 = -0x4fbe7d80;
  iVar4 = 0x591dba84;
LAB_001b72ec:
  iVar6 = iVar4;
  iVar7 = iVar3;
  iVar3 = iVar7;
  iVar4 = iVar6;
  if (iVar6 < -0x36db9a9) {
    if (iVar6 < -0x4452be5a) {
      if (iVar6 < -0x64d7388a) {
        if (iVar6 < -0x6b61b9a9) {
          if (iVar6 < -0x79fd094e) {
            if (iVar6 == -0x7e261c24) {
LAB_001b7284:
              local_d4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                                   (param_1,param_2,unaff_w23 + 0x14,local_6c);
              local_d8 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                                   (param_1,param_2,unaff_w23 + 0x18,local_6c);
              iVar4 = -0xa843306;
              if (local_6c[0] == '\0') {
                iVar4 = 0x1cf82158;
              }
            }
            else if (iVar6 == -0x7b8b7fc5) {
              unaff_w27 = 2;
              iVar4 = -0x671f7a13;
            }
          }
          else if (iVar6 == -0x79fd094e) {
            iVar4 = 0x72a3d84e;
            if (local_fc <= local_7c) {
              iVar4 = -0x1f1edee7;
            }
          }
          else if (iVar6 == -0x7360885c) {
            local_84 = local_84 + 1;
            iVar4 = 0x95c96bd;
          }
        }
        else if (iVar6 < -0x671f7a13) {
          if (iVar6 == -0x6b61b9a9) {
            local_ec = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                                 (param_1,param_2,unaff_w23,local_6c);
            iVar4 = -0x36db9a9;
            if (local_6c[0] == '\0') {
              iVar4 = 0x32e28bd2;
            }
          }
          else if (iVar6 == -0x6828151f) {
LAB_001b8224:
            iVar4 = -0x670808e8;
          }
        }
        else {
          iVar4 = 0x4b332bc6;
          if (((iVar6 != -0x671f7a13) && (iVar4 = 0x7102faf0, iVar6 != -0x670808e8)) &&
             (iVar4 = iVar6, iVar6 == -0x65a0b1fb)) {
            iVar6 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa23)])
                              (local_c0,local_78,local_f8);
            iVar4 = -0x4d868615;
            if (iVar6 != 0) {
              iVar4 = 0x32c664ed;
            }
          }
        }
        goto LAB_001b72ec;
      }
      if (-0x58972f85 < iVar6) {
        if (iVar6 < -0x4fbe7d80) {
          iVar3 = local_90;
          iVar4 = -0x3cb82e94;
          if ((iVar6 != -0x58972f84) && (iVar3 = iVar7, iVar4 = iVar6, iVar6 == -0x56cad8d2)) {
            unaff_w27 = 10;
            iVar4 = 0x67300d6f;
          }
        }
        else if (iVar6 == -0x4fbe7d80) {
          unaff_w27 = 1;
          local_dc = -1;
          iVar4 = 0x7360d9bc;
        }
        else if (iVar6 == -0x4d868615) {
          local_100 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2e)])
                                (param_1,param_2,local_ac);
          iVar4 = -0x20aab1a9;
          if (local_100 != -1) {
            iVar4 = 0xca069de;
          }
        }
        else if (iVar6 == -0x49f06394) {
          iVar4 = 0x1cf82158;
        }
        goto LAB_001b72ec;
      }
      if (iVar6 < -0x60495567) {
        iVar4 = 0x32e28bd2;
        if ((iVar6 != -0x64d7388a) && (iVar4 = iVar6, iVar6 == -0x6258331a)) {
          local_7c = local_7c + 1;
          iVar4 = -0x79fd094e;
        }
        goto LAB_001b72ec;
      }
      if (iVar6 == -0x60495567) goto LAB_001b82cc;
      if (iVar6 != -0x602738b6) {
        if (iVar6 == -0x5d2e10b0) {
          iVar6 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa20)])
                            (local_130,local_78);
          iVar4 = -0x43e6de9c;
          if (iVar6 != 0) {
            iVar4 = 0x5972ef8e;
          }
        }
        goto LAB_001b72ec;
      }
    }
    else {
      if (-0x20aab1aa < iVar6) {
        if (iVar6 < -0xa843306) {
          if (iVar6 < -0x1f1edee7) {
            if (iVar6 == -0x20aab1a9) {
              unaff_w27 = 4;
              iVar4 = 0x446aea73;
            }
            else if (iVar6 == -0x1f8f7991) {
              iVar4 = -0x6b61b9a9;
            }
          }
          else if (iVar6 == -0x1f1edee7) {
            unaff_w27 = 4;
            iVar4 = -0x6828151f;
          }
          else if (iVar6 == -0x164a9d5f) {
            local_90 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2e)])
                                 (param_1,param_2,local_c8);
            iVar4 = -0x3cb82e94;
            if (local_90 != -1) {
              iVar4 = -0x58972f84;
            }
          }
          else if (iVar6 == -0xb069f21) {
            local_b8 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2c)])
                                 (param_1,param_2,local_c8);
            iVar4 = 0x644d0477;
          }
        }
        else if (iVar6 < -0x9181276) {
          if (iVar6 == -0xa843306) {
            local_80 = 0;
            iVar4 = 0x50d30a4e;
          }
          else if (iVar6 == -0x982cdc4) {
            unaff_w27 = 7;
            iVar4 = 0x234f4224;
          }
        }
        else if (iVar6 == -0x9181276) {
          local_c4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                               (param_1,param_2,local_d8 + local_80 * 4,local_6c);
          iVar4 = 0x74f4ed7f;
          if (local_6c[0] == '\0') {
            iVar4 = 0x231f648b;
          }
        }
        else if (iVar6 == -0x7fa275d) {
          unaff_w27 = 2;
          iVar4 = 0x4b332bc6;
        }
        else if (iVar6 == -0x3a61cb5) {
          unaff_w27 = 1;
          iVar4 = 0x7360d9bc;
          local_dc = iVar7;
        }
        goto LAB_001b72ec;
      }
      if (iVar6 < -0x377b18e4) {
        if (iVar6 < -0x3cb82e94) {
          if (iVar6 == -0x4452be5a) {
            unaff_w27 = 4;
LAB_001b82f4:
            iVar4 = 0x459911ec;
          }
          else if (iVar6 == -0x43e6de9c) {
            local_8c = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2e)])
                                 (param_1,param_2,local_c4);
            iVar4 = -0x33e247d1;
            if (local_8c != -1) {
              iVar4 = -0x29cf593c;
            }
          }
        }
        else if (iVar6 == -0x3cb82e94) {
          unaff_w27 = 10;
          iVar4 = 0xa9200ec;
        }
        else if (iVar6 == -0x3a21dd30) {
          local_104 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa21)])
                                (param_1,param_2,unaff_w23,local_78,(int)local_a8 - (int)local_78);
          iVar4 = -0x7b8b7fc5;
          if (local_104 != 0) {
            iVar4 = 0x10a866e9;
          }
        }
        else if (iVar6 == -0x39b77952) {
          local_80 = local_80 + 1;
          iVar4 = 0x50d30a4e;
        }
        goto LAB_001b72ec;
      }
      if (-0x2a142640 < iVar6) {
        iVar3 = local_88;
        iVar4 = -0x64d7388a;
        if (((iVar6 != -0x2a14263f) && (iVar3 = local_8c, iVar4 = -0x33e247d1, iVar6 != -0x29cf593c)
            ) && (iVar3 = iVar7, iVar4 = iVar6, iVar6 == -0x29c41f8d)) {
          local_b8 = 0;
          iVar4 = 0x644d0477;
        }
        goto LAB_001b72ec;
      }
      if (iVar6 == -0x377b18e4) {
        local_98 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2c)])
                             (param_1,param_2,local_ac);
        iVar4 = 0xb3bf4a;
        goto LAB_001b72ec;
      }
      if (iVar6 != -0x33e247d1) goto LAB_001b72ec;
    }
    unaff_w27 = 7;
LAB_001b7dd8:
    iVar4 = 0x7c03c97;
    goto LAB_001b72ec;
  }
  if (0x3e478ba9 < iVar6) {
    if (0x59a755ec < iVar6) {
      if (iVar6 < 0x68cfe082) {
        if (iVar6 < 0x6088eed9) {
          if (iVar6 == 0x59a755ed) {
            local_98 = 0;
            iVar4 = 0xb3bf4a;
          }
          else if (iVar6 == 0x5a111ebf) {
            local_130 = local_a0;
            iVar4 = -0x602738b6;
            if (local_a0 != 0) {
              iVar4 = -0x5d2e10b0;
            }
          }
        }
        else if (iVar6 == 0x6088eed9) {
          local_f8 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2d)])(local_c0);
          iVar4 = 0x32c664ed;
          if (local_f8 <= local_e8) {
            iVar4 = -0x65a0b1fb;
          }
        }
        else if (iVar6 == 0x644d0477) {
          local_d0 = local_b8;
          iVar4 = 0x1f2f7cf2;
          if (local_b8 != 0) {
            iVar4 = 0x17f47c09;
          }
        }
        else if (iVar6 == 0x67300d6f) {
LAB_001b7650:
          iVar4 = 0xcde4dfe;
        }
      }
      else if (iVar6 < 0x72a3d84e) {
        if (iVar6 == 0x68cfe082) {
LAB_001b7f3c:
          iVar4 = -0x7360885c;
        }
        else if (iVar6 == 0x7102faf0) {
          local_a8 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa22)])
                               (local_78,0xffffffffffffffff,0x2e);
          iVar4 = -0x7fa275d;
          if (local_a8 != 0) {
            iVar4 = -0x3a21dd30;
          }
        }
      }
      else if (iVar6 == 0x72a3d84e) {
        local_ac = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                             (param_1,param_2,local_114 + local_7c * 4,local_6c);
        iVar4 = -0x377b18e4;
        if (local_6c[0] == '\0') {
          iVar4 = 0x59a755ed;
        }
      }
      else if (iVar6 == 0x74f4ed7f) {
        local_a0 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2c)])
                             (param_1,param_2,local_c4);
        iVar4 = 0x5a111ebf;
      }
      else if (iVar6 == 0x7360d9bc) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_dc;
      }
      goto LAB_001b72ec;
    }
    if (iVar6 < 0x4d17c69b) {
      if (iVar6 < 0x459911ec) {
        if (iVar6 == 0x3e478baa) {
          local_e8 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2d)])(local_78);
          local_7c = 0;
          iVar4 = -0x79fd094e;
        }
        else if (iVar6 == 0x446aea73) goto LAB_001b82f4;
        goto LAB_001b72ec;
      }
      if (iVar6 != 0x459911ec) {
        if (iVar6 == 0x4b332bc6) {
          iVar4 = -0x6b61b9a9;
          if (unaff_w27 != 0) goto LAB_001b7284;
        }
        else if (iVar6 == 0x4b713f4e) {
          if (unaff_w27 == 0) goto LAB_001b7f3c;
          goto LAB_001b7650;
        }
        goto LAB_001b72ec;
      }
      if (unaff_w27 != 0) goto LAB_001b8224;
    }
    else {
      if (iVar6 < 0x5819a597) {
        if (iVar6 == 0x4d17c69b) {
          iVar6 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa23)])
                            (local_d0,local_78,local_120);
          iVar4 = -0x164a9d5f;
          if (iVar6 != 0) {
            iVar4 = 0xdb67ce0;
          }
        }
        else if (iVar6 == 0x50d30a4e) {
          iVar4 = -0x9181276;
          if (local_d4 <= local_80) {
            iVar4 = -0x982cdc4;
          }
        }
        goto LAB_001b72ec;
      }
      if (iVar6 != 0x5819a597) {
        iVar4 = iVar1;
        if ((iVar6 != 0x591dba84) && (iVar4 = iVar6, iVar6 == 0x5972ef8e)) {
          unaff_w27 = 0;
          goto LAB_001b7dd8;
        }
        goto LAB_001b72ec;
      }
    }
    iVar4 = -0x6258331a;
    goto LAB_001b72ec;
  }
  if (iVar6 < 0x13e8b4a1) {
    if (0xa9200eb < iVar6) {
      if (iVar6 < 0xcde4dfe) {
        iVar4 = 0x4b713f4e;
        if ((iVar6 != 0xa9200ec) && (iVar4 = iVar6, iVar6 == 0xca069de)) {
          iVar3 = local_100;
          iVar4 = -0x20aab1a9;
        }
      }
      else {
        iVar4 = -0x3a61cb5;
        if (iVar6 != 0xcde4dfe) {
          if (iVar6 == 0xdb67ce0) {
            unaff_w27 = 0;
            iVar4 = 0xa9200ec;
          }
          else {
            iVar4 = iVar6;
            if (iVar6 == 0x10a866e9) {
              unaff_w27 = 0;
              local_78 = local_a8 + 1;
              iVar4 = -0x671f7a13;
              unaff_w23 = local_104;
            }
          }
        }
      }
      goto LAB_001b72ec;
    }
    if (iVar6 < 0x7c03c97) {
      if (iVar6 == -0x36db9a9) {
        local_88 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2e)])
                             (param_1,param_2,local_ec);
        iVar4 = -0x64d7388a;
        if (local_88 != -1) {
          iVar4 = -0x2a14263f;
        }
      }
      else if (iVar6 == 0xb3bf4a) {
        local_c0 = local_98;
        iVar4 = -0x4452be5a;
        if (local_98 != 0) {
          iVar4 = 0x6088eed9;
        }
      }
      goto LAB_001b72ec;
    }
    if (iVar6 != 0x7c03c97) {
      if (iVar6 == 0x95c96bd) {
        iVar4 = 0x17b41d2f;
        if (local_124 <= local_84) {
          iVar4 = -0x56cad8d2;
        }
      }
      goto LAB_001b72ec;
    }
    if (unaff_w27 == 0) {
LAB_001b82cc:
      iVar4 = -0x39b77952;
      goto LAB_001b72ec;
    }
  }
  else {
    if (iVar6 < 0x1f2f7cf2) {
      if (iVar6 < 0x17f47c09) {
        if (iVar6 == 0x13e8b4a1) {
          iVar3 = -1;
          iVar4 = -0x6b61b9a9;
          local_78 = param_3;
          unaff_w23 = iVar5;
        }
        else if (iVar6 == 0x17b41d2f) {
          local_c8 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                               (param_1,param_2,local_134 + local_84 * 4,local_6c);
          iVar4 = -0xb069f21;
          if (local_6c[0] == '\0') {
            iVar4 = -0x29c41f8d;
          }
        }
      }
      else if (iVar6 == 0x17f47c09) {
        local_120 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2d)])(local_d0);
        iVar4 = 0xdb67ce0;
        if (local_120 <= local_110) {
          iVar4 = 0x4d17c69b;
        }
      }
      else if (iVar6 == 0x1a69f642) {
        local_110 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2d)])(local_78);
        local_84 = 0;
        iVar4 = 0x95c96bd;
      }
      else if (iVar6 == 0x1cf82158) {
        local_124 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                              (param_1,param_2,unaff_w23 + 0xc,local_6c);
        local_134 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                              (param_1,param_2,unaff_w23 + 0x10,local_6c);
        iVar4 = 0x1a69f642;
        if (local_6c[0] == '\0') {
          iVar4 = -0x3a61cb5;
        }
      }
      goto LAB_001b72ec;
    }
    if (iVar6 < 0x234f4224) {
      if (iVar6 == 0x1f2f7cf2) {
        unaff_w27 = 10;
        iVar4 = 0x4b713f4e;
      }
      else if (iVar6 == 0x231f648b) {
        local_a0 = 0;
        iVar4 = 0x5a111ebf;
      }
      goto LAB_001b72ec;
    }
    if (iVar6 != 0x234f4224) {
      if (iVar6 == 0x32c664ed) {
        unaff_w27 = 0;
        iVar4 = 0x446aea73;
      }
      else if (iVar6 == 0x32e28bd2) {
        local_fc = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                             (param_1,param_2,unaff_w23 + 0xc,local_6c);
        local_114 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                              (param_1,param_2,unaff_w23 + 0x10,local_6c);
        iVar4 = 0x3e478baa;
        if (local_6c[0] == '\0') {
          iVar4 = 0x7102faf0;
        }
      }
      goto LAB_001b72ec;
    }
  }
  iVar4 = -0x49f06394;
  goto LAB_001b72ec;
}


