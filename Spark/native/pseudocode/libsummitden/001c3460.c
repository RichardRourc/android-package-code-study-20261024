// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c3460; body: [[001c3460, 001c34ff]]

void FUN_001c3460(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb28)])(param_1 + 8);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2f)])(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2e)])(param_1);
  puVar2 = (undefined8 *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2d)])(param_1);
  *puVar2 = uVar1;
  return;
}


