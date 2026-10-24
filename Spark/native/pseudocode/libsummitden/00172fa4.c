// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00172fa4; body: [[00172fa4, 00173093]]

long FUN_00172fa4(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = 0x98cc32d;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = -0x2cac495d;
  }
  iVar2 = 0x1f5dfe8f;
  do {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x1f5dfe8f);
    if (iVar4 == -0x2cac495d) {
      uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528ff)])(param_1,param_2);
    }
    else {
      if (iVar4 != 0x98cc32d) {
        *(ulong *)(param_1 + 8) = uVar3;
        return uVar3 - 0x30;
      }
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528fe)])(param_1,param_2);
      uVar3 = uVar3 + 0x30;
    }
    iVar2 = 0x2dbde53f;
  } while( true );
}


