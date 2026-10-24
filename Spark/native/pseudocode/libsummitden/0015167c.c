// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015167c; body: [[0015167c, 00151837]]

ulong FUN_0015167c(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  ulong unaff_x21;
  ulong unaff_x22;
  long local_78;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = param_2;
  uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bca)])();
  iVar1 = 0x72e52ef8;
  if (local_70 <= uVar4) {
    iVar1 = 0x4f8a0c3c;
  }
  iVar3 = 0x6c45fd38;
  while( true ) {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == 0x6c45fd38);
      if (-0x1e176e41 < iVar6) break;
      if (iVar6 == -0x710c93d2) {
        local_78 = unaff_x22 << 1;
        puVar5 = (ulong *)(*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be3)])
                                    (&local_78,&local_70);
        unaff_x21 = *puVar5;
        iVar3 = -0x1e176e40;
      }
      else {
        unaff_x21 = uVar4;
        iVar3 = -0x1e176e40;
      }
    }
    if (iVar6 == -0x1e176e40) break;
    if (iVar6 != 0x4f8a0c3c) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bcb)])();
LAB_00151834:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    unaff_x22 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bcc)])(param_1);
    iVar3 = -0x710c93d2;
    if (uVar4 >> 1 <= unaff_x22) {
      iVar3 = -0x56c4039b;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return unaff_x21;
  }
  goto LAB_00151834;
}


