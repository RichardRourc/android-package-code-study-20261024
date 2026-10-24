// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002114f4; body: [[002114f4, 002115f7]]

void FUN_002114f4(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0x3007aa9d32d99be8;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x25a3e9f6f44c50c;
  }
  lVar2 = -0x6bf42222db0ad31d;
  while( true ) {
    while (lVar3 = lVar2, lVar3 < 0xfb13253120e52d5) {
      lVar2 = lVar1;
      if ((lVar3 != -0x6bf42222db0ad31d) && (lVar2 = lVar3, lVar3 == -0x25a3e9f6f44c50c)) {
        FUN_002114f4(*(undefined8 *)((long)param_1 + 8));
        free(param_1);
        lVar2 = 0xfb13253120e52d5;
      }
    }
    if (lVar3 == 0xfb13253120e52d5) break;
    lVar2 = lVar3;
    if (lVar3 == 0x3007aa9d32d99be8) {
      lVar2 = 0xfb13253120e52d5;
    }
  }
  return;
}


