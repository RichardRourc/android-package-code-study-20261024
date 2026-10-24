// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016f87c; body: [[0016f87c, 0016f96f]]

void FUN_0016f87c(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar6 = 0;
  while( true ) {
    iVar1 = -0x2be3cb36;
    if (0x3f < uVar6) {
      iVar1 = 0x4ab196ab;
    }
    iVar3 = 0x4dd651f6;
    while( true ) {
      do {
        iVar5 = iVar3;
        iVar3 = iVar1;
      } while (0x4dd651f5 < iVar5);
      if (iVar5 != 0x4ab196ab) break;
      iVar3 = 0x1712260a;
    }
    if (iVar5 != -0x2be3cb36) break;
    uVar4 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52b73])
                      (param_2,param_1,param_3);
    param_1 = param_1 + 0x18;
    uVar2 = uVar6 & 0x3f;
    uVar6 = uVar6 + 1;
    *param_4 = ((ulong)~uVar4 & 1) << uVar2 | *param_4;
  }
  return;
}


