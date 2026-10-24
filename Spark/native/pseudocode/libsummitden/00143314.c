// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00143314; body: [[00143314, 0014339b]]

void FUN_00143314(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37157)])(param_2);
                    /* WARNING: Could not recover jumptable at 0x00143370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370e1)])(param_1,uVar1);
  return;
}


