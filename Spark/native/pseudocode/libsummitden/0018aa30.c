// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018aa30; body: [[0018aa30, 0018abd7]]

void FUN_0018aa30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e8)])();
  local_78 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e9)])(param_2);
  while( true ) {
    iVar5 = 0x3512a5ca;
    while( true ) {
      while (iVar5 < 0xa2abef) {
        if (iVar5 == -0x463697bd) {
          puVar4 = (undefined1 *)
                   (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ef)])(&local_70);
          uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ec)])(*puVar4);
          *puVar4 = uVar2;
          iVar5 = 0x6f9c6653;
        }
        else {
          iVar5 = 0xa2abef;
        }
      }
      if (iVar5 != 0x3512a5ca) break;
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ee)])(&local_70,&local_78);
      iVar5 = -0x463697bd;
      if ((uVar3 & 1) == 0) {
        iVar5 = -0x60d802d;
      }
    }
    if (iVar5 != 0x6f9c6653) break;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ed)])(&local_70);
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e2)])(param_1,param_2);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


