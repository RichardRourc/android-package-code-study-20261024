// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00148dd4; body: [[00148dd4, 001493c7]]

uint FUN_00148dd4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int unaff_w19;
  uint unaff_w23;
  ulong unaff_x25;
  long unaff_x26;
  ulong local_d0;
  long local_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar3 = 0x288acc1c;
  iVar1 = iVar3;
  if (param_4 != 0) {
    iVar1 = 0x6286b237;
  }
  iVar2 = iVar3;
  if (param_1 != 0) {
    iVar2 = 0x7e3f4fe6;
  }
  if (param_2 != 0) {
    iVar3 = 0x48b2719e;
  }
  iVar5 = 0x1e933aa9;
LAB_00148eac:
  do {
    while (iVar8 = iVar5, iVar5 = iVar8, 0x1e933aa8 < iVar8) {
      if (iVar8 < 0x5adb15a2) {
        if (iVar8 < 0x2c962615) {
          iVar5 = iVar2;
          if (iVar8 != 0x1e933aa9) {
            if (iVar8 == 0x288acc1c) {
              unaff_w23 = 0;
              iVar5 = -0x4782f5e2;
            }
            else {
              iVar5 = iVar8;
              if (iVar8 == 0x291ba3cb) {
                local_c0 = unaff_x26 - unaff_x25;
LAB_001492e8:
                iVar5 = -0x4a44176e;
              }
            }
          }
        }
        else if (iVar8 == 0x2c962615) {
          unaff_x26 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b4d)])
                                (param_3,0x7c,unaff_x25);
          iVar5 = -0x7ddfa939;
          local_d0 = unaff_x25;
          if (unaff_x26 != -1) {
            iVar5 = 0x291ba3cb;
          }
        }
        else {
          iVar5 = iVar1;
          if ((iVar8 != 0x359fd015) && (iVar5 = iVar8, iVar8 == 0x48b2719e)) {
            uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(param_3);
            iVar5 = 0x288acc1c;
            if ((uVar7 & 1) == 0) {
              iVar5 = 0x359fd015;
            }
          }
        }
      }
      else if (iVar8 < 0x6ec7ce2a) {
        iVar5 = -0x4782f5e2;
        if (iVar8 != 0x5adb15a2) {
          if (iVar8 == 0x6286b237) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b4c)])(param_4);
            unaff_x25 = 0;
            iVar5 = -0x72a203d9;
          }
          else {
            iVar5 = iVar8;
            if (iVar8 == 0x64008f71) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b06)])(auStack_b0);
              iVar5 = 0x716cee63;
              if (unaff_w19 != 0) {
LAB_00149140:
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(auStack_80);
                if (unaff_w19 == 3) {
LAB_00148e84:
                  uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b50)])(param_4);
                  unaff_w19 = 1;
                  unaff_w23 = uVar6 ^ 1;
                  iVar5 = 0x5adb15a2;
                }
                else {
                  iVar5 = -0x72a203d9;
                  if (unaff_w19 != 0) {
                    iVar5 = -0x4782f5e2;
                  }
                }
              }
            }
          }
        }
      }
      else if (iVar8 == 0x6ec7ce2a) {
        unaff_w19 = 3;
        iVar5 = -0x5efac36c;
      }
      else if (iVar8 == 0x716cee63) {
        iVar5 = 0x6ec7ce2a;
        if (unaff_x26 != -1) {
          iVar5 = -0x47d1a325;
        }
      }
      else if (iVar8 == 0x7e3f4fe6) {
        iVar5 = iVar3;
      }
    }
    if (-0x4a44176f < iVar8) {
      if (iVar8 < -0x3c1d7835) {
        if (iVar8 == -0x4a44176e) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b10)])
                    (auStack_98,param_3,local_d0,local_c0);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b37)])(auStack_80,auStack_98);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(auStack_98);
          uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(auStack_80);
          iVar5 = 0x716cee63;
          if ((uVar7 & 1) == 0) {
            iVar5 = -0x2df6b665;
          }
        }
        else if (iVar8 == -0x47d1a325) {
          unaff_w19 = 0;
          unaff_x25 = unaff_x26 + 1;
          iVar5 = -0x5efac36c;
        }
        else if (iVar8 == -0x4782f5e2) {
          if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return unaff_w23 & 1;
        }
      }
      else {
        if (iVar8 == -0x3c1d7835) goto LAB_00148e84;
        if (iVar8 == -0x2df6b665) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b00)])(auStack_b0);
          uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b4e)])
                            (param_1,param_2,auStack_80,auStack_b0);
          iVar5 = -0x74090a22;
          if ((uVar7 & 1) == 0) {
            iVar5 = -0x1546992;
          }
        }
        else if (iVar8 == -0x1546992) {
          unaff_w23 = 0;
          unaff_w19 = 1;
          iVar5 = 0x64008f71;
        }
      }
      goto LAB_00148eac;
    }
    if (iVar8 < -0x6d680109) {
      if (iVar8 == -0x7ddfa939) {
        local_c0 = -1;
        goto LAB_001492e8;
      }
      if (iVar8 == -0x74090a22) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b4f)])(param_4,auStack_b0);
        unaff_w19 = 0;
        iVar5 = 0x64008f71;
      }
      else if (iVar8 == -0x72a203d9) {
        uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b27)])(param_3);
        iVar5 = -0x3c1d7835;
        if (unaff_x25 <= uVar7) {
          iVar5 = 0x2c962615;
        }
      }
    }
    else {
      iVar5 = -0x72a203d9;
      if (((iVar8 != -0x6d680109) && (iVar5 = 0x716cee63, iVar8 != -0x6b60c656)) &&
         (iVar5 = iVar8, iVar8 == -0x5efac36c)) goto LAB_00149140;
    }
  } while( true );
}


