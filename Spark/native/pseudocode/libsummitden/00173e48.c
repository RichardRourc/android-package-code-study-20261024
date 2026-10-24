// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00173e48; body: [[00173e48, 00173f2f]]

void FUN_00173e48(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  while( true ) {
    iVar1 = -0x55fa31f8;
    if (param_2 != param_3) {
      iVar1 = 0x2b703d3d;
    }
    iVar2 = -0x2d9bcb5f;
    do {
      while (iVar4 = iVar2, 0x2b703d3c < iVar4) {
        uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e4)])(param_2);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e5)])(param_1,uVar3);
        iVar2 = -0x3cb228c7;
      }
      iVar2 = iVar1;
    } while (iVar4 == -0x2d9bcb5f);
    if (iVar4 == -0x55fa31f8) break;
    param_2 = param_2 + 0x30;
  }
  return;
}


