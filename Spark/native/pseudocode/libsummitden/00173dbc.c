// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00173dbc; body: [[00173dbc, 00173e2f]]

void FUN_00173dbc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_28 = param_2[1];
  local_30 = *param_2;
  local_20 = param_2[2];
  (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a528da])(param_1,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


