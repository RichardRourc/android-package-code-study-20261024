// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014f474; body: [[0014f474, 0014f53b]]

void FUN_0014f474(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  while( true ) {
    iVar1 = -0x62654174;
    if (param_2 != lVar5) {
      iVar1 = -0x70983d1c;
    }
    iVar2 = -0x21bbca11;
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x21bbca11);
    if (iVar4 != -0x70983d1c) break;
    lVar5 = lVar5 + -0x18;
    uVar3 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b87)])(lVar5);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b88)])(param_1 + 0x10,uVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


