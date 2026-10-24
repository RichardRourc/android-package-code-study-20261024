// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b1ddc; body: [[001b1ddc, 001b231b]]

void FUN_001b1ddc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x28;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar8 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)];
  iVar7 = 0x3b1d20df;
  local_78 = param_2;
  uStack_70 = param_1;
LAB_001b1ed4:
  if (iVar7 < 0x226ad635) {
    if (-0x39a7171a < iVar7) {
      if (iVar7 < 0x130bbe4) {
        if (iVar7 == -0x39a71719) {
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&uStack_70);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(unaff_x23,uVar4);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_80);
          iVar7 = 0x130bbe4;
        }
        else if (iVar7 == -0x1376c8e7) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(unaff_x23,unaff_x21);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_80);
          goto LAB_001b20c8;
        }
      }
      else if (iVar7 == 0x130bbe4) {
        iVar7 = 0x4997ad2a;
      }
      else if (iVar7 == 0xbbb1b4b) {
        if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      goto LAB_001b1ed4;
    }
    if (-0x51bfa934 < iVar7) {
      if (iVar7 == -0x51bfa933) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b445)])(auStack_80,0);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ba)])
                  (auStack_90,param_3,auStack_80);
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&uStack_70);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(param_3,uVar4);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_80);
        unaff_x28 = param_3 + 1;
        iVar7 = 0x226ad635;
      }
      else if (iVar7 == -0x4f2021e7) {
        *unaff_x23 = *unaff_x21;
        iVar7 = 0x7f554263;
      }
      goto LAB_001b1ed4;
    }
    if (iVar7 == -0x7937ba4e) {
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_70);
      unaff_x21 = unaff_x28 + -1;
      uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])
                        (param_4,*puVar3,*unaff_x21);
      bVar2 = (uVar5 & 1) == 0;
      iVar6 = -0x39a71719;
      iVar7 = -0x1376c8e7;
      unaff_x23 = unaff_x28;
      goto LAB_001b1ed0;
    }
    if (iVar7 != -0x5a9e946c) goto LAB_001b1ed4;
    bVar2 = (unaff_x22 & 1) == 0;
    iVar6 = 0x525de802;
    iVar7 = -0x4f2021e7;
  }
  else {
    if (0x4997ad29 < iVar7) {
      if (iVar7 < 0x595926ae) {
        if (iVar7 == 0x4997ad2a) {
          unaff_x28 = unaff_x28 + 1;
          iVar7 = 0x226ad635;
        }
        else if (iVar7 == 0x525de802) {
          puVar3 = (undefined8 *)
                   (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&uStack_70);
          *unaff_x23 = *puVar3;
          iVar7 = 0x130bbe4;
        }
      }
      else if (iVar7 == 0x595926ae) {
        puVar3 = (undefined8 *)
                 (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_70);
        unaff_x21 = unaff_x21 + -1;
        uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])
                          (param_4,*puVar3,*unaff_x21);
        unaff_x22 = uVar5 & 0xffffffff;
        iVar7 = -0x5a9e946c;
      }
      else if (iVar7 == 0x7f554263) {
LAB_001b20c8:
        unaff_x23 = unaff_x23 + -1;
        iVar7 = 0x3774f67d;
      }
      goto LAB_001b1ed4;
    }
    if (iVar7 < 0x3774f67d) {
      if (iVar7 == 0x226ad635) {
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_70);
        uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])(uVar4,&local_78);
        iVar7 = -0x7937ba4e;
        if ((uVar5 & 1) == 0) {
          iVar7 = 0x323ce73e;
        }
      }
      else if (iVar7 == 0x323ce73e) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ab)])(auStack_90);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7be)])(auStack_90);
        iVar7 = 0xbbb1b4b;
      }
      goto LAB_001b1ed4;
    }
    if (iVar7 == 0x3774f67d) {
      unaff_x22 = 0;
      iVar7 = -0x5a9e946c;
      if (unaff_x21 != param_3) {
        iVar7 = 0x595926ae;
      }
      goto LAB_001b1ed4;
    }
    if (iVar7 != 0x3b1d20df) goto LAB_001b1ed4;
    uVar5 = (*pcVar8)(&uStack_70,&local_78);
    bVar2 = (uVar5 & 1) == 0;
    iVar6 = 0xbbb1b4b;
    iVar7 = -0x51bfa933;
  }
LAB_001b1ed0:
  if (bVar2) {
    iVar7 = iVar6;
  }
  goto LAB_001b1ed4;
}


