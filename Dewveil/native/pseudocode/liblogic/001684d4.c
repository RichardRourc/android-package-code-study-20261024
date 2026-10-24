// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001684d4; body: [[001684d4, 0016850f]]

ulong FUN_001684d4(ulong param_1)

{
  uint uVar1;
  
  if (DAT_00178fd0 == '\x01') {
    uVar1 = pthread_key_delete(DAT_00178fd4);
    param_1 = (ulong)uVar1;
    DAT_00178fd0 = '\0';
  }
  return param_1;
}


