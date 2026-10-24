// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b61e4; body: [[001b61e4, 001b62e7]]

void FUN_001b61e4(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = -0xe12f8de;
  if (*(long *)*param_1 != 0) {
    iVar1 = 0x76a37d10;
  }
  iVar2 = -0x61a37663;
  while( true ) {
    do {
      iVar5 = iVar2;
      iVar2 = iVar1;
    } while (iVar5 == -0x61a37663);
    if (iVar5 != 0x76a37d10) break;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b735)])(*param_1);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4c8)])(*param_1);
    puVar3 = (undefined8 *)*param_1;
    uVar6 = *puVar3;
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4d5)])();
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4c2)])(puVar3 + 2,uVar6,uVar4);
    iVar2 = -0xe12f8de;
  }
  return;
}


