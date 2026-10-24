// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015129c; body: [[0015129c, 00151393]]

long FUN_0015129c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = 0x11560e90;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = 0x12d0e97a;
  }
  iVar2 = 0x3a83bedd;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x3a83bedd);
    if (iVar4 == -0x140b431f) break;
    if (iVar4 == 0x11560e90) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bff)])(param_1,param_2);
      uVar3 = uVar3 + 0x18;
    }
    else {
      uVar3 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bc0)])(param_1,param_2);
    }
    iVar2 = -0x140b431f;
  }
  *(ulong *)(param_1 + 8) = uVar3;
  return uVar3 - 0x18;
}


