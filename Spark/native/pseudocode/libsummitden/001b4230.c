// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b4230; body: [[001b4230, 001b42d7]]

uint FUN_001b4230(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ed)])();
  local_48 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ed)])(param_2);
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b452)])(&local_40,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


