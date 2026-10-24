// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00116c90; body: [[00116c90, 00116cdf]]

void FUN_00116c90(long param_1)

{
  *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 0x1181c000010e;
  FUN_00162e08();
  *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 0x202001000;
  return;
}


