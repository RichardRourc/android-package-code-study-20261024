// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cac94; body: [[001cac94, 001cae0b]]

void FUN_001cac94(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0x11);
  lVar7 = 0;
  while( true ) {
    iVar1 = 0x4428c752;
    if (0x11 < lVar7 + 1U) {
      iVar1 = 0x4169228a;
    }
    iVar6 = 0x4c0ad898;
    while( true ) {
      while (0x41692289 < iVar6) {
        if (iVar6 == 0x4169228a) {
          iVar6 = 0xe9fcf9c;
        }
        else {
          bVar3 = iVar6 == 0x4428c752;
          iVar6 = iVar1;
          if (bVar3) {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0x355eb9c6,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar6 = -0x56871461;
          }
        }
      }
      if (iVar6 != 0xe9fcf9c) break;
      iVar6 = 0x29d469e0;
    }
    if (iVar6 != -0x56871461) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


