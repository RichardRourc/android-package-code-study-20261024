// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001b19ac; body: [[001b19ac, 001b19e3]]

undefined * FUN_001b19ac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_001e43f0(param_1,0x2e);
  puVar1 = &DAT_001030a0;
  if (lVar2 != param_1 && lVar2 != 0) {
    puVar1 = (undefined *)(lVar2 + 1);
  }
  return puVar1;
}


