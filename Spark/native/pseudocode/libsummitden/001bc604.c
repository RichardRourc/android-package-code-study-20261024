// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bc604; body: [[001bc604, 001bc6ff]]

void FUN_001bc604(void)

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
  lVar4 = (*(code *)(&PTR_FUN_00202fd0)[(long)DAT_00203100 ^ 0x3f396fcc])(0,&local_28);
  iVar3 = 0xf88baa7;
  iVar1 = 0x39a0fbb;
  if ((int)lVar4 != 0) {
    iVar1 = 0x12e2ab08;
  }
  while( true ) {
    do {
      iVar5 = iVar3;
      iVar3 = iVar1;
    } while (iVar5 == 0xf88baa7);
    if (iVar5 == -0x18a08cd4) break;
    if (iVar5 == 0x39a0fbb) {
      lVar4 = local_20 / 1000000 + local_28 * 1000;
      iVar3 = -0x18a08cd4;
    }
    else {
      lVar4 = -1;
      iVar3 = -0x18a08cd4;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


