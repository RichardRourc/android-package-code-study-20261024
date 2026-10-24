// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013a98c; body: [[0013a98c, 0013aab3]]

void FUN_0013a98c(void)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  lVar5 = FUN_001ea4cc(&DAT_001fbb20);
  uVar6 = 0;
  while( true ) {
    uVar8 = (ulong)uVar6;
    iVar1 = 0x2cbcb08c;
    if (0x1f < uVar6) {
      iVar1 = 0x75c2209d;
    }
    iVar7 = -0x72332c7e;
    while( true ) {
      while (iVar7 < 0x624d0252) {
        bVar3 = iVar7 != -0x72332c7e;
        iVar7 = iVar1;
        if (bVar3) {
          bVar2 = (&DAT_0011d680)[uVar8];
          bVar4 = (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc3710f])
                            (0x84b494bcb1d5623b,uVar8);
          *(byte *)(lVar5 + uVar8) = bVar4 ^ bVar2;
          iVar7 = 0x64b75259;
        }
      }
      if (iVar7 != 0x75c2209d) break;
      iVar7 = 0x624d0252;
    }
    if (iVar7 == 0x624d0252) break;
    uVar6 = uVar6 + 1;
  }
  FUN_001ea4cc(&DAT_001fbb20);
  return;
}


