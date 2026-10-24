// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bb658; body: [[001bb658, 001bb74b]]

void FUN_001bb658(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  iVar1 = -0x6b852a8d;
  if (param_2 != 0) {
    iVar1 = -0x7165a16b;
  }
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar3 = 0x4fbac79f;
  do {
    while (iVar3 < 0x1ebff47f) {
      if (iVar3 == -0x6b852a8d) {
        *param_1 = 0;
        iVar3 = 0x1ebff47f;
      }
      else {
        auVar5 = (*(code *)(&PTR_FUN_002026b0)[(long)DAT_00202f98 ^ 0x1ffffffff28cab0c])(param_1[4])
        ;
        param_2 = auVar5._8_8_;
        *param_1 = auVar5._0_8_;
        iVar3 = 0x1ebff47f;
      }
    }
    bVar2 = iVar3 == 0x4fbac79f;
    iVar3 = iVar1;
  } while (bVar2);
  lVar4 = *param_1 + param_3 * 0x30;
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = *param_1 + param_2 * 0x30;
  return;
}


