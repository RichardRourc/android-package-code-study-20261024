// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bd73c; body: [[001bd73c, 001bdd8f]]

void FUN_001bd73c(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  byte *unaff_x23;
  long unaff_x24;
  ulong local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined1 auStack_468 [1024];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar6 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc3)])();
  iVar1 = -0x1b75f037;
  if (0xfff < param_3) {
    iVar1 = 0x5a32da93;
  }
  iVar2 = 0x6d94d144;
  if (-1 < iVar6) {
    iVar2 = -0x6d92fe99;
  }
  iVar3 = -0x55f79e69;
  if ((param_4 & 1) == 0) {
    iVar3 = 0x276ae497;
  }
  iVar5 = -0x7b62fddc;
  do {
    while( true ) {
      while (iVar8 = iVar5, iVar5 = iVar8, iVar8 < 0x4e8003f) {
        if (iVar8 < -0x306ae653) {
          if (iVar8 < -0x55f79e69) {
            iVar5 = iVar2;
            if (iVar8 != -0x7b62fddc) {
              if (iVar8 == -0x6d92fe99) {
                (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
                iVar5 = iVar1;
              }
              else {
                iVar5 = iVar8;
                if (iVar8 == -0x67de4598) {
                  uVar7 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbda)])
                                    (&local_470,&local_478);
                  iVar5 = 0x53787666;
                  if ((uVar7 & 1) == 0) {
                    iVar5 = 0x250138b5;
                  }
                }
              }
            }
          }
          else if (iVar8 == -0x55f79e69) {
            local_470 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc4)])(param_1);
            local_478 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbdb)])(param_1);
            iVar5 = -0x67de4598;
          }
          else if (iVar8 == -0x4ebe3e52) {
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc6)])
                      (param_1,auStack_468,unaff_x24);
            param_4 = 0;
            iVar5 = -0x17f89560;
          }
          else if (iVar8 == -0x368d34ec) {
            uVar7 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc0)])(param_1);
            iVar5 = 0x29ad82e3;
            if (param_3 <= uVar7) {
              iVar5 = 0x501c99b4;
            }
          }
        }
        else if (iVar8 < -0x17f89560) {
          if (iVar8 < -0x20029125) {
            iVar5 = 0x276ae497;
            if ((iVar8 != -0x306ae653) && (iVar5 = iVar8, iVar8 == -0x2fcf84da)) {
              if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
          else if (iVar8 == -0x20029125) {
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbd8)])(&local_470);
            iVar5 = -0x67de4598;
          }
          else if (iVar8 == -0x1b75f037) {
            iVar5 = -0x135c68ae;
            local_480 = param_3;
          }
        }
        else if (iVar8 == -0x17f89560) {
          iVar5 = -0x368d34ec;
          if (param_4 != 0) goto LAB_001bdc98;
        }
        else {
          iVar5 = -0x2fcf84da;
          if ((iVar8 != -0x147dcc22) && (iVar5 = iVar8, iVar8 == -0x135c68ae)) {
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc1)])(param_1,local_480);
            iVar5 = -0x368d34ec;
          }
        }
      }
      if (iVar8 < 0x2f8167fe) break;
      if (iVar8 < 0x53787666) {
        iVar5 = -0x368d34ec;
        if (iVar8 != 0x2f8167fe) {
          if (iVar8 == 0x31f50d12) {
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(param_1);
            iVar5 = -0x147dcc22;
          }
          else {
            iVar5 = iVar8;
            if (iVar8 == 0x501c99b4) {
LAB_001bdc98:
              (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc5)])(iVar6);
              iVar5 = iVar3;
            }
          }
        }
      }
      else if (iVar8 < 0x5a487f51) {
        if (iVar8 == 0x53787666) {
          unaff_x23 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbd9)])
                                        (&local_470);
          iVar5 = 0x26d9cd7b;
          if (*unaff_x23 < 0x41) {
            iVar5 = 0x5a487f51;
          }
        }
        else if (iVar8 == 0x5a32da93) {
          local_480 = 0x1000;
          iVar5 = -0x135c68ae;
        }
      }
      else if (iVar8 == 0x5a487f51) {
        iVar5 = -0x20029125;
      }
      else if (iVar8 == 0x6d94d144) {
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
        param_4 = 1;
        iVar5 = -0x2fcf84da;
      }
    }
    if (iVar8 < 0x26d9cd7b) {
      if (iVar8 == 0x4e8003f) {
        param_4 = 3;
        iVar5 = -0x17f89560;
      }
      else if (iVar8 == 0x88477f9) {
        *unaff_x23 = *unaff_x23 + 0x20;
        iVar5 = 0x5a487f51;
      }
      else if (iVar8 == 0x250138b5) {
        param_4 = 4;
        iVar5 = -0x306ae653;
      }
    }
    else if (iVar8 == 0x26d9cd7b) {
      iVar5 = 0x88477f9;
      if (0x5a < *unaff_x23) {
        iVar5 = 0x5a487f51;
      }
    }
    else if (iVar8 == 0x276ae497) {
      param_4 = 1;
      iVar5 = -0x147dcc22;
    }
    else if (iVar8 == 0x29ad82e3) {
      unaff_x24 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc7)])
                            (iVar6,auStack_468,0x400);
      iVar5 = 0x4e8003f;
      if (0 < unaff_x24) {
        iVar5 = -0x4ebe3e52;
      }
    }
  } while( true );
}


