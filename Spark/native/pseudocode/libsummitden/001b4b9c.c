// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b4b9c; body: [[001b4b9c, 001b4e23]]

void FUN_001b4b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a1)])();
                    /* WARNING: Could not recover jumptable at 0x001b4c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7d5)])
            (param_1,param_3,uVar1,param_4,param_5);
  return;
}


