// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a55e8; body: [[001a55e8, 001a5707]]

long FUN_001a55e8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  lVar5 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar3 = 0x6b20f8b5;
  iVar1 = iVar3;
  if (param_1 != 0) {
    iVar1 = -0x44b8f95e;
  }
  iVar2 = iVar3;
  if (*(long *)(lVar5 + 8) != 0) {
    iVar2 = -0x6d58d5ae;
  }
  if (param_2 != 0) {
    iVar3 = 0x47e72780;
  }
  lVar6 = lVar5;
  iVar7 = 0x196027ca;
  do {
    while( true ) {
      while (iVar7 < -0xfc57e7d) {
        bVar4 = iVar7 != -0x6d58d5ae;
        iVar7 = iVar1;
        if (bVar4) {
          iVar7 = iVar3;
        }
      }
      if (iVar7 < 0x47e72780) break;
      if (iVar7 == 0x47e72780) {
        lVar6 = (**(code **)(lVar5 + 8))(param_1,param_2);
        iVar7 = -0xfc57e7d;
      }
      else {
        lVar6 = 0;
        iVar7 = -0xfc57e7d;
      }
    }
    bVar4 = iVar7 == 0x196027ca;
    iVar7 = iVar2;
  } while (bVar4);
  return lVar6;
}


