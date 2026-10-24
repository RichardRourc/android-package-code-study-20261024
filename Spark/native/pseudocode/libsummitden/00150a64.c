// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00150a64; body: [[00150a64, 00150ba7]]

void FUN_00150a64(long *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])();
  iVar1 = 0x766737aa;
  if (uVar4 <= param_2) {
    iVar1 = 0x21345748;
  }
  iVar2 = -0x6fdcadc4;
  if (uVar4 > param_2 || param_2 - uVar4 == 0) {
    iVar2 = -0x2d412bae;
  }
  iVar3 = 0x15a1eff2;
  while( true ) {
    do {
      while (iVar5 = iVar3, iVar5 < 0x21345748) {
        if (iVar5 == -0x6fdcadc4) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b95)])(param_1,param_2 - uVar4);
          iVar3 = 0x459e326d;
        }
        else {
          iVar3 = iVar1;
          if (iVar5 != -0x2d412bae) {
            iVar3 = iVar2;
          }
        }
      }
      iVar3 = 0x459e326d;
    } while (iVar5 == 0x21345748);
    if (iVar5 != 0x766737aa) break;
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b96)])(param_1,*param_1 + param_2);
    iVar3 = 0x21345748;
  }
  return;
}


