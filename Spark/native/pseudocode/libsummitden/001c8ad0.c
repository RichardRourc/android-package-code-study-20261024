// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c8ad0; body: [[001c8ad0, 001c8b47]]

void FUN_001c8ad0(void)

{
  long lVar1;
  undefined4 uStack_20;
  undefined3 uStack_1c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_1c = 0xf0eba5;
  uStack_20 = 0xa8511941;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1ee5])(&uStack_20);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


