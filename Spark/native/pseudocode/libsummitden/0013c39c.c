// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013c39c; body: [[0013c39c, 0013c483]]

void FUN_0013c39c(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  iVar1 = 0x9e5175c;
  if (param_2 != 0) {
    iVar1 = -0x21cfc53a;
  }
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar2 = 0x14e3537e;
  while( true ) {
    while( true ) {
      do {
        iVar3 = iVar2;
        iVar2 = iVar1;
      } while (0x14e3537d < iVar3);
      if (iVar3 != 0x9e5175c) break;
      *param_1 = 0;
      iVar2 = -0x4299e09c;
    }
    if (iVar3 == -0x4299e09c) break;
    auVar4 = (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc37119])(param_1[4]);
    param_2 = auVar4._8_8_;
    *param_1 = auVar4._0_8_;
    iVar2 = -0x4299e09c;
  }
  param_3 = *param_1 + param_3;
  param_1[1] = param_3;
  param_1[2] = param_3;
  param_1[3] = *param_1 + param_2;
  return;
}


