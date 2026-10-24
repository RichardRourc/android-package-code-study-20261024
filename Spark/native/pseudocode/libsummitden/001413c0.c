// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001413c0; body: [[001413c0, 001414b7]]

long FUN_001413c0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = -0x2a63c572;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = 0x7ef74ecd;
  }
  iVar2 = 0x560bec;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x560bec);
    if (iVar4 == -0x5688a4cd) break;
    if (iVar4 == -0x2a63c572) {
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370da)])(param_1,param_2);
      uVar3 = uVar3 + 1;
    }
    else {
      uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370dd)])(param_1,param_2);
    }
    iVar2 = -0x5688a4cd;
  }
  *(ulong *)(param_1 + 8) = uVar3;
  return uVar3 - 1;
}


