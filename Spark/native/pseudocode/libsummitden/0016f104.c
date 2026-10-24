// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016f104; body: [[0016f104, 0016f367]]

void FUN_0016f104(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x21;
  undefined1 auStack_90 [24];
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x6c23ffda;
  if (param_4 < 2) {
    iVar1 = -0x58b67ee2;
  }
  iVar3 = -0x5f2e5290;
  local_78 = param_2;
  local_70 = param_1;
  while( true ) {
    do {
      while (iVar5 = iVar3, 0x69ce4bc9 < iVar5) {
        if (iVar5 == 0x69ce4bca) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_90);
          iVar3 = -0x58b67ee2;
        }
        else if (iVar5 == 0x6b371195) {
          uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_78);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(unaff_x21,uVar4);
          unaff_x21 = unaff_x21 + 0x18;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(local_78,auStack_90);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b29)])
                    (local_70,unaff_x21,param_3,(unaff_x21 - local_70 >> 3) * -0x5555555555555555);
          iVar3 = 0x69ce4bca;
        }
        else {
          uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_70);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aad)])(auStack_90,uVar4);
          unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b28)])
                                (local_70,param_3,param_4);
          local_78 = local_78 + -0x18;
          iVar3 = -0x408468ef;
          if (unaff_x21 != local_78) {
            iVar3 = 0x6b371195;
          }
        }
      }
      iVar3 = iVar1;
    } while (iVar5 == -0x5f2e5290);
    if (iVar5 != -0x408468ef) break;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(unaff_x21,auStack_90);
    iVar3 = 0x69ce4bca;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


