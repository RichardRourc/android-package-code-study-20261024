// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00139098; body: [[00139098, 00139203]]

void FUN_00139098(void)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f6)])();
  iVar1 = -0x4fc7528d;
  if (*piVar3 != 2) {
    iVar1 = -0x47bb6227;
  }
  iVar4 = -0x37a6bba9;
  while( true ) {
    while( true ) {
      while (-0x37a6bbaa < iVar4) {
        bVar2 = iVar4 != -0x37a6bba9;
        iVar4 = iVar1;
        if (bVar2) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371eb)])();
          *piVar3 = 2;
          iVar4 = -0x785d1c7a;
        }
      }
      if (iVar4 != -0x785d1c7a) break;
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e9)])();
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ea)])();
      iVar4 = -0x4fc7528d;
    }
    if (iVar4 != -0x47bb6227) break;
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e9)])();
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e8)])();
    iVar4 = -0x785d1c7a;
    if (*piVar3 != 2) {
      iVar4 = -0x24b132d3;
    }
  }
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ed)])();
  return;
}


