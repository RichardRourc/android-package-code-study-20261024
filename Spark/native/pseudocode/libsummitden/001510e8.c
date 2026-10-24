// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001510e8; body: [[001510e8, 0015116b]]

void FUN_001510e8(undefined8 *param_1,undefined8 *param_2)

{
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bfc)])();
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bfd)])(param_1,param_2);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


