// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013b680; body: [[0013b680, 0013b70f]]

void * FUN_0013b680(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x5c56214f;
  if (param_3 != 0) {
    iVar1 = -0x33dd41ec;
  }
  iVar2 = -0x57fc2976;
  while( true ) {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == -0x57fc2976);
    if (iVar3 != -0x33dd41ec) break;
    memmove(param_1,param_2,param_3);
    iVar2 = 0x5c56214f;
  }
  return param_1;
}


