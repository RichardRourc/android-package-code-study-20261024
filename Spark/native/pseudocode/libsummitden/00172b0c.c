// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00172b0c; body: [[00172b0c, 00172c0b]]

void FUN_00172b0c(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = -0xd412105;
  if (*(long *)*param_1 != 0) {
    iVar1 = -0x7be433af;
  }
  iVar5 = -0x5436c7d1;
  do {
    while (iVar5 == -0x7be433af) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528ec)])(*param_1);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528ed)])(*param_1);
      puVar3 = (undefined8 *)*param_1;
      uVar6 = *puVar3;
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e2)])();
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e3)])(puVar3 + 2,uVar6,uVar4);
      iVar5 = -0xd412105;
    }
    bVar2 = iVar5 == -0x5436c7d1;
    iVar5 = iVar1;
  } while (bVar2);
  return;
}


