// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c834c; body: [[001c834c, 001c8883]]

void FUN_001c834c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x22;
  byte *unaff_x23;
  int unaff_w27;
  undefined8 local_478;
  undefined8 local_470;
  undefined1 auStack_468 [1024];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef5)])();
  iVar1 = 0x48df2bdc;
  if (-1 < iVar4) {
    iVar1 = 0x42baf757;
  }
  iVar3 = 0x335ace21;
  do {
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar3 = iVar6, iVar6 < 0x30b4b9cb) {
          if (iVar6 < 0x17c114a) {
            if (iVar6 < -0x3656f2d4) {
              if (iVar6 == -0x778084e3) {
                iVar3 = 0x13d54200;
              }
              else if (iVar6 == -0x42f10d56) {
                iVar3 = -0x3656f2d4;
                if (0x5a < *unaff_x23) {
                  iVar3 = -0x778084e3;
                }
              }
              else if (iVar6 == -0x38c1921b) {
                unaff_x22 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef2)])
                                      (iVar4,auStack_468,0x400);
                iVar3 = 0x21e1176e;
                if (0 < unaff_x22) {
                  iVar3 = 0x30b4b9cb;
                }
              }
            }
            else if (iVar6 == -0x3656f2d4) {
              *unaff_x23 = *unaff_x23 + 0x20;
              iVar3 = -0x778084e3;
            }
            else if (iVar6 == -0x311eb436) {
              uVar5 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ed1)])
                                (&local_470,&local_478);
              iVar3 = 0x6f554b5b;
              if ((uVar5 & 1) == 0) {
                iVar3 = 0x183e1a73;
              }
            }
            else if (iVar6 == -0x315d4cee) {
              if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
          else if (iVar6 < 0x183e1a73) {
            if (iVar6 == 0x17c114a) {
              (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
              iVar3 = 0x6389cee8;
            }
            else if (iVar6 == 0x13d54200) {
              (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ecf)])(&local_470);
              iVar3 = -0x311eb436;
            }
          }
          else if (iVar6 == 0x183e1a73) {
            unaff_w27 = 4;
            iVar3 = 0x1f1886e4;
          }
          else if (iVar6 == 0x1f1886e4) {
            unaff_w27 = 1;
            iVar3 = 0x6389cee8;
          }
          else if (iVar6 == 0x21e1176e) {
            unaff_w27 = 3;
            iVar3 = 0x3f78e750;
          }
        }
        if (0x5071ab74 < iVar6) break;
        if (iVar6 < 0x3f78e750) {
          if (iVar6 == 0x30b4b9cb) {
            (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef1)])
                      (param_1,auStack_468,unaff_x22);
            unaff_w27 = 0;
            iVar3 = 0x3f78e750;
          }
          else if (iVar6 == 0x335ace21) {
            iVar3 = iVar1;
          }
        }
        else if (iVar6 == 0x3f78e750) {
          iVar3 = 0x54a8860e;
          if (unaff_w27 != 0) goto LAB_001c8404;
        }
        else if (iVar6 == 0x42baf757) {
          (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
          iVar3 = 0x54a8860e;
        }
        else if (iVar6 == 0x48df2bdc) {
          (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
          unaff_w27 = 1;
          iVar3 = -0x315d4cee;
        }
      }
      if (iVar6 < 0x6389cee8) break;
      iVar3 = -0x315d4cee;
      if (iVar6 != 0x6389cee8) {
        if (iVar6 == 0x68854934) {
LAB_001c8404:
          (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef0)])(iVar4);
          local_470 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ed3)])(param_1);
          local_478 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ed2)])(param_1);
          iVar3 = -0x311eb436;
        }
        else {
          iVar3 = iVar6;
          if (iVar6 == 0x6f554b5b) {
            unaff_x23 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ed0)])
                                          (&local_470);
            iVar3 = -0x42f10d56;
            if (*unaff_x23 < 0x41) {
              iVar3 = -0x778084e3;
            }
          }
        }
      }
    }
    iVar3 = 0x54a8860e;
    if ((iVar6 != 0x5071ab75) && (iVar3 = iVar6, iVar6 == 0x54a8860e)) {
      uVar5 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef3)])(param_1);
      iVar3 = -0x38c1921b;
      if (param_3 <= uVar5) {
        iVar3 = 0x68854934;
      }
    }
  } while( true );
}


