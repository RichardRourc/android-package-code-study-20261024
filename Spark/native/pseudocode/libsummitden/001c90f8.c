// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c90f8; body: [[001c90f8, 001c916f]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c90f8(void)

{
  long lVar1;
  undefined8 local_40;
  undefined3 uStack_38;
  undefined5 uStack_35;
  undefined3 uStack_30;
  undefined8 uStack_2d;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_38 = _UNK_0011f07f;
  local_40 = _DAT_0011f077;
  uStack_2d = _UNK_0011f08a;
  uStack_35 = _DAT_0011f082;
  uStack_30 = _UNK_0011f087;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1e93])(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


