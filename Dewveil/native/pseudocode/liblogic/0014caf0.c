// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014caf0; body: [[0014caf0, 0014cb2f]]

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  if ((plVar1 != (long *)0x0) && (unaff_x19 = *plVar1, unaff_x19 != 0)) goto LAB_0014cb18;
  do {
    FUN_0014cb7c(*(undefined8 *)PTR___cxa_terminate_handler_001749f8);
LAB_0014cb18:
    uVar2 = FUN_00166d74(unaff_x19 + 0x60);
  } while ((uVar2 & 1) == 0);
  FUN_0014cb7c(*(undefined8 *)(unaff_x19 + 0x28));
                    /* WARNING: Subroutine does not return */
  FUN_0014c9d0();
}


