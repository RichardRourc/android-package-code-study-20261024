// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00140ba4; body: [[00140ba4, 00140c2f]]

void * FUN_00140ba4(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = -0x160c437;
  if (param_3 != 0) {
    iVar1 = -0x547d5452;
  }
  iVar3 = 0x7b490557;
  do {
    while (iVar3 == -0x547d5452) {
      memmove(param_1,param_2,param_3);
      iVar3 = -0x160c437;
    }
    bVar2 = iVar3 == 0x7b490557;
    iVar3 = iVar1;
  } while (bVar2);
  return param_1;
}


