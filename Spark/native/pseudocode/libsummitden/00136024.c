// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00136024; body: [[00136024, 0013611f]]

void FUN_00136024(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  lVar2 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bf)])();
  uVar5 = 0;
  while( true ) {
    iVar4 = 0x33c5ba6b;
    while( true ) {
      while (iVar4 < 0x14307592) {
        bVar1 = iVar4 == -0x783135be;
        iVar4 = 0x57178af7;
        if (bVar1) {
          *(undefined1 *)(lVar2 + uVar5) = 0;
          iVar4 = 0x14307592;
        }
      }
      if (iVar4 != 0x33c5ba6b) break;
      uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_1);
      iVar4 = -0x783135be;
      if (uVar3 <= uVar5) {
        iVar4 = -0x32ba2e13;
      }
    }
    if (iVar4 != 0x14307592) break;
    uVar5 = uVar5 + 1;
  }
  return;
}


