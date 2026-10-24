// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001448dc; body: [[001448dc, 00144957]]

void FUN_001448dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b28)])();
  uVar1 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b29)])(param_2);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2a)])(param_1,param_2,uVar1);
  return;
}


