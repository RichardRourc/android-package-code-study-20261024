// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c36d0; body: [[001c36d0, 001c3893]]

void FUN_001c36d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb3f)])
                             (param_1,&local_98,param_2);
  lVar8 = *plVar5;
  local_9c[0] = 0;
  iVar1 = -0x58d872db;
  if (lVar8 != 0) {
    iVar1 = -0x56153768;
  }
  iVar4 = -0x190a52b2;
  while( true ) {
    do {
      iVar7 = iVar4;
      iVar4 = iVar1;
    } while (iVar7 == -0x190a52b2);
    if (iVar7 != -0x58d872db) break;
    (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb3e)])(auStack_90,param_1,param_3);
    uVar3 = local_98;
    uVar6 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb3d)])(auStack_90);
    (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb3c)])(param_1,uVar3,plVar5,uVar6);
    lVar8 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb33)])(auStack_90);
    local_9c[0] = 1;
    (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb32)])(auStack_90);
    iVar4 = -0x56153768;
  }
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb31)])(auStack_90,lVar8);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb30)])(&local_78,auStack_90,local_9c);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78,uStack_70);
}


