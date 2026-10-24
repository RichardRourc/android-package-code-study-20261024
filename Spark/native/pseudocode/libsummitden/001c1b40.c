// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c1b40; body: [[001c1b40, 001c1c2f]]

void FUN_001c1b40(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  iVar1 = 0x3326d407;
  if (param_2 != 0) {
    iVar1 = -0x6f644619;
  }
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar3 = -0x4cbeb975;
  while( true ) {
    while (iVar3 < -0x2655b1fc) {
      bVar2 = iVar3 != -0x4cbeb975;
      iVar3 = iVar1;
      if (bVar2) {
        auVar5 = (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bb7f])(param_1[4]);
        param_2 = auVar5._8_8_;
        *param_1 = auVar5._0_8_;
        iVar3 = -0x2655b1fc;
      }
    }
    if (iVar3 != 0x3326d407) break;
    *param_1 = 0;
    iVar3 = -0x2655b1fc;
  }
  lVar4 = *param_1 + param_3 * 0x30;
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = *param_1 + param_2 * 0x30;
  return;
}


