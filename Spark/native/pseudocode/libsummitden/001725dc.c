// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001725dc; body: [[001725dc, 0017273b]]

void FUN_001725dc(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0x160679f9;
  iVar1 = iVar4;
  if (param_2 != 0) {
    iVar1 = 0x2f35511f;
  }
  iVar2 = iVar4;
  if (param_3 != 0) {
    iVar2 = -0x654421cc;
  }
  iVar3 = iVar4;
  if (param_1 != 0) {
    iVar3 = -0x2d13c3d6;
  }
  if (param_4 != 0) {
    iVar4 = -0x4cd6c832;
  }
  iVar5 = -0x20f8842c;
  do {
    while( true ) {
      while (iVar6 = iVar5, iVar6 < -0x20f8842c) {
        iVar5 = iVar4;
        if ((iVar6 != -0x654421cc) && (iVar5 = iVar1, iVar6 == -0x4cd6c832)) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])(param_1,param_2,param_4);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
          iVar5 = 0x2e6d3c73;
        }
      }
      if (0x2e6d3c72 < iVar6) break;
      iVar5 = 0x2e6d3c73;
      if (iVar6 == -0x20f8842c) {
        iVar5 = iVar3;
      }
    }
    iVar5 = iVar2;
  } while (iVar6 == 0x2f35511f);
  return;
}


