// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cc588; body: [[001cc588, 001cc6ff]]

void FUN_001cc588(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0x23);
  lVar7 = 0;
  do {
    iVar1 = -0x53b2ad89;
    if (0x23 < lVar7 + 1U) {
      iVar1 = 0x6a7a448e;
    }
    iVar6 = 0x6d4d671f;
    do {
      while( true ) {
        while (iVar6 < 0x579ffe1e) {
          if (iVar6 == -0x53b2ad89) {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0xa1800c42,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar6 = 0x579ffe1e;
          }
          else {
            if (iVar6 != 0x569abf2f) {
              return;
            }
            iVar6 = 0x147325b9;
          }
        }
        if (iVar6 != 0x6a7a448e) break;
        iVar6 = 0x569abf2f;
      }
      bVar3 = iVar6 == 0x6d4d671f;
      iVar6 = iVar1;
    } while (bVar3);
    lVar7 = lVar7 + 1;
  } while( true );
}


