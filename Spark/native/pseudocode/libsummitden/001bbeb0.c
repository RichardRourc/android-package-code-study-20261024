// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bbeb0; body: [[001bbeb0, 001bc02b]]

void FUN_001bbeb0(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa6a)])(param_1,0x13);
  lVar7 = 0;
  do {
    iVar1 = -0x6d7b46be;
    if (0x13 < lVar7 + 1U) {
      iVar1 = -0x1c744f2d;
    }
    iVar3 = -0x3efffae;
    while( true ) {
      do {
        while (iVar6 = iVar3, iVar6 < -0x3efffae) {
          if (iVar6 == -0x6d7b46be) {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa69)])
                              (0xf7da7019,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa68)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar3 = -0x154432a;
          }
          else {
            if (iVar6 != -0x1c744f2d) {
              return;
            }
            iVar3 = 0x1a5c68fd;
          }
        }
        iVar3 = iVar1;
      } while (iVar6 == -0x3efffae);
      if (iVar6 != 0x1a5c68fd) break;
      iVar3 = -0x1845cc0e;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


