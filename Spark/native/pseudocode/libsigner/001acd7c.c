// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001acd7c; body: [[001acd7c, 001ace8f]]

void FUN_001acd7c(undefined4 *param_1,long param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (uint *)*param_3;
  *param_3 = (long)(puVar3 + 2);
  lVar2 = FUN_001e53f4(*(long *)(param_2 + 8) + (ulong)*puVar3,puVar3[1]);
  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  if (lVar2 != 0) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  *param_4 = lVar2;
  puVar4 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar4 < 0x125dd2cc844aecb4) {
        if (puVar4 == &DAT_f615808441b1dafc) {
          puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
        }
        else if (puVar4 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar4 = puVar1;
        }
      }
      if (puVar4 != (undefined1 *)0x125dd2cc844aecb4) break;
      *param_1 = 2;
      puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
    }
  } while (puVar4 != (undefined1 *)0x696b554ab6b2c8c5);
  return;
}


