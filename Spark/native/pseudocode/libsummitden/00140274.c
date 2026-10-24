// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00140274; body: [[00140274, 00140367]]

undefined8 FUN_00140274(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 unaff_x20;
  code *pcVar4;
  
  pcVar4 = (code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b1)];
  do {
    uVar1 = (*pcVar4)(param_1);
    iVar2 = 0x554fc23b;
    if ((uVar1 & 1) == 0) {
      iVar2 = 0x15d7f08b;
    }
  } while (iVar2 == -0x1c84db55);
  while (iVar2 != -0x65f13b5b) {
    if (iVar2 == 0x15d7f08b) {
      uVar3 = 0xdcc370b9;
    }
    else {
      uVar3 = 0xdcc37082;
    }
    unaff_x20 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ uVar3)])(param_1);
    iVar2 = -0x65f13b5b;
  }
  return unaff_x20;
}


