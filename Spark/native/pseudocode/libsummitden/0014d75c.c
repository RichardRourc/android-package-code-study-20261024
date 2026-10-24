// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014d75c; body: [[0014d75c, 0014e78f]]

byte FUN_0014d75c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long unaff_x20;
  long unaff_x24;
  long local_b8;
  char local_ac;
  long local_a0;
  byte local_94;
  long local_90;
  long local_88;
  long local_80;
  byte local_74;
  long local_70;
  long local_68;
  
  iVar4 = 0xa12db91;
  iVar1 = iVar4;
  if (param_1 != 0) {
    iVar1 = 0x16865227;
  }
  iVar2 = iVar4;
  if (param_3 != 0) {
    iVar2 = -0x75247ef6;
  }
  if (param_2 != 0) {
    iVar4 = -0x13ec8e63;
  }
  iVar3 = -0x326e0155;
LAB_0014d8a0:
  do {
    while (iVar8 = iVar3, iVar3 = iVar8, iVar8 < -0xdfc9414) {
      if (iVar8 < -0x417aeb3e) {
        if (iVar8 < -0x6f95a91c) {
          if (iVar8 < -0x7673aa87) {
            if (iVar8 == -0x7e2c193a) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x20);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x24);
              local_74 = 0;
              iVar3 = -0x6f95a91c;
            }
            else if (iVar8 == -0x7dfefb7b) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
              iVar3 = -0x61d6ba57;
              if (local_80 != 0) {
                iVar3 = -0x1f6fa88d;
              }
            }
            else if (iVar8 == -0x76976fb2) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
              iVar3 = 0x64cca680;
              if (local_68 != 0) {
                iVar3 = -0x6bb72c;
              }
            }
          }
          else if (iVar8 == -0x7673aa87) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_88);
            iVar3 = 0x49e31d60;
          }
          else if (iVar8 == -0x75247ef6) {
            uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(param_5);
            iVar3 = 0xa12db91;
            if ((uVar6 & 1) == 0) {
              iVar3 = 0x2d88aad8;
            }
          }
          else if (iVar8 == -0x71985ea2) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fc014,7,&DAT_002042c0,&DAT_001fc014);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fc01b,0x3a,&DAT_002042c4,&DAT_001fc01b);
            local_b8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                 (param_1,local_68,&DAT_001fc014,&DAT_001fc01b);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fc055,0xd,&DAT_002042c8,&DAT_001fc055);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fc062,4,&DAT_002042cc,&DAT_001fc062);
            local_a0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                 (param_1,unaff_x24,&DAT_001fc055,&DAT_001fc062);
            iVar3 = -0x7e2c193a;
            if (local_b8 != 0) {
              iVar3 = -0x1f198a7b;
            }
          }
        }
        else if (iVar8 < -0x61d6ba57) {
          iVar3 = 0x51be8a4e;
          if (iVar8 != -0x6f95a91c) {
            if (iVar8 == -0x6b3197ea) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
              iVar3 = -0x4153cb1a;
              if (local_70 != 0) {
                iVar3 = 0x629c8992;
              }
            }
            else {
              iVar3 = iVar8;
              if (iVar8 == -0x66a46d53) {
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba9)])
                          (param_1,local_80,0,param_3);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba9)])
                          (param_1,local_80,1,local_88);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba9)])
                          (param_1,local_80,2,local_90);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_88);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_90);
                cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
                iVar3 = 0x632f0d58;
                if (cVar5 != '\0') {
                  iVar3 = -0x1d43021c;
                }
              }
            }
          }
        }
        else if (iVar8 == -0x61d6ba57) {
          iVar3 = 0x49e31d60;
          if (local_88 != 0) {
            iVar3 = -0x7673aa87;
          }
        }
        else if (iVar8 == -0x49dcbdec) {
          iVar3 = 0x179432f7;
          if (local_70 != 0) {
            iVar3 = -0x4217ed71;
          }
        }
        else if (iVar8 == -0x4217ed71) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_70);
          iVar3 = 0x179432f7;
        }
      }
      else if (iVar8 < -0x1f6fa88d) {
        if (iVar8 < -0x3349f850) {
          if (iVar8 == -0x417aeb3e) {
            iVar3 = -0x7dfefb7b;
            if (local_88 != 0) {
              iVar3 = 0x7d1c9de4;
            }
          }
          else if (iVar8 == -0x4153cb1a) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x20);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x24);
            local_74 = 0;
            iVar3 = 0x2cc2dc2a;
          }
          else if (iVar8 == -0x344e1ab8) {
            cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
            iVar3 = -0x66a46d53;
            if (cVar5 != '\0') {
              iVar3 = -0x7dfefb7b;
            }
          }
        }
        else if (iVar8 == -0x3349f850) {
          local_94 = local_ac == '\x01';
          iVar3 = -0x156b729d;
        }
        else if (iVar8 == -0x32e53df7) {
          iVar3 = -0x49dcbdec;
          if (local_70 != 0) {
            iVar3 = 0x67a1279a;
          }
          local_94 = 1;
        }
        else if (iVar8 == -0x326e0155) {
          iVar3 = iVar1;
        }
      }
      else if (iVar8 < -0x156b729d) {
        if (iVar8 == -0x1f6fa88d) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_80);
          iVar3 = -0x61d6ba57;
        }
        else if (iVar8 == -0x1f198a7b) {
          iVar3 = -0x7e2c193a;
          if (local_a0 != 0) {
            iVar3 = 0x54288720;
          }
        }
        else if (iVar8 == -0x1d43021c) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_80);
