// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c5b58; body: [[001c5b58, 001c5c97]]

void FUN_001c5b58(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar1 = -0x575274e2;
  if (param_2 != (undefined8 *)0x0) {
    iVar1 = 0xf5db640;
  }
  iVar5 = 0x790ddb30;
  do {
    while (iVar5 == 0xf5db640) {
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51baf9)])(param_1,*param_2);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51baf9)])(param_1,param_2[1]);
      uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bacb)])(param_1);
      uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bace)])(param_2 + 4);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad4)])(uVar3,uVar4);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51baeb)])(uVar3,param_2,1);
      iVar5 = -0x575274e2;
    }
    bVar2 = iVar5 == 0x790ddb30;
    iVar5 = iVar1;
  } while (bVar2);
  return;
}


