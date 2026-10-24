// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00141e10; body: [[00141e10, 00141f9b]]

void FUN_00141e10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long local_88;
  long lStack_80;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = param_2;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3715c)])(&local_88,param_1 + 0x10);
  iVar4 = 0x7966fd80;
  while( true ) {
    while (0x262b3d7 < iVar4) {
      if (iVar4 == 0x262b3d8) {
        local_88 = local_88 + 1;
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370cb)])(&local_70);
        iVar4 = 0x7966fd80;
      }
      else {
        iVar4 = -0x26634145;
        if (local_88 != lStack_80) {
          iVar4 = -0x21d01dbf;
        }
      }
    }
    if (iVar4 != -0x21d01dbf) break;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f5)])(local_88);
    uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370c9)])(&local_70);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370c8)])(uVar5,uVar2,uVar3);
    iVar4 = 0x262b3d8;
  }
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3715f)])(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


