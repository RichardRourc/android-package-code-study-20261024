// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001781f0; body: [[001781f0, 00178743]]

void FUN_001781f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined1 auStack_a8 [48];
  long local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar11 = (param_4 - param_1 >> 4) * -0x5555555555555555;
  iVar3 = -0x300c195e;
  if (1 < param_3) {
    iVar3 = -0x6849d2d2;
  }
  lVar9 = (param_3 + -2) / 2;
  iVar10 = 0x779b48ef;
  local_70 = param_4;
LAB_001782e8:
  do {
    iVar7 = iVar10;
    iVar10 = iVar7;
    if (iVar7 < 0x1a51d33d) {
      if (-0x2adbc660 < iVar7) {
        if (iVar7 < -0x255a8fe2) {
          iVar10 = -0x26a5f340;
          if ((iVar7 != -0x2adbc65f) && (iVar10 = iVar7, iVar7 == -0x26a5f340)) {
            iVar10 = 0x1a51d33d;
          }
        }
        else if (iVar7 == -0x255a8fe2) {
          uVar11 = uVar11 + 1;
          local_78 = local_78 + 0x30;
          iVar10 = -0x522bbfd4;
        }
        else if (iVar7 == -0xbbac0b8) {
          uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_70);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f4)])(auStack_a8,uVar6);
          iVar10 = 0x63d84e99;
        }
        else if (iVar7 == 0xe21c044) {
          iVar10 = 0x29d6fc40;
        }
        goto LAB_001782e8;
      }
      if (-0x522bbfd5 < iVar7) {
        if (iVar7 == -0x522bbfd4) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                            (param_2,local_78,local_70);
          iVar10 = -0x2adbc65f;
          if ((uVar5 & 1) == 0) {
            iVar10 = -0xbbac0b8;
          }
        }
        else if (iVar7 == -0x300c195e) {
          iVar10 = 0x1a51d33d;
        }
        goto LAB_001782e8;
      }
      if (iVar7 == -0x71fed151) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_2,local_78,local_78 + 0x30);
        iVar10 = -0x255a8fe2;
        if ((uVar5 & 1) == 0) {
          iVar10 = -0x522bbfd4;
        }
        goto LAB_001782e8;
      }
      if (iVar7 == -0x6849d2d2) {
        iVar10 = -0x300c195e;
        if ((long)uVar11 <= lVar9) {
          iVar10 = 0x743b15b9;
        }
        goto LAB_001782e8;
      }
      iVar8 = -0x7b4a04a9;
    }
    else {
      if (0x743b15b8 < iVar7) {
        if (0x7778bbec < iVar7) {
          if (iVar7 == 0x7778bbed) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(local_70,auStack_a8);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_a8);
            iVar10 = -0x26a5f340;
          }
          else {
            iVar10 = iVar3;
            if ((iVar7 != 0x779b48ef) && (iVar10 = iVar7, iVar7 == 0x78f39c59)) {
              uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                                (param_2,local_78,local_78 + 0x30);
              iVar10 = 0x26df8de0;
              if ((uVar5 & 1) == 0) {
                iVar10 = 0xe21c044;
              }
            }
          }
          goto LAB_001782e8;
        }
        if (iVar7 == 0x743b15b9) {
          lVar1 = uVar11 * 2 + 2;
          lVar2 = lVar1 - param_3;
          iVar10 = -0x71fed151;
          iVar7 = -0x522bbfd4;
        }
        else {
          if (iVar7 != 0x750f317d) goto LAB_001782e8;
          lVar1 = uVar11 * 2 + 2;
          lVar2 = lVar1 - param_3;
          iVar10 = 0x78f39c59;
          iVar7 = 0xe21c044;
        }
        uVar11 = uVar11 << 1 | 1;
        local_78 = param_1 + uVar11 * 0x30;
        if (lVar2 < 0 == SBORROW8(lVar1,param_3)) {
          iVar10 = iVar7;
        }
        goto LAB_001782e8;
      }
      if (0x29d6fc3f < iVar7) {
        if (iVar7 == 0x29d6fc40) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                            (param_2,local_78,auStack_a8);
          iVar10 = 0x7778bbed;
          if ((uVar5 & 1) == 0) {
            iVar10 = 0x63d84e99;
          }
        }
        else if (iVar7 == 0x63d84e99) {
          uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_78);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(local_70,uVar6);
          local_70 = local_78;
          iVar10 = 0x2350f159;
          if ((long)uVar11 <= lVar9) {
            iVar10 = 0x750f317d;
          }
        }
        goto LAB_001782e8;
      }
      iVar10 = 0x7778bbed;
      if (iVar7 == 0x2350f159) goto LAB_001782e8;
      if (iVar7 == 0x26df8de0) {
        uVar11 = uVar11 + 1;
        local_78 = local_78 + 0x30;
        iVar10 = 0xe21c044;
        goto LAB_001782e8;
      }
      iVar8 = 0x1a51d33d;
    }
    iVar10 = iVar7;
    if (iVar7 == iVar8) {
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


