// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017d21c; body: [[0017d21c, 0017d29b]]

uint FUN_0017d21c(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = 0x46118800;
  if ((param_2 & 0x1f) != 0) {
    iVar1 = -0x799dde77;
  }
  iVar2 = 0x7ce903c4;
  uVar3 = param_2;
  while( true ) {
    while( true ) {
      do {
        iVar4 = iVar2;
        iVar2 = iVar1;
      } while (iVar4 == 0x7ce903c4);
      if (iVar4 != -0x799dde77) break;
      iVar2 = -0x454a8e47;
      uVar3 = param_1 >> (-param_2 & 0x1f) | param_1 << 0x20 - (-param_2 & 0x1f);
    }
    if (iVar4 == -0x454a8e47) break;
    iVar2 = -0x454a8e47;
    uVar3 = param_1;
  }
  return uVar3;
}


