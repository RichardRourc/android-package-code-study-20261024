// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b0628; body: [[001b0628, 001b0a8f]]

void FUN_001b0628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar7 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b452)];
  iVar6 = 0x212896bc;
  local_78 = param_2;
  local_70 = param_1;
LAB_001b06e0:
  while (iVar6 < -0xbe8c0ff) {
    if (iVar6 < -0x41ea17df) {
      if (iVar6 < -0x434f84ab) {
        if (iVar6 == -0x73bcf833) {
          iVar6 = -0x2b7d7242;
        }
        else if (iVar6 == -0x533ee020) {
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])
                            (&local_88,&local_70);
          unaff_x21 = 0;
          bVar2 = (uVar4 & 1) == 0;
          iVar5 = 0x716508e8;
          iVar6 = 0x4ad4d628;
          goto LAB_001b06dc;
        }
      }
      else {
        if (iVar6 == -0x434f84ab) {
          local_80 = local_70;
          goto LAB_001b0950;
        }
        if (iVar6 == -0x4310f3ad) {
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    else if (iVar6 < -0x2b7d7242) {
      if (iVar6 == -0x41ea17df) {
        iVar6 = -0x4310f3ad;
      }
      else if (iVar6 == -0x2ff9034d) {
        puVar3 = (undefined8 *)
                 (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_88);
        *puVar3 = unaff_x20;
        iVar6 = -0x73bcf833;
      }
    }
    else if (iVar6 == -0x2b7d7242) {
LAB_001b0950:
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&local_80);
      iVar6 = -0xbe8c0ff;
    }
    else if (iVar6 == -0x25544dca) {
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&local_90);
      uVar8 = *puVar3;
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_88);
      *puVar3 = uVar8;
      local_88 = local_90;
      iVar6 = -0x533ee020;
    }
  }
  if (iVar6 < 0x212896bc) {
    if (iVar6 != -0xbe8c0ff) {
      if (iVar6 == -0x83a6c14) {
        puVar3 = (undefined8 *)
                 (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&local_80);
        local_90 = local_88;
        unaff_x20 = *puVar3;
        local_88 = local_80;
        iVar6 = -0x25544dca;
      }
      else if (iVar6 == 0x1b4223ba) {
        iVar6 = -0x4310f3ad;
      }
      goto LAB_001b06e0;
    }
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])(&local_80,&local_78);
    bVar2 = (uVar4 & 1) == 0;
    iVar5 = -0x41ea17df;
    iVar6 = 0x3b9ada9f;
  }
  else {
    if (0x4ad4d627 < iVar6) {
      if (iVar6 == 0x4ad4d628) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b440)])(&local_90);
        puVar3 = (undefined8 *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])();
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])
                          (param_3,unaff_x20,*puVar3);
        unaff_x21 = uVar4 & 0xffffffff;
        iVar6 = 0x716508e8;
      }
      else if (iVar6 == 0x716508e8) {
        iVar6 = -0x25544dca;
        if ((unaff_x21 & 1) == 0) {
          iVar6 = -0x2ff9034d;
        }
      }
      goto LAB_001b06e0;
    }
    if (iVar6 == 0x212896bc) {
      uVar4 = (*pcVar7)(&local_70,&local_78);
      bVar2 = (uVar4 & 1) == 0;
      iVar5 = -0x434f84ab;
      iVar6 = 0x1b4223ba;
    }
    else {
      if (iVar6 != 0x3b9ada9f) goto LAB_001b06e0;
      local_88 = local_80;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b440)])(&local_88);
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_80);
      uVar8 = *puVar3;
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_88);
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])
                        (param_3,uVar8,*puVar3);
      bVar2 = (uVar4 & 1) == 0;
      iVar5 = -0x73bcf833;
      iVar6 = -0x83a6c14;
    }
  }
LAB_001b06dc:
  if (bVar2) {
    iVar6 = iVar5;
  }
  goto LAB_001b06e0;
}


