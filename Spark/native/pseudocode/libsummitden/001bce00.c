// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bce00; body: [[001bce00, 001bd103]]

undefined8 FUN_001bce00(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 unaff_x21;
  char *unaff_x22;
  byte unaff_w27;
  
  iVar1 = -0x6137911b;
  if (param_1 != 0) {
    iVar1 = 0x47d11828;
  }
  iVar2 = -0x4deba2e6;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar2, iVar2 = iVar4, 0x4a32e50 < iVar4) {
            if (iVar4 < 0x47d11828) {
              if (iVar4 == 0x4a32e51) {
                lVar3 = (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fdd)])(param_2);
                unaff_x22 = unaff_x22 + lVar3;
                iVar2 = -0x3625e8af;
              }
              else {
                iVar2 = -0x3ac7a668;
                if ((iVar4 != 0x1390e6ae) && (iVar2 = iVar4, iVar4 == 0x444642ce)) {
                  unaff_w27 = 1;
                  iVar2 = 0x2d12e57;
                  if (*unaff_x22 != ' ') {
                    iVar2 = -0x1a8ebaa;
                  }
                }
              }
            }
            else if (iVar4 == 0x47d11828) {
              unaff_x22 = (char *)(*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fdc)])
                                            (param_1,param_2);
              iVar2 = 0x4fdd8451;
              if (unaff_x22 != (char *)0x0) {
                iVar2 = 0x4a32e51;
              }
            }
            else if (iVar4 == 0x4fdd8451) {
              unaff_x21 = 0xffffffffffffffff;
              iVar2 = 0x1390e6ae;
            }
            else if (iVar4 == 0x51a955e5) {
              unaff_x22 = unaff_x22 + 1;
              iVar2 = -0x3625e8af;
            }
          }
          if (-0x3ac7a669 < iVar4) break;
          if (iVar4 == -0x6137911b) {
            unaff_x21 = 0xffffffffffffffff;
            iVar2 = -0x3ac7a668;
          }
          else {
            iVar2 = iVar1;
            if ((iVar4 != -0x4deba2e6) && (iVar2 = iVar4, iVar4 == -0x44709e08)) {
              unaff_x21 = (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fc6)])
                                    (unaff_x22,0,10);
              iVar2 = 0x1390e6ae;
            }
          }
        }
        if (iVar4 < -0x1a8ebaa) break;
        if (iVar4 == -0x1a8ebaa) {
          unaff_w27 = *unaff_x22 == '\t';
          iVar2 = 0x2d12e57;
        }
        else if (iVar4 == 0x2d12e57) {
          iVar2 = 0x51a955e5;
          if ((unaff_w27 & 1) == 0) {
            iVar2 = -0x44709e08;
          }
        }
      }
      if (iVar4 != -0x3625e8af) break;
      unaff_w27 = 1;
      iVar2 = 0x2d12e57;
      if (*unaff_x22 != ':') {
        iVar2 = 0x444642ce;
      }
    }
  } while (iVar4 != -0x3ac7a668);
  return unaff_x21;
}


