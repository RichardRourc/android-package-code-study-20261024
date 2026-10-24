// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cf124; body: [[001cf124, 001cf17b]]

void FUN_001cf124(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  *param_1 = (long)(PTR_DAT_001f6b40 + 0x10);
  iVar1 = FUN_001eab10(0xffffffff,lVar2 + -8);
  if (iVar1 + -1 < 0) {
    free((void *)(lVar2 + -0x18));
  }
  FUN_001cf030(param_1);
  return;
}


