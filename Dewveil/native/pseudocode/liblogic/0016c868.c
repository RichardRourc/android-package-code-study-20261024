// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0016c868; body: [[0016c868, 0016c897]]

char * FUN_0016c868(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_001395a4 + *(int *)(&DAT_001395a4 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


