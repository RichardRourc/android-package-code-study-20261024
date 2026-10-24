// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002104e8; body: [[002104e8, 00210503]]

int FUN_002104e8(long param_1)

{
  return *(int *)(param_1 + 0x10) -
         *(int *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x14) - 1) * 4);
}


