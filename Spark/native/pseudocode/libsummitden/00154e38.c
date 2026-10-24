// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00154e38; body: [[00154e38, 00154e67]]

long FUN_00154e38(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ *param_1 >> 0xc;
  uVar1 = uVar1 ^ uVar1 << 0x19;
  uVar1 = uVar1 ^ uVar1 >> 0x1b;
  *param_1 = uVar1;
  return uVar1 * 0x2545f4914f6cdd1d;
}


