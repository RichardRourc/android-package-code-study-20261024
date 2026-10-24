// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c0c20; body: [[001c0c20, 001c0dd7]]

void FUN_001c0c20(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,4);
  lVar7 = 0;
  do {
    iVar1 = -0x2c4a4baf;
    if (4 < lVar7 + 1U) {
      iVar1 = -0x7fb352db;
    }
    iVar6 = 0x2d3f5f3a;
    while( true ) {
      while( true ) {
        while (0x133c46e6 < iVar6) {
          if (iVar6 == 0x133c46e7) {
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(param_1);
            iVar6 = -0x723055d9;
          }
          else {
            bVar3 = iVar6 != 0x2d3f5f3a;
            iVar6 = iVar1;
            if (bVar3) {
              iVar6 = -0x723055d9;
            }
          }
        }
        if (-0x47d8263c < iVar6) break;
        if (iVar6 != -0x7fb352db) {
          return;
        }
        iVar6 = 0x618f53df;
      }
      if (iVar6 != -0x2c4a4baf) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])(0x5cf47ff8,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      iVar6 = -0x47d8263b;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


