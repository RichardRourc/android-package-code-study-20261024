// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c9008; body: [[001c9008, 001c907f]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c9008(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined2 local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_28 = _UNK_0011f05b;
  local_30 = _DAT_0011f053;
  local_20 = 0x2a3a;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1e95])(&local_30);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


