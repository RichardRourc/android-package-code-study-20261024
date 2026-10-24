// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cb450; body: [[001cb450, 001cb603]]

void FUN_001cb450(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0xd);
  lVar7 = 0;
  do {
    iVar1 = -0x17b9b476;
    if (0xd < lVar7 + 1U) {
      iVar1 = -0x289b448;
    }
    iVar6 = 0x1f87341e;
    while( true ) {
      while( true ) {
        while (0x1f87341d < iVar6) {
          if (iVar6 < 0x2c6a8343) {
            bVar3 = iVar6 != 0x1f87341e;
            iVar6 = iVar1;
            if (bVar3) {
              (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
              iVar6 = 0x2c6a8343;
            }
          }
          else {
            bVar3 = iVar6 != 0x7b34d796;
            iVar6 = 0x2c6a8343;
            if (bVar3) {
              return;
            }
          }
        }
        if (iVar6 != -0x17b9b476) break;
        bVar2 = *(byte *)(param_2 + lVar7);
        bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0x32a18f18,lVar7);
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                   (param_1,lVar7);
        *pbVar5 = bVar4 ^ bVar2;
        iVar6 = -0x4e3393d1;
      }
      if (iVar6 != -0x289b448) break;
      iVar6 = 0x7b34d796;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


