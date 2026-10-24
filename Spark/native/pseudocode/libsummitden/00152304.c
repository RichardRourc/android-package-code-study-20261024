// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00152304; body: [[00152304, 0015233b]]

uint FUN_00152304(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fc070)[(long)DAT_001fcf68 ^ 0x283c8a22])();
  return (uVar1 ^ 0xffffffff) & 1;
}


