// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c5f98; body: [[001c5f98, 001c6097]]

void FUN_001c5f98(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = 0x1e41a605;
  if (*(long *)*param_1 != 0) {
    iVar1 = 0x3c511658;
  }
  iVar5 = 0x7b848192;
  do {
    while (iVar5 == 0x3c511658) {
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bafd)])(*param_1);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb7e)])(*param_1);
      puVar3 = (undefined8 *)*param_1;
      uVar6 = *puVar3;
      uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb79)])();
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb70)])(puVar3 + 2,uVar6,uVar4);
      iVar5 = 0x1e41a605;
    }
    bVar2 = iVar5 == 0x7b848192;
    iVar5 = iVar1;
  } while (bVar2);
  return;
}


