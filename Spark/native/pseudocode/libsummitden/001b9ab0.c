// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b9ab0; body: [[001b9ab0, 001b9b77]]

void FUN_001b9ab0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  while( true ) {
    iVar1 = 0x640c4215;
    if (param_2 != lVar5) {
      iVar1 = 0x55628bf1;
    }
    iVar2 = 0x192168f;
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x192168f);
    if (iVar4 != 0x55628bf1) break;
    lVar5 = lVar5 + -0x30;
    uVar3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5b)])(lVar5);
    (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5a)])(param_1 + 0x10,uVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


