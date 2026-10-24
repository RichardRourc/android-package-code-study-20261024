// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ca16c; body: [[001ca16c, 001ca31f]]

void FUN_001ca16c(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0x19);
  lVar7 = 0;
  do {
    iVar1 = 0x6b887098;
    if (0x19 < lVar7 + 1U) {
      iVar1 = -0x259d42f0;
    }
    iVar6 = 0x2c3800f;
    while( true ) {
      while( true ) {
        while (iVar6 < -0x259d42f0) {
          if (iVar6 == -0x7eb74577) {
            (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
            iVar6 = -0x555f9ce6;
          }
          else {
            bVar3 = iVar6 != -0x2a237ef1;
            iVar6 = -0x555f9ce6;
            if (bVar3) {
              return;
            }
          }
        }
        if (0x478ccc4c < iVar6) break;
        bVar3 = iVar6 == -0x259d42f0;
        iVar6 = iVar1;
        if (bVar3) {
          iVar6 = -0x2a237ef1;
        }
      }
      if (iVar6 != 0x6b887098) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0x84d2e852,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      iVar6 = 0x478ccc4d;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


