// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00167498; body: [[00167498, 00167507]]

void FUN_00167498(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = *(long *)(param_2 + -0x58);
    if ((lVar2 != 0) && (lVar1 = FUN_001689e0(0xffffffffffffffff,lVar2 + -0x78), lVar1 == 1)) {
      if (*(code **)(lVar2 + -0x68) != (code *)0x0) {
        (**(code **)(lVar2 + -0x68))(lVar2);
      }
      FUN_00167738(lVar2 + -0x80);
    }
    FUN_00167738(param_2 + -0x60);
    return;
  }
  FUN_0014cb7c(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
  FUN_0014c9d0();
}


