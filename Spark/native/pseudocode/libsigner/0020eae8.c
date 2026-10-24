// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0020eae8; body: [[0020eae8, 0020eaeb]]

void thunk_FUN_002115f8(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x32f4713bcaf93571;
  if (param_1 != (void *)0x0) {
    lVar1 = -0x316a2fad8e5725cc;
  }
  lVar2 = 0x31b9d74c89a90fe3;
  while( true ) {
    while (lVar2 < 0x32f4713bcaf93571) {
      if (lVar2 == -0x316a2fad8e5725cc) {
        FUN_002114f4(*(undefined8 *)((long)param_1 + 8));
        free(param_1);
        lVar2 = 0x65536dc2a8308acd;
      }
      else if (lVar2 == 0x31b9d74c89a90fe3) {
        lVar2 = lVar1;
      }
    }
    if (lVar2 == 0x65536dc2a8308acd) break;
    if (lVar2 == 0x32f4713bcaf93571) {
      lVar2 = 0x65536dc2a8308acd;
    }
  }
  return;
}


