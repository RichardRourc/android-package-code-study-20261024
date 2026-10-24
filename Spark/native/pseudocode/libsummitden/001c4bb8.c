// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c4bb8; body: [[001c4bb8, 001c4d33]]

void FUN_001c4bb8(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *param_1;
  iVar1 = 0x65b99fbf;
  if (*(long *)(lVar6 + 8) != 0) {
    iVar1 = 0x1f392d76;
  }
  *param_1 = *(long *)(lVar6 + 8);
  iVar2 = -0x7a7810f0;
  while( true ) {
    do {
      while (iVar5 = iVar2, 0x1f392d75 < iVar5) {
        if (iVar5 == 0x1f392d76) {
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad6)])(*param_1,param_1);
          iVar2 = 0x65b99fbf;
        }
        else if (iVar5 == 0x489e74b2) {
          lVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_1);
          *(long *)(lVar3 + 8) = lVar6;
          iVar2 = -0x55f261f0;
        }
        else {
          *(long *)(lVar6 + 0x10) = param_1[2];
          uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad1)])(param_1);
          iVar2 = -0xa75b9dc;
          if ((uVar4 & 1) == 0) {
            iVar2 = 0x489e74b2;
          }
        }
      }
      iVar2 = iVar1;
    } while (iVar5 == -0x7a7810f0);
    if (iVar5 != -0xa75b9dc) break;
    *(long *)param_1[2] = lVar6;
    iVar2 = -0x55f261f0;
  }
  *(long **)(lVar6 + 8) = param_1;
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad6)])(param_1,lVar6);
  return;
}


