// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017039c; body: [[0017039c, 00170803]]

void FUN_0017039c(long *param_1,long *param_2,ulong *param_3,ulong *param_4)

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
  iVar1 = 0x34868633;
  if (*param_3 != 0) {
    iVar1 = -0x2c2284cf;
  }
  iVar3 = -0x451ad5be;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar3, iVar3 = iVar4, iVar4 < 0x34868633) {
            if (iVar4 < -0x36df3dc0) {
              if (iVar4 < -0x451ad5be) {
                iVar3 = 0x357a5f07;
                if ((iVar4 != -0x57c07ade) && (iVar3 = iVar4, iVar4 == -0x4c3357ff)) {
                  *param_2 = *param_2 + -0x18;
                  iVar3 = 0x7b5c444c;
                }
              }
              else {
                iVar3 = iVar1;
                if ((iVar4 != -0x451ad5be) && (iVar3 = iVar4, iVar4 == -0x3cb9fe2c)) {
                  *param_1 = *param_2 + 0x18;
                  iVar3 = 0x7c9ddca5;
                }
              }
            }
            else if (iVar4 < -0x295a5b42) {
              if (iVar4 == -0x36df3dc0) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_78,param_1);
                iVar3 = 0x4e77a547;
              }
              else if (iVar4 == -0x2c2284cf) {
                iVar3 = 0x7b5c444c;
              }
            }
            else {
              iVar3 = 0x5b960478;
              if ((iVar4 != -0x295a5b42) && (iVar3 = iVar4, iVar4 == -0x256d33cf)) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_70,param_2);
                iVar3 = -0x4c3357ff;
              }
            }
          }
          if (0x50511bfd < iVar4) break;
          if (iVar4 < 0x3a189231) {
            if (iVar4 == 0x34868633) {
              iVar3 = 0x357a5f07;
              if (*param_4 != 0) {
                iVar3 = -0x295a5b42;
              }
            }
            else if (iVar4 == 0x357a5f07) {
              iVar3 = 0x7c9ddca5;
            }
          }
          else if (iVar4 == 0x3a189231) {
            iVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b72)])(*param_3);
            *param_3 = *param_3 & (-1L << ((ulong)(0x3fU - iVar3) & 0x3f) ^ 0xffffffffffffffffU);
            local_70 = *param_1 + (long)(int)(0x3fU - iVar3) * 0x18;
            iVar3 = -0x4c3357ff;
            if (local_70 != *param_2) {
              iVar3 = -0x256d33cf;
            }
          }
          else if (iVar4 == 0x4e77a547) {
            *param_1 = *param_1 + 0x18;
            iVar3 = 0x5b960478;
          }
        }
        if (0x7b5c444b < iVar4) break;
        if (iVar4 == 0x50511bfe) {
          iVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b72)])(*param_4);
          *param_4 = *param_4 & (-1L << ((ulong)(0x3fU - iVar3) & 0x3f) ^ 0xffffffffffffffffU);
          local_78 = *param_2 + (long)(int)(0x3fU - iVar3) * -0x18;
          iVar3 = 0x4e77a547;
          if (local_78 != *param_1) {
            iVar3 = -0x36df3dc0;
          }
        }
        else if (iVar4 == 0x5b960478) {
          iVar3 = -0x57c07ade;
          if (*param_4 != 0) {
            iVar3 = 0x50511bfe;
          }
        }
      }
      if (iVar4 != 0x7b5c444c) break;
      iVar3 = -0x3cb9fe2c;
      if (*param_3 != 0) {
        iVar3 = 0x3a189231;
      }
    }
  } while (iVar4 != 0x7c9ddca5);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


