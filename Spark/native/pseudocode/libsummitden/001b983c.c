// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b983c; body: [[001b983c, 001b98c3]]

void FUN_001b983c(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa4f)])(auStack_40,param_1);
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa4e)])(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


