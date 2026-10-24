// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001384a0; body: [[001384a0, 00138aab]]

void FUN_001384a0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong unaff_x24;
  int unaff_w25;
  int unaff_w29;
  int local_80;
  ulong local_78;
  byte local_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x6d7ce54d;
  iVar3 = 0x604af433;
  if (param_3 != (undefined1 *)0x0) {
    iVar1 = -0x426d167d;
    iVar3 = 0x55811608;
  }
  iVar4 = -0x4996a3f7;
LAB_0013857c:
  while (iVar7 = iVar4, iVar4 = iVar7, iVar7 < 0x29fd13e8) {
    iVar4 = iVar1;
    if (iVar7 < -0x361d1dd0) {
      if (iVar7 < -0x4996a3f7) {
        if (iVar7 == -0x6ddecf57) {
          if (unaff_w25 != 2) goto LAB_00138944;
        }
        else {
          if (iVar7 == -0x6d7ce54d) goto LAB_0013856c;
          iVar4 = iVar7;
          if (iVar7 == -0x58b959bb) {
            uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719f)])(param_2);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37191)])(param_1,uVar5 >> 1);
            local_78 = 0;
            iVar4 = 0x44645ee8;
          }
        }
      }
      else {
        iVar4 = iVar3;
        if (iVar7 != -0x4996a3f7) {
          if (iVar7 == -0x426d167d) {
            *param_3 = 1;
            iVar4 = -0x6d7ce54d;
          }
          else {
            iVar4 = iVar7;
            if (iVar7 == -0x3d7aad73) {
LAB_00138838:
              iVar4 = 0x62216d08;
            }
          }
        }
      }
    }
    else if (iVar7 < -0x17b9b06) {
      if (iVar7 == -0x361d1dd0) {
        unaff_w25 = 2;
        iVar4 = -0x6ddecf57;
      }
      else if (iVar7 == -0x3234b809) {
        local_6c[0] = (byte)unaff_w29 | (byte)(local_80 << 4);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(param_1,local_6c);
        unaff_w25 = 0;
        iVar4 = 0x1fc17c5b;
      }
      else {
        iVar4 = iVar7;
        if (iVar7 == -0x1d303cfc) {
LAB_00138944:
          iVar4 = -0x17b9b06;
          if ((unaff_x24 & 1) == 0) {
            iVar4 = 0x29fd13e8;
          }
        }
      }
    }
    else if (iVar7 != 0xa9b4f4) {
      if (iVar7 == 0x1fc17c5b) {
        if (unaff_w25 != 2) {
          if (unaff_w25 == 0) goto LAB_00138838;
          goto LAB_00138944;
        }
      }
      else {
        iVar4 = iVar7;
        if (iVar7 == -0x17b9b06) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  }
  if (iVar7 < 0x55a4e9ee) {
    if (0x43a6d098 < iVar7) {
      if (iVar7 == 0x43a6d099) {
        iVar4 = 0x55a4e9ee;
        if (-1 < unaff_w29) {
          iVar4 = -0x3234b809;
        }
      }
      else if (iVar7 == 0x44645ee8) {
        uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719f)])(param_2);
        iVar4 = 0x60e0e5cb;
        if (uVar5 <= local_78) {
          iVar4 = -0x361d1dd0;
        }
      }
      else if (iVar7 == 0x55811608) {
        *param_3 = 0;
        iVar4 = 0x604af433;
      }
      goto LAB_0013857c;
    }
    if (iVar7 == 0x29fd13e8) {
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(param_1);
      iVar4 = -0x17b9b06;
      goto LAB_0013857c;
    }
    if (iVar7 != 0x2aafe0f7) goto LAB_0013857c;
  }
  else {
    if (0x60e0e5ca < iVar7) {
      if (iVar7 == 0x60e0e5cb) {
        unaff_x24 = unaff_x24 & 0xffffffff;
        puVar6 = (undefined1 *)
                 (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371fb)])(param_2,local_78);
        local_80 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371fa)])(*puVar6);
        puVar6 = (undefined1 *)
                 (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371fb)])
                           (param_2,local_78 + 1);
        unaff_w29 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371fa)])(*puVar6);
        iVar4 = 0x55a4e9ee;
        if (-1 < local_80) {
          iVar4 = 0x43a6d099;
        }
      }
      else if (iVar7 == 0x62216d08) {
        local_78 = local_78 + 2;
        iVar4 = 0x44645ee8;
      }
      else if (iVar7 == 0x6d709b27) {
        uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719f)])(param_2);
        iVar4 = -0x58b959bb;
        if ((uVar5 & 1) != 0) {
          iVar4 = 0x57d10082;
        }
      }
      goto LAB_0013857c;
    }
    if (iVar7 == 0x55a4e9ee) {
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371fd)])(param_1);
      unaff_x24 = 1;
      unaff_w25 = 1;
      iVar4 = 0x1fc17c5b;
      goto LAB_0013857c;
    }
    if (iVar7 != 0x57d10082) {
      if (iVar7 == 0x604af433) {
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719e)])(param_1);
        uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37199)])(param_2);
        unaff_x24 = 0;
        iVar4 = 0x2aafe0f7;
        if ((uVar5 & 1) == 0) {
          iVar4 = 0x6d709b27;
        }
      }
      goto LAB_0013857c;
    }
  }
LAB_0013856c:
  unaff_x24 = 1;
  unaff_w25 = 1;
  iVar4 = -0x1d303cfc;
  goto LAB_0013857c;
}


