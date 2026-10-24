// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00164b10; body: [[00164b10, 00164bf3]]

void FUN_00164b10(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_78;
  code *pcStack_70;
  
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a06)])();
  iVar1 = -0x5073b4bc;
  if (param_2 <= uVar3) {
    iVar1 = -0x127c161b;
  }
  iVar2 = 0x737ca09f;
  do {
    iVar5 = iVar2;
    iVar2 = iVar1;
  } while (iVar5 == 0x737ca09f);
  if (iVar5 == -0x127c161b) {
    auVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a04)])(param_1 + 2,param_2);
    lVar4 = auVar6._0_8_;
    *param_1 = lVar4;
    param_1[1] = lVar4;
    param_1[2] = lVar4 + auVar6._8_8_ * 8;
                    /* WARNING: Could not recover jumptable at 0x00164bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a05)])(param_1,0);
    return;
  }
  auVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a07)])();
  pcStack_70 = FUN_00164bf4;
  lVar4 = tpidr_el0;
  lStack_78 = *(long *)(lVar4 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a1a)])(auStack_90,auVar6._0_8_,param_4);
  uStack_88 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a1b)])
                        (auVar6._0_8_ + 0x10,auVar6._8_8_,param_3,uStack_88);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a18)])(auStack_90);
  if (*(long *)(lVar4 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


