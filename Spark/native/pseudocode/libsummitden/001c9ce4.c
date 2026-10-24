// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c9ce4; body: [[001c9ce4, 001c9e6b]]

void FUN_001c9ce4(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,8);
  lVar7 = 0;
  do {
    iVar1 = 0x712c0ed4;
    if (8 < lVar7 + 1U) {
      iVar1 = -0x6322c6a9;
    }
    iVar3 = 0x1c47c799;
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, 0x1c47c798 < iVar6) {
          iVar3 = iVar1;
          if (iVar6 != 0x1c47c799) {
            if (iVar6 != 0x712c0ed4) {
              return;
            }
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0xe2707e7e,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar3 = -0x79a10e3e;
          }
        }
        if (iVar6 != -0x78af8c0b) break;
        iVar3 = 0x2be6c46c;
      }
      if (iVar6 != -0x6322c6a9) break;
      iVar3 = -0x78af8c0b;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


