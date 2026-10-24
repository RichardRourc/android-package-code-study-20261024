// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c9e6c; body: [[001c9e6c, 001c9fef]]

void FUN_001c9e6c(undefined8 param_1,long param_2)

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
  do {
    iVar1 = -0x2da3d33a;
    if (6 < lVar7 + 1U) {
      iVar1 = 0x366d8f33;
    }
    iVar6 = -0x2d021dfa;
    do {
      while( true ) {
        while (iVar6 < -0x2d021dfa) {
          if (iVar6 == -0x7170feab) {
            iVar6 = 0x3dd4e5fb;
          }
          else {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0x6af72409,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar6 = 0x2626b599;
          }
        }
        if (iVar6 < 0x366d8f33) break;
        if (iVar6 != 0x366d8f33) {
          return;
        }
        iVar6 = -0x7170feab;
      }
      bVar3 = iVar6 == -0x2d021dfa;
      iVar6 = iVar1;
    } while (bVar3);
    lVar7 = lVar7 + 1;
  } while( true );
}


