// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014cb4c; body: [[0014cb4c, 0014cb67]]

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unexpected() */

undefined8 std::unexpected(void)

{
  FUN_0014cb30(*(undefined8 *)PTR___cxa_unexpected_handler_001749f0);
  return *(undefined8 *)PTR___cxa_terminate_handler_001749f8;
}


