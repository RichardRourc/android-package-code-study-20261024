// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd2fc; body: [[001cd2fc, 001cd34b]]

ulong FUN_001cd2fc(byte *param_1,byte param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar3 = (ulong)(*param_1 >> 1);
  }
  if (uVar3 != 0) {
    if (param_3 < uVar3) {
      uVar3 = param_3 + 1;
    }
    while (uVar3 != 0) {
      lVar2 = uVar3 - 1;
      uVar3 = uVar3 - 1;
      if (pbVar1[lVar2] == param_2) {
        return uVar3;
      }
    }
  }
  return 0xffffffffffffffff;
}


