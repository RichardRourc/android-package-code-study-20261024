// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013e7b8; body: [[0013e7b8, 0013e7c3]]

uint FUN_0013e7b8(uint param_1,int param_2)

{
  return param_1 >> (-param_2 & 0x1fU) | param_1 << 0x20 - (-param_2 & 0x1fU);
}


