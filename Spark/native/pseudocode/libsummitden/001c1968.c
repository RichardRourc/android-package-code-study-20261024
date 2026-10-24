// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c1968; body: [[001c1968, 001c1b23]]

ulong FUN_001c1968(undefined8 param_1,ulong param_2)

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
  uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb7b)])();
  iVar1 = 0x20e05fe0;
  if (local_70 <= uVar4) {
    iVar1 = -0x7d00d67f;
  }
  iVar3 = 0x1e16aef4;
  while( true ) {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == 0x1e16aef4);
      if (0x1733f448 < iVar6) break;
      if (iVar6 == -0x7d00d67f) {
        unaff_x21 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb79)])(param_1);
        iVar3 = -0x3a0020e1;
        if (uVar4 >> 1 <= unaff_x21) {
          iVar3 = 0x5da05e5b;
        }
      }
      else {
        local_78 = unaff_x21 << 1;
        puVar5 = (ulong *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb78)])
                                    (&local_78,&local_70);
        unaff_x22 = *puVar5;
        iVar3 = 0x1733f449;
      }
    }
    if (iVar6 == 0x1733f449) break;
    if (iVar6 != 0x5da05e5b) {
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb7a)])();
LAB_001c1b20:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    unaff_x22 = uVar4;
    iVar3 = 0x1733f449;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return unaff_x22;
  }
  goto LAB_001c1b20;
}


