// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00151dc8; body: [[00151dc8, 00151ed3]]

undefined8 FUN_00151dc8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 unaff_x21;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7b)];
  do {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = 0x19e7a0a4;
    if ((uVar1 & 1) == 0) {
      iVar2 = 0x68d627a1;
    }
  } while (iVar2 == -0x2f768193);
  while (iVar2 != -0xf8a4305) {
    if (iVar2 == 0x19e7a0a4) {
      unaff_x21 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7c)])
                            (param_1 * 0x18,param_2);
    }
    else {
      unaff_x21 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7d)])(param_1 * 0x18);
    }
    iVar2 = -0xf8a4305;
  }
  return unaff_x21;
}


