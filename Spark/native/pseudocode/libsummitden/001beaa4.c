// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001beaa4; body: [[001beaa4, 001bf0e3]]

void FUN_001beaa4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int unaff_w23;
  long unaff_x25;
  long local_f0;
  long local_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbfc)])(auStack_98,auStack_c8);
  uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbca)])(auStack_98);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc9)])(auStack_b0,uVar4,0x400000,0);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_98);
  uVar6 = 0;
  iVar2 = -0x7adb6e51;
LAB_001bebd8:
  do {
    while (iVar3 = iVar2, iVar2 = iVar3, 0xc400766 < iVar3) {
      if (iVar3 < 0x2db44b13) {
        if (iVar3 < 0x2161e603) {
          if (iVar3 == 0xc400767) {
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf5)])(auStack_98);
            iVar2 = 0x7e83fac7;
          }
          else if (iVar3 == 0x1674bf24) {
            unaff_x25 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc0)])(auStack_b0)
            ;
            iVar2 = 0x2db44b13;
          }
        }
        else if (iVar3 == 0x2161e603) {
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf2)])
                    (auStack_e0,auStack_c8,local_f0,0xffffffffffffffff);
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf7)])(auStack_80,auStack_e0);
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_e0);
          iVar2 = -0x208be6b8;
        }
        else if (iVar3 == 0x28aa94a1) {
          iVar2 = -0x208be6b8;
        }
      }
      else if (iVar3 < 0x7e83fac7) {
        if (iVar3 == 0x2db44b13) {
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf2)])
                    (auStack_c8,auStack_b0,uVar6,unaff_x25 - uVar6);
          uVar6 = unaff_x25 + 1;
          uVar5 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcd)])(auStack_c8);
          iVar2 = 0x7fd1e4b3;
          if ((uVar5 & 1) == 0) {
            iVar2 = -0x64313c99;
          }
        }
        else if (iVar3 == 0x37dc4ea0) {
          unaff_w23 = 2;
          iVar2 = 0xc400767;
        }
      }
      else if (iVar3 == 0x7e83fac7) {
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_c8);
        iVar2 = -0x7adb6e51;
        if (unaff_w23 != 0) {
LAB_001beba8:
          uVar5 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc0)])(auStack_b0);
          iVar2 = 0xb36370d;
          if (uVar5 <= uVar6) {
            iVar2 = -0x26082287;
          }
        }
      }
      else if (iVar3 == 0x7fd1e4b3) {
        unaff_w23 = 2;
        iVar2 = 0x7e83fac7;
      }
    }
    if (-0x208be6b9 < iVar3) {
      if (iVar3 < -0x6993057) {
        if (iVar3 == -0x208be6b8) {
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf6)])(param_1,auStack_98);
          unaff_w23 = 0;
          iVar2 = 0xc400767;
        }
        else if (iVar3 == -0xf3b3b72) {
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf2)])
                    (auStack_e0,auStack_c8,local_e8,0xffffffffffffffff);
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf7)])(auStack_80,auStack_e0);
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_e0);
          iVar2 = 0x28aa94a1;
        }
      }
      else if (iVar3 == -0x6993057) {
        local_f0 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf3)])
                             (auStack_c8,0x2f,0);
        iVar2 = -0x22e2657d;
        if (local_f0 != -1) {
          iVar2 = 0x2161e603;
        }
      }
      else if (iVar3 == 0xb36370d) {
        unaff_x25 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf3)])
                              (auStack_b0,10,uVar6);
        iVar2 = 0x1674bf24;
        if (unaff_x25 != -1) {
          iVar2 = 0x2db44b13;
        }
      }
      goto LAB_001bebd8;
    }
    if (iVar3 < -0x3d345286) {
      if (iVar3 == -0x7adb6e51) goto LAB_001beba8;
      if (iVar3 == -0x64313c99) {
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf1)])(auStack_98);
        uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbca)])(auStack_c8);
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe2)])
                  (&DAT_00203119,0xc,&DAT_00205c58,&DAT_00203119);
        iVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf0)])
                          (uVar4,&DAT_00203119,auStack_98,auStack_90,auStack_88);
        iVar2 = -0x6993057;
        if (iVar3 != 3) {
          iVar2 = 0x37dc4ea0;
        }
      }
    }
    else {
      iVar2 = -0x7adb6e51;
      if (iVar3 != -0x3d345286) {
        if (iVar3 == -0x22e2657d) {
          local_e8 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf3)])
                               (auStack_c8,0x5b,0);
          iVar2 = 0x28aa94a1;
          if (local_e8 != -1) {
            iVar2 = -0xf3b3b72;
          }
        }
        else {
          iVar2 = iVar3;
          if (iVar3 == -0x26082287) {
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_b0);
            if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
      }
    }
  } while( true );
}


