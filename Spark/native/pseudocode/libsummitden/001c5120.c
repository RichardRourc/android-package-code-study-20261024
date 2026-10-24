// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c5120; body: [[001c5120, 001c529b]]

void FUN_001c5120(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,9);
  lVar7 = 0;
  do {
    iVar1 = 0x5018d03f;
    if (9 < lVar7 + 1U) {
      iVar1 = 0x14cd1c5a;
    }
    iVar3 = -0x5412df60;
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar6 < 0x1e843153) {
          iVar3 = iVar1;
          if (iVar6 != -0x5412df60) {
            if (iVar6 != 0x14cd1c5a) {
              return;
            }
            iVar3 = 0x7b79da1b;
          }
        }
        if (iVar6 != 0x5018d03f) break;
        bVar2 = *(byte *)(param_2 + lVar7);
        bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])(0x8b54b8a9,lVar7);
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                   (param_1,lVar7);
        *pbVar5 = bVar4 ^ bVar2;
        iVar3 = 0x1e843153;
      }
      if (iVar6 != 0x7b79da1b) break;
      iVar3 = -0x211b81fc;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


