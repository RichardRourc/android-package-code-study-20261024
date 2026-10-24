// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001be2d0; body: [[001be2d0, 001be347]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001be2d0(void)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined4 local_21;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_38 = _UNK_0011ef8c;
  local_40 = _DAT_0011ef84;
  uStack_28 = (undefined7)_UNK_0011ef9c;
  uStack_30 = _DAT_0011ef94;
  local_21 = 0x9ab7d283;
  (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bbee])(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


