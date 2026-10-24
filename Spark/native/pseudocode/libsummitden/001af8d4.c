// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001af8d4; body: [[001af8d4, 001afacf]]

void FUN_001af8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_2;
  uStack_70 = param_1;
  lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b453)])(&local_78,&uStack_70);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b450)])(auStack_88);
  local_b0[0] = 0;
  local_a0 = 0;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b451)])(&local_98,local_b0,&local_a0);
  iVar1 = -0x3764a7f6;
  if (lVar4 < 0x81) {
    iVar1 = -0x488ae0e5;
  }
  iVar6 = -0x2ca8ef53;
  do {
    while (iVar6 == -0x3764a7f6) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b456)])(local_b0,lVar4);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b457)])(auStack_88,local_b0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b454)])(local_b0);
      local_98 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b455)])(auStack_88);
      puVar5 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44a)])(auStack_88);
      local_90 = *puVar5;
      iVar6 = -0x488ae0e5;
    }
    bVar3 = iVar6 == -0x2ca8ef53;
    iVar6 = iVar1;
  } while (bVar3);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44b)])
            (uStack_70,local_78,param_3,lVar4,local_98,local_90);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b448)])(uStack_70,local_78,param_3);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b454)])(auStack_88);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


