// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d63d0; body: [[001d63d0, 001d6417]]

void FUN_001d63d0(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    *(byte *)(param_1 + 0x20) = bVar1;
  }
  return;
}


