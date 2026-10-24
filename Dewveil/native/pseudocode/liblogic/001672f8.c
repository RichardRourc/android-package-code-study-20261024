// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001672f8; body: [[001672f8, 00167373]]

long __cxa_current_primary_exception(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  lVar2 = 0;
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    if ((lVar3 == 0) || (*(ulong *)(lVar3 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      lVar2 = 0;
    }
    else {
      if ((*(ulong *)(lVar3 + 0x60) & 0xff) == 1) {
        lVar3 = *(long *)(lVar3 + 8) + -0x80;
      }
      lVar2 = lVar3 + 0x80;
      FUN_001689e0(1,lVar3 + 8);
    }
  }
  return lVar2;
}


