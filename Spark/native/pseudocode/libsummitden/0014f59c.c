// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014f59c; body: [[0014f59c, 0015064b]]

uint FUN_0014f59c(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  long unaff_x19;
  int unaff_w20;
  long local_100;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  int local_ac;
  uint local_a4;
  long local_a0;
  long local_98;
  uint local_8c;
  long local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar4 = tpidr_el0;
  iVar3 = -0x666ace0c;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar1 = iVar3;
  if (param_1 != 0) {
    iVar1 = -0x1d4b90b7;
  }
  iVar2 = iVar3;
  if (param_2 != 0) {
    iVar2 = -0x55693c19;
  }
  if (param_3 != 0) {
    iVar3 = 0x457fd6e9;
  }
  iVar5 = -0x56369501;
LAB_0014f670:
  do {
    while (iVar7 = iVar5, iVar5 = iVar7, iVar7 < -0x118244cb) {
      if (iVar7 < -0x4585bb39) {
        if (iVar7 < -0x5da1d84f) {
          if (iVar7 < -0x670eba40) {
            if (iVar7 == -0x7774af4a) {
              local_ac = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b35)])
                                   (param_1,param_2,local_b8,local_a0);
              cVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
              iVar5 = -0x670eba40;
              if (cVar6 != '\0') {
                iVar5 = 0x6ea57a6b;
              }
            }
            else if (iVar7 == -0x7311ec77) {
              cVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
              iVar5 = -0x4585bb39;
              if (cVar6 != '\0') {
                iVar5 = 0x3f3822e1;
              }
            }
            else if (iVar7 == -0x6ffb9e08) {
              iVar5 = 0x6eb64310;
              if (local_c0 != 0) {
                iVar5 = 0x4a14bdc2;
              }
            }
          }
          else if (iVar7 == -0x670eba40) {
            iVar5 = -0x55979e5;
            if (0 < local_ac) {
              iVar5 = -0x12899a98;
            }
          }
          else if (iVar7 == -0x666ace0c) {
            local_a4 = 0;
            iVar5 = 0x11455dd6;
          }
          else if (iVar7 == -0x6448c680) {
            local_a4 = 0;
            unaff_w20 = 1;
            iVar5 = 0xe5960f6;
          }
        }
        else if (iVar7 < -0x55693c19) {
          if (iVar7 == -0x5da1d84f) {
            iVar5 = 0x6eb64310;
            if (local_e0 != 0) {
              iVar5 = 0x6878d18b;
            }
          }
          else if (iVar7 == -0x5beac0e9) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
            iVar5 = -0x4b5fab2f;
            if (local_98 != 0) {
              iVar5 = 0x48a72596;
            }
          }
          else if (iVar7 == -0x56369501) {
            iVar5 = iVar1;
          }
        }
        else {
          iVar5 = iVar3;
          if (iVar7 != -0x55693c19) {
            if (iVar7 == -0x4d6f2bfc) {
              iVar5 = -0x5beac0e9;
              if (local_88 != 0) {
                iVar5 = 0x7d2f33e3;
              }
            }
            else {
              iVar5 = iVar7;
              if (iVar7 == -0x4b5fab2f) {
                iVar5 = -0x6448c680;
                if (local_88 != 0) {
                  iVar5 = 0x4736323a;
                }
              }
            }
          }
        }
      }
      else if (iVar7 < -0x2590f927) {
        if (iVar7 < -0x2bb55633) {
          if (iVar7 == -0x4585bb39) {
            local_8c = 1;
            iVar5 = -0x3c4701ee;
          }
          else if (iVar7 == -0x3c4701ee) {
            iVar5 = -0x7774af4a;
            if ((local_8c & 1) == 0) {
              iVar5 = 0x59c228e5;
            }
          }
          else if ((iVar7 == -0x2ef4e877) && (iVar5 = -0x3c4701ee, unaff_w20 != 0)) {
LAB_0014f654:
            iVar5 = 0x6e6ef758;
            if ((local_8c & 1) == 0) {
              iVar5 = 0x5e662f4f;
            }
          }
        }
        else {
          iVar5 = -0x3c4701ee;
          if (iVar7 != -0x2bb55633) {
            if (iVar7 == -0x2792c13f) {
              iVar5 = 0x6eb64310;
              if (local_d8 != 0) {
                iVar5 = -0x5da1d84f;
              }
            }
            else {
              iVar5 = iVar7;
              if (iVar7 == -0x25d89701) {
                unaff_w20 = 0;
                iVar5 = -0x2ef4e877;
              }
            }
          }
        }
      }
      else if (iVar7 < -0x20123754) {
        if (iVar7 == -0x2590f927) {
          iVar5 = -0x118244cb;
          if (local_a0 != 0) {
            iVar5 = 0x65d17af1;
          }
        }
        else {
          iVar5 = 0x5b60e395;
          if ((iVar7 != -0x25872ab9) && (iVar5 = iVar7, iVar7 == -0x21b14ba5)) {
            iVar5 = 0x6eb64310;
            if (local_d0 != 0) {
              iVar5 = -0x2792c13f;
            }
          }
        }
      }
      else if (iVar7 == -0x20123754) {
        cVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
        iVar5 = -0xf3f82da;
        if (cVar6 != '\0') {
          iVar5 = 0x7746eb0d;
        }
      }
      else {
        iVar5 = iVar2;
        if ((iVar7 != -0x1d4b90b7) && (iVar5 = iVar7, iVar7 == -0x12899a98)) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bb0)])
                    (param_1,unaff_x19,local_d0,local_a0,0,local_ac);
          cVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
          iVar5 = -0x25d89701;
          if (cVar6 != '\0') {
            iVar5 = 0x79def3bd;
          }
        }
      }
    }
    if (iVar7 < 0x4a14bdc2) {
      if (iVar7 < 0x11455dd6) {
        if (iVar7 < 0x99551d7) {
          if (iVar7 == -0x118244cb) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_98);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_88);
            local_a4 = 0;
            unaff_w20 = 1;
            iVar5 = -0x25872ab9;
          }
          else if (iVar7 == -0xf3f82da) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b8a)])
                      (auStack_80,param_1,local_100);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b8b)])(param_3,auStack_80);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b06)])(auStack_80);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_100);
            iVar5 = 0x99551d7;
          }
          else if (iVar7 == -0x55979e5) goto LAB_0015002c;
        }
        else {
          iVar5 = 0x5e662f4f;
          if (((iVar7 != 0x99551d7) && (iVar5 = 0x11455dd6, iVar7 != 0xe5960f6)) &&
             (iVar5 = iVar7, iVar7 == 0x102a3781)) {
            iVar5 = 0x3f3822e1;
            if (local_a0 != 0) {
              iVar5 = -0x7311ec77;
            }
          }
        }
      }
      else if (iVar7 < 0x457fd6e9) {
        if (iVar7 == 0x3f3822e1) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          iVar5 = -0x2590f927;
          if (unaff_x19 != 0) {
            iVar5 = 0x4490a7ee;
          }
        }
        else if (iVar7 == 0x4490a7ee) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x19);
          iVar5 = -0x2590f927;
        }
        else if (iVar7 == 0x11455dd6) {
          if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_a4 & 1;
        }
      }
      else if (iVar7 == 0x457fd6e9) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b52)])(param_3);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbd69,0x14,&DAT_00204224,&DAT_001fbd69);
        local_98 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                             (param_1,&DAT_001fbd69);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbd7d,0x1e,&DAT_00204228,&DAT_001fbd7d);
        local_88 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                             (param_1,&DAT_001fbd7d);
        iVar5 = -0x5beac0e9;
        if (local_98 != 0) {
          iVar5 = -0x4d6f2bfc;
        }
      }
      else if (iVar7 == 0x4736323a) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_88);
        iVar5 = -0x6448c680;
      }
      else if (iVar7 == 0x48a72596) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_98);
        iVar5 = -0x4b5fab2f;
      }
      goto LAB_0014f670;
    }
    if (0x6e6ef757 < iVar7) {
      if (iVar7 < 0x7746eb0d) {
        if (iVar7 == 0x6e6ef758) {
          local_100 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                                (param_1,unaff_x19,local_d8);
          iVar5 = 0x7746eb0d;
          if (local_100 != 0) {
            iVar5 = -0x20123754;
          }
          goto LAB_0014f670;
        }
        if (iVar7 != 0x6ea57a6b) {
          if (iVar7 == 0x6eb64310) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_98);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_88);
            local_a4 = 0;
            unaff_w20 = 1;
            iVar5 = 0x5b60e395;
          }
          goto LAB_0014f670;
        }
      }
      else {
        if (iVar7 == 0x7746eb0d) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          local_8c = 0;
          iVar5 = 0x99551d7;
          goto LAB_0014f670;
        }
        if (iVar7 != 0x79def3bd) {
          if (iVar7 == 0x7d2f33e3) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbd9b,5,&DAT_0020422c,&DAT_001fbd9b);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbda0,6,&DAT_00204230,&DAT_001fbda0);
            local_b8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                 (param_1,local_98,&DAT_001fbd9b,&DAT_001fbda0);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbda6,6,&DAT_00204234,&DAT_001fbda6);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbdac,4,&DAT_00204238,&DAT_001fbdac);
            local_c0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                 (param_1,local_98,&DAT_001fbda6,&DAT_001fbdac);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbb8d,7,&DAT_002041b8,&DAT_001fbb8d);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbdac,4,&DAT_00204238,&DAT_001fbdac);
            local_c8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                 (param_1,local_88,&DAT_001fbb8d,&DAT_001fbdac);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbdb0,6,&DAT_0020423c,&DAT_001fbdb0);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbdb6,8,&DAT_00204240,&DAT_001fbdb6);
            local_d0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                 (param_1,local_88,&DAT_001fbdb0,&DAT_001fbdb6);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbdbe,0xc,&DAT_00204244,&DAT_001fbdbe);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbdca,5,&DAT_00204248,&DAT_001fbdca);
            local_d8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                 (param_1,local_88,&DAT_001fbdbe,&DAT_001fbdca);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbda6,6,&DAT_00204234,&DAT_001fbda6);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbdac,4,&DAT_00204238,&DAT_001fbdac);
            local_e0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                 (param_1,local_88,&DAT_001fbda6,&DAT_001fbdac);
            iVar5 = 0x6eb64310;
            if (local_b8 != 0) {
              iVar5 = -0x6ffb9e08;
            }
          }
          goto LAB_0014f670;
        }
      }
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
      local_8c = 0;
