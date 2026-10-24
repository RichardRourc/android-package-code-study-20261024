// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd538; body: [[001cd538, 001cd58b]]

void FUN_001cd538(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    bVar3 = *param_2;
    if ((*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)(bVar3 >> 1);
      }
      FUN_001cd63c(param_1,pbVar2,uVar1);
      return;
    }
    if ((bVar3 & 1) != 0) {
      FUN_001cd58c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      return;
    }
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)param_1 = uVar4;
  }
  return;
}


