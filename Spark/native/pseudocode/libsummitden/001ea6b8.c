// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ea6b8; body: [[001ea6b8, 001ea6f3]]

ulong FUN_001ea6b8(ulong param_1)

{
  uint uVar1;
  
  if (DAT_00205ea0 == '\x01') {
    uVar1 = pthread_key_delete(DAT_00205ea4);
    param_1 = (ulong)uVar1;
    DAT_00205ea0 = '\0';
  }
  return param_1;
}


