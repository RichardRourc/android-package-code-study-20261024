// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0011adb8; body: [[0011adb8, 0011b2a3]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011adb8(undefined4 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *unaff_x23;
  long *plVar4;
  long unaff_x24;
  int unaff_w25;
  undefined4 unaff_w27;
  long local_80;
  undefined4 *local_78;
  long *local_70;
  long local_68;
  
  plVar4 = &local_80;
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  lVar1 = 0x3b36a7a007b21166;
  local_78 = param_1;
  local_70 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar3 = lVar1, lVar1 = lVar3, lVar3 < 0x49b9b00eeff4c15a) {
            if (lVar3 < -0x124103c739306402) {
              lVar1 = 0x77f0428eaa711148;
              if (((lVar3 != -0x579a549dca8d1ccf) &&
                  (lVar1 = 0x49b9b00eeff4c15a, lVar3 != -0x45704382c9dcec73)) &&
                 (lVar1 = lVar3, lVar3 == -0x3768c81d078975fb)) {
                lVar1 = 0x312910f1547c7c77;
              }
            }
            else if (lVar3 < 0x312910f1547c7c77) {
              if (lVar3 == -0x124103c739306402) {
                *local_78 = unaff_w27;
                lVar1 = 0x77f0428eaa711148;
              }
              else if (lVar3 == 0x52cde6c2dea1be4) {
                DAT_0021c050 = DAT_0021c050 ^ 0x36;
                DAT_0021c052 = DAT_0021c052 ^ 0x36;
                DAT_0021c051 = DAT_0021c051 ^ 0x36;
                _DAT_0021c040 = _DAT_0021c040 ^ 0x3636363636363636;
                uRam000000000021c048 = uRam000000000021c048 ^ 0x3636363636363636;
                DAT_0021f1b1 = '\x01';
                lVar1 = 0x49b9b00eeff4c15a;
              }
            }
            else if (lVar3 == 0x312910f1547c7c77) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f1b0);
              lVar1 = 0x7d8bf94548220fb8;
              if (iVar2 != 0) {
                lVar1 = -0x3768c81d078975fb;
              }
            }
            else if (lVar3 == 0x3b36a7a007b21166) {
              lVar1 = 0x312910f1547c7c77;
            }
          }
          if (0x75df443d79079720 < lVar3) break;
          if (lVar3 < 0x58b842c6f86d5804) {
            if (lVar3 == 0x49b9b00eeff4c15a) {
              plVar4 = (long *)((long)plVar4 + -0x1000);
              DAT_0021f1b0 = 0;
              unaff_w25 = FUN_001f351c(&DAT_0021c040,0);
              lVar1 = 0x5ece82223eee3411;
              unaff_x23 = (undefined1 *)plVar4;
              if (unaff_w25 != -1) {
                lVar1 = 0x58b842c6f86d5804;
              }
            }
            else if (lVar3 == 0x5039187a35dab08d) {
              unaff_w27 = 2;
              lVar1 = -0x124103c739306402;
            }
          }
          else if (lVar3 == 0x58b842c6f86d5804) {
            unaff_x24 = FUN_001f3a88(unaff_w25,unaff_x23,0xfff);
            FUN_001f3aa0(unaff_w25);
            lVar1 = 0x7e713fa43f38c582;
            if (unaff_x24 != 0) {
              lVar1 = 0x75df443d79079721;
            }
          }
          else if (lVar3 == 0x5ece82223eee3411) {
            unaff_w27 = 8;
            lVar1 = -0x124103c739306402;
          }
        }
        if (lVar3 < 0x7d8bf94548220fb8) break;
        if (lVar3 == 0x7d8bf94548220fb8) {
          lVar1 = -0x45704382c9dcec73;
          if (DAT_0021f1b1 == '\0') {
            lVar1 = 0x52cde6c2dea1be4;
          }
        }
        else if (lVar3 == 0x7e713fa43f38c582) {
          unaff_w27 = 0xc;
          lVar1 = -0x124103c739306402;
        }
      }
      if (lVar3 != 0x75df443d79079721) break;
      lVar3 = FUN_001e53f4(unaff_x23,unaff_x24);
      lVar1 = 0x5039187a35dab08d;
      if (lVar3 != 0) {
        lVar1 = -0x579a549dca8d1ccf;
      }
      *local_70 = lVar3;
    }
  } while (lVar3 != 0x77f0428eaa711148);
  if (*(long *)(local_80 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


