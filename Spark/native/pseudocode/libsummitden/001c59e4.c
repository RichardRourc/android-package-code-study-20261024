// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c59e4; body: [[001c59e4, 001c5a1b]]

uint FUN_001c59e4(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bafb])();
  return (uVar1 ^ 0xffffffff) & 1;
}


