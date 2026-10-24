// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001639f8; body: [[001639f8, 00163ba3]]

void FUN_001639f8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acf)])(param_2,param_4);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a67)])(param_1,param_3);
  uVar6 = 0;
  do {
    iVar1 = 0x6636c752;
    if (param_3 <= uVar6) {
      iVar1 = -0x120d4ebd;
    }
    iVar5 = 0x2dc4279c;
    while( true ) {
      while( true ) {
        while (iVar5 < 0x526f62eb) {
          if (iVar5 == -0x120d4ebd) {
            iVar5 = 0x526f62eb;
          }
          else {
            bVar3 = iVar5 != 0x2dc4279c;
            iVar5 = iVar1;
            if (bVar3) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
        if (iVar5 != 0x526f62eb) break;
        iVar5 = 0x185c7e8a;
      }
      if (iVar5 != 0x6636c752) break;
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a27)])(param_5,&local_70);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,uVar4);
      iVar5 = 0x5e78fca9;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}


