// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016bc14; body: [[0016bc14, 0016bfa7]]

void FUN_0016bc14(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long unaff_x21;
  long lVar7;
  long local_90;
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x78f0692c;
  if (param_1 != param_2) {
    iVar1 = -0x74679847;
  }
  iVar6 = 0x2420d2ab;
LAB_0016bcec:
  while (lVar7 = unaff_x21, unaff_x21 = lVar7, iVar6 < 0x1267eaec) {
    if (iVar6 < -0x6e338926) {
      if (iVar6 == -0x7f9f3b35) {
        local_90 = local_90 + -0x18;
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])(param_3,auStack_88)
        ;
        iVar6 = -0x33d7f541;
        if ((uVar4 & 1) == 0) {
          iVar6 = -0x6ff85e01;
        }
      }
      else {
        lVar3 = param_1;
        if (iVar6 == -0x74679847) {
LAB_0016bf08:
          local_70 = lVar3 + 0x18;
          iVar6 = -0x229a7487;
        }
        else if (iVar6 == -0x6ff85e01) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(lVar7,auStack_88);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_88);
          iVar6 = 0x6d853e7a;
        }
      }
    }
    else if (iVar6 < -0x33d7f541) {
      lVar3 = local_70;
      if (iVar6 == -0x6e338926) goto LAB_0016bf08;
      if (iVar6 == -0x56814aa7) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else if (iVar6 == -0x33d7f541) {
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_90);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(lVar7,uVar5);
      unaff_x21 = local_90;
      iVar6 = -0x7f9f3b35;
    }
    else if (iVar6 == -0x229a7487) {
      iVar6 = 0x76c8ff0a;
      if (local_70 != param_2) {
        iVar6 = 0x75c56cb4;
      }
    }
  }
  if (iVar6 < 0x6d853e7a) {
    if (iVar6 == 0x1267eaec) {
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_70);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aad)])(auStack_88,uVar5);
      unaff_x21 = local_70;
      iVar6 = -0x33d7f541;
      local_90 = lVar7;
      goto LAB_0016bcec;
    }
    if (iVar6 != 0x1c96309b) {
      if (iVar6 == 0x2420d2ab) {
        iVar6 = iVar1;
      }
      goto LAB_0016bcec;
    }
  }
  else {
    if (iVar6 < 0x76c8ff0a) {
      if (iVar6 == 0x6d853e7a) {
        iVar6 = -0x6e338926;
      }
      else if (iVar6 == 0x75c56cb4) {
        unaff_x21 = local_70 + -0x18;
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_3,local_70,unaff_x21);
        iVar6 = 0x1267eaec;
        if ((uVar4 & 1) == 0) {
          iVar6 = 0x6d853e7a;
        }
      }
      goto LAB_0016bcec;
    }
    if (iVar6 == 0x76c8ff0a) {
      iVar6 = 0x1c96309b;
      goto LAB_0016bcec;
    }
    if (iVar6 != 0x78f0692c) goto LAB_0016bcec;
  }
  iVar6 = -0x56814aa7;
  goto LAB_0016bcec;
}


