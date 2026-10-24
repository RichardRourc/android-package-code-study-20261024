// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016d624; body: [[0016d624, 0016dd23]]

byte FUN_0016d624(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  int unaff_w25;
  byte unaff_w26;
  uint local_a8;
  int local_a4;
  long local_a0;
  undefined1 auStack_98 [24];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_2 - param_1;
  uVar7 = lVar1 - 0x30U >> 3 | lVar1 << 0x3d;
  iVar6 = 0x3f79615d;
  local_78 = param_2;
  local_70 = param_1;
LAB_0016d6c8:
  lVar8 = unaff_x21;
  lVar3 = local_70;
  unaff_x21 = lVar8;
  if (iVar6 < -0x120c72e3) {
    if (-0x3793a250 < iVar6) {
      if (iVar6 < -0x1f453d68) {
        if (iVar6 == -0x3793a24f) {
LAB_0016dc3c:
          local_78 = local_78 + -0x18;
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_3,local_78,local_70);
          iVar6 = -0x7d2fae77;
          if ((uVar5 & 1) == 0) {
            iVar6 = -0x53e4a519;
          }
        }
        else if (iVar6 == -0x2d9c87c8) {
          iVar6 = 0x56e38992;
          if ((local_a8 & 1) == 0) {
            iVar6 = -0x5eae155b;
          }
        }
        else if (iVar6 == -0x26a64fdc) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_3,local_80,lVar8);
          iVar6 = 0x2d7bf809;
          if ((uVar5 & 1) == 0) {
            iVar6 = -0x665d715b;
          }
        }
      }
      else if (iVar6 < -0x133f996a) {
        if (iVar6 == -0x1f453d68) {
          iVar6 = -0x122f8511;
          if (local_80 != local_78) {
            iVar6 = -0x26a64fdc;
          }
        }
        else if (iVar6 == -0x187c4dc9) {
LAB_0016db64:
          iVar6 = -0x6432c45;
        }
      }
      else if (iVar6 == -0x133f996a) {
LAB_0016d6b8:
        unaff_w26 = 1;
        unaff_w25 = 1;
        iVar6 = -0x187c4dc9;
      }
      else if (iVar6 == -0x122f8511) {
        unaff_w25 = 3;
        iVar6 = -0x387cefd9;
      }
      goto LAB_0016d6c8;
    }
    if (iVar6 < -0x5eae155b) {
      if (iVar6 == -0x7d2fae77) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_70,&local_78);
        iVar6 = -0x53e4a519;
        goto LAB_0016d6c8;
      }
      if (iVar6 == -0x665d715b) {
        unaff_x21 = local_80;
        iVar6 = 0x447cc216;
        goto LAB_0016d6c8;
      }
      if (iVar6 != -0x5ecf1724) goto LAB_0016d6c8;
LAB_0016d894:
      local_78 = local_78 + -0x18;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b77)])
                (local_70,local_70 + 0x18,local_70 + 0x30,local_70 + 0x48,local_78,param_3);
    }
    else {
      if (iVar6 < -0x53e4a519) {
        if (iVar6 == -0x5eae155b) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(lVar8,auStack_98);
          local_a4 = local_a4 + 1;
          iVar6 = 0x4c1c06f2;
          if (local_a4 != 8) {
            iVar6 = 0x57dc32e8;
          }
        }
        else if (iVar6 == -0x57859577) {
LAB_0016d718:
          local_78 = local_78 + -0x18;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b76)])
                    (local_70,local_70 + 0x18,local_70 + 0x30,local_78,param_3);
          goto LAB_0016db60;
        }
        goto LAB_0016d6c8;
      }
      if (iVar6 != -0x53e4a519) {
        if (iVar6 == -0x387cefd9) goto LAB_0016dab0;
        goto LAB_0016d6c8;
      }
    }
  }
  else {
    if (iVar6 < 0x2f67ea52) {
      if (iVar6 < 0x6bbfc49) {
        if (iVar6 < -0x6432c45) {
          if (iVar6 == -0x120c72e3) {
            local_a8 = 0;
            iVar6 = -0x2d9c87c8;
            if (lVar8 != local_70) {
              iVar6 = 0x2f67ea52;
            }
          }
          else if (iVar6 == -0xe61b340) {
            iVar6 = -0x665d715b;
          }
        }
        else if (iVar6 == 0x8dfad1) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_98);
          iVar6 = -0x665d715b;
          if (unaff_w25 != 0) {
LAB_0016dab0:
            iVar6 = -0x6432c45;
            if (unaff_w25 == 3) goto LAB_0016d6b8;
          }
        }
        else if (iVar6 == -0x6432c45) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return unaff_w26 & 1;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else {
        if (iVar6 == 0x6bbfc49) goto LAB_0016db60;
        if (iVar6 == 0x22befe49) goto LAB_0016dc8c;
        if (iVar6 == 0x2d7bf809) {
          uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_80);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aad)])(auStack_98,uVar4);
          unaff_x21 = local_80;
          iVar6 = 0x56e38992;
          local_a0 = lVar8;
        }
      }
      goto LAB_0016d6c8;
    }
    if (iVar6 < 0x4c1c06f2) {
      if (iVar6 != 0x2f67ea52) {
        if (iVar6 == 0x3f79615d) {
          if (lVar1 == 0 || lVar1 == 0x18) goto LAB_0016db60;
          if ((long)uVar7 < 6) {
            if (uVar7 == 0) goto LAB_0016dc3c;
            if (uVar7 == 3) goto LAB_0016da50;
          }
          else {
            if (uVar7 == 6) goto LAB_0016d718;
            if (uVar7 == 9) goto LAB_0016d894;
          }
LAB_0016dc8c:
          lVar8 = local_70 + 0x30;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b71)])
                    (local_70,local_70 + 0x18,lVar8,param_3);
          local_80 = lVar3 + 0x48;
          local_a4 = 0;
        }
        else {
          if (iVar6 != 0x447cc216) goto LAB_0016d6c8;
          local_80 = local_80 + 0x18;
        }
        unaff_x21 = lVar8;
        iVar6 = -0x1f453d68;
        goto LAB_0016d6c8;
      }
      local_a0 = local_a0 + -0x18;
      local_a8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                           (param_3,auStack_98);
      iVar6 = -0x2d9c87c8;
      goto LAB_0016d6c8;
    }
    if (iVar6 < 0x57dc32e8) {
      if (iVar6 == 0x4c1c06f2) {
        unaff_w25 = 1;
        local_80 = local_80 + 0x18;
        unaff_w26 = local_80 == local_78;
        iVar6 = 0x8dfad1;
      }
      else if (iVar6 == 0x56e38992) {
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_a0);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(lVar8,uVar4);
        unaff_x21 = local_a0;
        iVar6 = -0x120c72e3;
      }
      goto LAB_0016d6c8;
    }
    if (iVar6 == 0x57dc32e8) {
      unaff_w25 = 0;
      iVar6 = 0x8dfad1;
      goto LAB_0016d6c8;
    }
    if (iVar6 != 0x58e68873) goto LAB_0016d6c8;
LAB_0016da50:
    local_78 = local_78 + -0x18;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b71)])
              (local_70,local_70 + 0x18,local_78,param_3);
  }
LAB_0016db60:
  unaff_w26 = 1;
  goto LAB_0016db64;
}


