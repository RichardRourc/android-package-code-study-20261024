// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a489c; body: [[001a489c, 001a4c5f]]

void FUN_001a489c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b500)])(param_2 + 0x18);
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b501)])(param_2 + 0x18);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b506)])(uVar2,uVar3,param_2);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b592)])(param_1);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b593)])(param_1,0x1000);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x7b);
  local_70 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b500)])(param_2 + 0x18);
  local_78 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b501)])(param_2 + 0x18);
  bVar8 = true;
  iVar7 = -0x234af5e0;
  do {
    while( true ) {
      while( true ) {
        while (0x1d940c41 < iVar7) {
          if (iVar7 < 0x2455a5b9) {
            if (iVar7 == 0x1d940c42) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x22);
              uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b505)])
                                (param_2,uVar2);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b52d)])(param_1,uVar3);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x22);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x3a);
              lVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b505)])
                                (param_2,uVar2);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b597)])(param_1,lVar6 + 0x18)
              ;
              bVar8 = false;
              iVar7 = 0x2455a5b9;
            }
            else if (iVar7 == 0x1e287c29) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x2c);
              iVar7 = 0x1d940c42;
            }
          }
          else if (iVar7 == 0x2455a5b9) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&local_70);
            iVar7 = -0x234af5e0;
          }
          else if (iVar7 == 0x740ec546) {
            puVar4 = (undefined8 *)
                     (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_70);
            uVar2 = *puVar4;
            iVar7 = 0x1d940c42;
            if (!bVar8) {
              iVar7 = 0x1e287c29;
            }
          }
        }
        if (-0x234af5e1 < iVar7) break;
        if (iVar7 == -0x7fe375c3) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x7d);
          iVar7 = 0x1c3a7b63;
        }
        else if (iVar7 == -0x4e13a07f) {
          iVar7 = -0x7fe375c3;
        }
      }
      if (iVar7 != -0x234af5e0) break;
      uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])(&local_70,&local_78);
      iVar7 = 0x740ec546;
      if ((uVar5 & 1) == 0) {
        iVar7 = -0x4e13a07f;
      }
    }
  } while (iVar7 != 0x1c3a7b63);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


