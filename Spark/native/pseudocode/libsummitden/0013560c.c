// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013560c; body: [[0013560c, 00135783]]

void FUN_0013560c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x6b02bfb9;
  if (param_1 != 0) {
    iVar1 = 0xf174fd9;
  }
  iVar4 = -0x72d2ad4e;
  do {
    bVar3 = iVar4 != -0x72d2ad4e;
    iVar4 = iVar1;
    if (bVar3) {
      iVar4 = 0x2a1200fe;
    }
  } while (iVar4 < 0xf174fd9);
  while (iVar4 == 0xf174fd9) {
    local_6c[0] = (char)param_2;
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(param_1,local_6c);
    local_70[0] = (char)((ulong)param_2 >> 8);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(param_1,local_70);
    local_74[0] = (char)((ulong)param_2 >> 0x10);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(param_1,local_74);
    local_78[0] = (char)((ulong)param_2 >> 0x18);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(param_1,local_78);
    iVar4 = 0x2a1200fe;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


