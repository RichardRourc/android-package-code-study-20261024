// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b5214; body: [[001b5214, 001b56ab]]

undefined8 FUN_001b5214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 uVar9;
  undefined8 unaff_x24;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_2;
  uStack_70 = param_1;
  lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b453)])(&local_78,&uStack_70);
  lVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a1)])(local_78,param_3);
  iVar1 = -0x15d3467e;
  if (lVar4 != lVar5) {
    iVar1 = 0x34fd4d49;
  }
  iVar3 = -0x230cf4ad;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar8 = iVar3, iVar3 = iVar8, -0xad57d13 < iVar8) {
            if (iVar8 < 0x34fd4d49) {
              if (iVar8 == -0xad57d12) {
                unaff_x22 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b444)])
                                      (&uStack_70,lVar5);
                iVar3 = -0x339ee00a;
              }
              else if (iVar8 == 0x272f1452) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b440)])(&local_80);
                puVar6 = (undefined8 *)
                         (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])();
                unaff_x24 = *puVar6;
                local_88 = local_80;
                local_90 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b444)])
                                     (&local_88,lVar4);
                iVar3 = 0x516cfdff;
              }
              else if (iVar8 == 0x27661025) {
                uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])
                                  (&local_90,&local_80);
                iVar3 = 0x516cfdff;
                if ((uVar7 & 1) == 0) {
                  iVar3 = -0x76dd4b14;
                }
              }
            }
            else if (iVar8 < 0x6c279fc8) {
              if (iVar8 == 0x34fd4d49) {
                uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7c2)])
                                  (lVar4,lVar5);
                local_80 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b444)])
                                     (&uStack_70,uVar9);
                iVar3 = 0x7d4b8553;
              }
              else if (iVar8 == 0x516cfdff) {
                puVar6 = (undefined8 *)
                         (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&local_90)
                ;
                uVar9 = *puVar6;
                puVar6 = (undefined8 *)
                         (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_88)
                ;
                *puVar6 = uVar9;
                local_88 = local_90;
                unaff_x23 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a1)])
                                      (local_90,param_3);
                iVar3 = -0x66f7134e;
                if (unaff_x23 <= lVar4) {
                  iVar3 = 0x6c279fc8;
                }
              }
            }
            else if (iVar8 == 0x6c279fc8) {
              local_90 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b444)])
                                   (&uStack_70,lVar4 - unaff_x23);
              iVar3 = -0x6921eaf8;
            }
            else if (iVar8 == 0x7d4b8553) {
              uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])
                                (&local_80,&uStack_70);
              iVar3 = 0x272f1452;
              if ((uVar7 & 1) == 0) {
                iVar3 = -0x65e72591;
              }
            }
          }
          if (-0x65e72592 < iVar8) break;
          if (iVar8 == -0x76dd4b14) {
            puVar6 = (undefined8 *)
                     (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_88);
            *puVar6 = unaff_x24;
            iVar3 = 0x7d4b8553;
          }
          else if (iVar8 == -0x6921eaf8) {
            iVar3 = 0x27661025;
          }
          else if (iVar8 == -0x66f7134e) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b4)])(&local_90,lVar4);
            iVar3 = -0x6921eaf8;
          }
        }
        if (iVar8 < -0x230cf4ad) break;
        iVar3 = iVar1;
        if ((iVar8 != -0x230cf4ad) && (iVar3 = iVar8, iVar8 == -0x15d3467e)) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7cd)])
                    (uStack_70,local_78,local_78,param_3);
          unaff_x22 = local_78;
          iVar3 = -0x339ee00a;
        }
      }
      if (iVar8 != -0x65e72591) break;
      iVar3 = -0xad57d12;
    }
  } while (iVar8 != -0x339ee00a);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x22;
}


