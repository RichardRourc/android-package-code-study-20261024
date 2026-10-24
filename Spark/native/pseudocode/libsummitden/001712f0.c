// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001712f0; body: [[001712f0, 001713ef]]

undefined8 FUN_001712f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 unaff_x21;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  do {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = -0x29908cce;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0x2850a055;
    }
  } while (iVar2 == 0x1a138e87);
  do {
    if (iVar2 == -0x29908cce) {
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5d)])
                            (param_1 << 3,param_2);
    }
    else {
      if (iVar2 != -0x2850a055) {
        return unaff_x21;
      }
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a52)])(param_1 << 3);
    }
    iVar2 = -0xf1045fd;
  } while( true );
}


