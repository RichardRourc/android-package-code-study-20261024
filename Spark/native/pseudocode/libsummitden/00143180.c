// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00143180; body: [[00143180, 00143313]]

void FUN_00143180(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long local_88;
  long lStack_80;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = param_2;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3715c)])(&local_88,param_1 + 0x10);
  do {
    uVar4 = 0xfe2a2c3;
    while( true ) {
      while (uVar4 < 0x232c0496) {
        if (uVar4 != 0xfe2a2c3) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3715f)])(&local_88);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        uVar4 = 0x1f84ffc4;
        if (local_88 != lStack_80) {
          uVar4 = 0x67871177;
        }
      }
      if (uVar4 == 0x232c0496) break;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f5)])(local_88);
      uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ec)])(&local_70);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ef)])(uVar5,uVar2,uVar3);
      uVar4 = 0x232c0496;
    }
    local_88 = local_88 + 1;
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ee)])(&local_70);
  } while( true );
}


