// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c6098; body: [[001c6098, 001c6113] [001c61e8, 001c61eb]]

void FUN_001c6098(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb6c)])();
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bafc)])(param_1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x001c6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51baf3)])(param_1,uVar1);
  return;
}


