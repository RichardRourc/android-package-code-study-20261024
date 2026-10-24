// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a61a4; body: [[001a61a4, 001a62c7]]

long FUN_001a61a4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  lVar5 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar3 = -0x5df548e7;
  iVar1 = iVar3;
  if (param_2 != 0) {
    iVar1 = -0x60092f39;
  }
  iVar2 = iVar3;
  if (param_1 != 0) {
    iVar2 = 0x4cd4cb78;
  }
  if (*(long *)(lVar5 + 0x30) != 0) {
    iVar3 = -0x24c483e1;
  }
  lVar6 = lVar5;
  iVar4 = -0x6bbda5d3;
  do {
    while (iVar7 = iVar4, iVar7 < -0x24c483e1) {
      iVar4 = iVar3;
      if (iVar7 != -0x6bbda5d3) {
        if (iVar7 == -0x60092f39) {
          lVar6 = (**(code **)(lVar5 + 0x30))(param_1,param_2);
          iVar4 = 0x2296b96f;
        }
        else {
          lVar6 = 0xffffffff;
          iVar4 = 0x2296b96f;
        }
      }
    }
    iVar4 = iVar2;
  } while ((iVar7 == -0x24c483e1) || (iVar4 = iVar1, iVar7 == 0x4cd4cb78));
  return lVar6;
}


