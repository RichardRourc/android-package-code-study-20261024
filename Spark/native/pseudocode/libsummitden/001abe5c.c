// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001abe5c; body: [[001abe5c, 001abfab]]

undefined8 FUN_001abe5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  long local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49c)])();
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b40d)])(param_1,lVar2 + 1);
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49c)])(param_1);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49d)])
            (auStack_70,uVar3,uVar4,param_1 + 0x10);
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48b)])(local_60);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4fa)])(param_1 + 0x10,uVar3,param_2);
  local_60 = local_60 + 0x38;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b492)])(param_1,auStack_70);
  uVar3 = *(undefined8 *)(param_1 + 8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b493)])(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


