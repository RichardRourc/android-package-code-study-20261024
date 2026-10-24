// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c4d3c; body: [[001c4d3c, 001c4de7]]

void FUN_001c4d3c(long *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_1;
  iVar1 = -0xd36ba4b;
  if (lVar4 != 0) {
    iVar1 = -0x66835518;
  }
  *param_1 = param_2;
  iVar3 = -0x52e72a17;
  do {
    while (iVar3 == -0x66835518) {
      (*(code *)(&PTR_FUN_00203130)[(long)DAT_00203af8 ^ 0x3f51bad5])(param_1 + 1,lVar4);
      iVar3 = -0xd36ba4b;
    }
    bVar2 = iVar3 == -0x52e72a17;
    iVar3 = iVar1;
  } while (bVar2);
  return;
}


