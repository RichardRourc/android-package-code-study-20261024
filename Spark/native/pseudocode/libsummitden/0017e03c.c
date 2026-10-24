// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017e03c; body: [[0017e03c, 0017e427]]

byte FUN_0017e03c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int unaff_w24;
  byte unaff_w25;
  byte unaff_w29;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar9 = (code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e1)];
  iVar7 = -0x5c56d157;
LAB_0017e0e4:
  while (iVar7 < 0x9359e23) {
    if (iVar7 < -0x5c56d157) {
      if (iVar7 == -0x7e4a7362) {
        uVar2 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ee)])(unaff_w25);
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e9)])(auStack_80,uVar2);
        unaff_w24 = 0;
        iVar7 = 0x1c92f8d8;
      }
      else if (iVar7 == -0x602e67b0) {
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                  (&DAT_001fee56,0x10,&DAT_00204448,&DAT_001fee56);
        lVar4 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d5)])
                          (auStack_80,&DAT_001fee56,0);
        unaff_w29 = lVar4 != -1;
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_80);
        unaff_w24 = 1;
        iVar7 = 0x56a005a7;
      }
      else if (iVar7 == -0x5e672f61) {
        unaff_w24 = 2;
        iVar7 = -0x602e67b0;
      }
    }
    else if (iVar7 == -0x5c56d157) {
      uVar3 = (*pcVar9)(param_1);
      iVar8 = 0x6ab614fb;
      iVar7 = 0x71f150f;
LAB_0017e298:
      if ((uVar3 & 1) == 0) {
        iVar7 = iVar8;
      }
    }
    else if (iVar7 == -0x55849fc1) {
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ef)])(&local_88);
      unaff_w25 = *pbVar5;
      iVar7 = 0x73eb436e;
      if (0x20 < unaff_w25) {
        iVar7 = -0x7e4a7362;
      }
    }
    else if (iVar7 == 0x71f150f) {
      unaff_w29 = 0;
      iVar7 = 0x56a005a7;
    }
  }
  if (0x37806d66 < iVar7) {
    if (iVar7 < 0x6ab614fb) {
      if (iVar7 == 0x37806d67) {
LAB_0017e228:
        iVar7 = 0x9359e23;
      }
      else if (iVar7 == 0x56a005a7) {
        if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return unaff_w29 & 1;
      }
    }
    else if (iVar7 == 0x6ab614fb) {
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fd)])(auStack_80);
      uVar6 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e0)])(param_1);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e3)])(auStack_80,uVar6);
      local_88 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e2)])(param_1);
      local_90 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ed)])(param_1);
      iVar7 = 0x29c9492f;
    }
    else if (iVar7 == 0x73eb436e) {
      unaff_w24 = 3;
      iVar7 = 0x1c92f8d8;
    }
    goto LAB_0017e0e4;
  }
  if (iVar7 != 0x9359e23) {
    if (iVar7 != 0x1c92f8d8) {
      if (iVar7 == 0x29c9492f) {
        uVar3 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ec)])(&local_88,&local_90)
        ;
        iVar8 = -0x5e672f61;
        iVar7 = -0x55849fc1;
        goto LAB_0017e298;
      }
      goto LAB_0017e0e4;
    }
    if (unaff_w24 == 0) goto LAB_0017e228;
  }
  (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e8)])(&local_88);
  iVar7 = 0x29c9492f;
  goto LAB_0017e0e4;
}


