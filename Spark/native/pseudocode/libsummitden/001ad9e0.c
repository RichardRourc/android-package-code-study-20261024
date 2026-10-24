// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ad9e0; body: [[001ad9e0, 001adc6f]]

void FUN_001ad9e0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long unaff_x22;
  
  iVar1 = 0x5ddeccd3;
  if (param_3 != 0) {
    iVar1 = 0x42be050;
  }
  iVar2 = 0x5ddeccd3;
  if (param_2 != 0) {
    iVar2 = -0x78db0ce1;
  }
  iVar3 = 0x57818838;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar3, iVar3 = iVar4, 0x42be04f < iVar4) {
            if (iVar4 < 0x57818838) {
              if (iVar4 == 0x42be050) {
                unaff_x22 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b403)])
                                      (param_2,param_3,0);
                iVar3 = -0xdb4a49c;
                if (unaff_x22 != 0) {
                  iVar3 = -0x2bd346aa;
                }
              }
              else if (iVar4 == 0x40c25d8f) {
                iVar3 = -0x2cb1ddd5;
              }
            }
            else {
              iVar3 = iVar2;
              if (iVar4 != 0x57818838) {
                if (iVar4 == 0x5ddeccd3) {
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b592)])(param_1);
                  iVar3 = -0x2cb1ddd5;
                }
                else {
                  iVar3 = iVar4;
                  if (iVar4 == 0x5e72e090) {
                    iVar3 = 0x40c25d8f;
                  }
                }
              }
            }
          }
          if (-0x2cb1ddd6 < iVar4) break;
          iVar3 = iVar1;
          if ((iVar4 != -0x78db0ce1) && (iVar3 = iVar4, iVar4 == -0x5eb703fe)) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(param_1);
            iVar3 = 0x5e72e090;
          }
        }
        if (iVar4 != -0x2bd346aa) break;
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(param_1,unaff_x22);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b400)])(param_2,param_3,unaff_x22);
        iVar3 = 0x5e72e090;
      }
      if (iVar4 != -0xdb4a49c) break;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b592)])(param_1);
      iVar3 = 0x40c25d8f;
    }
  } while (iVar4 != -0x2cb1ddd5);
  return;
}


