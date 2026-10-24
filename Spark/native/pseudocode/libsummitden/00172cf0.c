// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00172cf0; body: [[00172cf0, 00172db7]]

void FUN_00172cf0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  while( true ) {
    iVar1 = -0x4765803c;
    if (param_2 != lVar5) {
      iVar1 = 0x38de3612;
    }
    iVar2 = -0x167a4ed7;
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x167a4ed7);
    if (iVar4 == -0x4765803c) break;
    lVar5 = lVar5 + -0x30;
    uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e4)])(lVar5);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e5)])(param_1 + 0x10,uVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


