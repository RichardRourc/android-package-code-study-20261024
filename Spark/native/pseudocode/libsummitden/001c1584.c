// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c1584; body: [[001c1584, 001c167b]]

long FUN_001c1584(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = 0x44bc74a9;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = -0x6083dd8b;
  }
  iVar2 = 0x321893cb;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x321893cb);
    if (iVar4 == -0x7e709307) break;
    if (iVar4 == -0x6083dd8b) {
      uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb69)])(param_1,param_2);
    }
    else {
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb6a)])(param_1,param_2);
      uVar3 = uVar3 + 0x30;
    }
    iVar2 = -0x7e709307;
  }
  *(ulong *)(param_1 + 8) = uVar3;
  return uVar3 - 0x30;
}


