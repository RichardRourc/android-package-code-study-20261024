// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00169068; body: [[00169068, 0016915b]]

void FUN_00169068(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  iVar1 = -0x4a31889a;
  if (param_2 != 0) {
    iVar1 = -0x38ef4141;
  }
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar3 = -0x3781d7e2;
  do {
    while (iVar3 < -0x3781d7e2) {
      if (iVar3 == -0x4a31889a) {
        *param_1 = 0;
        iVar3 = 0x49d5f1ca;
      }
      else {
        auVar5 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52b86])(param_1[4])
        ;
        param_2 = auVar5._8_8_;
        *param_1 = auVar5._0_8_;
        iVar3 = 0x49d5f1ca;
      }
    }
    bVar2 = iVar3 == -0x3781d7e2;
    iVar3 = iVar1;
  } while (bVar2);
  lVar4 = *param_1 + param_3 * 0x18;
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = *param_1 + param_2 * 0x18;
  return;
}


