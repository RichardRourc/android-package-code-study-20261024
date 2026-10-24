// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cc3c4; body: [[001cc3c4, 001cc587]]

void FUN_001cc3c4(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0x21);
  lVar7 = 0;
  do {
    iVar1 = 0x6afeecc7;
    if (0x21 < lVar7 + 1U) {
      iVar1 = 0x9384fb;
    }
    iVar3 = -0x7b15c039;
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar6 < 0x9384fb) {
          iVar3 = iVar1;
          if ((iVar6 != -0x7b15c039) && (iVar3 = 0x53bf32e2, iVar6 != -0x1e1f61c2)) {
            (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
            iVar3 = 0x53bf32e2;
          }
        }
        if (iVar6 < 0x53bf32e2) break;
        if (iVar6 != 0x6afeecc7) {
          return;
        }
        bVar2 = *(byte *)(param_2 + lVar7);
        bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0xec0c95a,lVar7);
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                   (param_1,lVar7);
        *pbVar5 = bVar4 ^ bVar2;
        iVar3 = 0xb92289;
      }
      if (iVar6 != 0x9384fb) break;
      iVar3 = -0x1e1f61c2;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


