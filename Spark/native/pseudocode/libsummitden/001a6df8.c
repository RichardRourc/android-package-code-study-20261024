// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a6df8; body: [[001a6df8, 001a6f93]]

void FUN_001a6df8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined1 auStack_98 [31];
  undefined1 uStack_79;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_4;
  local_70 = param_4;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b484)])
            (auStack_98,param_1,&local_78,&local_70);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b485)])(&uStack_79,auStack_98);
  lVar6 = param_2;
  while( true ) {
    iVar1 = -0x1e9a2700;
    if (lVar6 != param_3) {
      iVar1 = 0x642c647b;
    }
    iVar3 = 0x7ee8b4cd;
    do {
      iVar5 = iVar3;
      iVar3 = iVar1;
    } while (iVar5 == 0x7ee8b4cd);
    if (iVar5 == -0x1e9a2700) break;
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48b)])(local_70);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4fa)])(param_1,uVar4,lVar6);
    lVar6 = lVar6 + 0x38;
    local_70 = local_70 + 0x38;
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4fb)])(&uStack_79);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4f8)])(param_1,param_2,param_3);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4f9)])(&uStack_79);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


