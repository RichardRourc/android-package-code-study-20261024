// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c1148; body: [[001c1148, 001c12c3]]

void FUN_001c1148(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,6);
  lVar7 = 0;
  do {
    iVar1 = -0x4b761ec2;
    if (6 < lVar7 + 1U) {
      iVar1 = 0x6a507610;
    }
    iVar6 = 0x51d8c33;
    while( true ) {
      while( true ) {
        while (iVar6 < 0x1b147693) {
          if (iVar6 == -0x4b761ec2) {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])
                              (0x21081fe0,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar6 = 0x1b147693;
          }
          else {
            bVar3 = iVar6 != 0x51d8c33;
            iVar6 = iVar1;
            if (bVar3) {
              return;
            }
          }
        }
        if (iVar6 != 0x5443fd9a) break;
        iVar6 = -0x575674fa;
      }
      if (iVar6 != 0x6a507610) break;
      iVar6 = 0x5443fd9a;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


