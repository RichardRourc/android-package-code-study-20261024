// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001663bc; body: [[001663bc, 001664df]]

uint FUN_001663bc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong extraout_x9;
  ulong uVar9;
  
  lVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])();
  lVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])(param_2);
  iVar1 = -0xaaafc13;
  if (lVar5 != lVar6) {
    iVar1 = -0x6390c717;
  }
  uVar9 = extraout_x9;
  iVar4 = 0x4cbe15d2;
  do {
    while (iVar4 == -0xaaafc13) {
      uVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab4)])(param_1);
      uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab4)])(param_2);
      iVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bc3)])(uVar7,uVar8,lVar5);
      uVar9 = (ulong)(iVar4 == 0);
      iVar4 = -0x6390c717;
    }
    uVar2 = (uint)uVar9;
    uVar9 = 0;
    bVar3 = iVar4 == 0x4cbe15d2;
    iVar4 = iVar1;
  } while (bVar3);
  return uVar2 & 1;
}


