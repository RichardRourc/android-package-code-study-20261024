// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b6d0c; body: [[001b6d0c, 001b6d3b]]

void FUN_001b6d0c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x001b6d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_002026b0)[(long)DAT_00202f98 ^ 0x1ffffffff28caa1d])(param_2);
  return;
}


