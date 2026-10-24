// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cb784; body: [[001cb784, 001cb93f]]

void FUN_001cb784(undefined8 param_1,long param_2)

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
    iVar1 = -0x4154485a;
    if (0xd < lVar7 + 1U) {
      iVar1 = -0x29b9c7b4;
    }
    iVar6 = 0x184e65fe;
    while( true ) {
      while( true ) {
        while (-0x2d119889 < iVar6) {
          if (iVar6 < -0x2502fad5) {
            bVar3 = iVar6 != -0x2d119888;
            iVar6 = -0x2502fad5;
            if (bVar3) {
              iVar6 = -0x2d119888;
            }
          }
          else {
            bVar3 = iVar6 != 0x184e65fe;
            iVar6 = iVar1;
            if (bVar3) {
              return;
            }
          }
        }
        if (iVar6 != -0x41db2a50) break;
        (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
        iVar6 = -0x2502fad5;
      }
      if (iVar6 != -0x4154485a) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0x3c49417e,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      iVar6 = -0x7b07d8a2;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


