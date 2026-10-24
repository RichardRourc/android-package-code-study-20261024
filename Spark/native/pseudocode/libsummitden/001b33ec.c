// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b33ec; body: [[001b33ec, 001b36d7]]

void FUN_001b33ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar4 = 0x560c016;
  local_88 = param_1;
  uStack_80 = param_5;
  local_78 = param_4;
  uStack_70 = param_3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x3cfa213c < iVar4) {
            if (iVar4 < 0x62033999) {
              if (iVar4 == 0x3cfa213d) {
                puVar3 = (undefined8 *)
                         (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7af)])(&local_88)
                ;
                uVar5 = *puVar3;
                puVar3 = (undefined8 *)
                         (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])
                                   (&uStack_80);
                *puVar3 = uVar5;
                local_88 = local_88 + 1;
                iVar4 = 0x568311a8;
              }
              else if (iVar4 == 0x568311a8) {
                iVar4 = -0x150bc006;
              }
            }
            else if (iVar4 == 0x62033999) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b78e)])
                        (local_88,param_2,uStack_80);
              iVar4 = -0x142af151;
            }
            else if (iVar4 == 0x78b64b6c) {
              puVar3 = (undefined8 *)
                       (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_70);
              uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])
                                (param_6,*puVar3,*local_88);
              iVar4 = -0x5a77722;
              if ((uVar2 & 1) == 0) {
                iVar4 = 0x3cfa213d;
              }
            }
          }
          if (iVar4 < 0x2f94f53) break;
          if (iVar4 == 0x2f94f53) {
            uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b452)])
                              (&uStack_70,&local_78);
            iVar4 = 0x62033999;
            if ((uVar2 & 1) == 0) {
              iVar4 = 0x78b64b6c;
            }
          }
          else if ((iVar4 == 0x560c016) && (iVar4 = -0x142af151, local_88 != param_2)) {
            iVar4 = 0x2f94f53;
          }
        }
        if (iVar4 != -0x150bc006) break;
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_80);
        iVar4 = 0x560c016;
      }
      if (iVar4 != -0x5a77722) break;
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&uStack_70);
      uVar5 = *puVar3;
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_80);
      *puVar3 = uVar5;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_70);
      iVar4 = 0x568311a8;
    }
  } while (iVar4 != -0x142af151);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


