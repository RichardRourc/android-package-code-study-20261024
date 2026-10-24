// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00119aa4; body: [[00119aa4, 00119ad7]]

void FUN_00119aa4(long param_1)

{
  FUN_002083ac(param_1 + 0x20,0x3b);
  *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
  return;
}


