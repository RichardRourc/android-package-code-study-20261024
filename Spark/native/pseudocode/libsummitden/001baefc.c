// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001baefc; body: [[001baefc, 001bafff]]

long FUN_001baefc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = 0x4c6c1991;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = -0x51a7bf7d;
  }
  iVar2 = -0x2b5ff3b8;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x2b5ff3b8);
    if (iVar4 == -0x51f339c1) break;
    if (iVar4 == -0x51a7bf7d) {
      uVar3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caae2)])
                        (param_1,param_2,param_3);
    }
    else {
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caae3)])(param_1,param_2,param_3);
      uVar3 = uVar3 + 0x30;
    }
    iVar2 = -0x51f339c1;
  }
  *(ulong *)(param_1 + 8) = uVar3;
  return uVar3 - 0x30;
}


