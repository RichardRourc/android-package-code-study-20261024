// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bb0f8; body: [[001bb0f8, 001bb15b]]

bool FUN_001bb0f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caae4)])();
  lVar2 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caae4)])(param_2);
  return lVar1 == lVar2;
}


