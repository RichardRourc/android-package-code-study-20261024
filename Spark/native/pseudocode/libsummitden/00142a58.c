// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00142a58; body: [[00142a58, 00142abf]]

void FUN_00142a58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_28 = param_2;
  uStack_20 = param_1;
  (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc370f2])(&local_28,&uStack_20);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


