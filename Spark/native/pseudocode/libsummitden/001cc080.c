// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cc080; body: [[001cc080, 001cc23b]]

void FUN_001cc080(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0x19);
  lVar7 = 0;
  while( true ) {
    iVar1 = 0x16dd7a6b;
    if (0x19 < lVar7 + 1U) {
      iVar1 = -0x627a41ba;
    }
    iVar3 = -0x4c6bf608;
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar6 < 0x16dd7a6b) {
          iVar3 = 0x3e4b4192;
          if ((iVar6 != -0x799bb6a0) && (iVar3 = iVar1, iVar6 == -0x627a41ba)) {
            iVar3 = -0x799bb6a0;
          }
        }
        if (0x224bd1db < iVar6) break;
        bVar2 = *(byte *)(param_2 + lVar7);
        bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0xb3a90b3,lVar7);
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                   (param_1,lVar7);
        *pbVar5 = bVar4 ^ bVar2;
        iVar3 = 0x5b1af5c2;
      }
      if (iVar6 != 0x224bd1dc) break;
      (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
      iVar3 = 0x3e4b4192;
    }
    if (iVar6 == 0x3e4b4192) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


