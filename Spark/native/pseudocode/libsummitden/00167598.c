// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00167598; body: [[00167598, 0016765b]]

void FUN_00167598(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  iVar1 = -0x528e4e66;
  if (param_1 != 0) {
    iVar1 = 0x5c7268f4;
  }
  uVar4 = param_1;
  iVar3 = -0x230063a2;
  while( true ) {
    do {
      iVar5 = iVar3;
      iVar3 = iVar1;
    } while (iVar5 == -0x230063a2);
    if (iVar5 == -0x703c0fbc) break;
    if (iVar5 == -0x528e4e66) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52a6d])(uVar4);
      uVar2 = 0;
      if (param_1 != 0) {
        uVar2 = uVar4 / param_1;
      }
      uVar4 = uVar4 - uVar2 * param_1;
    }
    iVar3 = -0x703c0fbc;
  }
  return;
}


