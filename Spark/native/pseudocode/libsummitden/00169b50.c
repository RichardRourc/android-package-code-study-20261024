// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00169b50; body: [[00169b50, 00169c33]]

void FUN_00169b50(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b69)])();
  iVar1 = -0x7ffc4fcc;
  if (param_2 <= uVar4) {
    iVar1 = -0x1caf3f10;
  }
  iVar7 = -0x7b10c66a;
  do {
    iVar8 = iVar7;
    iVar7 = iVar1;
  } while (iVar8 == -0x7b10c66a);
  if (iVar8 == -0x1caf3f10) {
    auVar9 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b6f)])(param_1 + 2,param_2);
    lVar5 = auVar9._0_8_;
    *param_1 = lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5 + auVar9._8_8_ * 4;
                    /* WARNING: Could not recover jumptable at 0x00169c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b6c)])(param_1,0);
    return;
  }
  auVar9 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b6e)])();
  lVar5 = tpidr_el0;
  lStack_98 = *(long *)(lVar5 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b6d)])
            (auStack_b0,auVar9._0_8_,auVar9._8_8_);
  do {
    lVar2 = lStack_a8;
    iVar1 = 0x4143e6b6;
    if (lStack_a8 != lStack_a0) {
      iVar1 = 0x4be2ab38;
    }
    iVar7 = -0x2a8f0bbb;
    while( true ) {
      while( true ) {
        while (iVar7 < 0x4143e6b6) {
          bVar3 = iVar7 != -0x2a8f0bbb;
          iVar7 = iVar1;
          if (bVar3) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b60)])(auStack_b0);
            if (*(long *)(lVar5 + 0x28) == lStack_98) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        if (iVar7 != 0x4143e6b6) break;
        iVar7 = 0x36e9a09d;
      }
      if (iVar7 != 0x4be2ab38) break;
      uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b62)])(lVar2);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b63)])(auVar9._0_8_ + 0x10,uVar6);
      iVar7 = 0x6b830f40;
    }
    lStack_a8 = lVar2 + 4;
  } while( true );
}


