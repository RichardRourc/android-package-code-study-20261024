// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015cbd0; body: [[0015cbd0, 0015d2f3]]

void FUN_0015cbd0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int unaff_w29;
  uint local_bc;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [31];
  undefined1 uStack_69;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar6 = -0x6d1e2810;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
            (&DAT_001fcfb9,0x29,&DAT_002042ec,&DAT_001fcfb9);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a80)])(&uStack_69,&DAT_001fcfb9);
  iVar1 = iVar6;
  if (param_2 != 0) {
    iVar1 = 0x2abd8e20;
  }
  iVar3 = -0xe9c480c;
LAB_0015cd04:
  iVar5 = iVar3;
  iVar3 = iVar5;
  if (0x11a104ac < iVar5) {
    if (iVar5 < 0x550057f8) {
      if (iVar5 < 0x360e7e20) {
        if (iVar5 != 0x11a104ad) {
          if (iVar5 == 0x24c57050) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a99)])(param_1);
            iVar3 = -0x1e642dd;
          }
          else if (iVar5 == 0x2abd8e20) {
            uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(param_3);
            iVar3 = -0x6d1e2810;
            if ((uVar4 & 1) == 0) {
              iVar3 = 0x5e6dc799;
            }
          }
          goto LAB_0015cd04;
        }
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_88);
        if (unaff_w29 == 2) goto LAB_0015cce4;
        if (unaff_w29 != 4) goto LAB_0015d2bc;
      }
      else {
        if (iVar5 == 0x360e7e20) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a9b)])(auStack_b8,auStack_a0);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a86)])();
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a98)])
                    (param_1,param_2,param_3,auStack_b8);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a86)])();
          local_bc = 0;
          iVar3 = -0x973b8fe;
          if (*(int *)(param_1 + 0x18) != 1) {
            iVar3 = -0x3dc6058e;
          }
          goto LAB_0015cd04;
        }
        if (iVar5 == 0x3bfd6c53) {
          iVar3 = 0x6afc4237;
          if (2 < iVar6) {
            iVar3 = 0x11943a9;
          }
          goto LAB_0015cd04;
        }
        if (iVar5 != 0x41bb328d) goto LAB_0015cd04;
      }
      iVar6 = iVar6 + 1;
      iVar3 = 0x3bfd6c53;
      goto LAB_0015cd04;
    }
    if (iVar5 < 0x6afc4237) {
      if (iVar5 == 0x550057f8) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a86)])();
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a9a)])(auStack_a0,auStack_88);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a86)])();
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(auStack_a0);
        iVar3 = -0xed3e558;
        if ((uVar4 & 1) == 0) {
          iVar3 = 0x360e7e20;
        }
      }
      else if (iVar5 == 0x5e6dc799) {
        iVar6 = 0;
        iVar3 = 0x3bfd6c53;
      }
      else if (iVar5 == 0x68aac9bf) {
        if (unaff_w29 == 2) goto LAB_0015cce4;
        goto LAB_0015d2bc;
      }
    }
    else if (iVar5 < 0x6ebfaa32) {
      if (iVar5 == 0x6afc4237) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a86)])();
        iVar3 = 0x6ebfaa32;
        if (iVar6 < 1) {
          iVar3 = 0xf24249c;
        }
      }
      else if (iVar5 == 0x6c187b0e) {
LAB_0015d2bc:
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else if (iVar5 == 0x6ebfaa32) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a87)])(500);
      iVar3 = 0xf24249c;
    }
    else if (iVar5 == 0x7c963b23) {
      iVar3 = -0x1e642dd;
      if ((local_bc & 1) == 0) {
        iVar3 = 0x24c57050;
      }
    }
    goto LAB_0015cd04;
  }
  if (iVar5 < -0xe9c480c) {
    if (-0x22a93f02 < iVar5) {
      iVar3 = -0x2f9b82a9;
      if (iVar5 != -0x22a93f01) {
        if (iVar5 == -0x15c0b41c) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
          unaff_w29 = 1;
          iVar3 = 0x11a104ad;
        }
        else {
          iVar3 = iVar5;
          if (iVar5 == -0xed3e558) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
            unaff_w29 = 1;
            iVar3 = -0x3927916;
          }
        }
      }
      goto LAB_0015cd04;
    }
    if (iVar5 != -0x6d1e2810) {
      if (iVar5 == -0x3dc6058e) {
        iVar3 = -0x22a93f01;
        if (*(int *)(param_1 + 0x18) != 2) {
          iVar3 = -0x2f9b82a9;
        }
      }
      else if (iVar5 == -0x2f9b82a9) {
        unaff_w29 = 1;
        local_bc = 1;
        iVar3 = 0x7c963b23;
      }
      goto LAB_0015cd04;
    }
  }
  else {
    if (iVar5 < -0x1e642dd) {
      iVar3 = iVar1;
      if (iVar5 != -0xe9c480c) {
        if (iVar5 == -0x973b8fe) {
          unaff_w29 = 4;
          iVar3 = 0x7c963b23;
        }
        else {
          iVar3 = iVar5;
          if (iVar5 == -0x3927916) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_a0);
            iVar3 = 0x11a104ad;
          }
        }
      }
      goto LAB_0015cd04;
    }
    if (iVar5 < 0xf24249c) {
      if (iVar5 == -0x1e642dd) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_b8);
        iVar3 = -0x3927916;
      }
      else if (iVar5 == 0x11943a9) {
        unaff_w29 = 2;
        iVar3 = 0x68aac9bf;
      }
      goto LAB_0015cd04;
    }
    if (iVar5 == 0xf24249c) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a86)])();
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a84)])
                (auStack_88,param_2,param_4,param_5,param_6);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a86)])();
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(auStack_88);
      iVar3 = -0x15c0b41c;
      if ((uVar4 & 1) == 0) {
        iVar3 = 0x550057f8;
      }
      goto LAB_0015cd04;
    }
    if (iVar5 != 0x103d9907) goto LAB_0015cd04;
  }
LAB_0015cce4:
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a81)])(param_1);
  unaff_w29 = 1;
  iVar3 = 0x6c187b0e;
  goto LAB_0015cd04;
}


