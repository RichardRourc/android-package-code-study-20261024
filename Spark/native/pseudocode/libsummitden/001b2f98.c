// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b2f98; body: [[001b2f98, 001b31a7]]

void FUN_001b2f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  ulong unaff_x23;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = param_1;
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a1)])();
  iVar7 = -0xb4c74;
LAB_001b3038:
  do {
    iVar1 = -0x16a79b8e;
    if (uVar3 != 0) {
      iVar1 = 0x8d49314;
    }
    while( true ) {
      do {
        while (iVar8 = iVar7, iVar8 < -0xb4c74) {
          if (iVar8 != -0x68b24865) {
            if (iVar8 != -0x2a462c59) {
              if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail(local_70);
              }
              return;
            }
            puVar6 = (undefined8 *)
                     (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&local_78);
            local_70 = *puVar6;
            iVar7 = -0x68b24865;
            uVar3 = uVar3 + ~unaff_x23;
            goto LAB_001b3038;
          }
          iVar7 = -0xb4c74;
        }
        iVar7 = iVar1;
      } while (iVar8 == -0xb4c74);
      if (iVar8 != 0x8d49314) break;
      unaff_x23 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b790)])(uVar3);
      local_78 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b791)])
                           (&local_70,unaff_x23);
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_78);
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b796)])(param_5,uVar4);
      uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b797)])
                        (param_4,param_3,uVar4);
      iVar7 = 0x5153c987;
      if ((uVar5 & 1) == 0) {
        iVar7 = -0x2a462c59;
      }
    }
    iVar7 = -0x68b24865;
    uVar3 = unaff_x23;
  } while( true );
}


