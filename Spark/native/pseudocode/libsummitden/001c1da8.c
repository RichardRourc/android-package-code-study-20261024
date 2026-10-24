// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c1da8; body: [[001c1da8, 001c1e87]]

void FUN_001c1da8(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb72)])();
  iVar1 = 0x4185affa;
  if (*param_1 != 0) {
    iVar1 = -0x57d602f7;
  }
  iVar4 = -0x3877ad7e;
  do {
    while (iVar4 == -0x57d602f7) {
      lVar5 = param_1[4];
      lVar6 = *param_1;
      uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb71)])(param_1);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb70)])(lVar5,lVar6,uVar3);
      iVar4 = 0x4185affa;
    }
    bVar2 = iVar4 == -0x3877ad7e;
    iVar4 = iVar1;
  } while (bVar2);
  return;
}


