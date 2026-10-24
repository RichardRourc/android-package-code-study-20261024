// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c93c0; body: [[001c93c0, 001c9433]]

void FUN_001c93c0(void)

{
  long lVar1;
  undefined4 local_20;
  undefined1 local_1c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_1c = 0x8a;
  local_20 = 0x2ea82cc8;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1e8d])(&local_20);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


