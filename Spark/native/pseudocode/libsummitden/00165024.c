// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165024; body: [[00165024, 001650d7]]

void FUN_00165024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a16)])(param_2,param_3);
  uVar1 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a17)])(param_4);
  uVar1 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a14)])
                    (param_1,auVar2._0_8_,auVar2._8_8_,uVar1);
                    /* WARNING: Could not recover jumptable at 0x001650d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a15)])(param_4,uVar1);
  return;
}


