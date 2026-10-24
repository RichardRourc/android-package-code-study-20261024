// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017273c; body: [[0017273c, 0017289b]]

void FUN_0017273c(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0x3e197bce;
  iVar1 = iVar4;
  if (param_3 != 0) {
    iVar1 = -0x75d41a86;
  }
  iVar2 = iVar4;
  if (param_2 != 0) {
    iVar2 = -0x24042010;
  }
  iVar3 = iVar4;
  if (param_4 != 0) {
    iVar3 = -0x4866ca18;
  }
  if (param_1 != 0) {
    iVar4 = 0x6e806a27;
  }
  iVar5 = 0x19ee7101;
  do {
    while( true ) {
      while (iVar6 = iVar5, 0x19ee7100 < iVar6) {
        iVar5 = iVar4;
        if ((iVar6 != 0x19ee7101) && (iVar5 = -0x5906e1f5, iVar6 != 0x3e197bce)) {
          iVar5 = iVar2;
        }
      }
      if (iVar6 < -0x4866ca18) break;
      iVar5 = iVar1;
      if (iVar6 == -0x4866ca18) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])(param_1,param_2,param_4);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
        iVar5 = -0x5906e1f5;
      }
    }
    iVar5 = iVar3;
  } while (iVar6 == -0x75d41a86);
  return;
}


