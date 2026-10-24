// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ccfa0; body: [[001ccfa0, 001cd00f]]

long FUN_001ccfa0(byte *param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  void *pvVar3;
  long lVar4;
  byte *pbVar5;
  
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
    pbVar5 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    pvVar3 = memchr(pbVar5 + param_3,param_2 & 0xff,uVar1 - param_3);
    lVar4 = (long)pvVar3 - (long)pbVar5;
    if (pvVar3 == (void *)0x0) {
      lVar4 = -1;
    }
    return lVar4;
  }
  return -1;
}


