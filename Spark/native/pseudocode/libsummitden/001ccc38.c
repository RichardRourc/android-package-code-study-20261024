// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ccc38; body: [[001ccc38, 001ccc9b]]

void FUN_001ccc38(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (0xfffffffffffffff7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_001cc8e4();
  }
  uVar1 = 0x16;
  if ((*param_1 & 1) != 0) {
    uVar1 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  if (uVar1 < param_2) {
    uVar1 = 0x19;
    if ((param_2 | 7) != 0x17) {
      uVar1 = param_2 | 7;
    }
    if (param_2 < 0x17) {
      uVar1 = 0x16;
    }
    FUN_001ccc9c(param_1,uVar1);
    return;
  }
  return;
}


