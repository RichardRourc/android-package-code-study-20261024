// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00168ea8; body: [[00168ea8, 00169067]]

ulong FUN_00168ea8(undefined8 param_1,ulong param_2)

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
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba7)])();
  iVar1 = 0x41c8a775;
  if (local_70 <= uVar4) {
    iVar1 = -0x5d839ff0;
  }
  iVar3 = -0x2931974a;
  while( true ) {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == -0x2931974a);
      if (0x186f6c35 < iVar6) break;
      if (iVar6 == -0x5d839ff0) {
        unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba6)])(param_1);
        iVar3 = 0x3d1a98e0;
        if (uVar4 >> 1 <= unaff_x21) {
          iVar3 = -0x337adf4d;
        }
      }
      else {
        unaff_x22 = uVar4;
        iVar3 = 0x186f6c36;
      }
    }
    if (iVar6 == 0x186f6c36) break;
    if (iVar6 != 0x3d1a98e0) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba4)])();
LAB_00169064:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_78 = unaff_x21 << 1;
    puVar5 = (ulong *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b81)])
                                (&local_78,&local_70);
    unaff_x22 = *puVar5;
    iVar3 = 0x186f6c36;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return unaff_x22;
  }
  goto LAB_00169064;
}


