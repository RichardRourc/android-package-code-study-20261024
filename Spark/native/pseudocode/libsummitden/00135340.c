// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00135340; body: [[00135340, 0013542f]]

undefined8 FUN_00135340(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 unaff_x20;
  code *pcVar4;
  
  pcVar4 = (code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b1)];
  do {
    uVar1 = (*pcVar4)(param_1);
    iVar2 = -0x411d7c94;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0x20764441;
    }
  } while (iVar2 == -0x5dda2b8b);
  while (iVar2 != -0x7fab04cf) {
    uVar3 = 0xdcc371b0;
    if (iVar2 != -0x411d7c94) {
      uVar3 = 0xdcc371b3;
    }
    unaff_x20 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ uVar3)])(param_1);
    iVar2 = -0x7fab04cf;
  }
  return unaff_x20;
}


