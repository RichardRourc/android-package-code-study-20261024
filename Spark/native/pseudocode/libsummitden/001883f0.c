// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001883f0; body: [[001883f0, 001884ef]]

long FUN_001883f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  lVar4 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b58a])();
  iVar1 = 0x3f9f2eca;
  if (lVar4 != 0) {
    iVar1 = 0x253570ec;
  }
  iVar2 = -0xf57061;
  if (-1 < lVar4) {
    iVar2 = 0x8312268;
  }
  lVar5 = lVar4;
  iVar3 = 0x6eb1ce06;
  while( true ) {
    do {
      while (iVar6 = iVar3, 0x253570eb < iVar6) {
        iVar3 = iVar2;
        if (iVar6 != 0x6eb1ce06) {
          if (iVar6 == 0x253570ec) {
            lVar5 = (lVar4 + 999) / 1000;
            iVar3 = 0xfd6947c;
          }
          else {
            lVar5 = 0;
            iVar3 = 0xfd6947c;
          }
        }
      }
      iVar3 = iVar1;
    } while (iVar6 == 0x8312268);
    if (iVar6 != -0xf57061) break;
    lVar5 = -1;
    iVar3 = 0xfd6947c;
  }
  return lVar5;
}


