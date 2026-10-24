// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001be008; body: [[001be008, 001be077]]

void FUN_001be008(void)

{
  long lVar1;
  undefined4 local_20;
  undefined1 local_1c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_1c = 0xc9;
  local_20 = 0xdc2bf7e9;
  (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bbd4])(&local_20);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


