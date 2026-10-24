// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001810f0; body: [[001810f0, 001811cb]]

ulong FUN_001810f0(uint param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ca)])(0x41,param_1,0x5a);
  iVar1 = -0x380b405f;
  if ((int)uVar3 != 0) {
    iVar1 = -0x72bb2178;
  }
  iVar2 = -0x3ba40d2;
  while( true ) {
    while( true ) {
      do {
        iVar4 = iVar2;
        iVar2 = iVar1;
      } while (iVar4 == -0x3ba40d2);
      if (iVar4 != -0x72bb2178) break;
      uVar3 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8b5)])(param_1);
      iVar2 = 0x47483c8a;
    }
    if (iVar4 != -0x380b405f) break;
    uVar3 = (ulong)param_1;
    iVar2 = 0x47483c8a;
  }
  return uVar3;
}


