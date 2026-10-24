// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00168af0; body: [[00168af0, 00168be7]]

long FUN_00168af0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = 0x4b7d5a7a;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = -0x7d67c50a;
  }
  iVar2 = 0x3a388134;
  do {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x3a388134);
    if (iVar4 == -0x7d67c50a) {
      uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b8e)])(param_1,param_2);
    }
    else {
      if (iVar4 == -0x2e9fa38e) {
        *(ulong *)(param_1 + 8) = uVar3;
        return uVar3 - 0x18;
      }
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b89)])(param_1,param_2);
      uVar3 = uVar3 + 0x18;
    }
    iVar2 = -0x2e9fa38e;
  } while( true );
}


