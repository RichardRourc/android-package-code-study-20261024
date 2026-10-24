// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c99e8; body: [[001c99e8, 001c9b5f]]

void FUN_001c99e8(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0xd);
  lVar7 = 0;
  while( true ) {
    iVar1 = 0x4647ba3f;
    if (0xd < lVar7 + 1U) {
      iVar1 = 0x3d060abb;
    }
    iVar6 = 0x6c7d92ea;
    while( true ) {
      while (0x3d060aba < iVar6) {
        if (iVar6 == 0x3d060abb) {
          iVar6 = -0x52a7aa9b;
        }
        else {
          bVar3 = iVar6 == 0x4647ba3f;
          iVar6 = iVar1;
          if (bVar3) {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0xf8289b6,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar6 = -0x60192f0d;
          }
        }
      }
      if (iVar6 != -0x52a7aa9b) break;
      iVar6 = -0x246bb052;
    }
    if (iVar6 != -0x60192f0d) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


