// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00176e08; body: [[00176e08, 0017744b]]

undefined1  [16] FUN_00176e08(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  uint unaff_w28;
  undefined1 auVar7 [16];
  ulong local_b8;
  undefined1 local_ac [4];
  undefined1 auStack_a8 [48];
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  local_70 = param_1;
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_70);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f4)])(auStack_a8,uVar4);
  iVar2 = -0xd084ccf;
LAB_00176efc:
  do {
    while (iVar6 = iVar2, iVar2 = iVar6, iVar6 < 0x1bf04ca9) {
      if (iVar6 < -0x3fe90d01) {
        if (iVar6 < -0x49faeebb) {
          if (iVar6 == -0x7b053527) {
            iVar2 = 0x23df7f05;
            if (local_78 <= local_70) {
              iVar2 = -0x49faeebb;
            }
          }
          else {
            iVar2 = 0x5d6042b9;
            if ((iVar6 != -0x6ea4141d) && (iVar2 = iVar6, iVar6 == -0x59a8fe60)) {
LAB_001771c4:
              iVar2 = 0x64688a32;
            }
          }
        }
        else if (iVar6 == -0x49faeebb) {
          local_b8 = local_70 - 0x30;
          iVar2 = 0x621aa485;
          if (param_1 != local_b8) {
            iVar2 = 0x73d8fff0;
          }
        }
        else if (iVar6 == -0x47a3af12) {
          iVar2 = 0x1de978c7;
          if (param_1 != local_70 - 0x30) {
            iVar2 = -0x3e25c6bc;
          }
        }
        else if (iVar6 == -0x40a77f67) {
          local_70 = local_70 + 0x30;
          iVar2 = -0x3fe90d01;
        }
      }
      else if (iVar6 < -0xd084ccf) {
        if (iVar6 == -0x3fe90d01) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                            (param_3,local_70,auStack_a8);
          iVar2 = -0x40a77f67;
          if ((uVar5 & 1) == 0) {
            iVar2 = -0x6ea4141d;
          }
        }
        else if (iVar6 == -0x3ea70b26) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                            (param_3,local_78,auStack_a8);
          iVar2 = 0x779ace6d;
          if ((uVar5 & 1) == 0) {
            iVar2 = 0x5d6042b9;
          }
        }
        else if (iVar6 == -0x3e25c6bc) {
          iVar2 = 0x2b248d54;
        }
      }
      else if (iVar6 == -0xd084ccf) {
        local_70 = local_70 + 0x30;
        iVar2 = -0x5df107c;
      }
      else if (iVar6 == -0x5df107c) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_3,local_70,auStack_a8);
        iVar2 = -0xd084ccf;
        if ((uVar5 & 1) == 0) {
          iVar2 = -0x47a3af12;
        }
      }
      else if (iVar6 == 0x1877e9e6) {
        local_ac[0] = local_78 <= local_70;
        iVar2 = -0x7b053527;
      }
    }
    if (iVar6 < 0x5d6042b9) {
      if (iVar6 < 0x2b248d54) {
        if (iVar6 == 0x1bf04ca9) goto LAB_001771b8;
        if (iVar6 == 0x1de978c7) goto LAB_001771c4;
        if (iVar6 == 0x23df7f05) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_70,&local_78);
          iVar2 = -0x40a77f67;
        }
      }
      else if (iVar6 == 0x2b248d54) {
        local_78 = local_78 - 0x30;
        iVar2 = 0x5c9d2552;
      }
      else if (iVar6 == 0x333e3ec6) {
        iVar2 = -0x59a8fe60;
        if ((unaff_w28 & 1) == 0) {
          iVar2 = 0x1bf04ca9;
        }
      }
      else if (iVar6 == 0x5c9d2552) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_3,local_78,auStack_a8);
        iVar2 = 0x7bd4a183;
        if ((uVar5 & 1) == 0) {
          iVar2 = 0x2b248d54;
        }
      }
      goto LAB_00176efc;
    }
    if (iVar6 < 0x73d8fff0) {
      if (iVar6 < 0x629578af) {
        if (iVar6 == 0x5d6042b9) {
          local_78 = local_78 - 0x30;
          iVar2 = -0x3ea70b26;
        }
        else if (iVar6 == 0x621aa485) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(local_b8,auStack_a8);
          auVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528b8)])
                             (&local_b8,local_ac);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_a8);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          auVar7._8_8_ = auVar7._8_8_ & 0xff;
          return auVar7;
        }
      }
      else if (iVar6 == 0x629578af) {
        local_78 = local_78 - 0x30;
        uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_3,local_78,auStack_a8);
        unaff_w28 = uVar3 ^ 1;
        iVar2 = 0x333e3ec6;
      }
      else if (iVar6 == 0x64688a32) {
        unaff_w28 = 0;
        iVar2 = 0x629578af;
        if (local_78 <= local_70) {
          iVar2 = 0x333e3ec6;
        }
      }
    }
    else if (iVar6 == 0x73d8fff0) {
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_b8);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(param_1,uVar4);
      iVar2 = 0x621aa485;
    }
    else {
      iVar2 = -0x7b053527;
      if ((iVar6 != 0x779ace6d) && (iVar2 = iVar6, iVar6 == 0x7bd4a183)) {
LAB_001771b8:
        iVar2 = 0x1877e9e6;
      }
    }
  } while( true );
}


