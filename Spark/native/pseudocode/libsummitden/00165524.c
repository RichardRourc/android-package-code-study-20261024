// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165524; body: [[00165524, 0016556f]]

long FUN_00165524(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52bee])();
  return param_1 + (param_2 - lVar1);
}


