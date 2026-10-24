// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e3270; body: [[001e3270, 001e32c7]]

undefined1  [16] FUN_001e3270(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong local_8;
  
  uVar1 = FUN_001d47b0(param_1,&local_8);
  if ((uVar1 & 1) == 0) {
    lVar2 = *param_1;
    if (local_8 <= (ulong)(param_1[1] - lVar2)) {
      *param_1 = lVar2 + local_8;
      goto LAB_001e32b8;
    }
  }
  lVar2 = 0;
  local_8 = 0;
LAB_001e32b8:
  auVar3._8_8_ = local_8;
  auVar3._0_8_ = lVar2;
  return auVar3;
}


