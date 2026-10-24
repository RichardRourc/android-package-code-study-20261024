// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016a2c0; body: [[0016a2c0, 0016a34b]]

void FUN_0016a2c0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b7f)])
                    ((param_2 - param_1 >> 3) * -0x5555555555555555);
                    /* WARNING: Could not recover jumptable at 0x0016a348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b7c)])
            (param_1,param_2,param_3,lVar1 << 1,1);
  return;
}


