// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001733bc; body: [[001733bc, 00173577]]

ulong FUN_001733bc(undefined8 param_1,ulong param_2)

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
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f5)])();
  iVar1 = 0x2f6791fb;
  if (local_70 <= uVar4) {
    iVar1 = 0x29639ae2;
  }
  iVar3 = 0x24644d5a;
  while( true ) {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == 0x24644d5a);
      if (-0x9c6b1f2 < iVar6) break;
      if (iVar6 == -0x4e8b5451) {
        local_78 = unaff_x22 << 1;
        puVar5 = (ulong *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b81)])
                                    (&local_78,&local_70);
        unaff_x21 = *puVar5;
        iVar3 = -0x9c6b1f1;
      }
      else {
        unaff_x21 = uVar4;
        iVar3 = -0x9c6b1f1;
      }
    }
    if (iVar6 == -0x9c6b1f1) break;
    if (iVar6 != 0x29639ae2) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528ca)])();
LAB_00173574:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    unaff_x22 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e2)])(param_1);
    iVar3 = -0x4e8b5451;
    if (uVar4 >> 1 <= unaff_x22) {
      iVar3 = -0x30293465;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return unaff_x21;
  }
  goto LAB_00173574;
}


