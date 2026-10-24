// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00166d90; body: [[00166d90, 001670c3]]

void FUN_00166d90(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acf)])(param_2,param_4);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a67)])(param_1,param_3 * 3 + 2);
  uVar5 = 0;
  iVar4 = 0x6190e36c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x15782c51 < iVar4) {
            if (iVar4 < 0x51092dce) {
              if (iVar4 == 0x15782c52) {
                uVar5 = uVar5 + 1;
                iVar4 = 0x6190e36c;
              }
              else if (iVar4 == 0x39c1f77c) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf7)])(&local_70);
                uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bda)])();
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,uVar2);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf7)])(&local_70);
                uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bdb)])();
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,uVar2);
                uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf7)])(&local_70);
                iVar4 = -0x16489a6f;
                if (6 < uVar3 % 10) {
                  iVar4 = -0x48393a4d;
                }
              }
            }
            else if (iVar4 == 0x51092dce) {
              iVar4 = -0x20729f7c;
            }
            else if ((iVar4 == 0x6190e36c) && (iVar4 = 0x39c1f77c, param_3 <= uVar5)) {
              iVar4 = 0x51092dce;
            }
          }
          if (-0x1db816df < iVar4) break;
          if (iVar4 == -0x48393a4d) {
            iVar4 = 0x15782c52;
          }
          else if (iVar4 == -0x20729f7c) {
            iVar4 = -0x1db816de;
          }
        }
        if (iVar4 != -0x16489a6f) break;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf7)])(&local_70);
        uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bda)])();
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,uVar2);
        iVar4 = -0x48393a4d;
      }
      if (iVar4 != 0xbade21e) break;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(param_1);
      iVar4 = -0x1db816de;
    }
  } while (iVar4 != -0x1db816de);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


