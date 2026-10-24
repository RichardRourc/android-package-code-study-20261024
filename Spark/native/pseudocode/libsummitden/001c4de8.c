// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c4de8; body: [[001c4de8, 001c4f1b]]

void FUN_001c4de8(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = 0x1dc5e861;
  if (*(char *)(param_1 + 1) == '\0') {
    iVar1 = 0x6dd6669d;
  }
  iVar2 = -0x2b043c59;
  if (param_2 != 0) {
    iVar2 = 0x203ae8d7;
  }
  iVar5 = 0x312901f1;
  while( true ) {
    while( true ) {
      while (0x312901f0 < iVar5) {
        bVar3 = iVar5 != 0x312901f1;
        iVar5 = iVar1;
        if (bVar3) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != 0x1dc5e861) break;
      uVar6 = *param_1;
      uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bace)])(param_2 + 0x20);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad4)])(uVar6,uVar4);
      iVar5 = 0x6dd6669d;
    }
    if (iVar5 != 0x203ae8d7) break;
    (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51baeb)])(*param_1,param_2,1);
    iVar5 = -0x2b043c59;
  }
  return;
}


