// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c2c9c; body: [[001c2c9c, 001c2cf7]]

void FUN_001c2c9c(undefined8 param_1)

{
  long lVar1;
  undefined1 uStack_19;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bb18])(param_1,&uStack_19);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


