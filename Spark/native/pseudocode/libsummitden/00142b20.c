// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00142b20; body: [[00142b20, 00142f4f]]

void FUN_00142b20(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  lVar8 = 0x68282443;
  local_70 = param_2;
  local_98[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])();
  lVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712b)])(&local_70,local_98);
  lVar7 = lVar7 + lVar4;
  iVar1 = -0x279f170e;
  if (param_5 < 1) {
    iVar1 = 0x68282443;
  }
  iVar3 = 0x4b8dd518;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar6 = iVar3, iVar6 < -0x1604df6) {
            if (iVar6 < -0x279f170e) {
              iVar3 = 0x68282443;
              if ((iVar6 != -0x764aae47) && (iVar3 = iVar6, iVar6 == -0x43f5eaab)) {
                iVar3 = 0x363fab63;
              }
            }
            else if (iVar6 == -0x279f170e) {
              iVar3 = -0x1604df6;
              if (param_5 <= param_1[2] - param_1[1]) {
                iVar3 = -0x12b67a2c;
              }
            }
            else if (iVar6 == -0x19580bb4) {
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712c)])
                        (param_1,lVar7,lVar8,lVar7 + param_5);
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370f7)])
                        (param_3,unaff_x27,lVar7);
              iVar3 = -0x43f5eaab;
            }
            else {
              iVar3 = iVar6;
              if (iVar6 == -0x12b67a2c) {
                lVar8 = param_1[1];
                unaff_x26 = lVar8 - lVar7;
                iVar3 = 0x3b00b678;
                if (param_5 <= unaff_x26) {
                  iVar3 = 0x60c14080;
                }
              }
            }
          }
          if (0x4b8dd517 < iVar6) break;
          if (iVar6 == -0x1604df6) {
            lVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_1);
            uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37121)])
                              (param_1,lVar4 + param_5);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b6)])
                      (local_98,uVar5,lVar7 - *param_1,param_1 + 2);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370e9)])
                      (local_98,param_3,param_5);
            lVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37123)])
                              (param_1,local_98,lVar7);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a8)])(local_98);
            iVar3 = -0x764aae47;
          }
          else {
            iVar3 = -0x764aae47;
            if ((iVar6 != 0x363fab63) && (iVar3 = iVar6, iVar6 == 0x3b00b678)) {
              unaff_x27 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370f5)])
                                    (param_3,unaff_x26);
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370f4)])
                        (param_1,unaff_x27,param_4,param_5 - unaff_x26);
              iVar3 = -0x19580bb4;
              if (unaff_x26 < 1) {
                iVar3 = -0x43f5eaab;
              }
            }
          }
        }
        iVar3 = iVar1;
      } while (iVar6 == 0x4b8dd518);
      if (iVar6 != 0x60c14080) break;
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712c)])
                (param_1,lVar7,lVar8,lVar7 + param_5);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370f6)])(param_3,param_5,lVar7);
      iVar3 = 0x363fab63;
    }
    iVar3 = iVar6;
  } while (iVar6 != 0x68282443);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ac)])(param_1,lVar7);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


