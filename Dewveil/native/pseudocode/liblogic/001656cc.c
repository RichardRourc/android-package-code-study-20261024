// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001656cc; body: [[001656cc, 00165753]]

void FUN_001656cc(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      *(long *)(param_2 + 0x20) = param_3;
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x50);
      return;
    }
    if ((*(long *)(param_2 + 0x28) != *(long *)(param_2 + 0x50)) ||
       (*(long *)(param_2 + 0x20) != param_3)) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  return;
}


