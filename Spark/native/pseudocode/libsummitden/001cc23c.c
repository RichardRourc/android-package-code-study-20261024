// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cc23c; body: [[001cc23c, 001cc3c3]]

void FUN_001cc23c(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0x1b);
  lVar7 = 0;
  do {
    iVar1 = -0x16041c74;
    if (0x1b < lVar7 + 1U) {
      iVar1 = 0x31e379f1;
    }
    iVar3 = -0x6318f23b;
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar6 < -0x562ece4) {
          iVar3 = iVar1;
          if (iVar6 != -0x6318f23b) {
            if (iVar6 != -0x16041c74) {
              return;
            }
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0x26a53580,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar3 = -0x562ece4;
          }
        }
        if (iVar6 != -0x5a1a58) break;
        iVar3 = -0x43b7a60f;
      }
      if (iVar6 != 0x31e379f1) break;
      iVar3 = -0x5a1a58;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


