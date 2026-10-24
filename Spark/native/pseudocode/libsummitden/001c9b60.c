// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c9b60; body: [[001c9b60, 001c9ce3]]

void FUN_001c9b60(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,6);
  lVar7 = 0;
  while( true ) {
    iVar1 = 0x7ef8cc3;
    if (6 < lVar7 + 1U) {
      iVar1 = -0x154a578c;
    }
    iVar6 = -0x6a671cdc;
    while( true ) {
      while( true ) {
        while (iVar6 < 0x13ecf33) {
          bVar3 = iVar6 != -0x6a671cdc;
          iVar6 = iVar1;
          if (bVar3) {
            iVar6 = 0x13ecf33;
          }
        }
        if (0x7ef8cc2 < iVar6) break;
        iVar6 = 0x461fba03;
      }
      if (iVar6 != 0x7ef8cc3) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0x51199d3a,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      iVar6 = 0x29d3df2e;
    }
    if (iVar6 != 0x29d3df2e) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


