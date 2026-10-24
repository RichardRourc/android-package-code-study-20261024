// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c97ac; body: [[001c97ac, 001c9823]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c97ac(void)

{
  long lVar1;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_38 = _UNK_0011f11b;
  local_40 = _DAT_0011f113;
  uStack_2c = _UNK_0011f127;
  uStack_34 = _DAT_0011f11f;
  uStack_30 = _UNK_0011f123;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1e88])(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


