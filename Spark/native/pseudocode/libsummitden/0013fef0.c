// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013fef0; body: [[0013fef0, 001400db]]

int FUN_0013fef0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_w26;
  int iVar8;
  int iVar9;
  
  param_1 = param_1 & 0xff;
  iVar1 = 0xdda9d65;
  if (param_1 < 0x30) {
    iVar1 = -0x411e17f0;
  }
  iVar2 = -0x352ce1f9;
  if (0x46 < param_1) {
    iVar2 = 0x12fda5e2;
  }
  iVar3 = 0x29560f16;
  if (0x39 < param_1) {
    iVar3 = -0x411e17f0;
  }
  iVar4 = 0x350aaeef;
  if (0x66 < param_1) {
    iVar4 = 0x147c896f;
  }
  iVar5 = 0x46ee9817;
  if (param_1 < 0x61) {
    iVar5 = 0x147c896f;
  }
  iVar6 = -0x437da713;
  if (param_1 < 0x41) {
    iVar6 = 0x12fda5e2;
  }
  iVar7 = 0xc2a9ad1;
  do {
    while( true ) {
      while (iVar8 = unaff_w26, iVar9 = iVar7, unaff_w26 = iVar8, 0x12fda5e1 < iVar9) {
        if (iVar9 < 0x29560f16) {
          if (iVar9 == 0x12fda5e2) {
            iVar7 = -0x20767dee;
            unaff_w26 = -1;
          }
          else {
            iVar7 = iVar9;
            if (iVar9 == 0x147c896f) {
              iVar7 = iVar6;
            }
          }
        }
        else {
          iVar7 = -0x20767dee;
          unaff_w26 = param_1 - 0x30;
          if (((iVar9 != 0x29560f16) && (unaff_w26 = param_1 - 0x57, iVar9 != 0x350aaeef)) &&
             (iVar7 = iVar9, unaff_w26 = iVar8, iVar9 == 0x46ee9817)) {
            iVar7 = iVar4;
          }
        }
      }
      if (-0x20767def < iVar9) break;
      iVar7 = iVar2;
      if (((iVar9 != -0x437da713) && (iVar7 = iVar5, iVar9 != -0x411e17f0)) &&
         (iVar7 = iVar9, iVar9 == -0x352ce1f9)) {
        iVar7 = -0x20767dee;
        unaff_w26 = param_1 - 0x37;
      }
    }
    iVar7 = iVar1;
  } while (((iVar9 == 0xc2a9ad1) || (iVar7 = iVar3, iVar9 == 0xdda9d65)) ||
          (iVar7 = iVar9, iVar9 != -0x20767dee));
  return iVar8;
}


