// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00166570; body: [[00166570, 001665d7]]

long FUN_00166570(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a32)])();
  lVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])(param_1);
  return lVar1 + lVar2 + -1;
}


