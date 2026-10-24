// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bb49c; body: [[001bb49c, 001bb657]]

ulong FUN_001bb49c(undefined8 param_1,ulong param_2)

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
  uVar4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab0e)])();
  iVar1 = 0x6d6cbb0d;
  if (local_70 <= uVar4) {
    iVar1 = -0x77f3f7b5;
  }
  iVar3 = 0x44eef30d;
  while( true ) {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == 0x44eef30d);
      if (0x2acdb9 < iVar6) break;
      if (iVar6 == -0x77f3f7b5) {
        unaff_x21 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa41)])(param_1);
        iVar3 = -0x4d154127;
        if (uVar4 >> 1 <= unaff_x21) {
          iVar3 = 0x27bc8b05;
        }
      }
      else {
        local_78 = unaff_x21 << 1;
        puVar5 = (ulong *)(*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa8e)])
                                    (&local_78,&local_70);
        unaff_x22 = *puVar5;
        iVar3 = 0x2acdba;
      }
    }
    if (iVar6 == 0x2acdba) break;
    if (iVar6 != 0x27bc8b05) {
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab0d)])();
LAB_001bb654:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    unaff_x22 = uVar4;
    iVar3 = 0x2acdba;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return unaff_x22;
  }
  goto LAB_001bb654;
}


