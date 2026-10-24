// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ab5c4; body: [[001ab5c4, 001ab78f]]

ulong FUN_001ab5c4(undefined8 param_1,ulong param_2)

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
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b426)])();
  iVar1 = 0x3f970d10;
  if (local_70 <= uVar4) {
    iVar1 = -0x6d98fb1f;
  }
  iVar3 = -0x3c748223;
  do {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == -0x3c748223);
      if (iVar6 < 0x3f970d10) break;
      if (iVar6 == 0x56415216) {
        unaff_x22 = uVar4;
        iVar3 = -0x595e48a9;
      }
      else {
        if (iVar6 != 0x71364d46) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b427)])();
LAB_001ab78c:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        local_78 = unaff_x21 << 1;
        puVar5 = (ulong *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4ca)])
                                    (&local_78,&local_70);
        unaff_x22 = *puVar5;
        iVar3 = -0x595e48a9;
      }
    }
    if (iVar6 != -0x6d98fb1f) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return unaff_x22;
      }
      goto LAB_001ab78c;
    }
    unaff_x21 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b424)])(param_1);
    iVar3 = 0x71364d46;
    if (uVar4 >> 1 <= unaff_x21) {
      iVar3 = 0x56415216;
    }
  } while( true );
}


