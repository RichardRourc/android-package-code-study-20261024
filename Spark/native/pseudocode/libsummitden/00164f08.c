// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00164f08; body: [[00164f08, 00165007]]

undefined8 FUN_00164f08(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 unaff_x21;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  do {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = 0x17c9ecf4;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0x1687b798;
    }
  } while (iVar2 == 0x4677e9e1);
  do {
    if (iVar2 == -0x1687b798) {
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a52)])(param_1 << 3);
    }
    else {
      if (iVar2 != 0x17c9ecf4) {
        return unaff_x21;
      }
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5d)])
                            (param_1 << 3,param_2);
    }
    iVar2 = 0x51de0b23;
  } while( true );
}


