// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cbb80; body: [[001cbb80, 001cbd33]]

void FUN_001cbb80(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0x17);
  lVar7 = 0;
  do {
    iVar1 = 0x3fa4bb1e;
    if (0x17 < lVar7 + 1U) {
      iVar1 = -0x348ebc10;
    }
    iVar6 = 0x571d7331;
    do {
      while( true ) {
        while (0x3fa4bb1d < iVar6) {
          if (iVar6 == 0x3fa4bb1e) {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0xda7f234b,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar6 = -0x6694756c;
          }
          else {
            bVar3 = iVar6 != 0x571d7331;
            iVar6 = iVar1;
            if (bVar3) {
              (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
              iVar6 = -0x58c175ee;
            }
          }
        }
        if (iVar6 < -0x58c175ee) break;
        if (iVar6 != -0x348ebc10) {
          return;
        }
        iVar6 = -0x5d9f38dc;
      }
      bVar3 = iVar6 == -0x5d9f38dc;
      iVar6 = -0x58c175ee;
    } while (bVar3);
    lVar7 = lVar7 + 1;
  } while( true );
}


