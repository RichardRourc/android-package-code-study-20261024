// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c5df8; body: [[001c5df8, 001c5f67]]

void FUN_001c5df8(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,0x12);
  lVar7 = 0;
  do {
    iVar1 = -0xbcfddcd;
    if (0x12 < lVar7 + 1U) {
      iVar1 = 0x15d02496;
    }
    iVar3 = -0x1ccabf9f;
    while( true ) {
      do {
        while (iVar6 = iVar3, iVar6 < 0x2384d17) {
          iVar3 = iVar1;
          if (iVar6 != -0x1ccabf9f) {
            if (iVar6 != -0xbcfddcd) {
              return;
            }
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])
                              (0x823bd024,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar3 = 0x2384d17;
          }
        }
        iVar3 = 0x33411854;
      } while (iVar6 == 0x15d02496);
      if (iVar6 != 0x33411854) break;
      iVar3 = -0x22d67878;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


