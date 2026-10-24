// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00140e18; body: [[00140e18, 00140f1b]]

void FUN_00140e18(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = 0x12128957;
  if (*(long *)*param_1 != 0) {
    iVar1 = 0x7d461a8b;
  }
  iVar2 = -0x61abfbd2;
  while( true ) {
    do {
      iVar5 = iVar2;
      iVar2 = iVar1;
    } while (iVar5 == -0x61abfbd2);
    if (iVar5 != 0x7d461a8b) break;
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371fd)])(*param_1);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3715e)])(*param_1);
    puVar3 = (undefined8 *)*param_1;
    uVar6 = *puVar3;
    uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b5)])();
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37155)])(puVar3 + 2,uVar6,uVar4);
    iVar2 = 0x12128957;
  }
  return;
}


