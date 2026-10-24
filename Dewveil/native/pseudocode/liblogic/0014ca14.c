// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014ca14; body: [[0014ca14, 0014ca1b]]

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


