// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001fa06c; body: [[001fa06c, 001fa173]]

void FUN_001fa06c(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 2);
  lVar1 = 0x20737e34b7c0d799;
  if (__ptr != (void *)0x0) {
    lVar1 = 0x187cf29d06d6bd9e;
  }
  lVar2 = -0x30c47c559a45f485;
  while( true ) {
    while (0x187cf29d06d6bd9d < lVar2) {
      if (lVar2 == 0x187cf29d06d6bd9e) {
        free(__ptr);
        *(undefined8 *)(param_1 + 2) = 0;
        lVar2 = -0x7353f89f407630c4;
      }
      else if (lVar2 == 0x20737e34b7c0d799) {
        lVar2 = -0x7353f89f407630c4;
      }
    }
    if (lVar2 == -0x7353f89f407630c4) break;
    if (lVar2 == -0x30c47c559a45f485) {
      lVar2 = lVar1;
    }
  }
  *param_1 = 0;
  return;
}


