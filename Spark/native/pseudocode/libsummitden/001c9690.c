// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c9690; body: [[001c9690, 001c96cb]]

uint FUN_001c9690(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1ecd])();
  return (uVar1 ^ 0xffffffff) & 1;
}


