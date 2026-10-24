// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016f368; body: [[0016f368, 0016f553]]

long FUN_0016f368(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  local_78 = 0;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = param_1;
  local_70 = param_1;
  do {
    iVar6 = 0x51aa7a4e;
    while( true ) {
      while (iVar6 < 0x337f2e36) {
        if (iVar6 < -0x7d9a3df) {
          if (iVar6 == -0x35bda37f) {
            uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                              (param_2,local_70,local_70 + 0x18);
            iVar6 = 0x15912a08;
            if ((uVar4 & 1) == 0) {
              iVar6 = -0x7ca282b7;
            }
          }
          else {
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_70);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(local_80,uVar5);
            local_80 = local_70;
            iVar6 = -0x7d9a3df;
            if ((long)local_78 <= (param_3 + -2) / 2) {
              iVar6 = 0x337f2e36;
            }
          }
        }
        else {
          if (iVar6 == -0x7d9a3df) {
            if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return local_80;
          }
          local_70 = local_70 + 0x18;
          local_78 = local_78 + 1;
          iVar6 = -0x7ca282b7;
        }
      }
      if (iVar6 == 0x337f2e36) break;
      bVar3 = iVar6 != 0x51aa7a4e;
      iVar6 = 0x3f49d655;
      if (bVar3) {
        lVar1 = local_78 * 0x18;
        lVar7 = local_78 * 2;
        local_78 = local_78 << 1 | 1;
        local_70 = local_70 + lVar1 + 0x18;
        iVar6 = -0x35bda37f;
        if (param_3 <= lVar7 + 2) {
          iVar6 = -0x7ca282b7;
        }
      }
    }
  } while( true );
}


