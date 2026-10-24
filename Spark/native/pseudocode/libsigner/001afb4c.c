// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001afb4c; body: [[001afb4c, 001afc4f]]

void FUN_001afb4c(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_001ad6cc();
  lVar1 = 0x242c94bb96617abb;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x7f0dc9b3a3765301;
  }
  lVar2 = 0x5c75d317cff2739f;
  do {
    while (lVar3 = lVar2, lVar3 < 0x5c75d317cff2739f) {
      if (lVar3 == -0x7f0dc9b3a3765301) {
        free(param_1);
        lVar2 = 0x5e955a53164f3d9f;
      }
      else {
        lVar2 = lVar3;
        if (lVar3 == 0x242c94bb96617abb) {
          lVar2 = 0x5e955a53164f3d9f;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar3 == 0x5c75d317cff2739f) || (lVar2 = lVar3, lVar3 != 0x5e955a53164f3d9f));
  return;
}


