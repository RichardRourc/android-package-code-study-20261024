// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00151838; body: [[00151838, 0015191f]]

void FUN_00151838(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar1 = 0x8e3b993;
  if (param_2 != 0) {
    iVar1 = 0x670e1057;
  }
  iVar2 = -0x7778936a;
  while( true ) {
    while( true ) {
      do {
        iVar3 = iVar2;
        iVar2 = iVar1;
      } while (iVar3 < 0x8e3b993);
      if (iVar3 != 0x8e3b993) break;
      *param_1 = 0;
      iVar2 = 0x7b3003c8;
    }
    if (iVar3 != 0x670e1057) break;
    auVar5 = (*(code *)(&PTR_FUN_001fc070)[(long)DAT_001fcf68 ^ 0x283c8bcd])(param_1[4]);
    param_2 = auVar5._8_8_;
    *param_1 = auVar5._0_8_;
    iVar2 = 0x7b3003c8;
  }
  lVar4 = *param_1 + param_3 * 0x18;
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = *param_1 + param_2 * 0x18;
  return;
}


