// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00168c3c; body: [[00168c3c, 00168cbf]]

void FUN_00168c3c(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0016c928(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00168b08(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00168cc0(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_00174a98;
  fprintf((FILE *)(PTR___sF_00174a98 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


