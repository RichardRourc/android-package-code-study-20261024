// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c0f98; body: [[001c0f98, 001c1147]]

void FUN_001c0f98(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,0xf);
  lVar7 = 0;
  do {
    iVar1 = -0x53ecfd00;
    if (0xf < lVar7 + 1U) {
      iVar1 = -0x3fdc1c0f;
    }
    iVar6 = 0x65ae6425;
    while( true ) {
      while( true ) {
        while (-0x11ba109f < iVar6) {
          if (iVar6 < 0x2a15eb25) {
            bVar3 = iVar6 == -0x11ba109e;
            iVar6 = 0x2a15eb25;
            if (bVar3) {
              (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(param_1);
              iVar6 = 0x2a15eb25;
            }
          }
          else {
            bVar3 = iVar6 != 0x65ae6425;
            iVar6 = iVar1;
            if (bVar3) {
              return;
            }
          }
        }
        if (iVar6 != -0x53ecfd00) break;
        bVar2 = *(byte *)(param_2 + lVar7);
        bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])(0xce25f1bc,lVar7);
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                   (param_1,lVar7);
        *pbVar5 = bVar4 ^ bVar2;
        iVar6 = -0x1aad7ad9;
      }
      if (iVar6 != -0x3fdc1c0f) break;
      iVar6 = -0x9742eb4;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


