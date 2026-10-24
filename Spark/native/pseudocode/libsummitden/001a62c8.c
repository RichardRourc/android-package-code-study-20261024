// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a62c8; body: [[001a62c8, 001a63ef]]

long FUN_001a62c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  lVar5 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar3 = 0x7b042875;
  iVar1 = iVar3;
  if (param_4 != 0) {
    iVar1 = 0x4b234d49;
  }
  iVar2 = iVar3;
  if (*(long *)(lVar5 + 0x18) != 0) {
    iVar2 = 0x397b3da4;
  }
  lVar6 = lVar5;
  iVar4 = 0x229717b5;
  if (param_1 != 0) {
    iVar3 = -0x6c4edcaf;
  }
  while( true ) {
    do {
      while (iVar7 = iVar4, iVar7 < 0x397b3da4) {
        iVar4 = iVar1;
        if (iVar7 != -0x6c4edcaf) {
          iVar4 = iVar2;
        }
      }
      iVar4 = iVar3;
    } while (iVar7 < 0x3bc74e11);
    if (iVar7 == 0x3bc74e11) break;
    if (iVar7 == 0x4b234d49) {
      lVar6 = (**(code **)(lVar5 + 0x18))(param_1,param_2,param_3,param_4);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = 0x3bc74e11;
  }
  return lVar6;
}


