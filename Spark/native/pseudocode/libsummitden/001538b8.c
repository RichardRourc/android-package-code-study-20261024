// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001538b8; body: [[001538b8, 0015391b]]

bool FUN_001538b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a04)])();
  lVar2 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a04)])(param_2);
  return lVar1 == lVar2;
}


