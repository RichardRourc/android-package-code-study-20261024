// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c1330; body: [[001c1330, 001c1377]]

void FUN_001c1330(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar1 + 0x11) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 7);
  (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bbc2])(param_1 + 3);
  return;
}


