// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c5cdc; body: [[001c5cdc, 001c5d53]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c5cdc(void)

{
  long lVar1;
  undefined8 local_30;
  undefined7 uStack_28;
  undefined4 uStack_21;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_28 = (undefined7)_UNK_0011efd6;
  local_30 = _DAT_0011efce;
  uStack_21 = 0x81760ef7;
  (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51baf8])(&local_30);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


