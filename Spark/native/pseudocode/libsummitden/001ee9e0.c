// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ee9e0; body: [[001ee9e0, 001eea0f]]

char * FUN_001ee9e0(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00120a34 + *(int *)(&DAT_00120a34 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


