// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001aaca0; body: [[001aaca0, 001aae8f]]

void FUN_001aaca0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_b8 [3];
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x61b3724c;
  if (param_2 != 0) {
    iVar1 = -0x46dba63;
  }
  iVar5 = -0x3f02adde;
  while( true ) {
    while (-0x3f02addf < iVar5) {
      bVar3 = iVar5 != -0x3f02adde;
      iVar5 = iVar1;
      if (bVar3) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(auStack_80,param_2);
        iVar5 = -0x46c9d2cf;
      }
    }
    if (iVar5 != -0x61b3724c) break;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b592)])(auStack_80);
    iVar5 = -0x46c9d2cf;
  }
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b43d)])(auStack_80);
  local_b8[0] = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49c)])(param_1);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b432)])(param_1 + 0x18,local_b8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e2)])(local_b8,auStack_80);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e2)])(auStack_a0,param_3);
  local_88 = uVar4;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b433)])(param_1,local_b8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4f3)])(local_b8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_80);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


