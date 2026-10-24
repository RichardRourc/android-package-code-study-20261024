// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001be428; body: [[001be428, 001be763]]

void FUN_001be428(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  iVar1 = -0x7c7f44f0;
  if ((param_2 & 1) == 0) {
    iVar1 = 0x464dca2e;
  }
  pcVar5 = (code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe3)];
  iVar2 = 0x5019e47b;
  if ((param_3 & 1) == 0) {
    iVar2 = 0x7830d89d;
  }
  iVar3 = -0x35a0af5a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar3, iVar3 = iVar6, iVar6 < -0x1dce8b60) {
            if (iVar6 < -0x3b0fbfb4) {
              if (iVar6 == -0x7c7f44f0) {
                (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe2)])
                          (&DAT_0020310c,6,&DAT_00205c4c,&DAT_0020310c);
                (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe1)])
                          (param_1,&DAT_0020310c);
                iVar3 = iVar2;
              }
              else if (iVar6 == -0x7a2a8ae8) {
                (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(param_1);
                iVar3 = 0x6d7fdbff;
              }
            }
            else if (iVar6 == -0x3b0fbfb4) {
              (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe2)])
                        (&DAT_00203104,8,&DAT_00205c48,&DAT_00203104);
              (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe1)])
                        (param_1,&DAT_00203104);
              iVar3 = -0x1dce8b60;
            }
            else if (iVar6 == -0x35a0af5a) {
              uVar4 = (*pcVar5)();
              iVar3 = -0x3b0fbfb4;
              if ((uVar4 & 1) == 0) {
                iVar3 = -0x1dce8b60;
              }
            }
          }
          if (0x5019e47a < iVar6) break;
          iVar3 = iVar1;
          if ((iVar6 != -0x1dce8b60) && (iVar3 = iVar6, iVar6 == 0x464dca2e)) {
            iVar3 = 0x6d7fdbff;
          }
        }
        if (iVar6 != 0x5019e47b) break;
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe2)])
                  (&DAT_00203112,5,&DAT_00205c50,&DAT_00203112);
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe1)])(param_1,&DAT_00203112);
        iVar3 = 0x7830d89d;
      }
      if (iVar6 != 0x7830d89d) break;
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe2)])
                (&DAT_00203117,2,&DAT_00205c54,&DAT_00203117);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe1)])(param_1,&DAT_00203117);
      iVar3 = 0x464dca2e;
    }
  } while (iVar6 != 0x6d7fdbff);
  return;
}


