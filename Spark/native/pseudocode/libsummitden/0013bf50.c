// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013bf50; body: [[0013bf50, 0013c0f7]]

void FUN_0013bf50(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_80 [8];
  long local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(param_1 + 8);
  uVar1 = param_2 + (lVar8 - param_4);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3711b)])
            (auStack_80,param_1,param_3 - uVar1);
  uVar9 = uVar1;
  while( true ) {
    lVar4 = local_78;
    iVar2 = -0x7ae9aa25;
    if (param_3 <= uVar9) {
      iVar2 = 0x5a82e015;
    }
    iVar7 = 0x7424b907;
    do {
      bVar5 = iVar7 != 0x5a82e015;
      iVar7 = -0x4e5fac4f;
      if (bVar5) {
        iVar7 = iVar2;
      }
    } while (0x5a82e014 < iVar7);
    while (iVar7 == -0x7ae9aa25) {
      uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f5)])(lVar4);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37159)])(param_1 + 0x10,uVar6,uVar9);
      iVar7 = -0x7de9bba9;
    }
    if (iVar7 != -0x7de9bba9) break;
    local_78 = lVar4 + 1;
    uVar9 = uVar9 + 1;
  }
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3711d)])(auStack_80);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37158)])(param_2,uVar1,lVar8);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


