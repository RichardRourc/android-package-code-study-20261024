// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00167198; body: [[00167198, 001671e7]]

undefined8 __cxa_current_exception_type(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    if ((lVar3 == 0) || (*(ulong *)(lVar3 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  return uVar2;
}


