// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a58d4; body: [[001a58d4, 001a5983]]

long FUN_001a58d4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0x595b1374;
  lVar1 = param_1;
  while (iVar2 != -0x691be749) {
    if (iVar2 == 0x246bfee6) {
      lVar1 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b567])(param_1);
      lVar1 = lVar1 + param_2;
      iVar2 = -0x691be749;
    }
    else if (iVar2 == 0x595b1374) {
      iVar2 = 0x246bfee6;
    }
  }
  return lVar1;
}


