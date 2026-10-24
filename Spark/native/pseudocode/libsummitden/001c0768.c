// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c0768; body: [[001c0768, 001c08eb]]

void FUN_001c0768(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,0xf);
  lVar7 = 0;
  do {
    iVar1 = 0x4bc6492a;
    if (0xf < lVar7 + 1U) {
      iVar1 = -0x28e23b9c;
    }
    iVar3 = 0x14c3de66;
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, 0x14c3de65 < iVar6) {
          iVar3 = iVar1;
          if (iVar6 != 0x14c3de66) {
            if (iVar6 != 0x4bc6492a) {
              return;
            }
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])
                              (0xf3acdb89,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar3 = -0x7e1f217d;
          }
        }
        if (iVar6 != -0x46e4dfe8) break;
        iVar3 = 0x6f4919f7;
      }
      if (iVar6 != -0x28e23b9c) break;
      iVar3 = -0x46e4dfe8;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


