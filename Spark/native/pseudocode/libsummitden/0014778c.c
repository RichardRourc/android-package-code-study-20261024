// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014778c; body: [[0014778c, 00147867]]

void FUN_0014778c(long param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  
  iVar1 = 0x33335fdc;
  if (param_1 != 0) {
    iVar1 = 0x321480d9;
  }
  iVar4 = 0x69d1984d;
  do {
    while (iVar4 < 0x33335fdc) {
      if (iVar4 == -0x14a175d4) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b0d)])(param_1);
        iVar4 = 0x33335fdc;
      }
      else {
        cVar3 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
        iVar4 = 0x33335fdc;
        if (cVar3 != '\0') {
          iVar4 = -0x14a175d4;
        }
      }
    }
    bVar2 = iVar4 == 0x69d1984d;
    iVar4 = iVar1;
  } while (bVar2);
  return;
}


