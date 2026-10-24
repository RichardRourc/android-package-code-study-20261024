// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d62a8; body: [[001d62a8, 001d6323]]

byte FUN_001d62a8(long param_1)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  long *plVar4;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if ((bVar1 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar2 = *(ushort *)((long)plVar4 + 9) >> 10 & 3;
    if (uVar2 == 2) {
      bVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    else {
      bVar3 = uVar2 == 0;
    }
    *(byte *)(param_1 + 0x20) = bVar1;
  }
  else {
    bVar3 = 0;
  }
  return bVar3 & 1;
}


