// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a7e24; body: [[001a7e24, 001a7f1f]]

long FUN_001a7e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = -0x43ec0b60;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = -0x5141dc7b;
  }
  iVar2 = -0x2dece13e;
  do {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x2dece13e);
    if (iVar4 == -0x5141dc7b) {
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4ec)])
                        (param_1,param_2,param_3);
    }
    else {
      if (iVar4 != -0x43ec0b60) {
        *(ulong *)(param_1 + 8) = uVar3;
        return uVar3 - 0x20;
      }
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4ef)])(param_1,param_2,param_3);
      uVar3 = uVar3 + 0x20;
    }
    iVar2 = 0x402bf317;
  } while( true );
}


