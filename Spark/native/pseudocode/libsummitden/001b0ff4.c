// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b0ff4; body: [[001b0ff4, 001b14bb]]

void FUN_001b0ff4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = 0x1c8909f9;
  local_80 = param_3;
  local_78 = param_1;
  uStack_70 = param_5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar5 = iVar2, iVar2 = iVar5, iVar5 < 0x1c8909f9) {
              if (iVar5 < -0x310ee78e) {
                if (iVar5 < -0x6da25624) {
                  if (iVar5 == -0x73d847a6) {
                    iVar2 = 0x7179681a;
                    if (local_80 != param_4) {
                      iVar2 = 0x51b6d2e2;
                    }
                  }
                  else if (iVar5 == -0x6ede30a9) {
                    iVar2 = 0x49ca18f4;
                  }
                }
                else {
                  iVar2 = 0x7179681a;
                  if ((iVar5 != -0x6da25624) && (iVar2 = iVar5, iVar5 == -0x50b71be8)) {
                    local_80 = local_80 + 1;
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_70);
                    iVar2 = -0x73d847a6;
                  }
                }
              }
              else if (iVar5 < -0x21b10261) {
                if (iVar5 == -0x310ee78e) {
                  puVar3 = (undefined8 *)
                           (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7af)])
                                     (&local_78);
                  uVar6 = *puVar3;
                  puVar3 = (undefined8 *)
                           (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])
                                     (&uStack_70);
                  *puVar3 = uVar6;
                  iVar2 = 0x1376c89b;
                }
                else if (iVar5 == -0x307e4589) {
                  iVar2 = -0x6ede30a9;
                  if (local_80 != param_4) {
                    iVar2 = 0x2c13f5bc;
                  }
                }
              }
              else {
                iVar2 = -0x73d847a6;
                if ((iVar5 != -0x21b10261) && (iVar2 = iVar5, iVar5 == 0x1376c89b)) {
                  local_78 = local_78 + 1;
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_70);
                  iVar2 = 0x49ca18f4;
                }
              }
            }
            if (0x5b57e371 < iVar5) break;
            if (iVar5 < 0x49ca18f4) {
              if (iVar5 == 0x1c8909f9) {
                iVar2 = -0x21b10261;
                if (local_78 != param_2) {
                  iVar2 = -0x307e4589;
                }
              }
              else if (iVar5 == 0x2c13f5bc) {
                uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])
                                  (param_6,*local_80,*local_78);
                iVar2 = 0x7ecdc5dd;
                if ((uVar4 & 1) == 0) {
                  iVar2 = 0x77bc779d;
                }
              }
            }
            else if (iVar5 == 0x49ca18f4) {
              iVar2 = -0x6da25624;
              if (local_78 != param_2) {
                iVar2 = -0x310ee78e;
              }
            }
            else if (iVar5 == 0x51b6d2e2) {
              puVar3 = (undefined8 *)
                       (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7af)])(&local_80);
              uVar6 = *puVar3;
              puVar3 = (undefined8 *)
                       (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_70);
              *puVar3 = uVar6;
              iVar2 = -0x50b71be8;
            }
          }
          if (0x71796819 < iVar5) break;
          if (iVar5 == 0x5b57e372) {
            iVar2 = 0x65daf6c1;
          }
          else if (iVar5 == 0x65daf6c1) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_70);
            iVar2 = 0x1c8909f9;
          }
        }
        if (iVar5 != 0x77bc779d) break;
        puVar3 = (undefined8 *)
                 (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7af)])(&local_78);
        uVar6 = *puVar3;
        puVar3 = (undefined8 *)
                 (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_70);
        *puVar3 = uVar6;
        local_78 = local_78 + 1;
        iVar2 = 0x5b57e372;
      }
      if (iVar5 != 0x7ecdc5dd) break;
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7af)])(&local_80);
      uVar6 = *puVar3;
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_70);
      *puVar3 = uVar6;
      local_80 = local_80 + 1;
      iVar2 = 0x5b57e372;
    }
  } while (iVar5 != 0x7179681a);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


