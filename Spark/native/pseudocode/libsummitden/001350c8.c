// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001350c8; body: [[001350c8, 001351cb]]

void FUN_001350c8(void)

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
  local_28 = 0;
  local_20 = 0;
  lVar4 = (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc371ba])(0,&local_28);
  iVar3 = 0x755ad3c0;
  iVar1 = 0x44cbc8e8;
  if ((int)lVar4 != 0) {
    iVar1 = -0x2d5491d;
  }
  while( true ) {
    while( true ) {
      do {
        iVar5 = iVar3;
        iVar3 = iVar1;
      } while (iVar5 == 0x755ad3c0);
      if (iVar5 != -0x2d5491d) break;
      lVar4 = 0;
      iVar3 = 0x8ee3b33;
    }
    if (iVar5 == 0x8ee3b33) break;
    lVar4 = local_20 / 1000000 + local_28 * 1000;
    iVar3 = 0x8ee3b33;
  }
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


