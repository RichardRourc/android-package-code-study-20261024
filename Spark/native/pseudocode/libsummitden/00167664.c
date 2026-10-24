// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00167664; body: [[00167664, 0016778b]]

long FUN_00167664(void)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long local_70;
  ulong uStack_68;
  ulong local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = 0;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bdc)])(&local_60,8);
  iVar1 = 0x36bce6d;
  if (local_60 != 0) {
    iVar1 = -0x74a81d08;
  }
  iVar4 = 0x261e6961;
  do {
    while (iVar4 == 0x36bce6d) {
      local_70 = 0;
      uStack_68 = 0;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a9f)])(1,&local_70);
      local_60 = uStack_68 ^ (ulong)&local_60 ^ local_70 << 0x20;
      iVar4 = -0x74a81d08;
    }
    bVar3 = iVar4 == 0x261e6961;
    iVar4 = iVar1;
  } while (bVar3);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    local_60 = local_60 ^ local_60 >> 0xc;
    local_60 = local_60 ^ local_60 << 0x19;
    return (local_60 ^ local_60 >> 0x1b) * 0x2545f4914f6cdd1d;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


