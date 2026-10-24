// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b5f68; body: [[001b5f68, 001b606b]]

void FUN_001b5f68(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = 0x452cb0fd;
  if (*(long *)*param_1 != 0) {
    iVar1 = -0x14c297df;
  }
  iVar2 = -0x2fa2a79e;
  while( true ) {
    do {
      iVar5 = iVar2;
      iVar2 = iVar1;
    } while (iVar5 == -0x2fa2a79e);
    if (iVar5 != -0x14c297df) break;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b731)])(*param_1);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48a)])(*param_1);
    puVar3 = (undefined8 *)*param_1;
    uVar6 = *puVar3;
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b499)])();
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48d)])(puVar3 + 2,uVar6,uVar4);
    iVar2 = 0x452cb0fd;
  }
  return;
}


