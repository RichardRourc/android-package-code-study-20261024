// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f4fdc; body: [[001f4fdc, 001f50eb]]

bool FUN_001f4fdc(undefined4 *param_1,void *param_2,size_t param_3,ulong param_4,FILE *param_5)

{
  undefined1 *puVar1;
  size_t sVar2;
  undefined1 *puVar3;
  
  sVar2 = fread(param_2,param_3,param_4,param_5);
  puVar1 = &DAT_f615808441b1dafc;
  if (sVar2 < param_4) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
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
  return param_4 <= sVar2;
}


