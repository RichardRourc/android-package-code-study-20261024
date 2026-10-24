// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00181980; body: [[00181980, 00181a03]]

void FUN_00181980(long param_1,int param_2,int *param_3,long param_4)

{
  int iVar1;
  
  if ((param_3 == (int *)0x0) || (iVar1 = FUN_001ea7c0(0,1,param_3), iVar1 == 0)) {
    if (param_2 != 0) {
      iVar1 = 0;
      do {
        *(byte *)(param_4 + iVar1) = *(byte *)(param_1 + iVar1) ^ 0xaa;
        iVar1 = iVar1 + 1;
      } while (param_2 != iVar1);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = 2;
    }
  }
  else {
    do {
    } while (*param_3 != 2);
  }
  return;
}


