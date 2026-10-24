// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f3abc; body: [[001f3abc, 001f3c5f]]

ulong FUN_001f3abc(uint param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  uVar4 = syscall(0x71,(ulong)param_1,param_2);
  puVar1 = (undefined1 *)0x353e7cd16df664a2;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
  }
  puVar2 = (undefined1 *)0x125dd2cc844aecb4;
  if ((int)uVar4 != -0x26) {
    puVar2 = &DAT_f615808441b1dafc;
  }
  uVar5 = uVar4;
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  while( true ) {
    while (puVar6 = puVar3, (long)puVar6 < 0x2ce2edddaf334d81) {
      if (puVar6 == &DAT_f615808441b1dafc) {
        uVar5 = uVar4 & 0xffffffff;
        puVar3 = (undefined1 *)0x2ce2edddaf334d81;
      }
      else {
        puVar3 = puVar2;
        if ((puVar6 != (undefined1 *)0x887e73b2c28c6a1) &&
           (puVar3 = puVar6, puVar6 == (undefined1 *)0x125dd2cc844aecb4)) {
          puVar3 = puVar1;
        }
      }
    }
    if (puVar6 == (undefined1 *)0x2ce2edddaf334d81) break;
    if (puVar6 == (undefined1 *)0x353e7cd16df664a2) {
      syscall(0xa9,param_2,0);
      uVar5 = 0;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) * 0x3e800000000 >> 0x20;
      puVar3 = (undefined1 *)0x2ce2edddaf334d81;
    }
    else {
      puVar3 = puVar6;
      if (puVar6 == (undefined1 *)0x696b554ab6b2c8c5) {
        uVar5 = 0xffffffea;
        puVar3 = (undefined1 *)0x2ce2edddaf334d81;
      }
    }
  }
  return uVar5;
}


