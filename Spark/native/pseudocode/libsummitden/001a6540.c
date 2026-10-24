// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a6540; body: [[001a6540, 001a66f3]]

void FUN_001a6540(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b499)])();
  iVar1 = -0x72addca3;
  if (param_2 <= uVar4) {
    iVar1 = -0x139eb56d;
  }
  iVar3 = 0x7a8b0b50;
  do {
    while (iVar6 = iVar3, iVar6 < -0x139eb56d) {
      if (iVar6 == -0x72addca3) {
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49e)])(param_1);
        iVar3 = 0x3eb9c225;
        if (param_2 <= uVar4) {
          iVar3 = -0x6b451a5f;
        }
      }
      else {
        uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49c)])(param_1);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49d)])
                  (auStack_90,param_2,uVar5,param_1 + 0x10);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b492)])(param_1,auStack_90);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b493)])(auStack_90);
        iVar3 = -0x139eb56d;
      }
    }
    iVar3 = iVar1;
  } while (iVar6 == 0x7a8b0b50);
  if (iVar6 == -0x139eb56d) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49f)])();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


