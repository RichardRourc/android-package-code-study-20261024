// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001abc84; body: [[001abc84, 001abd7b]]

long FUN_001abc84(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = -0x66803dfd;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = -0x7c0f2b11;
  }
  iVar2 = 0x77aa4ebf;
  do {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x77aa4ebf);
    if (iVar4 == -0x7c0f2b11) {
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b40e)])(param_1,param_2);
    }
    else {
      if (iVar4 == -0x7804c6e9) {
        *(ulong *)(param_1 + 8) = uVar3;
        return uVar3 - 0x38;
      }
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b409)])(param_1,param_2);
      uVar3 = uVar3 + 0x38;
    }
    iVar2 = -0x7804c6e9;
  } while( true );
}


