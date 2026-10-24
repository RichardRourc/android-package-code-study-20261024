// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001793c4; body: [[001793c4, 00179be3]]

void FUN_001793c4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
                 ulong *param_6)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x19;
  long unaff_x23;
  ulong local_70;
  ulong local_68;
  
  local_68 = *param_5;
  lVar11 = (*param_2 - *param_1 >> 4) * -0x5555555555555555;
  uVar1 = lVar11 + 1;
  uVar12 = lVar11 - 0x3f;
  uVar14 = (long)uVar1 / 2;
  iVar2 = 0x3a8c27eb;
  if (local_68 != 0) {
    iVar2 = -0x318d6aa;
  }
  local_70 = 0xfce72956;
  uVar8 = uVar1;
  uVar3 = uVar14;
  uVar4 = local_68;
  uVar5 = 0x3a8c27eb;
  iVar6 = 0x1b336a09;
LAB_001794b0:
  iVar10 = iVar6;
  uVar17 = uVar5;
  uVar16 = uVar4;
  uVar15 = uVar3;
  uVar13 = uVar8;
  uVar8 = uVar13;
  uVar3 = uVar15;
  uVar4 = uVar16;
  uVar5 = uVar17;
  iVar6 = iVar10;
  if (iVar10 < -0x318d6aa) {
    if (iVar10 < -0x26d9e0c0) {
      if (iVar10 < -0x59567779) {
        if (iVar10 == -0x7d594274) {
          iVar9 = -0x1d54140b;
          if (*param_5 != 0) {
            iVar9 = -0x38a894ee;
          }
        }
        else if (iVar10 == -0x70762d2f) {
          iVar9 = 0x83506e1;
        }
        else {
          if (iVar10 != -0x64ecb630) goto LAB_001794b0;
          uVar13 = uVar12;
          uVar15 = 0x40;
          iVar9 = -0x14604423;
        }
      }
      else if (iVar10 < -0x4a216d93) {
        if (iVar10 != -0x59567779) {
          if (iVar10 == -0x521aad5c) {
            uVar5 = 0;
            iVar6 = 0x485c4f09;
          }
          goto LAB_001794b0;
        }
        iVar9 = -0x303aadb;
        if ((long)uVar15 <= (long)(int)local_70) {
          iVar9 = 0x7ea59c30;
        }
      }
      else if (iVar10 == -0x4a216d93) {
        iVar9 = 0xc0d33d8;
        if ((long)uVar13 <= (long)(int)local_68) {
          iVar9 = -0x70762d2f;
        }
      }
      else {
        if (iVar10 != -0x38a894ee) goto LAB_001794b0;
        iVar9 = -0x46fece1;
        if (*param_6 != 0) {
          iVar9 = 0x4f14b2e7;
        }
      }
    }
    else if (iVar10 < -0x14604423) {
      if (iVar10 == -0x26d9e0c0) {
        local_70 = (ulong)((int)local_70 + 1);
        goto LAB_00179ad4;
      }
      uVar5 = uVar15;
      iVar6 = 0x485c4f09;
      if ((iVar10 == -0x241cf058) || (uVar5 = uVar17, iVar6 = iVar10, iVar10 != -0x1d54140b))
      goto LAB_001794b0;
      local_68 = 0;
      unaff_x23 = *param_1;
LAB_00179a5c:
      iVar9 = -0x4a216d93;
    }
    else if (iVar10 < -0x74f03b9) {
      iVar6 = -0x7d594274;
      if ((iVar10 == -0x14604423) || (iVar6 = iVar10, iVar10 != -0x796ece9)) goto LAB_001794b0;
      uVar16 = 0;
      iVar9 = 0x5fa0be18;
    }
    else {
      uVar8 = uVar14;
      uVar3 = uVar1 - uVar14;
      iVar6 = -0x7d594274;
      if ((iVar10 == -0x74f03b9) ||
         (uVar8 = uVar13, uVar3 = uVar15, iVar6 = iVar10, iVar10 != -0x46fece1)) goto LAB_001794b0;
      local_70 = 0;
      unaff_x19 = *param_2;
LAB_00179ad4:
      iVar9 = -0x59567779;
    }
  }
  else if (iVar10 < 0x21f7c563) {
    if (iVar10 < 0xc0d33d8) {
      if (iVar10 == -0x318d6aa) {
        iVar9 = -0x64ecb630;
        if (*param_5 != 0) {
          iVar9 = 0x4e47d023;
        }
      }
      else if (iVar10 == -0x303aadb) {
        uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_3,unaff_x19,param_4);
        unaff_x19 = unaff_x19 + -0x30;
        *param_6 = (uVar8 & 1) << (local_70 & 0x3f) | *param_6;
        iVar9 = -0x26d9e0c0;
      }
      else {
        if (iVar10 != 0x83506e1) goto LAB_001794b0;
        iVar9 = -0x38a894ee;
      }
    }
    else if (iVar10 < 0x1087b2ea) {
      if (iVar10 != 0xc0d33d8) {
        if (iVar10 == 0xc83cb78) {
          iVar9 = 0x4f14b2e7;
          goto LAB_001794ac;
        }
        goto LAB_001794b0;
      }
      uVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                        (param_3,unaff_x23,param_4);
      unaff_x23 = unaff_x23 + 0x30;
      *param_5 = ((ulong)~uVar7 & 1) << (local_68 & 0x3f) | *param_5;
      iVar9 = 0x1087b2ea;
    }
    else {
      if (iVar10 == 0x1087b2ea) {
        local_68 = (ulong)((int)local_68 + 1);
        goto LAB_00179a5c;
      }
      iVar9 = iVar2;
      if (iVar10 != 0x1b336a09) goto LAB_001794b0;
    }
  }
  else {
    if (iVar10 < 0x4f14b2e7) {
      if (iVar10 < 0x485c4f09) {
        uVar4 = uVar13;
        iVar6 = 0x5fa0be18;
        if ((iVar10 != 0x21f7c563) && (uVar4 = uVar16, iVar6 = iVar10, iVar10 == 0x3a8c27eb)) {
          iVar9 = -0x74f03b9;
          if (*param_6 != 0) {
            iVar9 = -0x318d6aa;
          }
          goto LAB_001794ac;
        }
      }
      else {
        if (iVar10 == 0x4e47d023) {
          uVar13 = 0x40;
          uVar15 = uVar12;
          iVar9 = -0x14604423;
          goto LAB_001794ac;
        }
        if (iVar10 == 0x485c4f09) {
          *param_2 = *param_2 + uVar17 * -0x30;
          return;
        }
      }
      goto LAB_001794b0;
    }
    if (iVar10 == 0x4f14b2e7) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a5)])
                (*param_1,*param_2,param_5,param_6);
      iVar9 = 0x21f7c563;
      if (*param_5 != 0) {
        iVar9 = -0x796ece9;
      }
      goto LAB_001794ac;
    }
    if (iVar10 == 0x5fa0be18) {
      *param_1 = *param_1 + uVar16 * 0x30;
      iVar9 = -0x241cf058;
      if (*param_6 != 0) {
        iVar9 = -0x521aad5c;
      }
    }
    else {
      if (iVar10 != 0x7ea59c30) goto LAB_001794b0;
      iVar9 = 0xc83cb78;
    }
  }
LAB_001794ac:
  uVar8 = uVar13;
  uVar3 = uVar15;
  uVar4 = uVar16;
  uVar5 = uVar17;
  iVar6 = iVar9;
  goto LAB_001794b0;
}


