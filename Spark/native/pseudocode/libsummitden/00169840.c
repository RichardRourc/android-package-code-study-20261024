// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00169840; body: [[00169840, 0016990b]]

void FUN_00169840(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  while( true ) {
    do {
      iVar1 = -0x54e76622;
      if (param_2 != *(long *)(param_1 + 0x10)) {
        iVar1 = 0x61d13625;
      }
    } while (iVar1 == -0x545f413c);
    if (iVar1 != 0x61d13625) break;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b8c)])();
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b96)])(uVar3,uVar2);
  }
  return;
}


