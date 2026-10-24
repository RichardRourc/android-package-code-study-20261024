// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001aa054; body: [[001aa054, 001aa36b]]

uint FUN_001aa054(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  
  iVar1 = 0x21264be1;
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_0020020c,10,&DAT_002047d0,&DAT_0020020c);
  pcVar5 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)];
  iVar4 = 0x1d016b0a;
  while( true ) {
    while( true ) {
      while( true ) {
        if (0x21264be0 < iVar4) break;
        if (iVar4 == -0x7981716f) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_0020023e,0x10,&DAT_002047e4,&DAT_0020023e);
          uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                            (param_1,&DAT_0020023e);
          iVar4 = 0x21264be1;
        }
        else if (iVar4 == 0x159b7ca6) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_00200216,0xb,&DAT_002047d4,&DAT_00200216);
          uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                            (param_1,&DAT_00200216);
          uVar2 = 1;
          iVar4 = iVar1;
          if ((uVar3 & 1) == 0) {
            iVar4 = 0x619c513b;
          }
        }
        else {
          uVar3 = (*pcVar5)(param_1,&DAT_0020020c);
          uVar2 = 1;
          iVar4 = iVar1;
          if ((uVar3 & 1) == 0) {
            iVar4 = 0x159b7ca6;
          }
        }
      }
      if (iVar4 < 0x619c513b) break;
      if (iVar4 == 0x619c513b) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_00200221,0xb,&DAT_002047d8,&DAT_00200221);
        uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_1,&DAT_00200221);
        uVar2 = 1;
        iVar4 = iVar1;
        if ((uVar3 & 1) == 0) {
          iVar4 = 0x79c45a9e;
        }
      }
      else {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_0020022c,0xb,&DAT_002047dc,&DAT_0020022c);
        uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_1,&DAT_0020022c);
        uVar2 = 1;
        iVar4 = iVar1;
        if ((uVar3 & 1) == 0) {
          iVar4 = 0x58a8bbe6;
        }
      }
    }
    if (iVar4 != 0x58a8bbe6) break;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_00200237,7,&DAT_002047e0,&DAT_00200237);
    uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])(param_1,&DAT_00200237);
    uVar2 = 1;
    iVar4 = iVar1;
    if ((uVar3 & 1) == 0) {
      iVar4 = -0x7981716f;
    }
  }
  return uVar2 & 1;
}


