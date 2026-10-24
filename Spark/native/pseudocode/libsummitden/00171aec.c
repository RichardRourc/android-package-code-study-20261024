// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00171aec; body: [[00171aec, 00171beb]]

void FUN_00171aec(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = 0x6e9412e5;
  if (*(long *)*param_1 != 0) {
    iVar1 = -0x40d0fcea;
  }
  iVar5 = 0x1bb4a38f;
  do {
    while (iVar5 == -0x40d0fcea) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b05)])(*param_1);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b1a)])(*param_1);
      puVar3 = (undefined8 *)*param_1;
      uVar6 = *puVar3;
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b1b)])();
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b18)])(puVar3 + 2,uVar6,uVar4);
      iVar5 = 0x6e9412e5;
    }
    bVar2 = iVar5 == 0x1bb4a38f;
    iVar5 = iVar1;
  } while (bVar2);
  return;
}


