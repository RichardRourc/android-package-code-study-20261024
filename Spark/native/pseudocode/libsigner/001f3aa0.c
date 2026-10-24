// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f3aa0; body: [[001f3aa0, 001f3abb]]

void FUN_001f3aa0(ulong param_1)

{
  syscall(0x39,param_1 & 0xffffffff);
  return;
}


