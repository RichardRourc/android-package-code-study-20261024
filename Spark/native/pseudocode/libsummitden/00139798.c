// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00139798; body: [[00139798, 00139993]]

long FUN_00139798(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  iVar1 = -0x33f9f5a9;
  if (param_2 != 0) {
    iVar1 = -0x38582b6e;
  }
  iVar2 = 0x8c39a34;
  if (param_1 != 0) {
    iVar2 = 0x567f90a9;
  }
  lVar5 = param_1;
  lVar3 = param_2;
  iVar4 = -0x51159a4b;
  do {
    while( true ) {
      while (iVar7 = iVar4, lVar6 = lVar3, lVar3 = lVar6, iVar4 = iVar7, iVar7 < 0x8c39a34) {
        if (iVar7 < -0x38582b6e) {
          if (iVar7 == -0x7fd27214) {
            lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e1)])(0,param_2);
            iVar4 = 0x7e3d57fb;
          }
          else if (iVar7 == -0x51159a4b) {
            iVar4 = iVar1;
          }
        }
        else if (iVar7 == -0x38582b6e) {
          lVar5 = 0;
          iVar4 = iVar2;
        }
        else if (iVar7 == -0x33f9f5a9) {
          lVar3 = 0;
          iVar4 = 0x64a52414;
        }
      }
      if (0x64a52413 < iVar7) break;
      if (iVar7 == 0x8c39a34) {
        iVar4 = -0x7fd27214;
        if (lVar5 != 0) {
          iVar4 = 0x7e3d57fb;
        }
      }
      else if (iVar7 == 0x567f90a9) {
        lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e1)])(param_1,param_2);
        iVar4 = 0x8c39a34;
      }
    }
    lVar3 = lVar5;
    iVar4 = 0x64a52414;
  } while ((iVar7 == 0x7e3d57fb) || (lVar3 = lVar6, iVar4 = iVar7, iVar7 != 0x64a52414));
  return lVar6;
}


