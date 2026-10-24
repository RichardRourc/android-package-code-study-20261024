// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001553ec; body: [[001553ec, 001554cf]]

void FUN_001553ec(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  iVar2 = -0x3e2a0b;
  if (param_2 != 0) {
    iVar2 = 0x286d7d0e;
  }
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar4 = -0x58656c7f;
  do {
    while (-0x3e2a0c < iVar4) {
      if (iVar4 == -0x3e2a0b) {
        *param_1 = 0;
        iVar4 = -0x26461e7;
      }
      else {
        auVar5 = (*(code *)(&PTR_FUN_001fc070)[(long)DAT_001fcf68 ^ 0x283c8aa0])(param_1[4]);
        param_2 = auVar5._8_8_;
        *param_1 = auVar5._0_8_;
        iVar4 = -0x26461e7;
      }
    }
    bVar3 = iVar4 == -0x58656c7f;
    iVar4 = iVar2;
  } while (bVar3);
  lVar1 = *param_1 + param_3 * 4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = *param_1 + param_2 * 4;
  return;
}


