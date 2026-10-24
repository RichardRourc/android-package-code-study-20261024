// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0015300c; body: [[0015300c, 00153087]]

byte FUN_0015300c(long param_1)

{
  byte bVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    plVar2 = *(long **)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if ((*(byte *)((long)plVar2 + 10) & 3) == 2) {
      bVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    }
    else {
      bVar1 = (*(byte *)((long)plVar2 + 10) & 3) == 0;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}


