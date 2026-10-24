// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018c530; body: [[0018c530, 0018c62b]]

uint FUN_0018c530(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_w29;
  
  iVar1 = -0x7fe4c6ac;
  if (param_1 != 0) {
    iVar1 = -0x78e2ed48;
  }
  iVar2 = 0x84aa0b2;
  while( true ) {
    do {
      while (iVar3 = iVar2, iVar3 < -0x1718f133) {
        if (iVar3 == -0x78e2ed48) {
          iVar3 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b5e1])(param_1);
          iVar2 = -0x1718f133;
          if (iVar3 != 0) {
            iVar2 = -0x1dbe60ff;
          }
        }
        else {
          unaff_w29 = 0;
          iVar2 = 0x11620da7;
        }
      }
      iVar2 = iVar1;
    } while (iVar3 == 0x84aa0b2);
    if (iVar3 != -0x1718f133) break;
    unaff_w29 = 1;
    iVar2 = 0x11620da7;
  }
  return unaff_w29 & 1;
}


