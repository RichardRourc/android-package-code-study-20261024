// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a53f0; body: [[001a53f0, 001a551b]]

long FUN_001a53f0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long unaff_x20;
  
  iVar1 = 0x6600b94e;
  if (-1 < param_1) {
    iVar1 = 0x2e95d15c;
  }
  lVar3 = param_1;
  iVar2 = 0x25638ba7;
  while( true ) {
    do {
      while (iVar4 = iVar2, 0x25638ba6 < iVar4) {
        iVar2 = iVar1;
        if (0x2e95d15b < iVar4) {
          if (iVar4 == 0x2e95d15c) {
            lVar3 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b5bb])();
            iVar2 = -0xf8c6f39;
            if (-1 < lVar3) {
              iVar2 = 0x4e71dd07;
            }
          }
          else if (iVar4 == 0x4e71dd07) {
            unaff_x20 = lVar3 - param_1;
            iVar2 = -0x184ecd54;
          }
          else {
            unaff_x20 = -1;
            iVar2 = 0x175527fe;
          }
        }
      }
      iVar2 = 0x175527fe;
    } while (iVar4 == -0x184ecd54);
    if (iVar4 != -0xf8c6f39) break;
    unaff_x20 = -1;
    iVar2 = -0x184ecd54;
  }
  return unaff_x20;
}


