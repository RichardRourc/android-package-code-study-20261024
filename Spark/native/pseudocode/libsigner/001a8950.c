// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001a8950; body: [[001a8950, 001a8ab7]]

void FUN_001a8950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  FUN_00116d24(param_3);
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while ((long)puVar3 < 0x125dd2cc844aecb4) {
        if (puVar3 == &DAT_f615808441b1dafc) {
          puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
        }
        else if ((puVar3 == (undefined1 *)0x887e73b2c28c6a1) &&
                (uVar2 = FUN_00111024(param_1,&local_6c,param_2,param_3),
                puVar3 = &DAT_f615808441b1dafc, (uVar2 & 1) == 0)) {
          puVar3 = (undefined1 *)0x125dd2cc844aecb4;
        }
      }
      if (puVar3 != (undefined1 *)0x125dd2cc844aecb4) break;
      FUN_00116c90(param_3);
      local_6c = 0;
      puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
    }
  } while (puVar3 != (undefined1 *)0x696b554ab6b2c8c5);
  FUN_0016db64(&local_6c,param_1,param_3);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


