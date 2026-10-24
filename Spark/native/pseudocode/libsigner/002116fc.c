// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002116fc; body: [[002116fc, 00211807]]

void FUN_002116fc(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = calloc(1,0x10);
  puVar1 = &DAT_f615808441b1dafc;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar3 < 0x125dd2cc844aecb4) {
        if (puVar3 == &DAT_f615808441b1dafc) {
          *param_1 = 2;
          puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
        }
        else if (puVar3 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar3 = puVar1;
        }
      }
      if (puVar3 != (undefined1 *)0x125dd2cc844aecb4) break;
      *puVar2 = param_2;
      *(undefined8 *)(puVar2 + 2) = param_3;
      puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
    }
  } while (puVar3 != (undefined1 *)0x696b554ab6b2c8c5);
  return;
}


