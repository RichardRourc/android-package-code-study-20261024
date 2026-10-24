// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001407f4; body: [[001407f4, 0014090b]]

long FUN_001407f4(ulong param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long unaff_x20;
  
  lVar3 = 0xb795e935;
  iVar1 = 0x76c27cf;
  if (0x16 < param_1) {
    iVar1 = -0x486a16cb;
  }
  iVar2 = -0x45e2e93;
  while( true ) {
    while( true ) {
      while( true ) {
        do {
          iVar4 = iVar2;
          iVar2 = iVar1;
        } while (iVar4 == -0x45e2e93);
        if (0x76c27ce < iVar4) break;
        if (iVar4 == -0x68c83721) {
          lVar3 = lVar3 + 2;
          iVar2 = 0x13ecc496;
        }
        else {
          lVar3 = (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc370a1])
                            (param_1 + 1);
          lVar3 = lVar3 + -1;
          iVar2 = -0x68c83721;
          if (lVar3 != 0x17) {
            iVar2 = 0x13ecc496;
          }
        }
      }
      if (iVar4 != 0x76c27cf) break;
      unaff_x20 = 0x16;
      iVar2 = 0x1788d45d;
    }
    if (iVar4 != 0x13ecc496) break;
    unaff_x20 = lVar3;
    iVar2 = 0x1788d45d;
  }
  return unaff_x20;
}


