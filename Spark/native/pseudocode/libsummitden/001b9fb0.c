// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b9fb0; body: [[001b9fb0, 001b9fe3]]

uint FUN_001b9fb0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + param_2 * -0x61c88647 + 0x165667b1;
  uVar1 = uVar1 ^ uVar1 * 0x2000;
  return param_2 * 0x1f + 7U ^ (uVar1 ^ uVar1 << 5) >> 0x18;
}


