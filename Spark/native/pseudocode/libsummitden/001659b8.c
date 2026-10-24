// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001659b8; body: [[001659b8, 00165a37]]

void FUN_001659b8(undefined4 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf7)])(param_2);
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf4)])(param_1);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar2 / uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00165a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf5)])(param_1,uVar2 - uVar1 * uVar3);
  return;
}


