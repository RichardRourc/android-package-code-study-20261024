// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00171460; body: [[00171460, 0017155f]]

void FUN_00171460(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = 0x409b388b;
  if (*(long *)*param_1 != 0) {
    iVar1 = -0x55ec39a1;
  }
  iVar5 = 0x79b903c;
  do {
    while (iVar5 == -0x55ec39a1) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b0a)])(*param_1);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b0b)])(*param_1);
      puVar3 = (undefined8 *)*param_1;
      uVar6 = *puVar3;
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b08)])();
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b09)])(puVar3 + 2,uVar6,uVar4);
      iVar5 = 0x409b388b;
    }
    bVar2 = iVar5 == 0x79b903c;
    iVar5 = iVar1;
  } while (bVar2);
  return;
}


