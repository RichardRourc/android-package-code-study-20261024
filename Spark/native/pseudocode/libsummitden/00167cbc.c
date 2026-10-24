// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00167cbc; body: [[00167cbc, 00167e13]]

void FUN_00167cbc(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a67)])(param_1,0x20);
  uVar5 = 0;
  do {
    iVar1 = -0x63ae2f8b;
    if (0x1f < uVar5) {
      iVar1 = -0x3dadcc87;
    }
    iVar4 = 0x631e4d97;
    do {
      while( true ) {
        while (iVar4 < -0x3dadcc87) {
          if (iVar4 == -0x63ae2f8b) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aae)])(0x10);
            uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bca)])();
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,uVar3);
            iVar4 = 0x64597bba;
          }
          else {
            iVar4 = 0xa7f4c41;
          }
        }
        if (0x631e4d96 < iVar4) break;
        if (iVar4 != -0x3dadcc87) {
          return;
        }
        iVar4 = -0x4eba1d5f;
      }
      bVar2 = iVar4 == 0x631e4d97;
      iVar4 = iVar1;
    } while (bVar2);
    uVar5 = uVar5 + 1;
  } while( true );
}


