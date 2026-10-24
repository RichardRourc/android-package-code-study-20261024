// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00173578; body: [[00173578, 00173663]]

void FUN_00173578(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  param_1[3] = 0;
  param_1[4] = param_4;
  iVar1 = -0xc78d702;
  if (param_2 != 0) {
    iVar1 = -0x17cf281;
  }
  iVar2 = -0x3a78957d;
  while( true ) {
    while( true ) {
      do {
        iVar3 = iVar2;
        iVar2 = iVar1;
      } while (iVar3 < -0xc78d702);
      if (iVar3 != -0xc78d702) break;
      *param_1 = 0;
      iVar2 = 0x509ef2f0;
    }
    if (iVar3 != -0x17cf281) break;
    auVar5 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a528cb])(param_1[4]);
    param_2 = auVar5._8_8_;
    *param_1 = auVar5._0_8_;
    iVar2 = 0x509ef2f0;
  }
  lVar4 = *param_1 + param_3 * 0x30;
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = *param_1 + param_2 * 0x30;
  return;
}


