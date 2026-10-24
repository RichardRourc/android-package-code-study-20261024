// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c0208; body: [[001c0208, 001c052f]]

uint FUN_001c0208(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  int unaff_w24;
  uint unaff_w27;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb98)])(auStack_80,&local_88);
  local_88 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8c)])(param_1);
  local_90 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb83)])(param_1);
  iVar5 = -0x4555e64b;
LAB_001c02fc:
  while (iVar5 < -0x324be157) {
    if (iVar5 < -0x5a297c1b) {
      if (iVar5 == -0x6af81f1f) {
        unaff_w27 = 1;
        unaff_w24 = 1;
        iVar5 = -0x324be157;
      }
      else {
        if (iVar5 == -0x68212069) goto LAB_001c02ec;
        if (iVar5 == -0x7138e706) {
LAB_001c04dc:
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_80);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return unaff_w27 & 1;
        }
      }
    }
    else if (iVar5 == -0x5a297c1b) {
      unaff_w24 = 2;
      iVar5 = 0x42c7ff78;
    }
    else if (iVar5 == -0x53ce9b27) {
      uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc0)])(auStack_80);
      iVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb9f)])
                        (param_1 + 0x18,0,uVar4,auStack_80);
      iVar5 = -0x6af81f1f;
      if (iVar2 != 0) {
        iVar5 = 0x4d0433b;
      }
    }
    else if ((iVar5 == -0x4555e64b) &&
            (uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb82)])
                               (&local_88,&local_90), iVar5 = 0xc7fd04f, (uVar3 & 1) == 0)) {
      iVar5 = -0x5a297c1b;
    }
  }
  if (iVar5 < 0xc7fd04f) {
    if (iVar5 != -0x324be157) {
      if (iVar5 == 0x4d0433b) {
        unaff_w24 = 0;
        iVar5 = -0x324be157;
      }
      goto LAB_001c02fc;
    }
    iVar5 = 0xd10fffa;
    if (unaff_w24 == 0) goto LAB_001c02fc;
  }
  else {
    if (iVar5 == 0xc7fd04f) {
      param_1 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb81)])(&local_88);
      uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcd)])(param_1 + 0x18);
      iVar5 = 0x4d0433b;
      if ((uVar3 & 1) == 0) {
        iVar5 = -0x53ce9b27;
      }
      goto LAB_001c02fc;
    }
    if (iVar5 == 0xd10fffa) {
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb9b)])(&local_88);
      iVar5 = -0x4555e64b;
      goto LAB_001c02fc;
    }
    if (iVar5 != 0x42c7ff78) goto LAB_001c02fc;
  }
  if (unaff_w24 != 2) goto LAB_001c04dc;
LAB_001c02ec:
  unaff_w27 = 0;
  unaff_w24 = 1;
  iVar5 = -0x7138e706;
  goto LAB_001c02fc;
}


