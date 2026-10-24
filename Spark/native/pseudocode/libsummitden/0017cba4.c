// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017cba4; body: [[0017cba4, 0017cc57]]

ulong FUN_0017cba4(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  
  bVar4 = (param_1 & 1) != 0;
  iVar1 = -0x7cf325d4;
  if (bVar4) {
    iVar1 = 0x4f7554fe;
  }
  uVar5 = 0;
  iVar2 = -0x377940f9;
  if (bVar4) {
    iVar2 = 0x22c9138d;
  }
  iVar3 = -0x4c3d04d8;
  while( true ) {
    do {
      while (iVar6 = iVar3, iVar6 < -0x377940f9) {
        iVar3 = iVar1;
        if (iVar6 != -0x4c3d04d8) {
          uVar5 = uVar5 ^ (ulong)PTR_getpid_001f6ad8;
          iVar3 = 0x4f7554fe;
        }
      }
      iVar3 = iVar2;
    } while (iVar6 == 0x4f7554fe);
    if (iVar6 == -0x377940f9) break;
    uVar5 = uVar5 ^ (ulong)PTR_getegid_001f6ae0;
    iVar3 = -0x377940f9;
  }
  return uVar5;
}


