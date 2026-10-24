// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd9c4; body: [[001cd9c4, 001cda0f]]

void FUN_001cd9c4(byte *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
    FUN_001cd184(param_1,param_2 - uVar1);
    return;
  }
  if ((bVar2 & 1) == 0) {
    *param_1 = (byte)((int)param_2 << 1);
    param_1[param_2 + 1] = 0;
    return;
  }
  *(ulong *)(param_1 + 8) = param_2;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + param_2) = 0;
  return;
}


