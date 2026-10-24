// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b29a4; body: [[001b29a4, 001b2a4f]]

void FUN_001b29a4(long *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_1;
  iVar1 = -0x60e9a9cd;
  if (lVar4 != 0) {
    iVar1 = -0x23cfe965;
  }
  *param_1 = param_2;
  iVar3 = -0x19835cb0;
  do {
    while (iVar3 == -0x23cfe965) {
      (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b798])(param_1[1],lVar4);
      iVar3 = -0x60e9a9cd;
    }
    bVar2 = iVar3 == -0x19835cb0;
    iVar3 = iVar1;
  } while (bVar2);
  return;
}


