// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d6224; body: [[001d6224, 001d629f]]

byte FUN_001d6224(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if ((bVar1 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if ((*(byte *)((long)plVar3 + 10) & 3) == 2) {
      bVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    }
    else {
      bVar2 = (*(byte *)((long)plVar3 + 10) & 3) == 0;
    }
    *(byte *)(param_1 + 0x20) = bVar1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


