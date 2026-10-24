// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b49a4; body: [[001b49a4, 001b4a27]]

void FUN_001b49a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7d0)])(param_2);
                    /* WARNING: Could not recover jumptable at 0x001b4a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7d1)])(param_1,uVar1);
  return;
}


