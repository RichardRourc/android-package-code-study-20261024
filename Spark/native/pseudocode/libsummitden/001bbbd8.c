// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bbbd8; body: [[001bbbd8, 001bbce3]]

undefined8 FUN_001bbbd8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 unaff_x21;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5e)];
  do {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = 0x38ba84fd;
    if ((uVar1 & 1) == 0) {
      iVar2 = 0x4eff8d6e;
    }
  } while (iVar2 == -0x65d338ac);
  while (iVar2 != -0x7f578f79) {
    if (iVar2 == 0x38ba84fd) {
      unaff_x21 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caabe)])
                            (param_1 * 0x30,param_2);
    }
    else {
      unaff_x21 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caabd)])(param_1 * 0x30);
    }
    iVar2 = -0x7f578f79;
  }
  return unaff_x21;
}


