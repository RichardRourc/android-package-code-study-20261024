// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a6874; body: [[001a6874, 001a6963]]

void FUN_001a6874(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  iVar1 = 0xf4d456f;
  if (param_2 != 0) {
    iVar1 = 0x2f7662f1;
  }
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar3 = 0xe92a512;
  do {
    while (0xf4d456e < iVar3) {
      if (iVar3 == 0xf4d456f) {
        *param_1 = 0;
        iVar3 = -0x76852845;
      }
      else {
        auVar5 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b495])(param_1[4]);
        param_2 = auVar5._8_8_;
        *param_1 = auVar5._0_8_;
        iVar3 = -0x76852845;
      }
    }
    bVar2 = iVar3 == 0xe92a512;
    iVar3 = iVar1;
  } while (bVar2);
  lVar4 = *param_1 + param_3 * 0x38;
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = *param_1 + param_2 * 0x38;
  return;
}


