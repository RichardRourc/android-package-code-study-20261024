// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001880b8; body: [[001880b8, 00188163]]

undefined8 FUN_001880b8(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = -0x278b5fb2;
  if (param_2 != 0) {
    iVar1 = -0x47620f1b;
  }
  iVar3 = 0x7b32d69f;
  do {
    while (iVar3 == -0x47620f1b) {
      (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b591])(param_1,param_2);
      iVar3 = -0x278b5fb2;
    }
    bVar2 = iVar3 == 0x7b32d69f;
    iVar3 = iVar1;
  } while (bVar2);
  return param_1;
}


