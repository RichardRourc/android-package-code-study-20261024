// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015392c; body: [[0015392c, 00153d63]]

void FUN_0015392c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 local_98 [5];
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar7 = *param_1;
  lVar8 = 0x44b2306;
  local_70 = param_2;
  local_98[0] = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a05)])();
  lVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a06)])(&local_70,local_98);
  lVar7 = lVar7 + lVar4;
  iVar1 = 0x3125c1df;
  if (param_5 < 1) {
    iVar1 = 0x44b2306;
  }
  iVar3 = -0x5c96604;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar3, iVar6 < 0x44b2306) {
            if (iVar6 < -0x5e18fdc) {
              iVar3 = 0x334fdec6;
              if ((iVar6 != -0x1e645495) && (iVar3 = iVar6, iVar6 == -0x1a97800d)) {
                iVar3 = -0x1e645495;
              }
            }
            else if (iVar6 == -0x5e18fdc) {
              lVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1);
              uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b98)])
                                (param_1,lVar4 + param_5);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b99)])
                        (local_98,uVar5,lVar7 - *param_1,param_1 + 2);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a0c)])
                        (local_98,param_3,param_5);
              lVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a0d)])
                                (param_1,local_98,lVar7);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b9c)])(local_98);
              iVar3 = 0x334fdec6;
            }
            else {
              iVar3 = iVar1;
              if ((iVar6 != -0x5c96604) && (iVar3 = iVar6, iVar6 == -0x27f4583)) {
                unaff_x27 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a07)])
                                      (param_3,unaff_x26);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a08)])
                          (param_1,unaff_x27,param_4,param_5 - unaff_x26);
                iVar3 = 0x228f3853;
                if (unaff_x26 < 1) {
                  iVar3 = -0x1a97800d;
                }
              }
            }
          }
          if (iVar6 < 0x3125c1df) break;
          if (iVar6 == 0x3125c1df) {
            iVar3 = -0x5e18fdc;
            if (param_5 <= param_1[2] - param_1[1]) {
              iVar3 = 0x431cbf82;
            }
          }
          else {
            iVar3 = 0x44b2306;
            if ((iVar6 != 0x334fdec6) && (iVar3 = iVar6, iVar6 == 0x431cbf82)) {
              lVar8 = param_1[1];
              unaff_x26 = lVar8 - lVar7;
              iVar3 = -0x27f4583;
              if (param_5 <= unaff_x26) {
                iVar3 = 0x2adaa965;
              }
            }
          }
        }
        if (iVar6 != 0x228f3853) break;
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a09)])
                  (param_1,lVar7,lVar8,lVar7 + param_5);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a0a)])(param_3,unaff_x27,lVar7);
        iVar3 = -0x1a97800d;
      }
      if (iVar6 != 0x2adaa965) break;
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a09)])
                (param_1,lVar7,lVar8,lVar7 + param_5);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a0b)])(param_3,param_5,lVar7);
      iVar3 = -0x1e645495;
    }
    iVar3 = iVar6;
  } while (iVar6 != 0x44b2306);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a27)])(param_1,lVar7);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


