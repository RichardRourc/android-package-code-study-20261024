// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c5614; body: [[001c5614, 001c5857]]

undefined8 FUN_001c5614(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  code *pcVar10;
  uint unaff_w22;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb37)])();
  uVar6 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2e)])(param_1);
  local_70 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bae7)])
                       (param_1,param_2,uVar5,uVar6);
  local_78 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2a)])(param_1);
  pcVar10 = (code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bae6)];
  iVar9 = 0x19065158;
  while( true ) {
    while( true ) {
      while( true ) {
        iVar1 = 0x1103bc94;
        if ((unaff_w22 & 1) == 0) {
          iVar1 = 0xba358b7;
        }
        do {
          iVar3 = iVar9;
          iVar9 = iVar1;
        } while (iVar3 == -0x146faa1);
        if (0x19065157 < iVar3) break;
        if (iVar3 == 0xba358b7) {
          uVar5 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2a)])(param_1);
          iVar9 = 0x4e671aae;
        }
        else {
          uVar5 = local_70;
          iVar9 = 0x4e671aae;
        }
      }
      if (iVar3 != 0x19065158) break;
      uVar7 = (*pcVar10)(&local_70,&local_78);
      unaff_w22 = 0;
      iVar9 = 0x3d4e7ff8;
      if ((uVar7 & 1) == 0) {
        iVar9 = -0x146faa1;
      }
    }
    if (iVar3 != 0x3d4e7ff8) break;
    uVar6 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb35)])(param_1);
    uVar8 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bae5)])(&local_70);
    uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb34)])(uVar6,param_2,uVar8);
    unaff_w22 = uVar4 ^ 1;
    iVar9 = -0x146faa1;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


