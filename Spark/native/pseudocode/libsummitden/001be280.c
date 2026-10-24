// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001be280; body: [[001be280, 001be2cf]]

bool FUN_001be280(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bbef])
                    (0x30,0xffffffffffffff9c,param_1,0,0,0);
  return lVar1 == 0;
}


