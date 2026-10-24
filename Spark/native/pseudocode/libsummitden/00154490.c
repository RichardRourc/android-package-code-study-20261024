// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00154490; body: [[00154490, 001544d7]]

long FUN_00154490(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (*(code *)(&PTR_FUN_001fc070)[(long)DAT_001fcf68 ^ 0x283c8a68])();
  return param_1 + (param_2 - lVar1);
}


