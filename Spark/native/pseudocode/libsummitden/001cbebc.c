// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cbebc; body: [[001cbebc, 001cc07f]]

void FUN_001cbebc(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,1);
  lVar7 = 0;
  do {
    iVar1 = 0xcb53120;
    if (1 < lVar7 + 1U) {
      iVar1 = 0x23cbdbac;
    }
    iVar3 = -0x181b80e3;
    do {
      while( true ) {
        while (iVar6 = iVar3, iVar6 < 0x1d7adfc3) {
          iVar3 = iVar1;
          if (iVar6 != -0x181b80e3) {
            if (iVar6 != 0xcb53120) {
              return;
            }
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0x9a22a36d,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar3 = 0x35f0908f;
          }
        }
        if (0x35f0908e < iVar6) break;
        if (iVar6 == 0x1d7adfc3) {
          (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
          iVar3 = -0x3ac6a828;
        }
        else {
          iVar3 = 0x6396a5b2;
        }
      }
      iVar3 = -0x3ac6a828;
    } while (iVar6 == 0x6396a5b2);
    lVar7 = lVar7 + 1;
  } while( true );
}


