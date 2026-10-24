// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001abfdc; body: [[001abfdc, 001ac1a7]]

ulong FUN_001abfdc(undefined8 param_1,ulong param_2)

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
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49e)])();
  iVar1 = 0x6d6c67d3;
  if (local_70 <= uVar4) {
    iVar1 = -0x67ae2a9d;
  }
  iVar3 = 0x7ce7bab;
  while( true ) {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == 0x7ce7bab);
      if (0x1d1dced9 < iVar6) break;
      if (iVar6 == -0x67ae2a9d) {
        unaff_x22 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b499)])(param_1);
        iVar3 = 0x1d1dceda;
        if (uVar4 >> 1 <= unaff_x22) {
          iVar3 = -0x2ff2a0f8;
        }
      }
      else {
        unaff_x21 = uVar4;
        iVar3 = 0x4f5c709c;
      }
    }
    if (iVar6 != 0x1d1dceda) break;
    local_78 = unaff_x22 << 1;
    puVar5 = (ulong *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4ca)])
                                (&local_78,&local_70);
    unaff_x21 = *puVar5;
    iVar3 = 0x4f5c709c;
  }
  if (iVar6 == 0x4f5c709c) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return unaff_x21;
    }
  }
  else {
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49f)])();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


