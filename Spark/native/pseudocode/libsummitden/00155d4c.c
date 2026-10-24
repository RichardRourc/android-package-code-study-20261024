// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00155d4c; body: [[00155d4c, 00155e17]]

void FUN_00155d4c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  while( true ) {
    do {
      iVar1 = 0x19712968;
      if (param_2 != *(long *)(param_1 + 0x10)) {
        iVar1 = -0x5153f081;
      }
    } while (iVar1 == -0x51db7099);
    if (iVar1 != -0x5153f081) break;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -4;
    uVar2 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a5a)])();
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ab2)])(uVar3,uVar2);
  }
  return;
}


