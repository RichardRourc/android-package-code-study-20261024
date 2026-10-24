// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0016753c; body: [[0016753c, 0016755f]]

undefined4 __cxa_uncaught_exceptions(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = __cxa_get_globals_fast();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 8);
  }
  return uVar1;
}


