// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165570; body: [[00165570, 00165673]]

void FUN_00165570(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = -0x423a5f70;
  if (*(long *)*param_1 != 0) {
    iVar1 = 0x77442318;
  }
  iVar2 = -0x53d39ca2;
  while( true ) {
    do {
      iVar5 = iVar2;
      iVar2 = iVar1;
    } while (iVar5 == -0x53d39ca2);
    if (iVar5 != 0x77442318) break;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52be5)])(*param_1);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bfa)])(*param_1);
    puVar3 = (undefined8 *)*param_1;
    uVar6 = *puVar3;
    uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bfb)])();
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf8)])(puVar3 + 2,uVar6,uVar4);
    iVar2 = -0x423a5f70;
  }
  return;
}


