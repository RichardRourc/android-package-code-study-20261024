// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013a0dc; body: [[0013a0dc, 0013a1bf]]

void FUN_0013a0dc(long *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b4)])();
  iVar1 = -0x14eb9f4f;
  if (param_2 <= uVar4) {
    iVar1 = 0x72f5f009;
  }
  iVar3 = 0x38da467a;
  do {
    iVar7 = iVar3;
    iVar3 = iVar1;
  } while (iVar7 == 0x38da467a);
  if (iVar7 == 0x72f5f009) {
    auVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37119)])(param_1 + 2,param_2);
    lVar5 = auVar8._0_8_;
    *param_1 = lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5 + auVar8._8_8_;
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37118)])(param_1,0);
    return;
  }
  auVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b7)])();
  lVar5 = tpidr_el0;
  lStack_98 = *(long *)(lVar5 + 0x28);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3711b)])
            (auStack_b0,auVar8._0_8_,auVar8._8_8_);
  do {
    lVar2 = lStack_a8;
    iVar1 = -0x5782c3c0;
    if (lStack_a8 != lStack_a0) {
      iVar1 = -0x7b90c0b;
    }
    iVar3 = -0x24e9f266;
    while( true ) {
      do {
        while (iVar7 = iVar3, iVar7 < -0x24e9f266) {
          if (iVar7 != -0x5782c3c0) {
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3711d)])(auStack_b0);
            if (*(long *)(lVar5 + 0x28) == lStack_98) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          iVar3 = -0x3034d8f0;
        }
        iVar3 = iVar1;
      } while (iVar7 == -0x24e9f266);
      if (iVar7 != -0x7b90c0b) break;
      uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f5)])(lVar2);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3711a)])
                (auVar8._0_8_ + 0x10,uVar6,param_3);
      iVar3 = 0x7a0326fd;
    }
    lStack_a8 = lVar2 + 1;
  } while( true );
}


