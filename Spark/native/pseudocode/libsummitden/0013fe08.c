// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013fe08; body: [[0013fe08, 0013fe8b]]

uint FUN_0013fe08(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = 0x53007da1;
  if (9 < (param_1 & 0xf)) {
    iVar1 = -0x2030ce08;
  }
  iVar2 = 0x4532dc84;
  uVar3 = 0;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x4532dc84);
    if (iVar4 == -0x64455ed7) break;
    iVar2 = -0x64455ed7;
    uVar3 = param_1 & 0xf | 0x30;
    if (iVar4 == -0x2030ce08) {
      uVar3 = (param_1 & 0xf) + 0x57;
    }
  }
  return uVar3;
}


