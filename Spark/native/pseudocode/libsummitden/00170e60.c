// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00170e60; body: [[00170e60, 00170f43]]

void FUN_00170e60(long *param_1,ulong param_2)

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
  
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b39)])();
  iVar1 = -0x6bcd7b09;
  if (param_2 <= uVar4) {
    iVar1 = -0x7294f26e;
  }
  iVar7 = -0x79bafb42;
  do {
    iVar8 = iVar7;
    iVar7 = iVar1;
  } while (iVar8 == -0x79bafb42);
  if (iVar8 == -0x7294f26e) {
    auVar9 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b3f)])(param_1 + 2,param_2);
    lVar5 = auVar9._0_8_;
    *param_1 = lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5 + auVar9._8_8_ * 8;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b3c)])(param_1,0);
    return;
  }
  auVar9 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b3e)])();
  lVar5 = tpidr_el0;
  lStack_98 = *(long *)(lVar5 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b3d)])
            (auStack_b0,auVar9._0_8_,auVar9._8_8_);
  while( true ) {
    lVar2 = lStack_a8;
    iVar1 = 0x3e7c908b;
    if (lStack_a8 != lStack_a0) {
      iVar1 = 0x4dd89f77;
    }
    iVar7 = 0x5921b302;
    while( true ) {
      while (0x4dd89f76 < iVar7) {
        bVar3 = iVar7 == 0x4dd89f77;
        iVar7 = iVar1;
        if (bVar3) {
          uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b32)])(lVar2);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b33)])
                    (auVar9._0_8_ + 0x10,uVar6);
          iVar7 = -0x27162fa4;
        }
      }
      if (iVar7 != 0x3e7c908b) break;
      iVar7 = -0xbcd3640;
    }
    if (iVar7 != -0x27162fa4) break;
    lStack_a8 = lVar2 + 8;
  }
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b30)])(auStack_b0);
  if (*(long *)(lVar5 + 0x28) == lStack_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


