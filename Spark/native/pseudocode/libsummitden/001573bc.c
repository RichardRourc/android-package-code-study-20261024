// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001573bc; body: [[001573bc, 0015742f]]

void FUN_001573bc(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    iVar1 = -0x3ec48e10;
    if (param_2 != 0) {
      iVar1 = -0x3c5e6114;
    }
    iVar2 = 0x30f4598a;
    while( true ) {
      do {
        iVar3 = iVar2;
        iVar2 = iVar1;
      } while (0x30f45989 < iVar3);
      if (iVar3 != -0x3c5e6114) break;
      *param_1 = *param_3;
      iVar2 = -0x7cfc2959;
    }
    if (iVar3 != -0x7cfc2959) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return;
}


