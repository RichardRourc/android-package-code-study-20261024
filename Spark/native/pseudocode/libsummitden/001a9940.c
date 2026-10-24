// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a9940; body: [[001a9940, 001a99e7]]

void FUN_001a9940(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4c3)])(param_1 + 0x10);
  local_48 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b497)])();
  puVar2 = (undefined8 *)
           (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b494)])(&local_40,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*puVar2);
}


