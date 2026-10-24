// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017d1bc; body: [[0017d1bc, 0017d1eb]]

ulong tick_make(int param_1)

{
  return (long)param_1 + 0x6db499d5U ^ ((long)param_1 + 0x6db499d5U) * 8;
}


