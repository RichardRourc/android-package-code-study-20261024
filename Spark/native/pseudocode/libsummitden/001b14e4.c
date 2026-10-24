// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b14e4; body: [[001b14e4, 001b1c1f]]

void FUN_001b14e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar10;
  long local_c8;
  long lStack_c0;
  int local_b4;
  undefined8 local_a8;
  undefined1 uStack_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar7 = 0x70cda6a8;
  local_a8 = param_3;
  local_78 = param_2;
  local_70 = param_1;
LAB_001b15d8:
  do {
    while (iVar9 = iVar7, iVar7 = iVar9, 0x13904e2f < iVar9) {
      if (iVar9 < 0x6203d898) {
        if (iVar9 < 0x1cac58a0) {
          if (iVar9 == 0x13904e30) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7bf)])
                      (local_70,local_80,local_78,param_4,unaff_x28,unaff_x27,param_7,param_8);
            local_70 = local_78;
            local_78 = local_88;
            param_6 = lStack_c0;
            param_5 = local_c8;
            iVar7 = -0x32674e71;
          }
          else {
            iVar7 = 0x70cda6a8;
            if (iVar9 != 0x16bdb84b) {
              iVar8 = 0x189f3060;
LAB_001b1678:
              iVar7 = iVar9;
              if (iVar9 == iVar8) {
                iVar7 = -0x2b29be4c;
              }
            }
          }
        }
        else if (iVar9 == 0x1cac58a0) {
          iVar7 = -0x1479864a;
          if (param_6 <= param_8) {
            iVar7 = 0x6fcd9a94;
          }
        }
        else if (iVar9 == 0x330eee94) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7bf)])
                    (local_78,local_88,local_a8,param_4,local_c8,lStack_c0,param_7,param_8);
          local_a8 = local_78;
          local_78 = local_80;
          param_6 = unaff_x27;
          param_5 = unaff_x28;
          iVar7 = -0x32674e71;
        }
        else if (iVar9 == 0x5267c1c0) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a2)])(&local_80);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a2)])(&local_88);
          iVar7 = -0x527041cb;
          if (param_6 <= param_5) {
            iVar7 = -0x604e0bf1;
          }
        }
      }
      else if (iVar9 < 0x70cda6a8) {
        if (iVar9 == 0x6203d898) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&local_70);
          param_5 = param_5 + -1;
          iVar7 = 0x744a618d;
        }
        else if (iVar9 == 0x6f87ebb8) {
          iVar7 = 0x70cda6a8;
          if (local_b4 != 0) goto LAB_001b1be8;
        }
        else if (iVar9 == 0x6fcd9a94) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ad)])
                    (local_70,local_78,local_a8,param_4,param_5,param_6,param_7);
          iVar7 = -0x2b29be4c;
        }
      }
      else if (iVar9 == 0x70cda6a8) {
        bVar2 = param_6 == 0;
        iVar7 = 0x189f3060;
        iVar9 = 0x75f0999e;
LAB_001b1bc0:
        if (!bVar2) {
          iVar7 = iVar9;
        }
      }
      else if (iVar9 == 0x744a618d) {
        iVar7 = -0x3f28b17d;
      }
      else if (iVar9 == 0x75f0999e) {
        iVar7 = 0x1cac58a0;
        if (param_5 <= param_8) {
          iVar7 = 0x6fcd9a94;
        }
      }
    }
    if (-0x47b77dd5 < iVar9) {
      if (iVar9 < -0x32674e71) {
        if (iVar9 == -0x47b77dd4) {
          iVar7 = 0x5267c1c0;
        }
        else if (iVar9 == -0x436b43de) {
          local_80 = local_70;
          unaff_x28 = param_5 / 2;
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a3)])(&local_80,unaff_x28);
          uVar10 = local_78;
          uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_80);
          local_88 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a6)])
                               (uVar10,local_a8,uVar6,*param_4);
          unaff_x27 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a1)])
                                (local_78,local_88);
          iVar7 = -0x613f25a5;
        }
        else if (iVar9 == -0x3f28b17d) {
          iVar7 = -0xad7400d;
          if (param_5 != 0) {
            iVar7 = -0x78fa5c81;
          }
        }
      }
      else if (iVar9 < -0x1479864a) {
        if (iVar9 == -0x32674e71) {
          local_b4 = 0;
          iVar7 = 0x6f87ebb8;
        }
        else if (iVar9 == -0x2b29be4c) {
LAB_001b1be8:
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else {
        iVar7 = 0x744a618d;
        if (iVar9 != -0x1479864a) {
          iVar8 = -0xad7400d;
          goto LAB_001b1678;
        }
      }
      goto LAB_001b15d8;
    }
    if (iVar9 < -0x613f25a5) {
      if (iVar9 == -0x7eeadfcc) {
        iVar7 = 0x6203d898;
      }
      else if (iVar9 == -0x78fa5c81) {
        puVar3 = (undefined8 *)
                 (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_78);
        uVar10 = *puVar3;
        puVar3 = (undefined8 *)
                 (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_70);
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])
                          (param_4,uVar10,*puVar3);
        iVar7 = -0x47b77dd4;
        if ((uVar4 & 1) == 0) {
          iVar7 = -0x7eeadfcc;
        }
      }
      else if (iVar9 == -0x75f0152a) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b446)])(&local_70,&local_78);
        local_b4 = 1;
        iVar7 = 0x6f87ebb8;
      }
    }
    else if (iVar9 == -0x613f25a5) {
      local_c8 = param_5 - unaff_x28;
      lStack_c0 = param_6 - unaff_x27;
      local_78 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a7)])
                           (local_80,local_78,local_88);
      iVar7 = 0x13904e30;
      if (local_c8 + lStack_c0 <= unaff_x28 + unaff_x27) {
        iVar7 = 0x330eee94;
      }
    }
    else {
      if (iVar9 == -0x604e0bf1) {
        bVar2 = param_5 == 1;
        iVar7 = -0x75f0152a;
        iVar9 = -0x436b43de;
        goto LAB_001b1bc0;
      }
      if (iVar9 == -0x527041cb) {
        local_88 = local_78;
        unaff_x27 = param_6 / 2;
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a3)])(&local_88,unaff_x27);
        uVar6 = local_70;
        uVar10 = local_78;
        uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_88);
        local_80 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a0)])
                             (uVar6,uVar10,uVar5,param_4,&uStack_89);
        unaff_x28 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a1)])
                              (local_70,local_80);
        iVar7 = -0x613f25a5;
      }
    }
  } while( true );
}


