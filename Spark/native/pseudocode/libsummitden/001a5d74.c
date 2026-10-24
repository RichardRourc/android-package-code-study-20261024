// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a5d74; body: [[001a5d74, 001a5dab]]

uint FUN_001a5d74(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b5af])();
  return (uVar1 ^ 0xffffffff) & 1;
}


