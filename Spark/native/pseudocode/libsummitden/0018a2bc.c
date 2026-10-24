// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018a2bc; body: [[0018a2bc, 0018a62b]]

uint FUN_0018a2bc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0x2000a5;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_002000a5,0x12,&DAT_00204774,&DAT_002000a5);
  iVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f1)])(&DAT_002000a5,0);
  iVar1 = -0x67b22f40;
  if (iVar2 != 0) {
    iVar1 = 0x1ea2f8e2;
  }
  iVar2 = 0x70cbc281;
LAB_0018a53c:
  while( true ) {
    iVar3 = iVar2;
    iVar2 = iVar3;
    if (0x19c7507e < iVar3) break;
    if (iVar3 < -0x2e543adc) {
      if (iVar3 == -0x67b22f40) goto LAB_0018a5d0;
      if (iVar3 == -0x617fe79a) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_00200114,0x10,&DAT_00204784,&DAT_00200114);
        iVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f1)])(&DAT_00200114,0);
        iVar2 = 0x63046102;
        if (iVar3 != 0) {
          iVar2 = -0x3edb3470;
        }
      }
      else if (iVar3 == -0x3edb3470) {
        uVar4 = 0;
        iVar2 = -0x1edc8a98;
      }
    }
    else if (iVar3 == -0x2e543adc) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_002000c6,0x26,&DAT_0020477c,&DAT_002000c6);
      iVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f1)])(&DAT_002000c6,0);
      iVar2 = 0x723fa95b;
      if (iVar3 != 0) {
        iVar2 = -0xea99c4;
      }
    }
    else if (iVar3 == -0xea99c4) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_002000ec,0x28,&DAT_00204780,&DAT_002000ec);
      iVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f1)])(&DAT_002000ec,0);
      iVar2 = 0x19c7507f;
      if (iVar3 != 0) {
        iVar2 = -0x617fe79a;
      }
    }
    else if (iVar3 == -0x1edc8a98) {
      return uVar4 & 1;
    }
  }
  if (iVar3 < 0x63046102) {
    if (iVar3 != 0x19c7507f) {
      if (iVar3 == 0x1ea2f8e2) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_002000b7,0xf,&DAT_00204778,&DAT_002000b7);
        iVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f1)])(&DAT_002000b7,0);
        iVar2 = 0x2a755b52;
        if (iVar3 != 0) {
          iVar2 = -0x2e543adc;
        }
        goto LAB_0018a53c;
      }
      if (iVar3 != 0x2a755b52) goto LAB_0018a53c;
    }
  }
  else if ((iVar3 != 0x63046102) &&
          ((iVar2 = iVar1, iVar3 == 0x70cbc281 || (iVar2 = iVar3, iVar3 != 0x723fa95b))))
  goto LAB_0018a53c;
LAB_0018a5d0:
  uVar4 = 1;
  iVar2 = -0x1edc8a98;
  goto LAB_0018a53c;
}


