// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013d54c; body: [[0013d54c, 0013d5d7]]

void * FUN_0013d54c(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = 0x5d912606;
  if (param_3 != 0) {
    iVar1 = 0x2d0817db;
  }
  iVar3 = 0x72419b72;
  do {
    while (iVar3 == 0x2d0817db) {
      memmove(param_1,param_2,param_3);
      iVar3 = 0x5d912606;
    }
    bVar2 = iVar3 == 0x72419b72;
    iVar3 = iVar1;
  } while (bVar2);
  return param_1;
}


