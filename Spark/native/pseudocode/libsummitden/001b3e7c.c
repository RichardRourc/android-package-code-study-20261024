// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b3e7c; body: [[001b3e7c, 001b3f0b]]

void * FUN_001b3e7c(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x5b46bf3d;
  if (param_3 != 0) {
    iVar1 = 0x69cfe35f;
  }
  iVar2 = -0x6b4a5145;
  while( true ) {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == -0x6b4a5145);
    if (iVar3 != 0x69cfe35f) break;
    memmove(param_1,param_2,param_3 << 3);
    iVar2 = 0x5b46bf3d;
  }
  return param_1;
}


