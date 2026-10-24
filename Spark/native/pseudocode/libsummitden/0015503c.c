// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015503c; body: [[0015503c, 001550c3]]

void FUN_0015503c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a4e)])();
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a57)])(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x001550c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a58)])(param_1,uVar1);
  return;
}


