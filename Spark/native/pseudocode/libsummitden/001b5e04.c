// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b5e04; body: [[001b5e04, 001b5e63]]

void FUN_001b5e04(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = 0x264dafd;
  while( true ) {
    iVar1 = 0x5c4525f7;
    if (param_2 != 0) {
      iVar1 = 0x264dafd;
    }
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == -0x2fe050a5);
    if (iVar3 != 0x264dafd) break;
    lVar4 = 0;
    if (param_2 != 0) {
      lVar4 = param_1 / param_2;
    }
    lVar4 = param_1 - lVar4 * param_2;
    iVar2 = -0x2fe050a5;
    param_1 = param_2;
    param_2 = lVar4;
  }
  return;
}


