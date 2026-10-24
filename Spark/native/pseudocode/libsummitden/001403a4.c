// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001403a4; body: [[001403a4, 0014046b]]

void FUN_001403a4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  while( true ) {
    iVar1 = -0x4f16a713;
    if (param_2 != lVar5) {
      iVar1 = 0x622280ec;
    }
    iVar2 = 0x4e5b9ae8;
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x4e5b9ae8);
    if (iVar4 == -0x4f16a713) break;
    lVar5 = lVar5 + -1;
    uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f5)])(lVar5);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3716f)])(param_1 + 0x10,uVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


