// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00155e70; body: [[00155e70, 00155f6f]]

void FUN_00155e70(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7b)];
  iVar2 = -0x4e64eb73;
  while( true ) {
    while (iVar2 < 0x503ef4f) {
      if (iVar2 == -0x7fd10073) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ab5)])
                  (param_1,param_2 << 2,param_3);
        iVar2 = 0x15568b59;
      }
      else {
        uVar1 = (*pcVar3)(param_3);
        iVar2 = -0x7fd10073;
        if ((uVar1 & 1) == 0) {
          iVar2 = 0x503ef4f;
        }
      }
    }
    if (iVar2 != 0x503ef4f) break;
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ab6)])(param_1,param_2 << 2);
    iVar2 = 0x15568b59;
  }
  return;
}


