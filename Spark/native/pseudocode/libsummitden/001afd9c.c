// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001afd9c; body: [[001afd9c, 001afe27]]

long FUN_001afd9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b442)])(param_2);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b443)])(param_1,uVar1);
  puVar2 = (undefined8 *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44a)])(param_2);
  *(undefined8 *)(param_1 + 8) = *puVar2;
  return param_1;
}


