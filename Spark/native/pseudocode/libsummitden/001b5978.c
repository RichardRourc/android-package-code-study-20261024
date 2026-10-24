// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b5978; body: [[001b5978, 001b59df]]

void FUN_001b5978(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_20 = param_1;
  (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b793])(&local_20,-param_2);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_20);
}


