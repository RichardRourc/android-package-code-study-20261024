// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ba934; body: [[001ba934, 001baa83]]

long FUN_001ba934(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long unaff_x21;
  
  param_3 = param_3 & 0xffffffff;
  iVar2 = -0xd7a6369;
  iVar1 = 0x28afc06c;
  if (param_2 < param_3 || param_2 - param_3 == 0) {
    iVar1 = -0x6471080e;
  }
  while( true ) {
    do {
      while (iVar4 = iVar2, iVar4 < 0x59c15f0) {
        iVar2 = iVar1;
        if (iVar4 < -0xd7a6369) {
          if (iVar4 == -0x6471080e) {
            unaff_x21 = 0;
            iVar2 = 0x59c15f0;
          }
          else {
            unaff_x21 = param_1 + param_3;
            iVar2 = 0x325be4d9;
            if (iVar4 != -0x56e9dec8) {
              unaff_x21 = 0;
            }
          }
        }
      }
      iVar2 = 0x59c15f0;
    } while (iVar4 == 0x325be4d9);
    if (iVar4 == 0x59c15f0) break;
    lVar3 = (*(code *)(&PTR_FUN_002026b0)[(long)DAT_00202f98 ^ 0x1ffffffff28caac8])
                      (param_1 + param_3,0xffffffffffffffff,0,param_2 - param_3);
    iVar2 = -0x48ce2236;
    if (lVar3 != 0) {
      iVar2 = -0x56e9dec8;
    }
  }
  return unaff_x21;
}


