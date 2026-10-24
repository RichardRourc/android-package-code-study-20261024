// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e9c44; body: [[001e9c44, 001ea1df]]

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_001e9c44(int param_1,uint param_2,ulong param_3,long param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  ulong local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  
  if (param_1 != 1) {
    return 3;
  }
  if (param_4 == 0) {
    return 3;
  }
  if (param_5 == 0) {
    return 3;
  }
  param_3 = param_3 & 0xffffffffffffff00;
  if ((param_2 == 6) && (param_3 == 0x434c4e47432b2b00)) {
    iVar3 = *(int *)(param_4 + -0x24);
    uVar15 = *(undefined8 *)(param_4 + -0x10);
    thunk_FUN_001eb2a8(param_5,0,param_4);
    thunk_FUN_001eb2a8(param_5,1,(long)iVar3);
    FUN_001eb154(param_5,uVar15);
    if (-1 < iVar3) {
      return 7;
    }
    goto LAB_001e9ce8;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 0xe) != 0) {
      return 3;
    }
LAB_001e9d4c:
    pcVar6 = (char *)FUN_001eb098(param_5);
    if (pcVar6 == (char *)0x0) {
      return 8;
    }
    lVar16 = FUN_001eb124(param_5);
    uVar19 = FUN_001eb0cc(param_5);
    local_70 = (byte *)(pcVar6 + 1);
    local_88 = uVar19;
    if (*pcVar6 != -1) {
      local_88 = FUN_001ea210(&local_70,*pcVar6,0);
    }
    pbVar10 = local_70 + 1;
    uVar12 = (ulong)*local_70;
    if (uVar12 == 0xff) {
      local_80 = (byte *)0x0;
    }
    else {
      uVar14 = 0;
      uVar13 = 0;
      pbVar17 = pbVar10;
      do {
        pbVar10 = pbVar17 + 1;
        bVar1 = *pbVar17;
        uVar7 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar13 = ((ulong)bVar1 & 0x7f) << uVar7 | uVar13;
        pbVar17 = pbVar10;
      } while ((char)bVar1 < '\0');
      local_80 = pbVar10 + uVar13;
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar19 = lVar16 + ~uVar19;
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    do {
      pbVar17 = pbVar10 + 1;
      bVar2 = *pbVar10;
      uVar7 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar13 = ((ulong)bVar2 & 0x7f) << uVar7 | uVar13;
      pbVar10 = pbVar17;
    } while ((char)bVar2 < '\0');
    local_78 = pbVar17;
    local_70 = pbVar17;
    do {
      if (pbVar17 + (uVar13 & 0xffffffff) <= local_78) break;
      uVar7 = FUN_001ea210(&local_78,bVar1,0);
      lVar8 = FUN_001ea210(&local_78,bVar1,0);
      lVar16 = FUN_001ea210(&local_78,bVar1,0);
      uVar14 = 0;
      uVar11 = 0;
      pbVar10 = local_78;
      do {
        local_78 = pbVar10 + 1;
        bVar2 = *pbVar10;
        uVar4 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar11 = ((ulong)bVar2 & 0x7f) << uVar4 | uVar11;
        pbVar10 = local_78;
      } while ((char)bVar2 < '\0');
      if ((uVar7 <= uVar19) && (uVar19 < lVar8 + uVar7)) {
        if (lVar16 == 0) {
          return 8;
        }
        lVar16 = lVar16 + local_88;
        if (uVar11 != 0) {
          pbVar10 = (byte *)(param_4 + 0x20);
          uVar21 = 0;
          uVar14 = uVar12 & 0xf;
          pbVar17 = pbVar17 + uVar11 + (uVar13 & 0xffffffff) + -1;
          goto LAB_001e9f14;
        }
        if ((param_2 & 1) != 0) {
          return 8;
        }
        goto LAB_001e9d0c;
      }
    } while (uVar7 <= uVar19);
    FUN_001e963c(param_4);
    if (param_3 == 0x434c4e47432b2b00) {
      FUN_001cee74(*(undefined8 *)(param_4 + -0x38));
    }
                    /* WARNING: Subroutine does not return */
    FUN_001cee20();
  }
  if ((param_2 >> 1 & 1) == 0) {
    return 3;
  }
  if (((param_2 ^ 0xffffffff) & 0xc) != 0) goto LAB_001e9d4c;
  lVar16 = 0;
LAB_001e9d0c:
  uVar19 = 0;
  goto LAB_001e9d10;
