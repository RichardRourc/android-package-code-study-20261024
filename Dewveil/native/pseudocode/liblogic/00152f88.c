// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00152f88; body: [[00152f88, 00153003]]

byte FUN_00152f88(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if ((*(byte *)((long)puVar2 + 9) & 0xc0) == 0x80) {
      bVar1 = (**(code **)*puVar2)(puVar2);
    }
    else {
      bVar1 = *(byte *)((long)puVar2 + 9) < 0x40;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}


