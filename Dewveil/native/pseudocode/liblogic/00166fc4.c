// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00166fc4; body: [[00166fc4, 0016701f]]

undefined8 __cxa_throw(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = __cxa_get_globals();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  lVar1 = __cxa_init_primary_exception(param_1,param_2,param_3);
  *(undefined8 *)(lVar1 + 8) = 1;
  FUN_00168a10(lVar1 + 0x60);
  lVar1 = FUN_00167020(lVar1);
  __cxa_begin_catch(lVar1 + 0x60);
  lVar1 = FUN_0014cb7c(*(undefined8 *)(lVar1 + 0x28));
  return *(undefined8 *)(lVar1 + -8);
}