LAB_001e9f14:
  uVar13 = 0;
  uVar19 = 0;
  pbVar20 = pbVar17;
  do {
    pbVar18 = pbVar20 + 1;
    bVar1 = *pbVar20;
    uVar7 = uVar13 & 0x3f;
    uVar13 = uVar13 + 7;
    uVar19 = ((ulong)bVar1 & 0x7f) << uVar7 | uVar19;
    pbVar20 = pbVar18;
  } while ((char)bVar1 < '\0');
  uVar7 = -1L << (uVar13 & 0x3f);
  if (0x3f < uVar13 || bVar1 < 0x40) {
    uVar7 = 0;
  }
  uVar19 = uVar19 | uVar7;
  pbVar20 = pbVar10;
  if ((long)uVar19 < 1) {
    uVar5 = uVar19 == 0 | uVar21;
    if (((param_2 >> 3 & 1) == 0) && (uVar19 != 0)) {
      lVar8 = FUN_001e95bc(param_4);
      if (param_3 != 0x434c4e47432b2b00) goto joined_r0x001ea190;
      if (lVar8 == 0x434c4e47432b2b01) {
        pbVar20 = *(byte **)(param_4 + -0x58);
      }
      if ((pbVar20 == (byte *)0x0) || (*(long *)(param_4 + -0x50) == 0)) goto LAB_001ea1d0;
      uVar13 = FUN_001ea3b8(uVar19,local_80,uVar12,*(long *)(param_4 + -0x50),pbVar20,param_4,0);
joined_r0x001ea08c:
      uVar5 = uVar21;
      if ((uVar13 & 1) != 0) goto joined_r0x001ea198;
    }
  }
  else {
    if (((local_80 == (byte *)0x0) || (0xc < (uint)uVar14)) || ((0x1c1dU >> uVar14 & 1) == 0)) {
      FUN_001ea1e0(param_3 == 0x434c4e47432b2b00,param_4);
LAB_001ea1d0:
      FUN_001e963c(param_4);
      auVar22 = FUN_001cee74(*(undefined8 *)(param_4 + -0x38));
      FUN_001e963c(auVar22._8_8_);
      if ((auVar22._0_8_ & 1) != 0) {
        FUN_001cee74(*(undefined8 *)(auVar22._8_8_ + -0x38));
      }
                    /* WARNING: Subroutine does not return */
      FUN_001cee20();
    }
    local_68 = local_80 + *(long *)(&DAT_00120848 + uVar14 * 8) * uVar19;
    plVar9 = (long *)FUN_001ea210(&local_68,uVar12,0);
    if (plVar9 == (long *)0x0) {
      lVar8 = FUN_001e95bc(param_4);
joined_r0x001ea190:
      if (lVar8 == 0x434c4e47432b2b01) {
        pbVar20 = *(byte **)(param_4 + -0x58);
      }
      goto joined_r0x001ea198;
    }
    uVar5 = uVar21;
    if (param_3 == 0x434c4e47432b2b00) {
      lVar8 = FUN_001e95bc(param_4);
      local_68 = pbVar10;
      if (lVar8 == 0x434c4e47432b2b01) {
        local_68 = *(byte **)(param_4 + -0x58);
      }
      if ((local_68 == (byte *)0x0) || (*(long *)(param_4 + -0x50) == 0)) goto LAB_001ea1d0;
      uVar13 = (**(code **)(*plVar9 + 0x20))(plVar9,*(long *)(param_4 + -0x50),&local_68);
      pbVar20 = local_68;
      goto joined_r0x001ea08c;
    }
  }
  uVar21 = uVar5;
  uVar19 = 0;
  uVar13 = 0;
  pbVar17 = pbVar18;
  do {
    bVar1 = *pbVar17;
    uVar7 = uVar19 & 0x3f;
    uVar19 = uVar19 + 7;
    uVar13 = ((ulong)bVar1 & 0x7f) << uVar7 | uVar13;
    pbVar17 = pbVar17 + 1;
  } while ((char)bVar1 < '\0');
  uVar7 = -1L << (uVar19 & 0x3f);
  if (0x3f < uVar19 || bVar1 < 0x40) {
    uVar7 = 0;
  }
  if ((uVar13 | uVar7) == 0) goto LAB_001ea0e0;
  pbVar17 = pbVar18 + (uVar13 | uVar7);
  goto LAB_001e9f14;
LAB_001ea0e0:
  if ((uVar21 & (param_2 & 2) >> 1) == 0) {
    return 8;
  }
  pbVar17 = (byte *)0x0;
  uVar19 = 0;
  pbVar20 = (byte *)0x0;
joined_r0x001ea198:
  if ((param_2 & 1) != 0) {
    if (param_3 != 0x434c4e47432b2b00) {
      return 6;
    }
    *(int *)(param_4 + -0x24) = (int)uVar19;
    *(byte **)(param_4 + -0x20) = pbVar17;
    *(char **)(param_4 + -0x18) = pcVar6;
    *(long *)(param_4 + -0x10) = lVar16;
    *(byte **)(param_4 + -8) = pbVar20;
    return 6;
  }
LAB_001e9d10:
  thunk_FUN_001eb2a8(param_5,0,param_4);
  thunk_FUN_001eb2a8(param_5,1,uVar19);
  FUN_001eb154(param_5,lVar16);
  if (-1 < (long)uVar19) {
    return 7;
  }
LAB_001e9ce8:
  *(undefined8 *)(param_4 + -0x10) = 0;
  return 7;
}


