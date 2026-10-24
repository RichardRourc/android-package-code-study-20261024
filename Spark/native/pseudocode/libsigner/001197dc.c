// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001197dc; body: [[001197dc, 0011980f]]

void FUN_001197dc(long param_1)

{
  FUN_002083ac(param_1 + 0x20,0x36);
  *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
  return;
}


