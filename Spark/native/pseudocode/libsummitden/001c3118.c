// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c3118; body: [[001c3118, 001c3177]]

void FUN_001c3118(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb10)])
                    (*(undefined8 *)(param_1 + 8));
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb17)])(param_1,uVar1);
  return;
}


