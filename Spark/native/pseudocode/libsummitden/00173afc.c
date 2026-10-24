// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00173afc; body: [[00173afc, 00173c07]]

undefined8 FUN_00173afc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 unaff_x21;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  do {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = 0x39c6d9e5;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0x600cc143;
    }
  } while (iVar2 == 0x6e9f0e2b);
  do {
    if (iVar2 == -0x600cc143) {
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a52)])(param_1 * 0x30);
    }
    else {
      if (iVar2 == -0x5dd930c9) {
        return unaff_x21;
      }
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5d)])
                            (param_1 * 0x30,param_2);
    }
    iVar2 = -0x5dd930c9;
  } while( true );
}


