// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a9434; body: [[001a9434, 001a95ef]]

ulong FUN_001a9434(undefined8 param_1,ulong param_2)

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
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4d7)])();
  iVar1 = 0x13c4fdd9;
  if (local_70 <= uVar4) {
    iVar1 = 0x6691d0e1;
  }
  iVar3 = 0x553b73e2;
  do {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == 0x553b73e2);
      if (iVar6 < -0x3e09c073) break;
      if (iVar6 == -0x3e09c073) {
        unaff_x21 = uVar4;
        iVar3 = -0x6c98c77f;
      }
      else {
        if (iVar6 != 0x6691d0e1) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4d4)])();
LAB_001a95ec:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        unaff_x22 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4d5)])(param_1);
        iVar3 = -0x4a37db03;
        if (uVar4 >> 1 <= unaff_x22) {
          iVar3 = -0x3e09c073;
        }
      }
    }
    if (iVar6 == -0x6c98c77f) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return unaff_x21;
      }
      goto LAB_001a95ec;
    }
    local_78 = unaff_x22 << 1;
    puVar5 = (ulong *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4ca)])
                                (&local_78,&local_70);
    unaff_x21 = *puVar5;
    iVar3 = -0x6c98c77f;
  } while( true );
}


