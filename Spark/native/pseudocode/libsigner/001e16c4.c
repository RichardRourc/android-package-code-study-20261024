// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001e16c4; body: [[001e16c4, 001e17a7]]

long FUN_001e16c4(char *param_1,char *param_2)

{
  char *pcVar1;
  char *in_x14;
  undefined1 *puVar2;
  char *pcVar3;
  
  pcVar3 = param_1 + 1;
  pcVar1 = param_1;
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar2 < 0x125dd2cc844aecb4) {
        if (puVar2 == &DAT_f615808441b1dafc) {
          param_2 = pcVar3;
          in_x14 = pcVar1;
          puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
          if (*pcVar1 != '\0') {
            puVar2 = (undefined1 *)0x125dd2cc844aecb4;
          }
        }
        else if (puVar2 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar2 = &DAT_f615808441b1dafc;
        }
      }
      if (puVar2 != (undefined1 *)0x125dd2cc844aecb4) break;
      pcVar3 = param_2 + 1;
      pcVar1 = param_2;
      puVar2 = &DAT_f615808441b1dafc;
    }
  } while (puVar2 != (undefined1 *)0x696b554ab6b2c8c5);
  return (long)in_x14 - (long)param_1;
}


