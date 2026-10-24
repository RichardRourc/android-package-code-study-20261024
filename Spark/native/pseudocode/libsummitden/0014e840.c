// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014e840; body: [[0014e840, 0014e8bb]]

void FUN_0014e840(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b82)])();
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b83)])(param_1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x0014e8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b84)])(param_1,uVar1);
  return;
}


