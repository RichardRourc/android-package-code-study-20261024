// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016efcc; body: [[0016efcc, 0016f103]]

void FUN_0016efcc(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (param_2 - param_1 >> 3) * -0x5555555555555555;
  lVar5 = param_2;
  do {
    iVar1 = -0x27922fd6;
    if (lVar4 + -1 == 0 || lVar4 < 1) {
      iVar1 = -0x1ecbc785;
    }
    iVar3 = -0xa9f9d6d;
    while( true ) {
      while (-0x1ecbc786 < iVar3) {
        if (iVar3 == -0x1ecbc785) {
          iVar3 = 0x2c4b6580;
        }
        else {
          bVar2 = iVar3 != -0xa9f9d6d;
          iVar3 = iVar1;
          if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0016f100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b7e)])
                      (param_1,param_2,param_3);
            return;
          }
        }
      }
      if (iVar3 != -0x27922fd6) break;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2b)])(param_1,lVar5,param_3,lVar4);
      iVar3 = -0x5675b26d;
    }
    lVar5 = lVar5 + -0x18;
    lVar4 = lVar4 + -1;
  } while( true );
}


