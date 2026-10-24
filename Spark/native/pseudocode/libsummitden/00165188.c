// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165188; body: [[00165188, 00165307]]

long FUN_00165188(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_98 [31];
  undefined1 uStack_79;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_4;
  local_70 = param_4;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52be8)])
            (auStack_98,param_1,&local_78,&local_70);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52be9)])(&uStack_79,auStack_98);
  while( true ) {
    iVar1 = -0x37ca411;
    if (param_2 != param_3) {
      iVar1 = 0x293a4783;
    }
    iVar4 = 0x1f0d2e80;
    do {
      iVar6 = iVar4;
      iVar4 = iVar1;
    } while (iVar6 == 0x1f0d2e80);
    if (iVar6 == -0x37ca411) break;
    uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bee)])(local_70);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bef)])(param_1,uVar5,param_2);
    param_2 = param_2 + 8;
    local_70 = local_70 + 8;
  }
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bec)])(&uStack_79);
  lVar3 = local_70;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bed)])(&uStack_79);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


