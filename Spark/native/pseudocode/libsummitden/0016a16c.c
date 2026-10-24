// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016a16c; body: [[0016a16c, 0016a1cf]]

void FUN_0016a16c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 local_1c [4];
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_1c[0] = param_3;
  (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52b7a])(param_1,param_2,local_1c);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


