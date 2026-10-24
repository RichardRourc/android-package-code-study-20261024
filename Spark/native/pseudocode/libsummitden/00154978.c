// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00154978; body: [[00154978, 00154aeb]]

void FUN_00154978(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b51)])();
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bb3)])(&local_68,param_1);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a46)])(&uStack_59,local_68);
  iVar1 = -0x79a9d37e;
  if (param_2 != 0) {
    iVar1 = 0x7936a066;
  }
  iVar3 = -0x4c98761e;
  while( true ) {
    do {
      iVar4 = iVar3;
      iVar3 = iVar1;
    } while (iVar4 == -0x4c98761e);
    if (iVar4 != 0x7936a066) break;
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a47)])(param_1,param_2);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b97)])(param_1,param_2);
    iVar3 = -0x79a9d37e;
  }
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a48)])(&uStack_59);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a49)])(&uStack_59);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


