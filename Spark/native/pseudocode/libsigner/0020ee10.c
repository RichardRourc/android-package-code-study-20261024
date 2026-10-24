// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0020ee10; body: [[0020ee10, 0020ef17]]

void FUN_0020ee10(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = -0x408ee13b050179d2;
  if (param_1 != (void *)0x0) {
    lVar1 = 0x3b36a7a007b21166;
  }
  lVar2 = 0x6b5051bf1aed633d;
  do {
    while( true ) {
      while (0x3b36a7a007b21165 < lVar2) {
        if (lVar2 == 0x3b36a7a007b21166) {
          FUN_0020ee10(*(undefined8 *)((long)param_1 + 8));
          free(param_1);
          lVar2 = 0x1cba5f82f77e481f;
        }
        else if (lVar2 == 0x6b5051bf1aed633d) {
          lVar2 = lVar1;
        }
      }
      if (lVar2 != -0x408ee13b050179d2) break;
      lVar2 = 0x1cba5f82f77e481f;
    }
  } while (lVar2 != 0x1cba5f82f77e481f);
  return;
}


