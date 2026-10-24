// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00138e54; body: [[00138e54, 00138ef3]]

bool FUN_00138e54(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  bVar3 = 0;
  iVar4 = 0;
  iVar5 = -0x30c797b6;
  while( true ) {
    while( true ) {
      iVar1 = -0x5afa20cc;
      if (0xf < iVar4) {
        iVar1 = -0x38590d2d;
      }
      while (-0x38590d2e < iVar5) {
        bVar2 = iVar5 != -0x38590d2d;
        iVar5 = -0x591bf550;
        if (bVar2) {
          iVar5 = iVar1;
        }
      }
      if (iVar5 != -0x7c94998a) break;
      iVar4 = iVar4 + 1;
      iVar5 = -0x30c797b6;
    }
    if (iVar5 != -0x5afa20cc) break;
    bVar3 = *(byte *)(param_2 + iVar4) ^ *(byte *)(param_1 + iVar4) | bVar3;
    iVar5 = -0x7c94998a;
  }
  return bVar3 == 0;
}


