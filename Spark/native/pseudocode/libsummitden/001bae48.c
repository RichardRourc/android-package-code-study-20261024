// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bae48; body: [[001bae48, 001baea7]]

void FUN_001bae48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caaef)])
                    (*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x001baea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caaee)])(param_1,uVar1);
  return;
}


