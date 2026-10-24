// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00153090; body: [[00153090, 0015310b]]

byte FUN_00153090(long param_1)

{
  ushort uVar1;
  byte bVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar1 = *(ushort *)((long)plVar3 + 9) >> 10 & 3;
    if (uVar1 == 2) {
      bVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    else {
      bVar2 = uVar1 == 0;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


