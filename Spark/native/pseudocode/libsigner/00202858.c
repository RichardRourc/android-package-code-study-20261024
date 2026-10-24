// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00202858; body: [[00202858, 00202927]]

void FUN_00202858(ulong *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = &DAT_f615808441b1dafc;
  if (param_1 != (ulong *)0x0) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar2 < 0x125dd2cc844aecb4) {
        if (puVar2 == &DAT_f615808441b1dafc) {
          puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
        }
        else if (puVar2 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar2 = puVar1;
        }
      }
      if (puVar2 != (undefined1 *)0x125dd2cc844aecb4) break;
      *param_1 = (ulong)param_2;
      puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
    }
  } while (puVar2 != (undefined1 *)0x696b554ab6b2c8c5);
  return;
}


