// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015caf4; body: [[0015caf4, 0015cb2f]]

uint FUN_0015caf4(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52a8d])();
  return (uVar1 ^ 0xffffffff) & 1;
}