LAB_0015002c:
      unaff_w20 = 3;
      iVar5 = -0x2ef4e877;
      goto LAB_0014f670;
    }
    if (iVar7 < 0x5e662f4f) {
      if (iVar7 == 0x4a14bdc2) {
        iVar5 = 0x6eb64310;
        if (local_c8 != 0) {
          iVar5 = -0x21b14ba5;
        }
      }
      else {
        if (iVar7 == 0x59c228e5) goto LAB_0014f654;
        if (iVar7 == 0x5b60e395) {
          iVar5 = 0xe5960f6;
        }
      }
    }
    else if (iVar7 == 0x5e662f4f) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bb0)])(param_1,param_2,local_c0);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bb0)])(param_1,unaff_x19,local_e0);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_a0);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x19);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_98);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_88);
      local_a4 = local_8c;
      unaff_w20 = 1;
      iVar5 = -0x25872ab9;
    }
    else if (iVar7 == 0x65d17af1) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_a0);
      iVar5 = -0x118244cb;
    }
    else if (iVar7 == 0x6878d18b) {
      unaff_x19 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b32)])
                            (param_1,local_88,local_c8);
      local_a0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba5)])(param_1,0x1000);
      iVar5 = 0x3f3822e1;
      if (unaff_x19 != 0) {
        iVar5 = 0x102a3781;
      }
    }
  } while( true );
}


