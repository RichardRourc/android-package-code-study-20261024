// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a5708; body: [[001a5708, 001a5867]]

long FUN_001a5708(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  lVar6 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar4 = -0x61acec12;
  iVar1 = iVar4;
  if (param_1 != 0) {
    iVar1 = 0x115bbd61;
  }
  iVar2 = iVar4;
  if (param_3 != 0) {
    iVar2 = -0x3d14cd68;
  }
  iVar3 = iVar4;
  if (0 < param_2) {
    iVar3 = -0x3043eb6f;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    iVar4 = 0x59f15661;
  }
  lVar7 = lVar6;
  iVar5 = 0x5b7f339c;
  do {
    while (iVar8 = iVar5, iVar8 < 0x3311bd9d) {
      iVar5 = iVar3;
      if ((iVar8 < 0x115bbd61) && (iVar5 = iVar2, iVar8 != -0x3043eb6f)) {
        if (iVar8 == -0x61acec12) {
          lVar7 = 0;
          iVar5 = 0x3311bd9d;
        }
        else {
          lVar7 = (**(code **)(lVar6 + 0x10))(param_1,param_2,param_3);
          iVar5 = 0x3311bd9d;
        }
      }
    }
    iVar5 = iVar1;
  } while ((iVar8 == 0x59f15661) || (iVar5 = iVar4, iVar8 == 0x5b7f339c));
  return lVar7;
}


