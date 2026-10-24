// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00169fec; body: [[00169fec, 0016a0eb]]

undefined8 FUN_00169fec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 unaff_x21;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  do {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = -0x5366c944;
    if ((uVar1 & 1) == 0) {
      iVar2 = 0x50456a40;
    }
  } while (iVar2 == -0x55abbd1d);
  do {
    if (iVar2 == -0x5366c944) {
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5d)])
                            (param_1 << 2,param_2);
    }
    else {
      if (iVar2 != 0x50456a40) {
        return unaff_x21;
      }
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a52)])(param_1 << 2);
    }
    iVar2 = 0x5a7f320f;
  } while( true );
}


