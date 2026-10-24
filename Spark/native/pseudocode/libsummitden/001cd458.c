// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd458; body: [[001cd458, 001cd4df]]

uint FUN_001cd458(byte *param_1,ulong param_2,ulong param_3,void *param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  bVar3 = *param_1;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if ((param_5 != 0xffffffffffffffff) && (param_2 <= uVar1)) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    uVar2 = uVar1 - param_2;
    if (param_3 <= uVar1 - param_2) {
      uVar2 = param_3;
    }
    if ((bVar3 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    __n = param_5;
    if (uVar2 <= param_5) {
      __n = uVar2;
    }
    uVar4 = memcmp(pbVar6 + param_2,param_4,__n);
    uVar5 = (uint)(param_5 < uVar2);
    if (uVar2 < param_5) {
      uVar5 = 0xffffffff;
    }
    if (uVar4 != 0) {
      uVar5 = uVar4;
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cc784();
}


