// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0020eaec; body: [[0020eaec, 0020ebdf]]

void FUN_0020eaec(undefined4 *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  pvVar2 = calloc(1,8);
  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  if (pvVar2 != (void *)0x0) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar3 < 0x125dd2cc844aecb4) {
        if (puVar3 == &DAT_f615808441b1dafc) {
          puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
        }
        else if (puVar3 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar3 = puVar1;
        }
      }
      if (puVar3 != (undefined1 *)0x125dd2cc844aecb4) break;
      *param_1 = 2;
      puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
    }
  } while (puVar3 != (undefined1 *)0x696b554ab6b2c8c5);
  return;
}


