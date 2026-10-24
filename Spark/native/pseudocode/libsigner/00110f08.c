// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00110f08; body: [[00110f08, 00111023]]

void FUN_00110f08(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)*(byte *)(param_1 + 8);
  lVar1 = -0x1038528dd04cc9b8;
  if (*(byte *)(param_1 + 8) != 0) {
    lVar1 = 0x7bc8e480be254667;
  }
  lVar2 = -0x1131d0135a6d3962;
  while( true ) {
    while (lVar4 = lVar2, lVar4 < 0x21f15559b2a9e8ab) {
      lVar2 = lVar1;
      if ((lVar4 != -0x1131d0135a6d3962) && (lVar2 = lVar4, lVar4 == -0x1038528dd04cc9b8)) {
        uVar3 = *(ulong *)(param_1 + 0x238);
        lVar2 = 0x21f15559b2a9e8ab;
      }
    }
    if (lVar4 == 0x21f15559b2a9e8ab) break;
    lVar2 = lVar4;
    if (lVar4 == 0x7bc8e480be254667) {
      FUN_002083ac(param_1 + 0x20,5);
      uVar3 = *(ulong *)(param_1 + 0x238) | 1;
      lVar2 = 0x21f15559b2a9e8ab;
    }
  }
  *(ulong *)(param_1 + 0x238) = uVar3 | 0x20;
  return;
}


