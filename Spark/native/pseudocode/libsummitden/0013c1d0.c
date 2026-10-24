// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013c1d0; body: [[0013c1d0, 0013c39b]]

ulong FUN_0013c1d0(undefined8 param_1,ulong param_2)

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
  uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b4)])();
  iVar1 = 0x37cfc0a9;
  if (local_70 <= uVar4) {
    iVar1 = 0x51d4753;
  }
  iVar3 = -0x30e02efd;
  do {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == -0x30e02efd);
      if (iVar6 < 0x51d4753) break;
      if (iVar6 == 0x51d4753) {
        unaff_x21 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b5)])(param_1);
        iVar3 = -0x389463a3;
        if (uVar4 >> 1 <= unaff_x21) {
          iVar3 = 0x18545635;
        }
      }
      else {
        if (iVar6 != 0x18545635) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b7)])();
LAB_0013c398:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        unaff_x22 = uVar4;
        iVar3 = -0x35d4b3cd;
      }
    }
    if (iVar6 != -0x389463a3) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return unaff_x22;
      }
      goto LAB_0013c398;
    }
    local_78 = unaff_x21 << 1;
    puVar5 = (ulong *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3715d)])
                                (&local_78,&local_70);
    unaff_x22 = *puVar5;
    iVar3 = -0x35d4b3cd;
  } while( true );
}


