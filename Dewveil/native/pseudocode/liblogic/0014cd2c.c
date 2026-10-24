// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014cd2c; body: [[0014cd2c, 0014cd5f]]

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

void std::set_unexpected(_func_void *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_0014cd0c;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  FUN_001685e0(pcVar1,PTR___cxa_unexpected_handler_001749f0);
  return;
}


