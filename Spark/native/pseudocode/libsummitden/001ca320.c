// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ca320; body: [[001ca320, 001ca4d7]]

void FUN_001ca320(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0xb);
  lVar7 = 0;
  do {
    iVar1 = 0x2de02a0f;
    if (0xb < lVar7 + 1U) {
      iVar1 = -0x352def2b;
    }
    iVar6 = -0x11d1bb1;
    do {
      while( true ) {
        while (iVar6 < 0x240a8461) {
          if (iVar6 == -0x352def2b) {
            iVar6 = 0x498776f3;
          }
          else {
            bVar3 = iVar6 != -0x11d1bb1;
            iVar6 = iVar1;
            if (bVar3) {
              return;
            }
          }
        }
        if (0x3a1975b0 < iVar6) break;
        if (iVar6 == 0x240a8461) {
          (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
          iVar6 = -0x692a7641;
        }
        else {
          bVar2 = *(byte *)(param_2 + lVar7);
          bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0x5a079704,lVar7)
          ;
          pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                     (param_1,lVar7);
          *pbVar5 = bVar4 ^ bVar2;
          iVar6 = 0x3a1975b1;
        }
      }
      bVar3 = iVar6 == 0x498776f3;
      iVar6 = -0x692a7641;
    } while (bVar3);
    lVar7 = lVar7 + 1;
  } while( true );
}


