// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00143e18; body: [[00143e18, 00143e87]]

void FUN_00143e18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37157)])(param_2);
                    /* WARNING: Could not recover jumptable at 0x00143e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3701d)])(param_1,uVar1);
  return;
}


