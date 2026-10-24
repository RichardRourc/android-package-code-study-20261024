// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ab26c; body: [[001ab26c, 001ab363]]

long FUN_001ab26c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = 0x34d7deed;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = -0x4ab89e86;
  }
  iVar2 = 0x397664ee;
  do {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x397664ee);
    if (iVar4 == -0x4ab89e86) {
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b42b)])(param_1,param_2);
    }
    else {
      if (iVar4 == -0x404fdb7a) {
        *(ulong *)(param_1 + 8) = uVar3;
        return uVar3 - 8;
      }
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b42a)])(param_1,param_2);
      uVar3 = uVar3 + 8;
    }
    iVar2 = -0x404fdb7a;
  } while( true );
}


