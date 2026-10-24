// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001427f8; body: [[001427f8, 00142883]]

void * FUN_001427f8(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = 0x64d05ecb;
  if (param_3 != 0) {
    iVar1 = -0x7996ffaf;
  }
  iVar3 = -0x33db3b3b;
  do {
    while (iVar3 == -0x7996ffaf) {
      memmove(param_1,param_2,param_3);
      iVar3 = 0x64d05ecb;
    }
    bVar2 = iVar3 == -0x33db3b3b;
    iVar3 = iVar1;
  } while (bVar2);
  return param_1;
}


