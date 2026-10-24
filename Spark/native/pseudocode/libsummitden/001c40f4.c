// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c40f4; body: [[001c40f4, 001c4127]]

void FUN_001c40f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar1;
  (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51badf])((long)param_1 + 0x11);
  return;
}


