// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d61a0; body: [[001d61a0, 001d621b]]

byte FUN_001d61a0(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if ((bVar1 & 1) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if ((char)*(ushort *)((long)puVar3 + 9) < -0x40) {
      bVar2 = (**(code **)*puVar3)(puVar3);
    }
    else {
      bVar2 = (*(ushort *)((long)puVar3 + 9) & 0xc0) == 0;
    }
    *(byte *)(param_1 + 0x20) = bVar1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


