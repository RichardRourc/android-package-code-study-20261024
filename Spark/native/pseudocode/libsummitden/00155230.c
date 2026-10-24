// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00155230; body: [[00155230, 001553eb]]

ulong FUN_00155230(undefined8 param_1,ulong param_2)

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
  uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a5d)])();
  iVar1 = 0x677609d6;
  if (local_70 <= uVar4) {
    iVar1 = -0x3d3937fd;
  }
  iVar3 = -0x5dc7b974;
  do {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == -0x5dc7b974);
      if (iVar6 < -0x3dcd6fc2) break;
      if (iVar6 == -0x3dcd6fc2) {
        unaff_x21 = uVar4;
        iVar3 = -0x7eccb61f;
      }
      else {
        if (iVar6 != -0x3d3937fd) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a5e)])();
LAB_001553e8:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        unaff_x22 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a5f)])(param_1);
        iVar3 = -0x4ea37fc4;
        if (uVar4 >> 1 <= unaff_x22) {
          iVar3 = -0x3dcd6fc2;
        }
      }
    }
    if (iVar6 == -0x7eccb61f) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return unaff_x21;
      }
      goto LAB_001553e8;
    }
    local_78 = unaff_x22 << 1;
    puVar5 = (ulong *)(*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be3)])
                                (&local_78,&local_70);
    unaff_x21 = *puVar5;
    iVar3 = -0x7eccb61f;
  } while( true );
}


