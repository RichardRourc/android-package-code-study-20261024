// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013b958; body: [[0013b958, 0013bd93]]

void FUN_0013b958(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  lVar8 = 0x4c0bfb2f;
  local_70 = param_2;
  local_98[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])();
  lVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712b)])(&local_70,local_98);
  lVar7 = lVar7 + lVar4;
  iVar1 = -0x2af123bd;
  if (param_5 < 1) {
    iVar1 = 0x4c0bfb2f;
  }
  iVar3 = -0x5a5e938;
  do {
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar6 < -0x5a5e938) {
          if (iVar6 < -0x30481a65) {
            iVar3 = 0xede5319;
            if ((iVar6 != -0x5fb0c613) && (iVar3 = iVar6, iVar6 == -0x5ed80eea)) {
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712c)])
                        (param_1,lVar7,lVar8,lVar7 + param_5);
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712e)])
                        (param_3,param_5,lVar7);
              iVar3 = -0x5fb0c613;
            }
          }
          else if (iVar6 == -0x30481a65) {
            lVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_1);
            uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37121)])
                              (param_1,lVar4 + param_5);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b6)])
                      (local_98,uVar5,lVar7 - *param_1,param_1 + 2);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37120)])
                      (local_98,param_3,param_5);
            lVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37123)])
                              (param_1,local_98,lVar7);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a8)])(local_98);
            iVar3 = 0xede5319;
          }
          else if (iVar6 == -0x2af123bd) {
            iVar3 = -0x30481a65;
            if (param_5 <= param_1[2] - param_1[1]) {
              iVar3 = -0x25655a6a;
            }
          }
          else {
            iVar3 = iVar6;
            if (iVar6 == -0x25655a6a) {
              lVar8 = param_1[1];
              unaff_x26 = lVar8 - lVar7;
              iVar3 = 0x2d1e124c;
              if (param_5 <= unaff_x26) {
                iVar3 = -0x5ed80eea;
              }
            }
          }
        }
        if (0x2d1e124b < iVar6) break;
        iVar3 = iVar1;
        if (((iVar6 != -0x5a5e938) && (iVar3 = 0x4c0bfb2f, iVar6 != 0xede5319)) &&
           (iVar3 = iVar6, iVar6 == 0x132aebbf)) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712c)])
                    (param_1,lVar7,lVar8,lVar7 + param_5);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712f)])(param_3,unaff_x27,lVar7);
          iVar3 = 0x59732623;
        }
      }
      if (iVar6 != 0x2d1e124c) break;
      unaff_x27 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712a)])
                            (param_3,unaff_x26);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712d)])
                (param_1,unaff_x27,param_4,param_5 - unaff_x26);
      iVar3 = 0x132aebbf;
      if (unaff_x26 < 1) {
        iVar3 = 0x59732623;
      }
    }
    iVar3 = -0x5fb0c613;
  } while ((iVar6 == 0x59732623) || (iVar3 = iVar6, iVar6 != 0x4c0bfb2f));
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ac)])(param_1,lVar7);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


