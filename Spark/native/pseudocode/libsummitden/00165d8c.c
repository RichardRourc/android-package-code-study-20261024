// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165d8c; body: [[00165d8c, 00165eeb]]

/* WARNING: Removing unreachable block (ram,0x00165e94) */

void FUN_00165d8c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 uStack_69;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)
           (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bc8)])(&uStack_69);
  uVar7 = *puVar2;
  uVar5 = puVar2[2];
  param_1[1] = puVar2[1];
  *param_1 = uVar7;
  param_1[2] = uVar5;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae1)])(param_2,0);
  pcVar6 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afb)];
  iVar4 = 0x75cd56e3;
  while (iVar4 == 0x75cd56e3) {
    uVar3 = (*pcVar6)(param_1);
    iVar4 = 0x6a0effbd;
    if ((uVar3 & 1) == 0) {
      iVar4 = -0x2409832f;
    }
    if (iVar4 == -0x2409832f) {
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])(param_1);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae1)])(param_1,uVar5);
      iVar4 = 0x6a0effbd;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


