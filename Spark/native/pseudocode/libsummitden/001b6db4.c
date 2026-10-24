// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b6db4; body: [[001b6db4, 001b71c3]]

uint FUN_001b6db4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x21;
  uint unaff_w22;
  int unaff_w26;
  undefined8 local_2078;
  undefined8 local_2070;
  undefined1 auStack_2068 [8192];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa13)])
                    (0x38,0xffffff9c,param_1,0x80000,0);
  iVar1 = -0x30813a0e;
  if (-1 < (long)uVar4) {
    iVar1 = 0x465bfa00;
  }
  iVar6 = 0x6aa4b6a7;
LAB_001b6ea4:
  do {
    while (iVar6 < -0x2ad10c31) {
      if (iVar6 < -0x4771d6e8) {
        if (iVar6 == -0x5df9edfd) {
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa13)])(0x39,uVar4 & 0xffffffff);
          unaff_w22 = 0;
          unaff_w26 = 1;
          iVar6 = -0x2f15c3ae;
        }
        else if (iVar6 == -0x57a46b2e) {
          iVar6 = -0x3500a4e0;
          if (unaff_x21 != 0) {
            iVar6 = -0x11db2f6f;
          }
        }
        else if (iVar6 == -0x4b23df13) {
          iVar6 = 0x1e7d9602;
        }
      }
      else if (iVar6 < -0x30813a0e) {
        if ((iVar6 == -0x4771d6e8) || (iVar6 == -0x3500a4e0)) {
          unaff_w26 = 2;
          iVar6 = -0x2f15c3ae;
        }
      }
      else if (iVar6 == -0x30813a0e) {
        unaff_w22 = 0;
        unaff_w26 = 1;
        iVar6 = -0x2ad10c31;
      }
      else if (iVar6 == -0x2f15c3ae) {
        if (unaff_w26 == 2) {
LAB_001b6e64:
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa13)])(0x39,uVar4 & 0xffffffff);
          uVar3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa00)])(param_2);
          unaff_w22 = uVar3 ^ 1;
          unaff_w26 = 1;
          iVar6 = 0x14d137ca;
        }
        else {
          iVar6 = 0x1e7d9602;
          if (unaff_w26 != 0) goto LAB_001b7030;
        }
      }
    }
    if (iVar6 < 0x3fde2b36) {
      if (iVar6 < 0x14d137ca) {
        if (iVar6 == -0x11db2f6f) {
          local_2078 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa12)])(param_2);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa11)])(&local_2070,&local_2078);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa10)])
                    (param_2,local_2070,auStack_2068,auStack_2068 + unaff_x21);
          uVar5 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa06)])(param_2);
          iVar6 = -0x4771d6e8;
          if (uVar5 < 0x800001) {
            iVar6 = 0x3fde2b36;
          }
        }
        else if (iVar6 == -0x2ad10c31) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return unaff_w22 & 1;
        }
      }
      else if (iVar6 == 0x14d137ca) {
LAB_001b7030:
        iVar6 = -0x2ad10c31;
      }
      else if (iVar6 == 0x1e7d9602) {
        unaff_x21 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa13)])
                              (0x3f,uVar4 & 0xffffffff,auStack_2068,0x2000);
        iVar6 = -0x5df9edfd;
        if (-1 < unaff_x21) {
          iVar6 = -0x57a46b2e;
        }
      }
      goto LAB_001b6ea4;
    }
    if (iVar6 < 0x56905a4e) {
      if (iVar6 == 0x3fde2b36) {
        unaff_w26 = 0;
        iVar6 = -0x2f15c3ae;
      }
      else if (iVar6 == 0x465bfa00) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa02)])(param_2);
        iVar6 = 0x1e7d9602;
      }
    }
    else {
      if (iVar6 == 0x56905a4e) goto LAB_001b6e64;
      if (iVar6 == 0x6aa4b6a7) {
        iVar6 = iVar1;
      }
    }
  } while( true );
}


