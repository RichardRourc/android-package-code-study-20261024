// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a8828; body: [[001a8828, 001a8a5b]]

long FUN_001a8828(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  lVar7 = 0x1873b494;
  local_68 = *(long *)(lVar3 + 0x28);
  local_78 = param_4;
  local_70 = param_2;
  plVar4 = (long *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b494)])
                             (&local_78,&local_70);
  iVar1 = -0x75ebd5f9;
  if (param_5 != 0) {
    iVar1 = 0x147ba613;
  }
  iVar2 = -0x74938c45;
  if ((ulong)(local_70 - *plVar4) <= param_5) {
    iVar2 = -0x21960caa;
  }
  iVar5 = -0x31f7f2be;
  local_78 = *plVar4;
LAB_001a8914:
  do {
    while (iVar5 < -0x2d38d38c) {
      if (iVar5 < -0x459d7cf2) {
        if (iVar5 == -0x75ebd5f9) {
          lVar7 = (long)plVar4 - param_1;
          iVar5 = -0x2d38d38c;
        }
        else if (iVar5 == -0x74938c45) {
          lVar6 = local_78 + param_5;
LAB_001a89e0:
          iVar5 = 0x716d1dde;
          local_78 = lVar6;
        }
      }
      else if (iVar5 == -0x459d7cf2) {
        lVar7 = -1;
        iVar5 = -0x2d38d38c;
      }
      else if (iVar5 == -0x31f7f2be) {
        iVar5 = iVar2;
      }
    }
    if (0x147ba612 < iVar5) {
      if (iVar5 == 0x147ba613) {
        iVar5 = -0x459d7cf2;
        if (plVar4 != (long *)(param_1 + local_78)) {
          iVar5 = -0x75ebd5f9;
        }
      }
      else if (iVar5 == 0x716d1dde) {
        plVar4 = (long *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e1)])
                                   (param_1,param_1 + local_78,param_3,param_3 + param_5,
                                    &LAB_001a8ac0);
        iVar5 = iVar1;
      }
      goto LAB_001a8914;
    }
    lVar6 = local_70;
    if (iVar5 == -0x21960caa) goto LAB_001a89e0;
    if (iVar5 == -0x2d38d38c) {
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return lVar7;
    }
  } while( true );
}


