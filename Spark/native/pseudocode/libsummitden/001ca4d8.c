// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ca4d8; body: [[001ca4d8, 001ca663]]

void FUN_001ca4d8(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,8);
  lVar7 = 0;
  while( true ) {
    iVar1 = 0x26b2bde4;
    if (8 < lVar7 + 1U) {
      iVar1 = -0x1c4ca822;
    }
    iVar3 = -0x3de5dd3;
    while( true ) {
      while (iVar6 = iVar3, -0x3de5dd4 < iVar6) {
        iVar3 = iVar1;
        if (iVar6 != -0x3de5dd3) {
          if (iVar6 == 0x19af33f) {
            iVar3 = -0x7271df2b;
          }
          else {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0xdc226641,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar3 = -0x7cede4f6;
          }
        }
      }
      if (iVar6 != -0x1c4ca822) break;
      iVar3 = 0x19af33f;
    }
    if (iVar6 != -0x7cede4f6) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


