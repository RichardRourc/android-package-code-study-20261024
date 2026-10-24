// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00175a98; body: [[00175a98, 00175e23]]

void FUN_00175a98(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x21;
  long lVar6;
  long local_a8;
  undefined1 auStack_a0 [48];
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x3fe023e;
  if (param_1 != param_2) {
    iVar1 = 0x234bd122;
  }
  iVar5 = -0x2da8faff;
LAB_00175b68:
  while (lVar6 = unaff_x21, unaff_x21 = lVar6, 0x72c19a0 < iVar5) {
    if (iVar5 < 0x4730366d) {
      if (iVar5 < 0x234bd122) {
        if (iVar5 == 0xfcce81d) {
          iVar5 = 0x53f7d69a;
        }
        else if (iVar5 == 0x72c19a1) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else {
        lVar6 = param_1;
        if (iVar5 == 0x234bd122) goto LAB_00175cb8;
        if (iVar5 == 0x3cd49d91) {
          unaff_x21 = local_70 + -0x30;
          uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                            (param_3,local_70,unaff_x21);
          iVar5 = 0x4730366d;
          if ((uVar3 & 1) == 0) {
            iVar5 = 0xfcce81d;
          }
        }
      }
    }
    else if (iVar5 == 0x4730366d) {
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_70);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f4)])(auStack_a0,uVar4);
      unaff_x21 = local_70;
      iVar5 = 0x4774b5f3;
      local_a8 = lVar6;
    }
    else if (iVar5 == 0x4774b5f3) {
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_a8);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(lVar6,uVar4);
      unaff_x21 = local_a8;
      iVar5 = -0x39657d5d;
    }
    else {
      lVar6 = local_70;
      if (iVar5 == 0x53f7d69a) {
LAB_00175cb8:
        local_70 = lVar6 + 0x30;
        iVar5 = -0x497a2a12;
      }
    }
  }
  if (iVar5 < -0x39657d5d) {
    if (iVar5 != -0x5b0db69f) {
      if (iVar5 == -0x4b1753db) {
        iVar5 = -0x5b0db69f;
      }
      else if (iVar5 == -0x497a2a12) {
        iVar5 = -0x4b1753db;
        if (local_70 != param_2) {
          iVar5 = 0x3cd49d91;
        }
      }
      goto LAB_00175b68;
    }
  }
  else {
    if (iVar5 < -0xf6df44d) {
      if (iVar5 == -0x39657d5d) {
        local_a8 = local_a8 + -0x30;
        uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])(param_3,auStack_a0)
        ;
        iVar5 = 0x4774b5f3;
        if ((uVar3 & 1) == 0) {
          iVar5 = -0xf6df44d;
        }
      }
      else if (iVar5 == -0x2da8faff) {
        iVar5 = iVar1;
      }
      goto LAB_00175b68;
    }
    if (iVar5 == -0xf6df44d) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(lVar6,auStack_a0);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_a0);
      iVar5 = 0xfcce81d;
      goto LAB_00175b68;
    }
    if (iVar5 != -0x3fe023e) goto LAB_00175b68;
  }
  iVar5 = 0x72c19a1;
  goto LAB_00175b68;
}


