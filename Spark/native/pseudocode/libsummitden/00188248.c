// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00188248; body: [[00188248, 00188343]]

void FUN_00188248(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  lVar4 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b590])(7,&local_28);
  iVar3 = 0x6bd2d31d;
  iVar1 = -0x64e043ed;
  if ((int)lVar4 != 0) {
    iVar1 = 0x7d50fe5e;
  }
  while( true ) {
    while( true ) {
      do {
        iVar5 = iVar3;
        iVar3 = iVar1;
      } while (iVar5 == 0x6bd2d31d);
      if (iVar5 != -0x64e043ed) break;
      lVar4 = local_20 / 1000000 + local_28 * 1000;
      iVar3 = 0x67cb11e1;
    }
    if (iVar5 == 0x67cb11e1) break;
    lVar4 = -1;
    iVar3 = 0x67cb11e1;
  }
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


