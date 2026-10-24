// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165a38; body: [[00165a38, 00165cd3]]

ulong FUN_00165a38(int param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong unaff_x22;
  ulong unaff_x26;
  
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf4)])();
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = param_2 / uVar3;
  }
  iVar1 = 0x3f376b4;
  if (uVar3 != 0) {
    iVar1 = -0x615bda55;
  }
  uVar5 = param_2 - uVar5 * uVar3;
  iVar2 = -0x5ca7c427;
LAB_00165b28:
  iVar4 = iVar2;
  iVar2 = iVar4;
  if (iVar4 < 0x1655d518) {
    if (iVar4 < -0x3bb08ffe) {
      if (iVar4 == -0x615bda55) {
        unaff_x26 = uVar5;
        iVar2 = 0x1655d518;
      }
      else {
        iVar2 = iVar1;
        if ((iVar4 != -0x5ca7c427) && (iVar2 = iVar4, iVar4 == -0x50fb2c94)) {
          uVar3 = unaff_x22 & 0xffffffff;
          iVar2 = 0x60242c65;
        }
      }
      goto LAB_00165b28;
    }
    if (iVar4 == -0x3bb08ffe) {
LAB_00165c90:
      iVar2 = 0x38fa1700;
      if (0x19 < param_2) {
        iVar2 = 0x55d712ce;
      }
      goto LAB_00165b28;
    }
    if (iVar4 != -0x300c08b3) {
      if (iVar4 == 0x3f376b4) {
        unaff_x26 = 0;
        iVar2 = 0x1655d518;
      }
      goto LAB_00165b28;
    }
  }
  else {
    if (0x58bb791f < iVar4) {
      if (iVar4 < 0x60242c65) {
        if (iVar4 == 0x58bb7920) goto LAB_00165b50;
        if (iVar4 == 0x5aad0ddb) goto LAB_00165af8;
      }
      else {
        if (iVar4 == 0x627e4bfe) goto LAB_00165c20;
        if (iVar4 == 0x60242c65) {
          return uVar3;
        }
      }
      goto LAB_00165b28;
    }
    if (iVar4 != 0x1655d518) {
      if (iVar4 == 0x38fa1700) {
        unaff_x22 = param_2 + 0x61;
        iVar2 = -0x50fb2c94;
      }
      else if (iVar4 == 0x55d712ce) {
        unaff_x22 = param_2 + 0x16;
        iVar2 = -0x50fb2c94;
      }
      goto LAB_00165b28;
    }
    param_2 = unaff_x26;
    if (param_1 < 2) {
      if ((param_1 == 0) || (param_1 != 1)) goto LAB_00165af8;
LAB_00165b50:
      uVar3 = (ulong)((int)param_2 + 0x30);
      iVar2 = 0x60242c65;
      goto LAB_00165b28;
    }
    if (param_1 == 2) {
LAB_00165c20:
      uVar3 = (ulong)((int)param_2 + 0x61);
      iVar2 = 0x60242c65;
      goto LAB_00165b28;
    }
    if (param_1 == 3) goto LAB_00165c90;
  }
LAB_00165af8:
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bca)])(param_2 & 0xffffffff);
  iVar2 = 0x60242c65;
  goto LAB_00165b28;
}


