// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00211808; body: [[00211808, 00211903]]

void FUN_00211808(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0x2ce2edddaf334d81;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x2ddd98d59c65e2d2;
  }
  lVar2 = 0x353e7cd16df664a2;
  while( true ) {
    while (lVar3 = lVar2, 0x2ce2edddaf334d80 < lVar3) {
      lVar2 = lVar1;
      if ((lVar3 != 0x353e7cd16df664a2) && (lVar2 = lVar3, lVar3 == 0x2ce2edddaf334d81)) {
        lVar2 = -0x55b9520f58750739;
      }
    }
    if (lVar3 == -0x55b9520f58750739) break;
    lVar2 = lVar3;
    if (lVar3 == -0x2ddd98d59c65e2d2) {
      free(param_1);
      lVar2 = -0x55b9520f58750739;
    }
  }
  return;
}


