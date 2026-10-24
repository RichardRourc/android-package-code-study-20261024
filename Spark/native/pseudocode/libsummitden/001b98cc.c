// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b98cc; body: [[001b98cc, 001b99cb]]

void FUN_001b98cc(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = 0xda04acb;
  if (*(long *)*param_1 != 0) {
    iVar1 = 0x21220c27;
  }
  iVar5 = 0x52be4b92;
  do {
    while (iVar5 == 0x21220c27) {
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa43)])(*param_1);
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa42)])(*param_1);
      puVar3 = (undefined8 *)*param_1;
      uVar6 = *puVar3;
      uVar4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa41)])();
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa40)])(puVar3 + 2,uVar6,uVar4);
      iVar5 = 0xda04acb;
    }
    bVar2 = iVar5 == 0x52be4b92;
    iVar5 = iVar1;
  } while (bVar2);
  return;
}


