// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00173fb0; body: [[00173fb0, 0017407b]]

void FUN_00173fb0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  while( true ) {
    do {
      iVar1 = 0xed9c088;
      if (param_2 != *(long *)(param_1 + 0x10)) {
        iVar1 = -0x1225c568;
      }
    } while (iVar1 == -0x433b5265);
    if (iVar1 != -0x1225c568) break;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e4)])();
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e5)])(uVar3,uVar2);
  }
  return;
}


