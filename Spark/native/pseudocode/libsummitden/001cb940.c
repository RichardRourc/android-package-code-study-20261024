// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cb940; body: [[001cb940, 001cbb07]]

void FUN_001cb940(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,4);
  lVar7 = 0;
  do {
    iVar1 = 0x3fddccc8;
    if (4 < lVar7 + 1U) {
      iVar1 = 0x43a352fd;
    }
    iVar3 = -0x5df41642;
    do {
      while (iVar6 = iVar3, 0x3bff77ee < iVar6) {
        if (iVar6 < 0x43a352fd) {
          if (iVar6 == 0x3bff77ef) {
            (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
            iVar3 = 0x6f26f770;
          }
          else {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0xb50570ad,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar3 = -0x6a52c0f;
          }
        }
        else {
          if (iVar6 != 0x43a352fd) {
            return;
          }
          iVar3 = 0x3088a2d9;
        }
      }
      iVar3 = iVar1;
    } while ((iVar6 == -0x5df41642) || (iVar3 = 0x6f26f770, iVar6 == 0x3088a2d9));
    lVar7 = lVar7 + 1;
  } while( true );
}


