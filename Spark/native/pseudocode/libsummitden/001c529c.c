// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c529c; body: [[001c529c, 001c544f]]

void FUN_001c529c(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,3);
  lVar7 = 0;
  do {
    iVar1 = -0x14df5783;
    if (3 < lVar7 + 1U) {
      iVar1 = 0x136d37d3;
    }
    iVar3 = -0x60094d98;
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar6 < -0x14df5783) {
          iVar3 = iVar1;
          if ((iVar6 != -0x60094d98) && (iVar3 = -0x72ad686f, iVar6 != -0x5d68e4ac)) {
            return;
          }
        }
        if (0x136d37d2 < iVar6) break;
        if (iVar6 == -0x14df5783) {
          bVar2 = *(byte *)(param_2 + lVar7);
          bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])(0x5c986c9d,lVar7)
          ;
          pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                     (param_1,lVar7);
          *pbVar5 = bVar4 ^ bVar2;
          iVar3 = 0x32565e8b;
        }
        else {
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(param_1);
          iVar3 = -0x72ad686f;
        }
      }
      if (iVar6 != 0x136d37d3) break;
      iVar3 = -0x5d68e4ac;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


