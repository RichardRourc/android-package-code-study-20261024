// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001afad0; body: [[001afad0, 001afb33]]

long FUN_001afad0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b449)])();
  lVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b449)])(param_2);
  return lVar1 - lVar2 >> 3;
}


