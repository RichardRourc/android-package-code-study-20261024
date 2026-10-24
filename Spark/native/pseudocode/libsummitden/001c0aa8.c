// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c0aa8; body: [[001c0aa8, 001c0c1f]]

void FUN_001c0aa8(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,0xd);
  lVar7 = 0;
  while( true ) {
    iVar1 = -0x823753e;
    if (0xd < lVar7 + 1U) {
      iVar1 = -0x375cf5b3;
    }
    iVar6 = -0x1bd7890e;
    while( true ) {
      while( true ) {
        while (iVar6 < -0xef53b5f) {
          bVar3 = iVar6 != -0x375cf5b3;
          iVar6 = -0xef53b5f;
          if (bVar3) {
            iVar6 = iVar1;
          }
        }
        if (-0x823753f < iVar6) break;
        iVar6 = 0x2a56b45d;
      }
      if (iVar6 != -0x823753e) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])(0xc9843e35,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      iVar6 = 0x3f12bd;
    }
    if (iVar6 != 0x3f12bd) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


