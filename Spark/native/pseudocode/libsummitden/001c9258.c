// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c9258; body: [[001c9258, 001c92cf]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c9258(void)

{
  long lVar1;
  undefined6 local_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_28 = (undefined6)DAT_0011f0a1;
  uStack_22 = DAT_0011f0a1._6_2_;
  uStack_20 = _UNK_0011f0a9;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1e90])(&local_28);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


