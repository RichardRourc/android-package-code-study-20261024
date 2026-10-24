// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a9600; body: [[001a9600, 001a96e3]]

void FUN_001a9600(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  iVar2 = 0xf03bb16;
  if (param_2 != 0) {
    iVar2 = -0x5aaa26c4;
  }
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar4 = -0x2406c32e;
  while( true ) {
    while (iVar4 < 0xf03bb16) {
      bVar3 = iVar4 != -0x2406c32e;
      iVar4 = iVar2;
      if (bVar3) {
        auVar5 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b4cb])(param_1[4]);
        param_2 = auVar5._8_8_;
        *param_1 = auVar5._0_8_;
        iVar4 = 0x557278cf;
      }
    }
    if (iVar4 != 0xf03bb16) break;
    *param_1 = 0;
    iVar4 = 0x557278cf;
  }
  lVar1 = *param_1 + param_3 * 0x20;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = *param_1 + param_2 * 0x20;
  return;
}


