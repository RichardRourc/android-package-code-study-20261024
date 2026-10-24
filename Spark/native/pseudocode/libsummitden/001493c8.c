// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001493c8; body: [[001493c8, 00149b67]]

uint FUN_001493c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int unaff_w19;
  uint unaff_w22;
  undefined8 local_d0;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x68fff29c;
  if (param_4 != 0) {
    iVar1 = 0xd272b0f;
  }
  pcVar9 = (code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b50)];
  iVar8 = -0x14530555;
LAB_001494d4:
  while (iVar8 < -0x1cbbef) {
    if (iVar8 < -0x2fae600e) {
      if (iVar8 < -0x655f4bc4) {
        if (iVar8 == -0x7f20d54b) {
          unaff_w19 = 1;
          unaff_w22 = 1;
          iVar8 = -0x4212d6b8;
        }
        else if (iVar8 == -0x65b5fc35) {
          local_d0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b0e)])(param_3);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b52)])(param_4);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b00)])(auStack_80);
          local_88 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b53)])(param_2);
          local_90 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b54)])(param_2);
          iVar8 = -0x1cbbef;
        }
        else if (iVar8 == -0x65aaa9ad) {
LAB_00149848:
          iVar8 = 0x6a40b1fc;
        }
      }
      else if (iVar8 < -0x46484791) {
        if (iVar8 == -0x655f4bc4) {
          unaff_w19 = 2;
          iVar8 = -0x5855569d;
        }
        else if (iVar8 == -0x5855569d) goto LAB_00149a1c;
      }
      else {
        if (iVar8 == -0x46484791) {
          uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba0)])
                            (auStack_c8,param_3,param_4);
          bVar3 = (uVar4 & 1) == 0;
          iVar8 = -0x7f20d54b;
          iVar10 = -0x198428c8;
          goto LAB_001494d0;
        }
        if (iVar8 == -0x4212d6b8) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b06)])(auStack_c8);
          iVar8 = 0x6b0e664d;
        }
      }
    }
    else if (iVar8 < -0x89d0641) {
      if (iVar8 < -0x198428c8) {
        if (iVar8 == -0x2fae600e) {
          if (unaff_w19 == 0) goto LAB_00149848;
LAB_00149a1c:
          if (unaff_w19 != 2) goto LAB_00149a58;
          goto LAB_00149a24;
        }
        if (iVar8 == -0x2b3c83b9) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return unaff_w22 & 1;
        }
      }
      else {
        if (iVar8 == -0x198428c8) goto LAB_00149820;
        if (iVar8 == -0x14530555) {
          uVar4 = (*pcVar9)(param_2);
          bVar3 = (uVar4 & 1) == 0;
          iVar8 = 0x68fff29c;
          iVar10 = 0x543cea13;
          goto LAB_001494d0;
        }
      }
    }
    else if (iVar8 == -0x89d0641) {
      unaff_w22 = 0;
      unaff_w19 = 1;
      iVar8 = 0x6b0e664d;
    }
    else {
      if (iVar8 == -0x3281531) {
        if (unaff_w19 == 0) goto LAB_00149a7c;
        goto LAB_00149a1c;
      }
      if (iVar8 == -0x13e82f9) {
LAB_00149a24:
        uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(auStack_80);
        iVar8 = -0x89d0641;
        if (0xf < uVar4) {
          iVar8 = 0x35fae024;
        }
      }
    }
  }
  if (iVar8 < 0x543cea13) {
    if (iVar8 < 0xfd0f1f2) {
      if (iVar8 == -0x1cbbef) {
        uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b55)])
                          (&local_88,&local_90);
        iVar8 = 0x76da7ee8;
        if ((uVar4 & 1) == 0) {
          iVar8 = -0x655f4bc4;
        }
      }
      else if (iVar8 == 0x541428d) {
        unaff_w22 = 0;
        unaff_w19 = 1;
        iVar8 = -0x3281531;
      }
      else if (iVar8 == 0xd272b0f) {
        lVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b27)])(param_3);
        iVar8 = -0x65b5fc35;
        if (lVar5 != 0x10) {
          iVar8 = 0x67338b80;
        }
      }
      goto LAB_001494d4;
    }
    if (iVar8 < 0x35fae024) {
      if (iVar8 == 0xfd0f1f2) {
LAB_00149820:
        unaff_w22 = 0;
        unaff_w19 = 1;
        iVar8 = -0x4212d6b8;
      }
      else if (iVar8 == 0x2e5c7217) {
        local_b0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b5a)])(auStack_80);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b5b)])(&local_a8,&local_b0);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b5c)])
                  (auStack_80,local_a8,lStack_98,lStack_98 + local_a0);
        unaff_w19 = 0;
        iVar8 = -0x3281531;
      }
      goto LAB_001494d4;
    }
    if (iVar8 != 0x35fae024) {
      if (iVar8 == 0x3d928f60) {
        iVar8 = iVar1;
      }
      goto LAB_001494d4;
    }
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b5e)])(auStack_80,local_d0);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b00)])(auStack_c8);
    uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b5f)])
                      (auStack_80,param_3,auStack_c8);
    bVar3 = (uVar4 & 1) == 0;
    iVar8 = -0x46484791;
    iVar10 = 0xfd0f1f2;
  }
  else {
    if (0x6a40b1fb < iVar8) {
      if (iVar8 < 0x76da7ee8) {
        if (iVar8 == 0x6a40b1fc) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b5d)])(&local_88);
          iVar8 = -0x1cbbef;
        }
        else if (iVar8 == 0x6b0e664d) {
LAB_00149a58:
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b06)])(auStack_80);
          iVar8 = -0x2b3c83b9;
        }
      }
      else if (iVar8 == 0x76da7ee8) {
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b56)])(&local_88);
        local_a0 = 0;
        lStack_98 = 0;
        uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b57)])();
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(uVar6);
        uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b59)])
                          (uVar7,uVar6,&lStack_98,&local_a0);
        iVar8 = 0x2e5c7217;
        if ((uVar4 & 1) == 0) {
          iVar8 = 0x541428d;
        }
      }
      else if (iVar8 == 0x7ef65353) {
LAB_00149a7c:
        unaff_w19 = 0;
        iVar8 = -0x2fae600e;
      }
      goto LAB_001494d4;
    }
    if (iVar8 != 0x543cea13) {
      if ((iVar8 == 0x67338b80) || (iVar8 == 0x68fff29c)) {
        unaff_w22 = 0;
        iVar8 = -0x2b3c83b9;
      }
      goto LAB_001494d4;
    }
    uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(param_3);
    bVar3 = (uVar4 & 1) == 0;
    iVar8 = 0x68fff29c;
    iVar10 = 0x3d928f60;
  }
LAB_001494d0:
  if (bVar3) {
    iVar8 = iVar10;
  }
  goto LAB_001494d4;
}


