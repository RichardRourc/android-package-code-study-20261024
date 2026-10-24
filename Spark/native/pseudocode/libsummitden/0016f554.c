// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016f554; body: [[0016f554, 0016f87b]]

void FUN_0016f554(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_90 [24];
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x667a339d;
  if (param_4 < 2) {
    iVar1 = -0x420370a9;
  }
  iVar3 = 0x77606f6a;
  local_70 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar3, iVar3 = iVar6, -0x8c30436 < iVar6) {
            if (iVar6 < 0x44372ec7) {
              if (iVar6 == -0x8c30435) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])
                          (local_70,auStack_90);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_90);
                iVar3 = -0x372db650;
              }
              else if (iVar6 == 0x24a3fffe) {
                uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_70);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aad)])(auStack_90,uVar4);
                iVar3 = -0x58df206b;
              }
            }
            else {
              iVar3 = -0x8c30435;
              if (iVar6 != 0x44372ec7) {
                if (iVar6 == 0x667a339d) {
                  param_4 = (param_4 + -2) / 2;
                  local_78 = param_1 + param_4 * 0x18;
                  local_70 = local_70 + -0x18;
                  uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])(param_3);
                  iVar3 = 0x24a3fffe;
                  if ((uVar5 & 1) == 0) {
                    iVar3 = -0x372db650;
                  }
                }
                else {
                  iVar3 = iVar6;
                  if (iVar6 == 0x77606f6a) {
                    iVar3 = iVar1;
                  }
                }
              }
            }
          }
          if (-0x420370aa < iVar6) break;
          if (iVar6 == -0x58df206b) {
            uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_78);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(local_70,uVar4);
            local_70 = local_78;
            iVar3 = 0x44372ec7;
            if (param_4 != 0) {
              iVar3 = -0x52d9cf2c;
            }
          }
          else if (iVar6 == -0x52d9cf2c) {
            param_4 = (param_4 + -1) / 2;
            local_78 = param_1 + param_4 * 0x18;
            iVar3 = -0x4168bb3c;
          }
        }
        if (iVar6 != -0x4168bb3c) break;
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_3,local_78,auStack_90);
        iVar3 = -0x58df206b;
        if ((uVar5 & 1) == 0) {
          iVar3 = -0x8c30435;
        }
      }
      if (iVar6 != -0x372db650) break;
      iVar3 = -0x420370a9;
    }
  } while (iVar6 != -0x420370a9);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


