// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0016750c; body: [[0016750c, 00167537]]

bool __cxa_uncaught_exception(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = __cxa_get_globals_fast();
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = *(int *)(lVar2 + 8) != 0;
  }
  return bVar1;
}


