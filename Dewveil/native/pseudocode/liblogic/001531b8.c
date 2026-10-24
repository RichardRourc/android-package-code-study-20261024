// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001531b8; body: [[001531b8, 001531ff]]

void FUN_001531b8(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


