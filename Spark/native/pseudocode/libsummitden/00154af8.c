// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00154af8; body: [[00154af8, 00154b87]]

void FUN_00154af8(long param_1,long param_2)

{
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be9)])();
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be9)])(param_1 + 8,param_2 + 8);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be9)])(param_1 + 0x10,param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00154b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a4a)])(param_1 + 0x10,param_2 + 0x10);
  return;
}


