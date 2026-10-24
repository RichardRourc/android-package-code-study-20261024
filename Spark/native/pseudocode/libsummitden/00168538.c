// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00168538; body: [[00168538, 001686ab]]

void FUN_00168538(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bbc)])();
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bbd)])(&local_68,param_1);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bb2)])(&uStack_59,local_68);
  iVar1 = 0x308319be;
  if (param_2 != 0) {
    iVar1 = 0x1b4266e7;
  }
  iVar4 = 0x34795309;
  do {
    while (iVar4 == 0x1b4266e7) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bb3)])(param_1,param_2);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bb0)])(param_1,param_2);
      iVar4 = 0x308319be;
    }
    bVar3 = iVar4 == 0x34795309;
    iVar4 = iVar1;
  } while (bVar3);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bb1)])(&uStack_59);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bb6)])(&uStack_59);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


