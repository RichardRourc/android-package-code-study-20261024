// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00179be4; body: [[00179be4, 0017a03f]]

void FUN_00179be4(long *param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x7d5800d3;
  if (*param_3 != 0) {
    iVar1 = -0x5302b7dc;
  }
  iVar3 = -0x4f790f81;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar3, iVar3 = iVar4, iVar4 < 0x2d89d2a) {
            if (iVar4 < -0x48842b8c) {
              if (iVar4 < -0x5302b7dc) {
                if (iVar4 == -0x7e30f2d0) {
                  iVar3 = 0x27d2d6c9;
                  if (*param_4 != 0) {
                    iVar3 = -0x2f23f10d;
                  }
                }
                else if (iVar4 == -0x7d5800d3) {
                  iVar3 = 0x7911d134;
                  if (*param_4 != 0) {
                    iVar3 = -0x18ba7f87;
                  }
                }
              }
              else {
                iVar3 = 0x17f0faa2;
                if ((iVar4 != -0x5302b7dc) && (iVar3 = iVar4, iVar4 == -0x4f790f81)) {
                  iVar3 = iVar1;
                }
              }
            }
            else if (iVar4 < -0x18ba7f87) {
              if (iVar4 == -0x48842b8c) {
                iVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b72)])(*param_3);
                *param_3 = *param_3 & (-1L << ((ulong)(0x3fU - iVar3) & 0x3f) ^ 0xffffffffffffffffU)
                ;
                local_70 = *param_1 + (long)(int)(0x3fU - iVar3) * 0x30;
                iVar3 = -0x3579437;
                if (local_70 != *param_2) {
                  iVar3 = 0x6ceedc8f;
                }
              }
              else if (iVar4 == -0x2f23f10d) {
                iVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b72)])(*param_4);
                *param_4 = *param_4 & (-1L << ((ulong)(0x3fU - iVar3) & 0x3f) ^ 0xffffffffffffffffU)
                ;
                local_78 = *param_2 + (long)(int)(0x3fU - iVar3) * -0x30;
                iVar3 = 0x6967a20f;
                if (local_78 != *param_1) {
                  iVar3 = 0x2051305c;
                }
              }
            }
            else {
              iVar3 = -0x7e30f2d0;
              if ((iVar4 != -0x18ba7f87) && (iVar3 = iVar4, iVar4 == -0x3579437)) {
                *param_2 = *param_2 + -0x30;
                iVar3 = 0x17f0faa2;
              }
            }
          }
          if (iVar4 < 0x4cfd4755) break;
          if (iVar4 < 0x6ceedc8f) {
            if (iVar4 == 0x4cfd4755) {
              *param_1 = *param_2 + 0x30;
              iVar3 = 0x2d89d2a;
            }
            else if (iVar4 == 0x6967a20f) {
              *param_1 = *param_1 + 0x30;
              iVar3 = -0x7e30f2d0;
            }
          }
          else if (iVar4 == 0x6ceedc8f) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_70,param_2);
            iVar3 = -0x3579437;
          }
          else if (iVar4 == 0x7911d134) {
            iVar3 = 0x2d89d2a;
          }
        }
        if (iVar4 < 0x2051305c) break;
        if (iVar4 == 0x2051305c) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_78,param_1);
          iVar3 = 0x6967a20f;
        }
        else if (iVar4 == 0x27d2d6c9) {
          iVar3 = 0x7911d134;
        }
      }
      if (iVar4 != 0x17f0faa2) break;
      iVar3 = 0x4cfd4755;
      if (*param_3 != 0) {
        iVar3 = -0x48842b8c;
      }
    }
  } while (iVar4 != 0x2d89d2a);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


