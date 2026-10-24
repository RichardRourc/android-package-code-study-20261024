// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cab14; body: [[001cab14, 001cac93]]

void FUN_001cab14(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0xf);
  lVar7 = 0;
  do {
    iVar1 = 0x7ec32441;
    if (0xf < lVar7 + 1U) {
      iVar1 = 0x57d1f3c2;
    }
    iVar6 = -0x3bae792f;
    while( true ) {
      while( true ) {
        while (iVar6 < 0x57d1f3c2) {
          if (iVar6 == -0x6185a399) {
            iVar6 = -0x54b307cb;
          }
          else {
            bVar3 = iVar6 != -0x3bae792f;
            iVar6 = iVar1;
            if (bVar3) {
              return;
            }
          }
        }
        if (iVar6 != 0x57d1f3c2) break;
        iVar6 = -0x6185a399;
      }
      if (iVar6 != 0x7ec32441) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0xc0ad4b45,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      iVar6 = 0x5cf7900d;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


