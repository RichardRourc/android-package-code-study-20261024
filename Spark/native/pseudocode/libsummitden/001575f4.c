// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001575f4; body: [[001575f4, 0015767f]]

void FUN_001575f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b0e)])(param_2);
  uVar2 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b27)])(param_2);
                    /* WARNING: Could not recover jumptable at 0x0015767c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8afb)])(param_1,uVar1,uVar2);
  return;
}


