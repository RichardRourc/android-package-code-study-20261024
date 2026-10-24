// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001af468; body: [[001af468, 001af5d7]]

void FUN_001af468(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b477)])(auStack_80,param_1,param_2);
  while( true ) {
    lVar3 = local_78;
    iVar1 = 0x5fc2f069;
    if (local_78 != lStack_70) {
      iVar1 = -0x6598e052;
    }
    iVar6 = 0x60f0960c;
    do {
      bVar4 = iVar6 != 0x5fc2f069;
      iVar6 = -0x17f5351f;
      if (bVar4) {
        iVar6 = iVar1;
      }
    } while (0x5fc2f068 < iVar6);
    while (iVar6 == -0x6598e052) {
      uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b478)])(lVar3);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b474)])(param_1 + 0x10,uVar5,param_3)
      ;
      iVar6 = 0x503edc3c;
    }
    if (iVar6 == -0x17f5351f) break;
    local_78 = lVar3 + 4;
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b475)])(auStack_80);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


