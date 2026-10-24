// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001be078; body: [[001be078, 001be27f]]

uint FUN_001be078(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 uStack_d1;
  undefined1 auStack_d0 [31];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbeb)])(auStack_80,auStack_98);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbca)])(auStack_80);
  uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbea)])();
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_80);
  iVar1 = 0x3ba839c0;
  if ((uVar4 & 1) == 0) {
    iVar1 = -0x60742fd3;
  }
  iVar3 = 0x7494971;
  while( true ) {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == 0x7494971);
      if (iVar6 != -0x60742fd3) break;
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe9)])(auStack_b0,&uStack_b1);
      uVar5 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbca)])(auStack_b0);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc9)])(auStack_98,uVar5,0x40000,1);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe8)])(auStack_d0,&uStack_d1);
      uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcf)])
                        (auStack_98,auStack_d0);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_d0);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_98);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_b0);
      iVar3 = 0xd8ed89e;
    }
    if (iVar6 == 0xd8ed89e) break;
    uVar4 = 1;
    iVar3 = 0xd8ed89e;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


