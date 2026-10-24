// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001791e0; body: [[001791e0, 001793c3]]

/* WARNING: Removing unreachable block (ram,0x00179354) */

void FUN_001791e0(long param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long local_78;
  long lStack_70;
  ulong local_68;
  
  lVar1 = tpidr_el0;
  uVar6 = *(ulong *)(lVar1 + 0x28);
  iVar3 = 0x5ba62b84;
  local_68 = uVar6;
LAB_00179258:
  do {
    iVar4 = 0x36630abd;
    if ((uVar6 & 1) == 0) {
      iVar4 = -0xd1cbc34;
    }
    do {
      if (-0xd1cbc35 < iVar3) goto LAB_00179294;
      bVar2 = iVar3 == -0x7ca4321d;
      iVar3 = iVar4;
    } while (bVar2);
    uVar6 = (ulong)(*param_4 != 0);
    iVar3 = -0x7ca4321d;
  } while( true );
LAB_00179294:
  while (iVar3 == 0x36630abd) {
    iVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2e)])(*param_3);
    lVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2f)])(*param_3);
    *param_3 = lVar5;
    iVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2e)])(*param_4);
    lVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2f)])(*param_4);
    *param_4 = lVar5;
    lStack_70 = param_1 + (long)iVar3 * 0x30;
    local_78 = param_2 + (long)iVar4 * -0x30;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528b1)])(&lStack_70,&local_78);
    iVar3 = 0x5ba62b84;
  }
  if (iVar3 == -0xd1cbc34) {
    if (*(ulong *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar6 = 0;
  iVar3 = -0x7ca4321d;
  if (*param_3 != 0) {
    iVar3 = -0x48268027;
  }
  goto LAB_00179258;
}


