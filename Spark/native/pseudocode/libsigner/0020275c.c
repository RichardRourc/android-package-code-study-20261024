// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0020275c; body: [[0020275c, 002027c3]]

uint FUN_0020275c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x75bd924;
  if (*param_1 != 0) {
    uVar1 = *param_1;
  }
  uVar2 = uVar1 * 0x41a7 + (uVar1 / 0x1f31d) * -0x7fffffff;
  uVar1 = uVar2 + 0x7fffffff;
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return (uint)uVar1 & 0x7fffffff;
}


