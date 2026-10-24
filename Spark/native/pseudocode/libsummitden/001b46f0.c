// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b46f0; body: [[001b46f0, 001b483f]]

void FUN_001b46f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_88 = param_7;
  uStack_80 = param_8;
  local_78 = param_5;
  uStack_70 = param_6;
  local_68 = param_3;
  uStack_60 = param_4;
  while( true ) {
    iVar4 = -0x40e2f75c;
    while (iVar4 == -0x40e2f75c) {
      uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b78f)])(&local_68,&local_78);
      iVar4 = 0x1490ced5;
      if ((uVar2 & 1) == 0) {
        iVar4 = 0x45e039e1;
      }
    }
    if (iVar4 != 0x1490ced5) break;
    puVar3 = (undefined8 *)
             (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b787)])(&local_68);
    uVar5 = *puVar3;
    puVar3 = (undefined8 *)
             (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b782)])(&local_88);
    *puVar3 = uVar5;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b784)])(&local_68);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b786)])(&local_88);
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7da)])(param_1,&local_68,&local_88);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


