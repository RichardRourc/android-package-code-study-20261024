// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00154e78; body: [[00154e78, 0015503b]]

void FUN_00154e78(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar7 = -0x6afe713e;
  iVar1 = -0x7d40eeb7;
  if (param_2 <= (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2)) {
    iVar1 = 0x5cf7063d;
  }
  while( true ) {
    while (iVar7 < 0x1f958e46) {
      bVar3 = iVar7 == -0x7d40eeb7;
      iVar7 = iVar1;
      if (bVar3) {
        lVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a4e)])(param_1);
        uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a52)])
                          (param_1,lVar4 + param_2);
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a4e)])(param_1);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a53)])
                  (auStack_90,uVar5,uVar6,(long *)(param_1 + 0x10));
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a54)])(auStack_90,param_2);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a55)])(param_1,auStack_90);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a56)])(auStack_90);
        iVar7 = 0x1f958e46;
      }
    }
    if (iVar7 != 0x5cf7063d) break;
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a51)])(param_1,param_2);
    iVar7 = 0x1f958e46;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


