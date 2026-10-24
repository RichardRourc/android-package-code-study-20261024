// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013aab4; body: [[0013aab4, 0013abdb]]

void FUN_0013aab4(void)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  lVar5 = FUN_001ea4cc(&DAT_001fbb40);
  uVar6 = 0;
  while( true ) {
    uVar8 = (ulong)uVar6;
    iVar1 = 0x2f4ada17;
    if (0x1f < uVar6) {
      iVar1 = -0x29239c83;
    }
    iVar7 = -0x1357aca1;
    do {
      bVar3 = iVar7 != -0x29239c83;
      iVar7 = 0x1ceaf0c;
      if (bVar3) {
        iVar7 = iVar1;
      }
    } while (iVar7 < -0x5d21a2);
    while (iVar7 == 0x2f4ada17) {
      bVar2 = (&DAT_0011d6a0)[uVar8];
      bVar4 = (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc3710f])
                        (0x3bc0f3715724de26,uVar8);
      *(byte *)(lVar5 + uVar8) = bVar4 ^ bVar2;
      iVar7 = -0x5d21a2;
    }
    if (iVar7 != -0x5d21a2) break;
    uVar6 = uVar6 + 1;
  }
  FUN_001ea4cc(&DAT_001fbb40);
  return;
}


