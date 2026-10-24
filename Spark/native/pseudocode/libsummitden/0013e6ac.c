// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013e6ac; body: [[0013e6ac, 0013e7b7]]

void FUN_0013e6ac(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = *param_1;
  *param_1 = uVar1 + uVar2;
  uVar2 = *param_4 ^ uVar1 + uVar2;
  *param_4 = uVar2;
  uVar1 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar2,0x10);
  *param_4 = uVar1;
  uVar2 = *param_3;
  *param_3 = uVar2 + uVar1;
  uVar2 = *param_2 ^ uVar2 + uVar1;
  *param_2 = uVar2;
  uVar1 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar2,0xc);
  *param_2 = uVar1;
  uVar2 = *param_1;
  *param_1 = uVar2 + uVar1;
  uVar2 = *param_4 ^ uVar2 + uVar1;
  *param_4 = uVar2;
  uVar1 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar2,8);
  *param_4 = uVar1;
  uVar2 = *param_3;
  *param_3 = uVar2 + uVar1;
  uVar2 = *param_2 ^ uVar2 + uVar1;
  *param_2 = uVar2;
  uVar2 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar2,7);
  *param_2 = uVar2;
  return;
}


