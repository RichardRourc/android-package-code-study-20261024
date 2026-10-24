// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001732d8; body: [[001732d8, 001732fb]]

void FUN_001732d8(long *param_1,long param_2,long param_3)

{
  *param_1 = param_2;
  param_1[1] = *(long *)(param_2 + 8);
  param_1[2] = *(long *)(param_2 + 8) + param_3 * 0x30;
  return;
}


