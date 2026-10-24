// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bb43c; body: [[001bb43c, 001bb49b]]

void FUN_001bb43c(long param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab0a)])();
                    /* WARNING: Could not recover jumptable at 0x001bb498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab09)])(param_1 + 0x18,param_3);
  return;
}


