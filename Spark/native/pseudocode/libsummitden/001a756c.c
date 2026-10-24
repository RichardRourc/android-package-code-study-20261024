// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a756c; body: [[001a756c, 001a7aef]]

void FUN_001a756c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int unaff_w21;
  ulong unaff_x22;
  char cVar9;
  uint local_68;
  
  lVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5cc)])(param_2,0x5c,0);
  iVar1 = 0x7079615e;
  if (lVar3 != -1) {
    iVar1 = -0x7dfdeaad;
  }
  cVar9 = '\0';
  iVar2 = -0x5c244457;
LAB_001a7640:
  while (iVar8 = iVar2, iVar2 = iVar8, iVar8 < 0x5f7de46) {
    if (iVar8 < -0x546e4c78) {
      if (iVar8 < -0x6a6d7170) {
        if (iVar8 == -0x7dfdeaad) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b592)])(param_1);
          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_2);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b593)])(param_1,uVar7);
          unaff_x22 = 0;
          iVar2 = -0x76c45c4a;
        }
        else if (iVar8 == -0x76c45c4a) {
          uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_2);
          iVar2 = -0x3e46bafa;
          if (uVar6 <= unaff_x22) {
            iVar2 = -0x6bb61216;
          }
        }
        else if (iVar8 == -0x6bb61216) {
          unaff_w21 = 2;
          iVar2 = 0x7c9e2a1f;
        }
      }
      else if (iVar8 == -0x6a6d7170) {
        uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_2);
        iVar2 = -0x4e2f3626;
        if (uVar6 <= unaff_x22 + 1) {
          iVar2 = 0x31ae1b9f;
        }
      }
      else {
        iVar2 = iVar1;
        if ((iVar8 != -0x5c244457) && (iVar2 = iVar8, iVar8 == -0x5b022f5d)) {
          unaff_w21 = 0;
          iVar2 = 0x287c03ac;
        }
      }
    }
    else if (iVar8 < -0x30e9fd4c) {
      if (iVar8 == -0x546e4c78) {
LAB_001a793c:
        iVar2 = 0x7e9b249a;
      }
      else if (iVar8 == -0x4e2f3626) {
        pcVar5 = (char *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4eb)])
                                   (param_2,unaff_x22 + 1);
        cVar9 = *pcVar5;
        iVar2 = -0x2953351e;
        if (cVar9 != 'n') {
          iVar2 = 0x5b427be3;
        }
      }
      else if (iVar8 == -0x3e46bafa) {
        pbVar4 = (byte *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4eb)])
                                   (param_2,unaff_x22);
        local_68 = (uint)*pbVar4;
        iVar2 = -0x6a6d7170;
        if (local_68 != 0x5c) {
          iVar2 = 0x31ae1b9f;
        }
      }
    }
    else if (iVar8 == -0x30e9fd4c) {
      uVar7 = 0xd;
LAB_001a7624:
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,uVar7);
      unaff_x22 = unaff_x22 + 1;
      unaff_w21 = 4;
      iVar2 = 0x287c03ac;
    }
    else {
      if (iVar8 == -0x2953351e) {
        uVar7 = 10;
        goto LAB_001a7624;
      }
      if (iVar8 == -0x149d6438) {
        return;
      }
    }
  }
  if (iVar8 < 0x3f0c2eeb) {
    if (iVar8 < 0x25f0f49c) {
      if (iVar8 != 0x5f7de46) {
        iVar2 = 0x31ae1b9f;
        if ((iVar8 != 0x155c8fc0) && (iVar2 = iVar8, iVar8 == 0x1766cdf0)) {
          iVar2 = -0x149d6438;
        }
        goto LAB_001a7640;
      }
      if (unaff_w21 == 0) goto LAB_001a793c;
    }
    else {
      if (iVar8 == 0x25f0f49c) {
        uVar7 = 0x5c;
        goto LAB_001a7624;
      }
      if (iVar8 != 0x287c03ac) {
        if (iVar8 == 0x31ae1b9f) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,local_68);
          unaff_w21 = 0;
          iVar2 = 0x5f7de46;
        }
        goto LAB_001a7640;
      }
      iVar2 = 0x31ae1b9f;
      if (unaff_w21 == 0) goto LAB_001a7640;
    }
  }
  else {
    if (iVar8 < 0x7079615e) {
      if (iVar8 == 0x3f0c2eeb) {
        iVar2 = 0x25f0f49c;
        if (cVar9 != '\\') {
          iVar2 = -0x5b022f5d;
        }
      }
      else if (iVar8 == 0x5b427be3) {
        iVar2 = -0x30e9fd4c;
        if (cVar9 != 'r') {
          iVar2 = 0x3f0c2eeb;
        }
      }
      else if (iVar8 == 0x5c330947) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(param_1);
        iVar2 = 0x1766cdf0;
      }
      goto LAB_001a7640;
    }
    if (iVar8 == 0x7079615e) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e4)])(param_1,param_2);
      iVar2 = -0x149d6438;
      goto LAB_001a7640;
    }
    if (iVar8 == 0x7c9e2a1f) {
      unaff_w21 = 1;
      iVar2 = 0x1766cdf0;
      goto LAB_001a7640;
    }
    if (iVar8 != 0x7e9b249a) goto LAB_001a7640;
  }
  unaff_x22 = unaff_x22 + 1;
  iVar2 = -0x76c45c4a;
  goto LAB_001a7640;
}


