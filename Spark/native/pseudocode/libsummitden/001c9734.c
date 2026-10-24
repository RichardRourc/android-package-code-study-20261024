// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c9734; body: [[001c9734, 001c97ab]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c9734(void)

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
  uStack_38 = _UNK_0011f101;
  local_40 = _DAT_0011f0f9;
  uStack_2e = _UNK_0011f10b;
  uStack_36 = _DAT_0011f103;
  uStack_30 = _UNK_0011f109;
  (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1e89])(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