LAB_0014d84c:
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x20);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x24);
          local_74 = 0;
          iVar3 = 0x44c2b42c;
        }
      }
      else {
        iVar3 = -0x49dcbdec;
        if (iVar8 != -0x156b729d) {
          if (iVar8 == -0x153cbde8) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x24);
            iVar3 = 0x29d6fc1e;
          }
          else {
            iVar3 = iVar8;
            if (iVar8 == -0x13ec8e63) {
              iVar3 = iVar2;
            }
          }
        }
      }
    }
    if (iVar8 < 0x2d88aad8) {
      if (iVar8 < 0xc520c59) {
        if (iVar8 < 0xd1b032) {
          if (iVar8 == -0xdfc9414) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_90);
            iVar3 = 0x14521ddc;
          }
          else if (iVar8 == -0xa5a5c75) {
            local_ac = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bb2)])
                                 (param_1,local_70,local_a0);
            cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
            iVar3 = -0x3349f850;
            if (cVar5 != '\0') {
              iVar3 = 0xa4a0d9b;
            }
          }
          else if (iVar8 == -0x6bb72c) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68);
            iVar3 = 0x64cca680;
          }
        }
        else if (iVar8 == 0xd1b032) {
          iVar3 = 0x29d6fc1e;
          if (unaff_x24 != 0) {
            iVar3 = -0x153cbde8;
          }
        }
        else if (iVar8 == 0xa12db91) {
          local_74 = 0;
          iVar3 = 0x44915c1e;
        }
        else if (iVar8 == 0xa4a0d9b) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          local_94 = 0;
          iVar3 = -0x156b729d;
        }
      }
      else if (iVar8 < 0x179432f7) {
        if (iVar8 == 0xc520c59) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x20);
          iVar3 = 0xd1b032;
        }
        else {
          if (iVar8 == 0x14521ddc) goto LAB_0014d84c;
          if (iVar8 == 0x16865227) {
            iVar3 = iVar4;
          }
        }
      }
      else if (iVar8 == 0x179432f7) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x20);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x24);
        iVar3 = 0x2cc2dc2a;
        local_74 = local_94;
      }
      else if (iVar8 == 0x29d6fc1e) {
        local_74 = 0;
        iVar3 = 0x51be8a4e;
      }
      else if (iVar8 == 0x2cc2dc2a) {
        iVar3 = 0x44c2b42c;
      }
      goto LAB_0014d8a0;
    }
    if (iVar8 < 0x629c8992) {
      if (iVar8 < 0x51be8a4e) {
        if (iVar8 < 0x44c2b42c) {
          if (iVar8 == 0x2d88aad8) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbf46,0x19,&DAT_0020428c,&DAT_001fbf46);
            local_68 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                                 (param_1,&DAT_001fbf46);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbca4,0x11,&DAT_002041fc,&DAT_001fbca4);
            unaff_x20 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                                  (param_1,&DAT_001fbca4);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fc002,0x12,&DAT_002042bc,&DAT_001fc002);
            unaff_x24 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                                  (param_1,&DAT_001fc002);
            iVar3 = -0x76976fb2;
            if (local_68 != 0) {
              iVar3 = 0x596691d6;
            }
          }
          else if (iVar8 == 0x44915c1e) {
            return local_74 & 1;
          }
        }
        else {
          iVar3 = -0x6f95a91c;
          if ((iVar8 != 0x44c2b42c) && (iVar3 = iVar8, iVar8 == 0x49e31d60)) {
            iVar3 = 0x14521ddc;
            if (local_90 != 0) {
              iVar3 = -0xdfc9414;
            }
          }
        }
      }
      else {
        iVar3 = 0x44915c1e;
        if (iVar8 != 0x51be8a4e) {
          if (iVar8 == 0x54288720) {
            local_80 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba8)])
                                 (param_1,3,unaff_x20,0);
            uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b30)])(param_4);
            local_88 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b31)])
                                 (param_1,uVar7);
            uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b30)])(param_5);
            local_90 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b31)])
                                 (param_1,uVar7);
            iVar3 = -0x7dfefb7b;
            if (local_80 != 0) {
              iVar3 = -0x417aeb3e;
            }
          }
          else {
            iVar3 = iVar8;
            if (iVar8 == 0x596691d6) {
              iVar3 = -0x76976fb2;
              if (unaff_x20 != 0) {
                iVar3 = 0x79a2578f;
              }
            }
          }
        }
      }
    }
    else if (iVar8 < 0x67a1279a) {
      if (iVar8 == 0x629c8992) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_70);
        iVar3 = -0x4153cb1a;
      }
      else if (iVar8 == 0x632f0d58) {
        local_70 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                             (param_1,param_2,local_b8,0,local_80);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_80);
        cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
        iVar3 = -0x32e53df7;
        if (cVar5 != '\0') {
          iVar3 = -0x6b3197ea;
        }
      }
      else if (iVar8 == 0x64cca680) {
        iVar3 = 0xd1b032;
        if (unaff_x20 != 0) {
          iVar3 = 0xc520c59;
        }
      }
    }
    else if (iVar8 == 0x67a1279a) {
      cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bb1)])
                        (param_1,local_70,unaff_x24);
      iVar3 = -0x49dcbdec;
      if (cVar5 != '\0') {
        iVar3 = -0xa5a5c75;
      }
    }
    else if (iVar8 == 0x79a2578f) {
      iVar3 = -0x76976fb2;
      if (unaff_x24 != 0) {
        iVar3 = -0x71985ea2;
      }
    }
    else if (iVar8 == 0x7d1c9de4) {
      iVar3 = -0x7dfefb7b;
      if (local_90 != 0) {
        iVar3 = -0x344e1ab8;
      }
    }
  } while( true );
}


