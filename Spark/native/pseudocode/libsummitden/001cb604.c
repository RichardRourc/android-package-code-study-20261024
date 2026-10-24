// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cb604; body: [[001cb604, 001cb783]]

void FUN_001cb604(undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,8);
  lVar7 = 0;
  do {
    uVar1 = 0x4f8f1fcb;
    if (8 < lVar7 + 1U) {
      uVar1 = 0x5509b3ec;
    }
    uVar6 = 0x7464f95b;
    while( true ) {
      while( true ) {
        while (0x5509b3eb < uVar6) {
          if (uVar6 == 0x5509b3ec) {
            uVar6 = 0x1d9d168a;
          }
          else {
            bVar3 = uVar6 != 0x7464f95b;
            uVar6 = uVar1;
            if (bVar3) {
              return;
            }
          }
        }
        if (uVar6 != 0x1d9d168a) break;
        uVar6 = 0x7bbfd59e;
      }
      if (uVar6 != 0x4f8f1fcb) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0x86add402,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      uVar6 = 0x166e74fd;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


