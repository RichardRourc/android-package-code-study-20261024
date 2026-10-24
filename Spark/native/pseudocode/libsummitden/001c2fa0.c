// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c2fa0; body: [[001c2fa0, 001c2fdb]]

bool FUN_001c2fa0(void)

{
  long *plVar1;
  
  plVar1 = (long *)(*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bb13])();
  return *plVar1 == 0;
}


