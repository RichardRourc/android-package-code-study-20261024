// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00135dc0; body: [[00135dc0, 00136023]]

void FUN_00135dc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719e)])(auStack_b0);
  local_98[0] = CONCAT35(local_98[0]._5_3_,0x6900000000);
  local_98[0] = CONCAT44(local_98[0]._4_4_,0x2c081e12);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a7)])(auStack_b0,local_98,5,0x5a);
  local_98[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37193)])(auStack_b0);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37192)])(&local_b8,local_98);
  uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d8)])(param_2);
  uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371db)])(param_2);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371da)])(auStack_b0,local_b8,uVar5,uVar6);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37184)])(local_98,param_1,auStack_b0);
  uVar9 = 0;
  local_78 = 0;
  uStack_70 = 0;
  while( true ) {
    iVar1 = -0x6f68025;
    if (0xf < uVar9) {
      iVar1 = -0x4c18784f;
    }
    iVar8 = -0x429b15a4;
    do {
      bVar4 = iVar8 != -0x4c18784f;
      iVar8 = 0x69ce8a13;
      if (bVar4) {
        iVar8 = iVar1;
      }
    } while (iVar8 < -0x6f68025);
    while (iVar8 == -0x6f68025) {
      puVar7 = (undefined1 *)
               (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dd)])(local_98,uVar9);
      uVar2 = *puVar7;
      puVar7 = (undefined1 *)
               (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37185)])(&local_78,uVar9);
      *puVar7 = uVar2;
      iVar8 = 0x5fa47510;
    }
    if (iVar8 != 0x5fa47510) break;
    uVar9 = uVar9 + 1;
  }
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_b0);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_78,uStack_70);
  }
  return;
}


