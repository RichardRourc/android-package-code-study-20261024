// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016960c; body: [[0016960c, 00169717]]

undefined8 FUN_0016960c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 unaff_x21;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  do {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = -0x378c72d9;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0xb336a2f;
    }
  } while (iVar2 == 0x62f52700);
  while (iVar2 != -0x4f900f5f) {
    if (iVar2 == -0x378c72d9) {
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5d)])
                            (param_1 * 0x18,param_2);
    }
    else {
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a52)])(param_1 * 0x18);
    }
    iVar2 = -0x4f900f5f;
  }
  return unaff_x21;
}


