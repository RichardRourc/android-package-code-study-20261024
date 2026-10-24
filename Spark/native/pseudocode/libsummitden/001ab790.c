// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ab790; body: [[001ab790, 001ab873]]

void FUN_001ab790(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  iVar2 = -0x1edb7118;
  if (param_2 != 0) {
    iVar2 = -0x1c6e42f1;
  }
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar4 = -0x3f86a99d;
  do {
    while (-0x1edb7119 < iVar4) {
      if (iVar4 == -0x1edb7118) {
        *param_1 = 0;
        iVar4 = -0x4826d763;
      }
      else {
        auVar5 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b425])(param_1[4]);
        param_2 = auVar5._8_8_;
        *param_1 = auVar5._0_8_;
        iVar4 = -0x4826d763;
      }
    }
    bVar3 = iVar4 == -0x3f86a99d;
    iVar4 = iVar2;
  } while (bVar3);
  lVar1 = *param_1 + param_3 * 8;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = *param_1 + param_2 * 8;
  return;
}


