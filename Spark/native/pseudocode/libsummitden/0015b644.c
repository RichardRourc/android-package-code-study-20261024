// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015b644; body: [[0015b644, 0015b6db]]

void FUN_0015b644(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa9)])(&PTR_DAT_001f33b0);
  uVar1 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aae)])();
  puVar2 = (undefined8 *)
           (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aaf)])(&PTR_DAT_001f33b0,uVar1)
  ;
                    /* WARNING: Could not recover jumptable at 0x0015b6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,*puVar2);
  return;
}


