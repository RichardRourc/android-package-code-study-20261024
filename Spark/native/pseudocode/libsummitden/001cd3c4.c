// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd3c4; body: [[001cd3c4, 001cd457]]

void FUN_001cd3c4(byte *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 != 0) {
    bVar4 = *param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar3 = param_1 + 1;
      uVar2 = (ulong)(bVar4 >> 1);
    }
    uVar5 = uVar2 - param_2;
    uVar1 = uVar5;
    if (param_3 <= uVar5) {
      uVar1 = param_3;
    }
    if (param_3 < uVar5) {
      memmove(pbVar3 + param_2,pbVar3 + param_2 + uVar1,uVar5 - uVar1);
      bVar4 = *param_1;
    }
    lVar6 = uVar2 - uVar1;
    if ((bVar4 & 1) == 0) {
      *param_1 = (byte)((int)lVar6 << 1);
    }
    else {
      *(long *)(param_1 + 8) = lVar6;
    }
    pbVar3[lVar6] = 0;
  }
  return;
}


