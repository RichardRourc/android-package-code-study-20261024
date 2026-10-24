// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00171ca8; body: [[00171ca8, 00171d6f]]

void FUN_00171ca8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  while( true ) {
    iVar1 = -0x33b134c3;
    if (param_2 != lVar5) {
      iVar1 = 0x1d1c3200;
    }
    iVar2 = -0x61ff7d02;
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x61ff7d02);
    if (iVar4 == -0x33b134c3) break;
    lVar5 = lVar5 + -4;
    uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b62)])(lVar5);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b1c)])(param_1 + 0x10,uVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


