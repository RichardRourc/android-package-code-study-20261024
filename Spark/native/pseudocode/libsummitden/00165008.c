// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165008; body: [[00165008, 00165023]]

void FUN_00165008(long *param_1,long param_2,long param_3)

{
  *param_1 = param_2;
  param_1[1] = *(long *)(param_2 + 8);
  param_1[2] = *(long *)(param_2 + 8) + param_3 * 8;
  return;
}


