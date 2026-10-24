// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013e7c4; body: [[0013e7c4, 0013e8cb]]

void FUN_0013e7c4(long param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  while( true ) {
    iVar1 = -0x2e677646;
    if (7 < uVar4) {
      iVar1 = 0x5de27a7a;
    }
    iVar5 = -0x134d5eb7;
    while( true ) {
      while (iVar5 < 0x164c6ee1) {
        bVar2 = iVar5 == -0x2e677646;
        iVar5 = iVar1;
        if (bVar2) {
          uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709d)])((ulong)uVar4);
          *(undefined4 *)(param_1 + (ulong)uVar4 * 4) = uVar3;
          iVar5 = 0x164c6ee1;
        }
      }
      if (iVar5 != 0x5de27a7a) break;
      iVar5 = 0x213323a8;
    }
    if (iVar5 != 0x164c6ee1) break;
    uVar4 = uVar4 + 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709c)])
            (param_1 + 0x28,0xffffffffffffffff,0,0x40);
  return;
}


