// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001af870; body: [[001af870, 001af8a7]]

uint FUN_001af870(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b452])();
  return (uVar1 ^ 0xffffffff) & 1;
}


