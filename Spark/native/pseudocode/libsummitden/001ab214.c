// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ab214; body: [[001ab214, 001ab26b]]

void FUN_001ab214(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  while( true ) {
    do {
      iVar1 = 0x3b678049;
      if (*(char *)(param_1 + lVar2) != '\0') {
        iVar1 = -0x7d52b299;
      }
    } while (iVar1 == 0x30b5f1c3);
    if (iVar1 != -0x7d52b299) break;
    lVar2 = lVar2 + 1;
  }
  return;
}


