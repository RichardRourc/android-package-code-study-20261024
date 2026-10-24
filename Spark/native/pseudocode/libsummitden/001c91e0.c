// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c91e0; body: [[001c91e0, 001c9257]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c91e0(void)

{
  long lVar1;
  undefined7 local_28;
  undefined1 uStack_21;
  undefined7 uStack_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_28 = (undefined7)DAT_0011f092;
  uStack_21 = DAT_0011f092._7_1_;
  uStack_20 = _UNK_0011f09a;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1e91])(&local_28);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


