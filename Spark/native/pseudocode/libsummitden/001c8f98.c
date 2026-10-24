// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c8f98; body: [[001c8f98, 001c9007]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c8f98(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_28 = _UNK_0011d7d8;
  local_30 = _DAT_0011d7d0;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1e96])(&local_30);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


