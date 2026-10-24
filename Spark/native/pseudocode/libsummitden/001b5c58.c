// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b5c58; body: [[001b5c58, 001b5e03]]

/* WARNING: Removing unreachable block (ram,0x001b5d6c) */

void FUN_001b5c58(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar5 = 0x685300c8;
  local_98 = param_4;
  uStack_90 = param_3;
  local_88 = param_2;
  uStack_80 = param_1;
LAB_001b5cec:
  do {
    iVar1 = 0x2f4fadeb;
    if ((param_1 & 1) == 0) {
      iVar1 = -0x33a30e2d;
    }
    do {
      if (-0x33a30e2e < iVar5) goto LAB_001b5d10;
      bVar3 = iVar5 == -0x722ec00d;
      iVar5 = iVar1;
    } while (bVar3);
    param_1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])(&uStack_90,&local_98)
    ;
    iVar5 = -0x722ec00d;
  } while( true );
LAB_001b5d10:
  while (iVar5 == 0x2f4fadeb) {
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b446)])(&uStack_80,&uStack_90);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_80);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_90);
    iVar5 = 0x685300c8;
  }
  if (iVar5 == -0x33a30e2d) {
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b788)])
              (&local_78,&uStack_80,&uStack_90);
    if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_78,uStack_70);
    }
    return;
  }
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])(&uStack_80,&local_88);
  param_1 = 0;
  iVar5 = -0x3c006cad;
  if ((uVar4 & 1) == 0) {
    iVar5 = -0x722ec00d;
  }
  goto LAB_001b5cec;
}


