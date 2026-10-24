// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00166f18; body: [[00166f18, 00166f7b]]

void FUN_00166f18(int param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_001689e0(0xffffffffffffffff,param_2 + -0x58);
    if (lVar1 == 1) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
      FUN_00167738(param_2 + -0x60);
    }
    return;
  }
  FUN_0014cb7c(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
  FUN_0014c9d0();
}


