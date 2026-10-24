// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c2aec; body: [[001c2aec, 001c2c9b]]

void FUN_001c2aec(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,10);
  lVar7 = 0;
  do {
    iVar1 = 0x13646142;
    if (10 < lVar7 + 1U) {
      iVar1 = -0x779ebbd8;
    }
    iVar6 = -0x50bd4a31;
    while( true ) {
      while( true ) {
        while (iVar6 < -0x50bd4a31) {
          if (iVar6 == -0x779ebbd8) {
            iVar6 = 0xbb7617f;
          }
          else {
            if (iVar6 != -0x6b2b38f9) {
              return;
            }
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(param_1);
            iVar6 = -0x79300c4e;
          }
        }
        if (0x13646141 < iVar6) break;
        bVar3 = iVar6 != -0x50bd4a31;
        iVar6 = iVar1;
        if (bVar3) {
          iVar6 = -0x79300c4e;
        }
      }
      if (iVar6 != 0x13646142) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])(0x3864fdb8,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      iVar6 = 0x2e81c735;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


