// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001597bc; body: [[001597bc, 00159843]]

void FUN_001597bc(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
            (&DAT_001fd1f7,8,&DAT_002042fc,&DAT_001fd1f7);
                    /* WARNING: Could not recover jumptable at 0x00159840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52adb)])(param_1,param_2,&DAT_001fd1f7);
  return;
}


