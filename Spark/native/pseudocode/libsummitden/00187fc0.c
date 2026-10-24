// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00187fc0; body: [[00187fc0, 001880b7]]

void FUN_00187fc0(void)

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
  lVar4 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b590])(1,&local_28);
  iVar3 = 0x11e1accc;
  iVar1 = -0x51bcbfb;
  if ((int)lVar4 != 0) {
    iVar1 = -0xaf37774;
  }
  while( true ) {
    while( true ) {
      do {
        iVar5 = iVar3;
        iVar3 = iVar1;
      } while (iVar5 == 0x11e1accc);
      if (iVar5 != -0xaf37774) break;
      lVar4 = -1;
      iVar3 = 0x1b9bf402;
    }
    if (iVar5 != -0x51bcbfb) break;
    lVar4 = local_20 / 1000 + local_28 * 1000000;
    iVar3 = 0x1b9bf402;
  }
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


