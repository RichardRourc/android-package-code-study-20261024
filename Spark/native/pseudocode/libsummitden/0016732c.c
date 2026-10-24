// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016732c; body: [[0016732c, 0016758b]]

byte FUN_0016732c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte local_74;
  
  lVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a73)])(param_2);
  iVar1 = -0x7ad7b94b;
  do {
    while( true ) {
      while (iVar1 < -0x33042dd1) {
        if (iVar1 < -0x4f619970) {
          if (iVar1 == -0x7ad7b94b) goto LAB_001674d0;
          if ((iVar1 == -0x5002f60c) &&
             (uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afb)])(param_1),
             iVar1 = 0x2fda0a3, (uVar4 & 1) == 0)) {
            iVar1 = -0x4f619970;
          }
        }
        else {
          if (iVar1 == -0x4f619970) goto LAB_001673e0;
          if (iVar1 == -0x4692a6d3) {
            return local_74 & 1;
          }
        }
      }
      if (iVar1 < -0x2587a4f9) break;
      if (iVar1 == -0x2587a4f9) {
        iVar1 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bd9)])
                          (param_1,0,0xffffffffffffffff,param_2,lVar2);
        local_74 = iVar1 == 0;
        iVar1 = -0x4692a6d3;
      }
      else if (iVar1 == -0x5211762) {
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab6)])(lVar2);
        iVar1 = -0x2602bfe5;
        if ((uVar4 & 1) == 0) {
          iVar1 = -0x5002f60c;
        }
      }
      else if (iVar1 == 0x2fda0a3) {
LAB_001674d0:
        iVar1 = -0x2602bfe5;
      }
    }
    if (iVar1 == -0x33042dd1) {
LAB_001673e0:
      local_74 = 0;
      iVar1 = -0x4692a6d3;
    }
    else if ((iVar1 == -0x2602bfe5) &&
            (lVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])(param_1),
            iVar1 = -0x2587a4f9, lVar2 != lVar3)) {
      iVar1 = -0x33042dd1;
    }
  } while( true );
}


