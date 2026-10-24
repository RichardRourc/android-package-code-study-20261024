// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bdf94; body: [[001bdf94, 001be007]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001bdf94(void)

{
  long lVar1;
  undefined6 local_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_28 = (undefined6)DAT_0011ef76;
  uStack_22 = DAT_0011ef76._6_2_;
  uStack_20 = _UNK_0011ef7e;
  (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bbd5])(&local_28);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


