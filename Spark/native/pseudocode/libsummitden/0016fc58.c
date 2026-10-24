// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016fc58; body: [[0016fc58, 0017039b]]

void FUN_0016fc58(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
                 ulong *param_6)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x19;
  long unaff_x22;
  ulong unaff_x24;
  long unaff_x28;
  ulong local_70;
  ulong local_68;
  
  lVar9 = (*param_2 - *param_1 >> 3) * -0x5555555555555555;
  local_68 = lVar9 + 1;
  uVar10 = lVar9 - 0x3f;
  uVar13 = (long)local_68 / 2;
  uVar11 = local_68 - uVar13;
  iVar1 = 0x103a15ab;
  if (*param_5 != 0) {
    iVar1 = 0x1101ad24;
  }
  uVar5 = local_68;
  uVar2 = *param_5;
  iVar6 = 0x63af57d8;
  local_70 = uVar13;
LAB_0016fda8:
  iVar8 = iVar6;
  uVar14 = uVar2;
  uVar12 = uVar5;
  uVar5 = uVar12;
  uVar2 = uVar14;
  iVar6 = iVar8;
  if (iVar8 < 0x4f728f) {
    if (iVar8 < -0x4b8e4a00) {
      if (iVar8 < -0x70fbfe41) {
        if (iVar8 == -0x77bf9301) {
          iVar7 = -0x567a739b;
          bVar3 = *param_5 == 0;
          iVar6 = 0x485adf87;
          goto LAB_0016fd9c;
        }
        uVar2 = unaff_x24;
        iVar6 = -0x2b67415a;
        if ((iVar8 != -0x73299202) && (uVar2 = uVar14, iVar6 = iVar8, iVar8 == -0x71a34149)) {
          iVar7 = 0x485adf87;
          goto LAB_0016fda4;
        }
        goto LAB_0016fda8;
      }
      if (iVar8 < -0x526fca55) {
        if (iVar8 != -0x70fbfe41) {
          if (iVar8 == -0x567a739b) {
            local_68 = 0;
            unaff_x22 = *param_1;
            goto LAB_00170234;
          }
          goto LAB_0016fda8;
        }
        local_70 = (ulong)((int)local_70 + 1);
      }
      else {
        if (iVar8 != -0x526fca55) {
          if (iVar8 == -0x4ff021a8) {
            iVar7 = -0x71a34149;
            goto LAB_0016fda4;
          }
          goto LAB_0016fda8;
        }
        local_70 = 0;
        unaff_x28 = *param_2;
      }
      iVar7 = 0x4950f8dc;
    }
    else {
      if (-0x35cda0b1 < iVar8) {
        if (iVar8 < -0x189f3871) {
          if (iVar8 == -0x35cda0b0) {
            *param_1 = *param_1 + uVar12 * 0x18;
            iVar7 = -0x73299202;
            if (*param_6 != 0) {
              iVar7 = -0x1833555;
            }
            goto LAB_0016fda4;
          }
          if (iVar8 == -0x2b67415a) {
            *param_2 = *param_2 + uVar14 * -0x18;
            return;
          }
        }
        else {
          if (iVar8 == -0x189f3871) {
            uVar12 = 0;
            iVar7 = -0x35cda0b0;
            goto LAB_0016fda4;
          }
          if (iVar8 == -0x1833555) {
            uVar2 = 0;
            iVar6 = -0x2b67415a;
          }
        }
        goto LAB_0016fda8;
      }
      if (iVar8 == -0x4b8e4a00) {
        iVar7 = 0x6c482cf5;
      }
      else {
        if (iVar8 == -0x46a090a1) {
          uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_3,unaff_x22,param_4);
          unaff_x22 = unaff_x22 + 0x18;
          *param_5 = ((ulong)~uVar4 & 1) << (local_68 & 0x3f) | *param_5;
          iVar7 = 0x6c9af0b8;
          goto LAB_0016fda4;
        }
        if (iVar8 != -0x41dc4a0e) goto LAB_0016fda8;
        unaff_x19 = 0x40;
        unaff_x24 = uVar10;
        iVar7 = 0x69933f7b;
      }
    }
  }
  else if (iVar8 < 0x485adf87) {
    if (iVar8 < 0x1101ad24) {
      if (iVar8 == 0x4f728f) {
        unaff_x19 = uVar10;
        unaff_x24 = 0x40;
        iVar7 = 0x69933f7b;
      }
      else {
        if (iVar8 == 0x76ace14) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b44)])
                    (*param_1,*param_2,param_5,param_6);
          bVar3 = *param_5 == 0;
          iVar7 = 0x3d972a4a;
          iVar6 = -0x189f3871;
        }
        else {
          if (iVar8 != 0x103a15ab) goto LAB_0016fda8;
          iVar7 = 0x287ef03c;
          bVar3 = *param_6 == 0;
          iVar6 = 0x1101ad24;
        }
LAB_0016fd9c:
        if (!bVar3) {
          iVar7 = iVar6;
        }
      }
    }
    else if (iVar8 < 0x3d972a4a) {
      if (iVar8 == 0x1101ad24) {
        iVar7 = 0x4f728f;
        bVar3 = *param_5 == 0;
        iVar6 = -0x41dc4a0e;
        goto LAB_0016fd9c;
      }
      if (iVar8 != 0x287ef03c) goto LAB_0016fda8;
      unaff_x19 = uVar13;
      unaff_x24 = uVar11;
      iVar7 = -0x77bf9301;
    }
    else {
      uVar5 = unaff_x19;
      iVar6 = -0x35cda0b0;
      if ((iVar8 == 0x3d972a4a) || (uVar5 = uVar12, iVar6 = iVar8, iVar8 != 0x3ea5b90a))
      goto LAB_0016fda8;
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                        (param_3,unaff_x28,param_4);
      unaff_x28 = unaff_x28 + -0x18;
      *param_6 = (uVar5 & 1) << (local_70 & 0x3f) | *param_6;
      iVar7 = -0x70fbfe41;
    }
  }
  else if (iVar8 < 0x69933f7b) {
    if (iVar8 == 0x485adf87) {
      iVar7 = -0x526fca55;
      bVar3 = *param_6 == 0;
      iVar6 = 0x76ace14;
      goto LAB_0016fd9c;
    }
    if (iVar8 == 0x4950f8dc) {
      iVar7 = 0x3ea5b90a;
      if ((long)unaff_x24 <= (long)(int)local_70) {
        iVar7 = -0x4b8e4a00;
      }
    }
    else {
      iVar7 = iVar1;
      if (iVar8 != 0x63af57d8) goto LAB_0016fda8;
    }
  }
  else if (iVar8 < 0x6c9af0b8) {
    iVar6 = -0x77bf9301;
    if ((iVar8 == 0x69933f7b) || (iVar6 = iVar8, iVar8 != 0x6c482cf5)) goto LAB_0016fda8;
    iVar7 = 0x76ace14;
  }
  else if (iVar8 == 0x6c9af0b8) {
    local_68 = (ulong)((int)local_68 + 1);
LAB_00170234:
    iVar7 = 0x79e2ddc5;
  }
  else {
    if (iVar8 != 0x79e2ddc5) goto LAB_0016fda8;
    iVar7 = -0x46a090a1;
    if ((long)unaff_x19 <= (long)(int)local_68) {
      iVar7 = -0x4ff021a8;
    }
  }
LAB_0016fda4:
  uVar5 = uVar12;
  uVar2 = uVar14;
  iVar6 = iVar7;
  goto LAB_0016fda8;
}


