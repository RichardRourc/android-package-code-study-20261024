// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bb00c; body: [[001bb00c, 001bb087]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001bb00c(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_28 = _UNK_0011ef6a;
  local_30 = _DAT_0011ef62;
  local_20 = 0x4ff17483;
  (*(code *)(&PTR_FUN_002026b0)[(long)DAT_00202f98 ^ 0x1ffffffff28caae6])(&local_30);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


