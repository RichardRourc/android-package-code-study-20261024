// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c5c98; body: [[001c5c98, 001c5cdb]]

bool FUN_001c5c98(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bb15])(param_1 + 0x10,8,0x77);
  return lVar1 != 0;
}


