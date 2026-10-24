// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c0dd8; body: [[001c0dd8, 001c0f97]]

void FUN_001c0dd8(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,0x22);
  lVar7 = 0;
  while( true ) {
    iVar1 = -0x74d2ec7a;
    if (0x22 < lVar7 + 1U) {
      iVar1 = -0x67ac7def;
    }
    iVar3 = 0x123078c3;
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, 0x123078c2 < iVar6) {
          iVar3 = iVar1;
          if ((iVar6 != 0x123078c3) && (iVar3 = -0x64b1739, iVar6 != 0x3e0564e7)) {
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(param_1);
            iVar3 = -0x64b1739;
          }
        }
        if (-0x67ac7df0 < iVar6) break;
        bVar2 = *(byte *)(param_2 + lVar7);
        bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])(0x2c943837,lVar7);
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                   (param_1,lVar7);
        *pbVar5 = bVar4 ^ bVar2;
        iVar3 = -0x5d6ba167;
      }
      if (iVar6 != -0x67ac7def) break;
      iVar3 = 0x3e0564e7;
    }
    if (iVar6 != -0x5d6ba167) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


