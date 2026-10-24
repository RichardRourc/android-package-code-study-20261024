// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0015fca4; body: [[0015fca4, 0015fccb]]

undefined1  [16] FUN_0015fca4(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_00138f20 + (long)*(int *)(param_1 + 0xc) * 8);
  auVar1._0_8_ = &DAT_00138f50 + *(int *)(&DAT_00138f50 + (long)*(int *)(param_1 + 0xc) * 4);
  return auVar1;
}


