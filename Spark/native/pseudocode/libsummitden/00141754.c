// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00141754; body: [[00141754, 00141bdf]]

void FUN_00141754(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  long lVar9;
  undefined8 local_a0;
  undefined8 local_98 [5];
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  lVar8 = 0xdcc3712c;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar7 = *param_1;
  lVar9 = 0x883b4827;
  local_70 = param_2;
  local_98[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])();
  lVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712b)])(&local_70,local_98);
  lVar7 = lVar7 + lVar4;
  iVar1 = 0x31c5b5cf;
  if (param_5 < 1) {
    iVar1 = -0x77c4b7d9;
  }
  iVar3 = -0x4274925a;
  do {
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar3 = iVar6, -0xa4165c8 < iVar6) {
          if (iVar6 < 0x83fbf03) {
            if (iVar6 == -0xa4165c7) {
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712c)])
                        (param_1,lVar7,lVar8,lVar7 + param_5);
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370d0)])
                        (param_3,param_5,lVar7);
              iVar3 = 0x4aac7b4;
            }
            else if (iVar6 == 0x4aac7b4) {
              iVar3 = -0x1872f020;
            }
          }
          else if (iVar6 == 0x83fbf03) {
            lVar8 = param_1[1];
            lVar9 = lVar8 - lVar7;
            iVar3 = -0xbfe11ee;
            if (param_5 <= lVar9) {
              iVar3 = -0xa4165c7;
            }
          }
          else if (iVar6 == 0x31c5b5cf) {
            iVar3 = -0x5cda8fbd;
            if (param_5 <= param_1[2] - param_1[1]) {
              iVar3 = 0x83fbf03;
            }
          }
          else if (iVar6 == 0x5146ac86) {
            iVar3 = 0x4aac7b4;
          }
        }
        if (iVar6 < -0x1872f020) break;
        iVar3 = -0x77c4b7d9;
        if (iVar6 != -0x1872f020) {
          if (iVar6 == -0xd4a9188) {
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3712c)])
                      (param_1,lVar7,lVar8,lVar7 + param_5);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370d1)])(param_3,local_a0,lVar7)
            ;
            iVar3 = 0x5146ac86;
          }
          else {
            iVar3 = iVar6;
            if (iVar6 == -0xbfe11ee) {
              local_a0 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370df)])
                                   (param_3,lVar9);
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370de)])
                        (param_1,local_a0,param_4,param_5 - lVar9);
              iVar3 = -0xd4a9188;
              if (lVar9 < 1) {
                iVar3 = 0x5146ac86;
              }
            }
          }
        }
      }
      if (iVar6 != -0x5cda8fbd) break;
      lVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_1);
      uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37121)])
                        (param_1,lVar4 + param_5);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b6)])
                (local_98,uVar5,lVar7 - *param_1,param_1 + 2);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370d3)])(local_98,param_3,param_5);
      lVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37123)])
                        (param_1,local_98,lVar7);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a8)])(local_98);
      iVar3 = -0x1872f020;
    }
    iVar3 = iVar1;
  } while ((iVar6 == -0x4274925a) || (iVar3 = iVar6, iVar6 != -0x77c4b7d9));
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ac)])(param_1,lVar7);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


