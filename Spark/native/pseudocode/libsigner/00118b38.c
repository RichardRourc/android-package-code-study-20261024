// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00118b38; body: [[00118b38, 00118b6b]]

void FUN_00118b38(long param_1)

{
  FUN_002083ac(param_1 + 0x20,0x32);
  *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
  return;
}


