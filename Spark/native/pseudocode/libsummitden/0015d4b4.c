// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015d4b4; body: [[0015d4b4, 0015e8f3]]

void FUN_0015d4b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  byte unaff_w29;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  long local_130;
  byte local_124;
  byte local_120;
  byte local_11c;
  byte local_118;
  byte local_114;
  long local_110;
  long local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long *local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = -0x16dceeef;
  if (param_2 != 0) {
    iVar1 = -0x52772a28;
  }
  iVar2 = -0x4fbbc3c0;
  local_70 = param_2;
  do {
    while( true ) {
      while (iVar9 = iVar2, lVar5 = local_70, lVar4 = local_80, iVar2 = iVar9, -0x18b4e6a < iVar9) {
        if (iVar9 < 0x4c9a13de) {
          if (iVar9 < 0x1f002eaa) {
            if (iVar9 < 0x92bf03f) {
              if (iVar9 == -0x18b4e69) {
                iVar2 = -0x523a24e0;
                if ((local_134 & 1) == 0) {
                  iVar2 = -0x7f676e04;
                }
              }
              else if (iVar9 == 0x2b19fe4) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
                iVar2 = -0x660bb30d;
                if (local_110 != 0) {
                  iVar2 = -0x5839267f;
                }
              }
              else if (iVar9 == 0x5ee51e5) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_108)
                ;
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
                iVar2 = -0xf4b8688;
              }
            }
            else if (iVar9 < 0x1702cddf) {
              if (iVar9 == 0x92bf03f) {
                iVar2 = 0x6c97fe52;
                unaff_w29 = local_124;
                if ((local_148 & 1) == 0) {
                  iVar2 = 0x72843ad8;
                }
              }
              else if (iVar9 == 0x164742bf) {
                local_124 = 0;
                local_13c = 0;
                iVar2 = -0x2570d3ac;
                if ((unaff_w29 & 1) == 0) {
                  iVar2 = 0x92bf03f;
                }
                local_148 = 0;
              }
            }
            else if (iVar9 == 0x1702cddf) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_80);
              iVar2 = 0x5ee51e5;
            }
            else if (iVar9 == 0x19effcea) {
              iVar2 = -0x668fe60;
              if (local_158 != 0) {
                iVar2 = 0x4893d7ab;
              }
            }
          }
          else if (iVar9 < 0x3ff1f8bc) {
            if (iVar9 < 0x209c344a) {
              if (iVar9 == 0x1f002eaa) goto LAB_0015d558;
              if (iVar9 == 0x1f2d6237) {
                uVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a90)])();
                local_168 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                                      (lVar5,lVar4,local_150,local_130,uVar7);
                cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
                iVar2 = -0xc6e6d87;
                unaff_w29 = cVar6 == '\0';
                if (local_168 != 0) {
                  iVar2 = 0x6a2c5310;
                }
              }
            }
            else if (iVar9 == 0x209c344a) {
              iVar2 = -0x668fe60;
              if (local_150 != 0) {
                iVar2 = 0x19effcea;
              }
            }
            else if (iVar9 == 0x30d26d93) {
              if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
          else if (iVar9 < 0x4893d7ab) {
            if (iVar9 == 0x3ff1f8bc) {
              iVar2 = -0x566c5ff1;
              unaff_w29 = local_11c;
              if ((local_140 & 1) == 0) {
                iVar2 = -0x18b4e69;
              }
            }
            else if (iVar9 == 0x4331ed19) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd4d6,7,&DAT_0020435c,&DAT_001fd4d6);
              local_118 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a92)])
                                    (&local_98,&DAT_001fd4d6,param_5);
              iVar2 = 0x79bc929d;
            }
          }
          else if (iVar9 == 0x4893d7ab) {
            local_80 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a9d)])
                                 (local_70,local_108,local_160);
            iVar2 = 0x73399add;
            if (local_80 != 0) {
              iVar2 = -0x46741aa1;
            }
          }
          else if (iVar9 == 0x4b39f70a) {
            local_110 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                                  (local_70,local_80,local_158);
            cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
            iVar2 = 0x52eedffd;
            if (cVar6 != '\0') {
              iVar2 = 0x2b19fe4;
            }
          }
        }
        else if (iVar9 < 0x69970743) {
          if (iVar9 < 0x52eedffd) {
            if (iVar9 == 0x4c9a13de) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd4ca,5,&DAT_00204354,&DAT_001fd4ca);
              local_114 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a92)])
                                    (&local_98,&DAT_001fd4ca,param_4);
              iVar2 = 0x69970743;
            }
            else if (iVar9 == 0x4ef2e771) {
              iVar2 = -0x3a60fd4;
            }
            else if (iVar9 == 0x517017f4) {
              iVar2 = -0x3410399d;
              unaff_w29 = local_120;
              if ((local_144 & 1) == 0) {
                iVar2 = -0x781fe739;
              }
            }
          }
          else if (iVar9 < 0x5e9e3723) {
            if (iVar9 == 0x52eedffd) {
              iVar2 = 0x2b19fe4;
              if (local_110 != 0) {
                iVar2 = -0x679e1233;
              }
            }
            else if (iVar9 == 0x56577a69) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
              iVar2 = -0x78baac9c;
              unaff_w29 = 0;
            }
          }
          else if (iVar9 == 0x5e9e3723) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])
                      (auStack_b0,&DAT_0011dd07);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                      (&DAT_001fd4cf,7,&DAT_00204358,&DAT_001fd4cf);
            local_11c = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a92)])
                                  (&local_98,&DAT_001fd4cf,auStack_b0);
            local_134 = 1;
            local_140 = 1;
            iVar2 = 0x3ff1f8bc;
          }
          else if (iVar9 == 0x63f4b6df) {
            iVar2 = -0x668fe60;
            if (local_78 != 0) {
              iVar2 = 0x209c344a;
            }
          }
        }
        else if (iVar9 < 0x73399add) {
          if (iVar9 < 0x6c97fe52) {
            if (iVar9 == 0x69970743) {
              local_11c = 0;
              local_134 = 0;
              local_140 = 0;
              iVar2 = 0x5e9e3723;
              unaff_w29 = local_114;
              if ((local_114 & 1) == 0) {
                iVar2 = 0x3ff1f8bc;
              }
            }
            else if (iVar9 == 0x6a2c5310) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_168);
              iVar2 = -0xc6e6d87;
            }
          }
          else if (iVar9 == 0x6c97fe52) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_e0);
            iVar2 = 0x72843ad8;
          }
          else if (iVar9 == 0x72843ad8) {
            iVar2 = -0x2704c445;
            if ((local_13c & 1) == 0) {
              iVar2 = -0x560df80f;
            }
          }
        }
        else if (iVar9 < 0x79bc929d) {
          if (iVar9 == 0x73399add) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
            iVar2 = 0x5ee51e5;
            if (local_80 != 0) {
              iVar2 = 0x1702cddf;
            }
          }
          else if (iVar9 == 0x74ad6ca2) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(param_1);
            iVar2 = -0x451be9bf;
          }
        }
        else if (iVar9 == 0x79bc929d) {
          local_120 = 0;
          local_138 = 0;
          local_144 = 0;
          iVar2 = -0x308fe5bb;
          unaff_w29 = local_118;
          if ((local_118 & 1) == 0) {
            iVar2 = 0x517017f4;
          }
        }
        else if (iVar9 == 0x7ccac681) {
          iVar2 = -0x451be9bf;
        }
      }
      if (-0x379a5c5d < iVar9) break;
      if (iVar9 < -0x560df80f) {
        if (iVar9 < -0x679e1233) {
          if (iVar9 == -0x7f676e04) {
            local_118 = 0;
            iVar2 = 0x4331ed19;
            if ((unaff_w29 & 1) == 0) {
              iVar2 = 0x79bc929d;
            }
          }
          else {
            iVar2 = -0x1b828da1;
            if ((iVar9 != -0x78baac9c) && (iVar2 = iVar9, iVar9 == -0x781fe739)) {
              iVar2 = -0x5a1a0f4;
              if ((local_138 & 1) == 0) {
                iVar2 = 0x164742bf;
              }
            }
          }
        }
        else if (iVar9 < -0x5839267f) {
          if (iVar9 == -0x679e1233) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae2)])
                      (auStack_f8,local_70,local_110);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(param_1,auStack_f8);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_f8);
            iVar2 = 0x2b19fe4;
          }
          else if (iVar9 == -0x660bb30d) {
            iVar2 = -0x2aa6b1a2;
          }
        }
        else if (iVar9 == -0x5839267f) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_110);
          iVar2 = -0x660bb30d;
        }
        else if (iVar9 == -0x566c5ff1) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_b0);
          iVar2 = -0x18b4e69;
        }
      }
      else if (iVar9 < -0x4d4682c2) {
        if (iVar9 < -0x523a24e0) {
          if (iVar9 == -0x560df80f) {
            iVar2 = -0x4423cba4;
            if ((unaff_w29 & 1) == 0) {
              iVar2 = -0x1b828da1;
            }
          }
          else if (iVar9 == -0x52772a28) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                      (&DAT_001fd43b,0x14,&DAT_0020433c,&DAT_001fd43b);
            local_108 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                  (lVar5,&DAT_001fd43b);
            iVar2 = -0x379a5c5c;
            if (local_108 != 0) {
              iVar2 = -0x3a18e48;
            }
          }
        }
        else if (iVar9 == -0x523a24e0) {
          iVar2 = -0x7f676e04;
        }
        else if (iVar9 == -0x4fbbc3c0) {
          iVar2 = iVar1;
        }
      }
      else if (iVar9 < -0x451be9bf) {
        if (iVar9 == -0x4d4682c2) {
LAB_0015d558:
          iVar2 = 0x7ccac681;
        }
        else if (iVar9 == -0x46741aa1) {
          cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
          iVar2 = -0x1e200506;
          if (cVar6 != '\0') {
            iVar2 = 0x73399add;
          }
        }
      }
      else if (iVar9 == -0x451be9bf) {
        iVar2 = -0xf4b8688;
      }
      else if (iVar9 == -0x4423cba4) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd4e2,3,&DAT_00204368,&DAT_001fd4e2);
        local_130 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                              (lVar5,&DAT_001fd4e2);
        iVar2 = 0x56577a69;
        if (local_130 != 0) {
          iVar2 = 0x1f2d6237;
        }
      }
    }
    if (iVar9 < -0x1b828da1) {
      if (iVar9 < -0x2aa6b1a2) {
        if (iVar9 == -0x379a5c5c) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
          iVar2 = -0x3a60fd4;
        }
        else if (iVar9 == -0x3410399d) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_c8);
          iVar2 = -0x781fe739;
        }
        else if (iVar9 == -0x308fe5bb) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(auStack_c8,&DAT_0011dd07)
          ;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                    (&DAT_001fd4dd,2,&DAT_00204360,&DAT_001fd4dd);
          local_120 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a92)])
                                (&local_98,&DAT_001fd4dd,auStack_c8);
          local_138 = 1;
          local_144 = 1;
          iVar2 = 0x517017f4;
        }
      }
      else if (iVar9 < -0x2570d3ac) {
        if (iVar9 == -0x2aa6b1a2) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_80);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_108);
          uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(param_1);
          iVar2 = 0x1f002eaa;
          if ((uVar8 & 1) == 0) {
            iVar2 = -0x4d4682c2;
          }
        }
        else if (iVar9 == -0x2704c445) {
          iVar2 = -0x560df80f;
        }
      }
      else if (iVar9 == -0x2570d3ac) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a93)])(auStack_e0);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd4df,3,&DAT_00204364,&DAT_001fd4df);
        local_124 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a92)])
                              (&local_98,&DAT_001fd4df,auStack_e0);
        local_13c = 1;
        local_148 = 1;
        iVar2 = 0x92bf03f;
      }
      else if (iVar9 == -0x1e200506) {
        local_98 = &local_70;
        local_88 = &local_78;
        local_114 = 0;
        local_90 = &local_80;
        iVar2 = 0x4c9a13de;
        unaff_w29 = 1;
      }
    }
    else if (iVar9 < -0x668fe60) {
      if (iVar9 < -0xf4b8688) {
        if (iVar9 == -0x1b828da1) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
          iVar2 = 0x4b39f70a;
          if ((unaff_w29 & 1) == 0) {
            iVar2 = -0x2aa6b1a2;
          }
        }
        else if (iVar9 == -0x16dceeef) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
          iVar2 = 0x30d26d93;
        }
      }
      else if (iVar9 == -0xf4b8688) {
        iVar2 = 0x4ef2e771;
      }
      else if (iVar9 == -0xc6e6d87) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_130);
        iVar2 = -0x78baac9c;
      }
    }
    else if (iVar9 < -0x3a60fd4) {
      if (iVar9 == -0x668fe60) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_108);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
        iVar2 = 0x4ef2e771;
      }
      else if (iVar9 == -0x5a1a0f4) {
        iVar2 = 0x164742bf;
      }
    }
    else {
      iVar2 = 0x30d26d93;
      if ((iVar9 != -0x3a60fd4) && (iVar2 = iVar9, iVar9 == -0x3a18e48)) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd42a,4,&DAT_00204338,&DAT_001fd42a);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd44f,7,&DAT_00204340,&DAT_001fd44f);
        local_160 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                              (lVar5,local_108,&DAT_001fd44f,&DAT_001fd42a);
        lVar4 = local_70;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd456,4,&DAT_00204344,&DAT_001fd456);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd45a,0x3c,&DAT_00204348,&DAT_001fd45a);
        local_78 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                             (lVar4,local_108,&DAT_001fd456,&DAT_001fd45a);
        lVar4 = local_70;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd456,4,&DAT_00204344,&DAT_001fd456);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd496,0x2b,&DAT_0020434c,&DAT_001fd496);
        local_150 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                              (lVar4,local_108,&DAT_001fd456,&DAT_001fd496);
        lVar4 = local_70;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fcf93,0x15,&DAT_002042d8,&DAT_001fcf93);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd4c1,9,&DAT_00204350,&DAT_001fd4c1);
        local_158 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                              (lVar4,local_108,&DAT_001fd4c1,&DAT_001fcf93);
        iVar2 = -0x668fe60;
        if (local_160 != 0) {
          iVar2 = 0x63f4b6df;
        }
      }
    }
  } while( true );
}


