// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c423c; body: [[001c423c, 001c433f]]

undefined8 FUN_001c423c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 unaff_x21;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb59)];
  do {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = 0x4d8a1509;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0x23eb9caa;
    }
  } while (iVar2 == 0x1fb20f22);
  do {
    if (iVar2 == -0x23eb9caa) {
      unaff_x21 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb5f)])(param_1 * 0x38);
    }
    else {
      if (iVar2 != 0x4d8a1509) {
        return unaff_x21;
      }
      unaff_x21 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb58)])
                            (param_1 * 0x38,param_2);
    }
    iVar2 = 0x7f89e4cb;
  } while( true );
}


