// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c8bc0; body: [[001c8bc0, 001c8c37]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c8bc0(void)

{
  long lVar1;
  undefined8 local_40;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_38 = _UNK_0011f00a;
  local_40 = _DAT_0011f002;
  uStack_2e = _UNK_0011f014;
  uStack_36 = _DAT_0011f00c;
  uStack_30 = _UNK_0011f012;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1ee3])(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


