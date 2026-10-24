// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a7ba0; body: [[001a7ba0, 001a7e23]]

uint FUN_001a7ba0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint unaff_w20;
  undefined8 unaff_x21;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = 0x4e7ac82b;
  if (param_2 != (undefined8 *)0x0) {
    iVar1 = 0x67180f3;
  }
  iVar2 = 0x5ae8236a;
  iVar4 = 0x12e6ac42;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar8 = iVar4, iVar4 = iVar2, 0x4e7ac82a < iVar8) {
            if (iVar8 < 0x5ae8236a) {
              if (iVar8 == 0x4e7ac82b) {
                unaff_w20 = 0;
                iVar4 = -0x67c38e69;
              }
              else {
                iVar4 = iVar8;
                if ((iVar8 == 0x54acbed7) && (iVar4 = iVar2, local_70 != (char *)0x0)) {
                  iVar4 = -0x2a120613;
                }
              }
            }
            else if (iVar8 == 0x5ae8236a) {
              unaff_w20 = 0;
              iVar4 = 0x7712d680;
            }
            else if (iVar8 == 0x5d737a8b) {
              piVar7 = (int *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e9)])();
              if (*piVar7 != 0x22) {
                iVar4 = 0x54acbed7;
              }
            }
            else {
              iVar4 = iVar8;
              if (iVar8 == 0x7712d680) {
                iVar4 = -0x67c38e69;
              }
            }
          }
          if (iVar8 < 0x12e6ac42) break;
          iVar4 = iVar1;
          if ((iVar8 != 0x12e6ac42) && (iVar4 = iVar8, iVar8 == 0x35908c66)) {
            unaff_w20 = 1;
            *param_2 = unaff_x21;
            iVar4 = 0x7712d680;
          }
        }
        if (iVar8 != -0x2a120613) break;
        iVar4 = 0x35908c66;
        if (*local_70 != '\0') {
          iVar4 = iVar2;
        }
      }
      if (iVar8 != 0x67180f3) break;
      pcVar5 = (char *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f3)])(param_1);
      local_70 = (char *)0x0;
      puVar6 = (undefined4 *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e9)])();
      *puVar6 = 0;
      unaff_x21 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4ee)])
                            (pcVar5,&local_70,10);
      if (pcVar5 != local_70) {
        iVar4 = 0x5d737a8b;
      }
    }
    iVar4 = iVar8;
  } while (iVar8 != -0x67c38e69);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_w20 & 1;
}


