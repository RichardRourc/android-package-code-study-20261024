// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001571e4; body: [[001571e4, 00157353]]

void FUN_001571e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_78;
  undefined1 uStack_69;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bb3)])(&local_78,param_1);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a46)])(&uStack_69,local_78);
  iVar1 = -0x430fc620;
  if (param_4 != 0) {
    iVar1 = 0x4e22adfe;
  }
  iVar3 = 0x2bfd9438;
  while( true ) {
    do {
      iVar4 = iVar3;
      iVar3 = iVar1;
    } while (iVar4 == 0x2bfd9438);
    if (iVar4 != 0x4e22adfe) break;
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a47)])(param_1,param_4);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ae8)])
              (param_1,param_2,param_3,param_4);
    iVar3 = -0x430fc620;
  }
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a48)])(&uStack_69);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a49)])(&uStack_69);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


