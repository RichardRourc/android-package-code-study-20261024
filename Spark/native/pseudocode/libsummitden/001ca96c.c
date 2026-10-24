// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ca96c; body: [[001ca96c, 001cab13]]

void FUN_001ca96c(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0x12);
  lVar7 = 0;
  do {
    iVar1 = -0x498acf2a;
    if (0x12 < lVar7 + 1U) {
      iVar1 = 0x1f92cbbd;
    }
    iVar6 = -0x268038d6;
    do {
      while( true ) {
        while (iVar6 < -0x268038d6) {
          if (iVar6 == -0x498acf2a) {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0x5ef92d8b,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar6 = -0x1967a5ca;
          }
          else {
            if (iVar6 != -0x3f0ed05b) {
              return;
            }
            (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
            iVar6 = -0x2f6b68a2;
          }
        }
        if (iVar6 < 0x1f92cbbd) break;
        bVar3 = iVar6 == 0x1f92cbbd;
        iVar6 = -0x2f6b68a2;
        if (bVar3) {
          iVar6 = 0x4cb0a298;
        }
      }
      bVar3 = iVar6 == -0x268038d6;
      iVar6 = iVar1;
    } while (bVar3);
    lVar7 = lVar7 + 1;
  } while( true );
}


