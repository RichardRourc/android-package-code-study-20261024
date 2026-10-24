// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00178888; body: [[00178888, 00178ab7]]

void FUN_00178888(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x21;
  undefined1 auStack_a8 [48];
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x43e59978;
  if (param_4 < 2) {
    iVar1 = -0x4c822cf3;
  }
  iVar3 = 0x6b95bfce;
  local_78 = param_2;
  local_70 = param_1;
LAB_00178940:
  while( true ) {
    iVar5 = iVar3;
    if (0x43e59977 < iVar5) goto code_r0x0017894c;
    if (iVar5 != -0xd0b8650) break;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_a8);
    iVar3 = -0x4c822cf3;
  }
  if (iVar5 == -0x4c822cf3) {
    if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_78);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(unaff_x21,uVar4);
  unaff_x21 = unaff_x21 + 0x30;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(local_78,auStack_a8);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528b0)])
            (local_70,unaff_x21,param_3,(unaff_x21 - local_70 >> 4) * -0x5555555555555555);
  goto LAB_00178978;
code_r0x0017894c:
  iVar3 = iVar1;
  if (iVar5 != 0x6b95bfce) {
    if (iVar5 == 0x7a2823c3) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(unaff_x21,auStack_a8);
LAB_00178978:
      iVar3 = -0xd0b8650;
    }
    else {
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_70);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f4)])(auStack_a8,uVar4);
      unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528b3)])
                            (local_70,param_3,param_4);
      local_78 = local_78 + -0x30;
      iVar3 = 0x7a2823c3;
      if (unaff_x21 != local_78) {
        iVar3 = 0x41c87c3a;
      }
    }
  }
  goto LAB_00178940;
}


