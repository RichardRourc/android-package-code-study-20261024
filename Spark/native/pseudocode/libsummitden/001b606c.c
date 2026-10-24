// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b606c; body: [[001b606c, 001b60e7] [001b61b0, 001b61b3]]

void FUN_001b606c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49c)])();
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b736)])(param_1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x001b60e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b737)])(param_1,uVar1);
  return;
}


