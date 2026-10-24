// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cee20; body: [[001cee20, 001cee5f]]

void FUN_001cee20(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  
  plVar1 = (long *)FUN_001cf00c();
  if ((plVar1 != (long *)0x0) && (unaff_x19 = *plVar1, unaff_x19 != 0)) goto LAB_001cee48;
  do {
    FUN_001cee74(PTR_FUN_00204048);
LAB_001cee48:
    uVar2 = FUN_001e95c8(unaff_x19 + 0x60);
  } while ((uVar2 & 1) == 0);
  FUN_001cee74(*(undefined8 *)(unaff_x19 + 0x28));
                    /* WARNING: Subroutine does not return */
  FUN_001cd4e0();
}


