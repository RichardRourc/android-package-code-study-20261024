// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c9ff0; body: [[001c9ff0, 001ca16b]]

void FUN_001c9ff0(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,9);
  lVar7 = 0;
  while( true ) {
    iVar1 = -0x29d73fd9;
    if (9 < lVar7 + 1U) {
      iVar1 = -0x43866beb;
    }
    iVar6 = -0x5f10bb2f;
    while( true ) {
      while( true ) {
        while (iVar6 < -0x43866beb) {
          bVar3 = iVar6 != -0x5f10bb2f;
          iVar6 = iVar1;
          if (bVar3) {
            iVar6 = 0xbff0202;
          }
        }
        if (-0x29d73fda < iVar6) break;
        iVar6 = -0x49c475aa;
      }
      if (iVar6 != -0x29d73fd9) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0x9e2c5b72,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      iVar6 = 0x300bbe4d;
    }
    if (iVar6 == 0xbff0202) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


