// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018129c; body: [[0018129c, 001814a3]]

ulong FUN_0018129c(long param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong unaff_x24;
  
  iVar1 = -0x5049224a;
  if (param_5 != 0) {
    iVar1 = 0x59d315b3;
  }
  iVar2 = 0x7d1b5007;
  if (param_4 <= param_2) {
    iVar2 = -0x512a3f1e;
  }
  lVar4 = param_1;
  iVar3 = 0xc7981b4;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar5 = iVar3, iVar3 = iVar5, 0x5e29bd03 < iVar5) {
            if (iVar5 < 0x737cdb54) {
              if (iVar5 == 0x5e29bd04) {
                unaff_x24 = 0xffffffffffffffff;
                iVar3 = 0x6ce6572f;
              }
              else if (iVar5 == 0x6ce6572f) {
                iVar3 = 0x45b80995;
              }
            }
            else if (iVar5 == 0x737cdb54) {
              unaff_x24 = lVar4 - param_1;
              iVar3 = 0x6ce6572f;
            }
            else if (iVar5 == 0x7d1b5007) {
              unaff_x24 = 0xffffffffffffffff;
              iVar3 = 0x45b80995;
            }
          }
          if (0xc7981b3 < iVar5) break;
          iVar3 = iVar1;
          if ((iVar5 != -0x512a3f1e) && (iVar3 = iVar5, iVar5 == -0x5049224a)) {
            unaff_x24 = param_4;
            iVar3 = 0x45b80995;
          }
        }
        iVar3 = iVar2;
      } while (iVar5 == 0xc7981b4);
      if (iVar5 != 0x59d315b3) break;
      lVar4 = (*(code *)(&PTR_FUN_001ff1c0)[(long)DAT_001ff630 ^ 0x419d8a2])
                        (param_1 + param_4,param_1 + param_2,param_3,param_3 + param_5);
      iVar3 = 0x5e29bd04;
      if (lVar4 != param_1 + param_2) {
        iVar3 = 0x737cdb54;
      }
    }
    iVar3 = iVar5;
  } while (iVar5 != 0x45b80995);
  return unaff_x24;
}


