// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014cd60; body: [[0014cd60, 0014cd93]]

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_terminate(void (*)()) */

void std::set_terminate(_func_void *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_0014cbc0;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  FUN_001685e0(pcVar1,PTR___cxa_terminate_handler_001749f8);
  return;
}


