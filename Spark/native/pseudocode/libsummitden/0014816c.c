// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014816c; body: [[0014816c, 0014826b]]

void FUN_0014816c(void)

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
  lVar4 = (*(code *)(&PTR_FUN_001fc070)[(long)DAT_001fcf68 ^ 0x283c8b4a])(1,&local_28);
  iVar3 = 0x613c41b3;
  iVar1 = -0x18fa5995;
  if ((int)lVar4 != 0) {
    iVar1 = 0x3dd1bd2c;
  }
  while( true ) {
    do {
      iVar5 = iVar3;
      iVar3 = iVar1;
    } while (iVar5 == 0x613c41b3);
    if (iVar5 == -0x5d0d3e15) break;
    if (iVar5 == -0x18fa5995) {
      lVar4 = local_20 / 1000000 + local_28 * 1000;
      iVar3 = -0x5d0d3e15;
    }
    else {
      lVar4 = 0;
      iVar3 = -0x5d0d3e15;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


