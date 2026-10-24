// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165cd4; body: [[00165cd4, 00165cf7]]

undefined8 FUN_00165cd4(int param_1)

{
  if (param_1 - 1U < 3) {
    return *(undefined8 *)(&DAT_0011ef00 + (ulong)(param_1 - 1U) * 8);
  }
  return 0x10;
}


