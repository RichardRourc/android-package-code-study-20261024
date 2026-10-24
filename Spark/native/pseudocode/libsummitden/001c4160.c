// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c4160; body: [[001c4160, 001c4217]]

void FUN_001c4160(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51badd)])();
  iVar1 = -0x217a7997;
  if (param_2 <= uVar3) {
    iVar1 = -0x1023142a;
  }
  iVar2 = 0x5a58ccb3;
  do {
    iVar4 = iVar2;
    iVar2 = iVar1;
  } while (iVar4 == 0x5a58ccb3);
  if (iVar4 == -0x1023142a) {
    (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51badc)])(param_2,8);
    return;
  }
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb5b)])();
  (*(code *)(&PTR_FUN_00203130)[(long)(int)DAT_00203af8 ^ 0x3f51bad3])();
  return;
}


