// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a705c; body: [[001a705c, 001a7143]]

void FUN_001a705c(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  while( true ) {
    iVar1 = -0x77bccf70;
    if (param_2 != param_3) {
      iVar1 = -0x18b67493;
    }
    iVar2 = 0x2a6e214b;
    while( true ) {
      do {
        iVar4 = iVar2;
        iVar2 = iVar1;
      } while (0x2a6e214a < iVar4);
      if (iVar4 != -0x18b67493) break;
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48b)])(param_2);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4fc)])(param_1,uVar3);
      iVar2 = -0x7aea439e;
    }
    if (iVar4 != -0x7aea439e) break;
    param_2 = param_2 + 0x38;
  }
  return;
}


