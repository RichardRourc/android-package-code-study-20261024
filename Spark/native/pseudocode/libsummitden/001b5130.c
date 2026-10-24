// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b5130; body: [[001b5130, 001b5213]]

undefined8 FUN_001b5130(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_2;
  uStack_40 = param_1;
  local_50 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7cf)])(&local_48,1);
  puVar2 = (undefined8 *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&local_50)
  ;
  uVar3 = *puVar2;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7cc)])(uStack_40,local_50,local_48);
  puVar2 = (undefined8 *)
           (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_40);
  *puVar2 = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return extraout_x1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


