// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001400dc; body: [[001400dc, 0014018f]]

long FUN_001400dc(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = -0x40f52cac;
  lVar1 = param_1;
  while( true ) {
    while (iVar2 == -0x40f52cac) {
      iVar2 = -0x129c3843;
    }
    if (iVar2 == -0x40af0a36) break;
    if (iVar2 == -0x129c3843) {
      lVar1 = (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc37085])(param_1);
      lVar1 = lVar1 + param_2;
      iVar2 = -0x40af0a36;
    }
  }
  return lVar1;
}


