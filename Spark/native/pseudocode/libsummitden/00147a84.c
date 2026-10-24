// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00147a84; body: [[00147a84, 00147d1b]]

void FUN_00147a84(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long unaff_x22;
  
  iVar1 = -0x5f76fe47;
  if (param_3 != 0) {
    iVar1 = -0x1c6ddf28;
  }
  iVar2 = -0x5f76fe47;
  if (param_2 != 0) {
    iVar2 = 0x637c1195;
  }
  iVar3 = 0x32ab15cf;
  do {
    while( true ) {
      while( true ) {
        while (iVar4 = iVar3, iVar4 < 0x59f45b95) {
          if (iVar4 < -0x1c6ddf28) {
            if (iVar4 == -0x5f76fe47) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(param_1);
              iVar3 = 0x63d27f9c;
            }
            else {
              iVar3 = iVar4;
              if (iVar4 == -0x5702b687) {
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(param_1);
                iVar3 = 0x6b852da6;
              }
            }
          }
          else if (iVar4 == -0x1c6ddf28) {
            unaff_x22 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b11)])
                                  (param_2,param_3,0);
            iVar3 = 0x5555f248;
            if (unaff_x22 != 0) {
              iVar3 = 0x68dc1972;
            }
          }
          else {
            iVar3 = iVar2;
            if ((iVar4 != 0x32ab15cf) && (iVar3 = iVar4, iVar4 == 0x5555f248)) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(param_1);
              iVar3 = 0x59f45b95;
            }
          }
        }
        if (0x63d27f9b < iVar4) break;
        iVar3 = 0x63d27f9c;
        if ((iVar4 != 0x59f45b95) && (iVar3 = iVar4, iVar4 == 0x637c1195)) {
          iVar3 = iVar1;
        }
      }
      if (iVar4 != 0x68dc1972) break;
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])(param_1,unaff_x22);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b12)])(param_2,param_3,unaff_x22);
      iVar3 = 0x6b852da6;
    }
    iVar3 = 0x59f45b95;
  } while ((iVar4 == 0x6b852da6) || (iVar3 = iVar4, iVar4 != 0x63d27f9c));
  return;
}


