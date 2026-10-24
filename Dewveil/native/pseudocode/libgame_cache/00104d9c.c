// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00104d9c; body: [[00104d9c, 0010710f]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104d9c(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  char *pcVar24;
  undefined1 *puVar25;
  char *pcVar26;
  undefined1 *puVar27;
  undefined4 uVar28;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar13 = PTR_y_8_0012a5d0;
  puVar12 = PTR_x_7_0012a5c8;
  puVar18 = auStack_80;
  if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) != 0) &&
     (puVar18 = auStack_80, puVar27 = auStack_80, 9 < *(int *)PTR_y_8_0012a5d0)) goto LAB_00104ea8;
  while( true ) {
    if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) != 0) &&
       (puVar27 = puVar18, 9 < *(int *)PTR_y_8_0012a5d0)) goto LAB_00104e58;
    while( true ) {
      puVar23 = puVar18 + -0x60;
      puVar22 = puVar18 + -0x100;
      pcVar24 = puVar18 + -0x180;
      pcVar26 = puVar18 + -0x1e0;
      puVar25 = puVar18 + -0x280;
      puVar27 = puVar18 + -0x300;
      if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_8_0012a5d0 < 10)) break;
LAB_00104e58:
      puVar18 = puVar27 + -0x300;
    }
    if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_8_0012a5d0 < 10)) break;
LAB_00104ea8:
    puVar18 = puVar27;
    if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_8_0012a5d0)) goto LAB_00106e94;
    while ((puVar18 = puVar18 + -0x300,
           (*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_8_0012a5d0))) {
LAB_00106e94:
      puVar18 = puVar18 + -0x300;
    }
  }
  do {
    if ((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_8_0012a5d0);
  iVar17 = 0x5a3cb46a;
  lVar19 = 0;
  local_78 = param_2;
  do {
    uVar28 = *(undefined4 *)PTR_x_7_0012a5c8;
    do {
      if ((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_8_0012a5d0);
    iVar17 = iVar17 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar17 >> 0x10);
    cVar9 = (char)lVar19;
    if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_8_0012a5d0)) goto LAB_001050ac;
    while( true ) {
      if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_8_0012a5d0)) goto LAB_0010501c;
      while( true ) {
        bVar8 = cVar9 * '\x11' + 0x2a;
        bVar6 = (&DAT_00101690)[lVar19] | bVar8 ^ 0xff;
        bVar8 = ((bVar8 ^ 0xff) & 0x5d | bVar8 & 0xa2) ^ 0x5d | (&DAT_00101690)[lVar19] ^ 0xff;
        iVar16 = *(int *)PTR_x_7_0012a5c8;
        bVar8 = (bVar8 & 0xed | (bVar8 ^ 0xff) & 0x12) ^ (bVar6 & 0xed | (bVar6 ^ 0xff) & 0x12) |
                (bVar8 | bVar6) ^ 0xff;
        puVar27[lVar19] =
             (bVar3 ^ ~bVar8 ^ 0xff) & bVar3 |
             (((bVar3 ^ 0xff) & 0xc0 | bVar3 & 0x3f) ^ 0xc0 | bVar8 ^ 0xff) ^ 0xff;
        lVar21 = lVar19 + 1;
        if (((iVar16 * (iVar16 + -1) & 1U) == 0) || (*(int *)PTR_y_8_0012a5d0 < 10)) break;
LAB_0010501c:
        bVar8 = cVar9 * '\x11' + 0x2a;
        bVar6 = (&DAT_00101690)[lVar19] | bVar8 ^ 0xff;
        bVar8 = ((bVar8 ^ 0xff) & 0x5d | bVar8 & 0xa2) ^ 0x5d | (&DAT_00101690)[lVar19] ^ 0xff;
        bVar8 = (bVar8 & 0xed | (bVar8 ^ 0xff) & 0x12) ^ (bVar6 & 0xed | (bVar6 ^ 0xff) & 0x12) |
                (bVar8 | bVar6) ^ 0xff;
        puVar27[lVar19] =
             (bVar3 ^ ~bVar8 ^ 0xff) & bVar3 |
             (((bVar3 ^ 0xff) & 0xc0 | bVar3 & 0x3f) ^ 0xc0 | bVar8 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_8_0012a5d0 < 10)) break;
LAB_001050ac:
      if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_8_0012a5d0)) goto LAB_00105178;
      while( true ) {
        bVar8 = cVar9 * '\x11' + 0x2a;
        bVar6 = (&DAT_00101690)[lVar19] | bVar8 ^ 0xff;
        bVar8 = ((bVar8 ^ 0xff) & 0x5d | bVar8 & 0xa2) ^ 0x5d | (&DAT_00101690)[lVar19] ^ 0xff;
        iVar16 = *(int *)PTR_x_7_0012a5c8;
        bVar8 = (bVar8 & 0xed | (bVar8 ^ 0xff) & 0x12) ^ (bVar6 & 0xed | (bVar6 ^ 0xff) & 0x12) |
                (bVar8 | bVar6) ^ 0xff;
        puVar27[lVar19] =
             (bVar3 ^ ~bVar8 ^ 0xff) & bVar3 |
             (((bVar3 ^ 0xff) & 0xc0 | bVar3 & 0x3f) ^ 0xc0 | bVar8 ^ 0xff) ^ 0xff;
        if (((iVar16 * (iVar16 + -1) & 1U) == 0) || (*(int *)PTR_y_8_0012a5d0 < 10)) break;
LAB_00105178:
        bVar8 = cVar9 * '\x11' + 0x2a;
        bVar6 = (&DAT_00101690)[lVar19] | bVar8 ^ 0xff;
        bVar8 = ((bVar8 ^ 0xff) & 0x5d | bVar8 & 0xa2) ^ 0x5d | (&DAT_00101690)[lVar19] ^ 0xff;
        bVar8 = (bVar8 & 0xed | (bVar8 ^ 0xff) & 0x12) ^ (bVar6 & 0xed | (bVar6 ^ 0xff) & 0x12) |
                (bVar8 | bVar6) ^ 0xff;
        puVar27[lVar19] =
             (bVar3 ^ ~bVar8 ^ 0xff) & bVar3 |
             (((bVar3 ^ 0xff) & 0xc0 | bVar3 & 0x3f) ^ 0xc0 | bVar8 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_8_0012a5d0);
    lVar19 = lVar21;
  } while (lVar21 != 0x17);
  uVar28 = *(undefined4 *)PTR_x_7_0012a5c8;
  do {
    if ((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_8_0012a5d0);
  if (((*(int *)PTR_x_7_0012a5c8 * (*(int *)PTR_x_7_0012a5c8 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_8_0012a5d0)) goto LAB_001052bc;
  while( true ) {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00105284;
    while( true ) {
      lVar19 = *param_1;
      puVar18[-0x2e9] = 0;
      uVar14 = (**(code **)(lVar19 + 0x30))(param_1,puVar27);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105284:
      lVar19 = *param_1;
      puVar18[-0x2e9] = 0;
      (**(code **)(lVar19 + 0x30))(param_1,puVar27);
    }
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_001052bc:
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00106efc;
    while( true ) {
      lVar19 = *param_1;
      puVar18[-0x2e9] = 0;
      (**(code **)(lVar19 + 0x30))(param_1,puVar27);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106efc:
      lVar19 = *param_1;
      puVar18[-0x2e9] = 0;
      (**(code **)(lVar19 + 0x30))(param_1,puVar27);
    }
  }
  lVar19 = 0x80;
  do {
    uVar28 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_0010539c;
    while( true ) {
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00105378;
      while( true ) {
        *puVar27 = 0;
        lVar21 = lVar19 + -1;
        if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105378:
        *puVar27 = 0;
      }
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_0010539c:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_001053fc;
      while ((*puVar27 = 0, (*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar13))) {
LAB_001053fc:
        *puVar27 = 0;
      }
    }
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    lVar19 = lVar21;
    puVar27 = puVar27 + 1;
  } while (lVar21 != 0);
  uVar28 = *(undefined4 *)puVar12;
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  uVar28 = (undefined4)ram0x001013a0;
  if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
  goto LAB_001054c8;
  while( true ) {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00105498;
    while( true ) {
      iVar17 = *(int *)puVar12;
      *(undefined8 *)pcVar26 = s_Asia_MangetFiles__BII_V_00101450._8_8_;
      *(undefined4 *)(puVar18 + -0x1d8) = uVar28;
      if (((iVar17 * (iVar17 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105498:
      *(undefined8 *)pcVar26 = s_Asia_MangetFiles__BII_V_00101450._8_8_;
      *(undefined4 *)(puVar18 + -0x1d8) = uVar28;
    }
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_001054c8:
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00106f44;
    while( true ) {
      iVar17 = *(int *)puVar12;
      *(undefined8 *)pcVar26 = s_Asia_MangetFiles__BII_V_00101450._8_8_;
      *(undefined4 *)(puVar18 + -0x1d8) = uVar28;
      if (((iVar17 * (iVar17 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106f44:
      *(undefined8 *)pcVar26 = s_Asia_MangetFiles__BII_V_00101450._8_8_;
      *(undefined4 *)(puVar18 + -0x1d8) = uVar28;
    }
  }
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  iVar17 = 0x5a3c9773;
  lVar19 = 0;
  local_68 = uVar14;
  do {
    uVar28 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    iVar17 = iVar17 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar17 >> 0x10);
    cVar9 = (char)lVar19;
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00105810;
    while( true ) {
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00105700;
      while( true ) {
        bVar8 = (&DAT_001014e8)[lVar19];
        bVar11 = cVar9 * '\x11' + 9;
        bVar10 = bVar11 | bVar8 ^ 0xff;
        bVar11 = (bVar11 ^ 0xab ^ ((bVar8 ^ 0xff) & 0xab | bVar8 & 0x54)) & bVar11;
        bVar6 = (bVar3 ^ 0x14) & (bVar3 ^ 0xff);
        bVar7 = (bVar3 ^ 0x14) & bVar3;
        bVar11 = (bVar10 & 0xd | (bVar10 ^ 0xff) & 0xf2) ^ ((bVar11 ^ 0xff) & 0xd | bVar11 & 0xf2) |
                 (bVar10 | bVar11 ^ 0xff) ^ 0xff;
        bVar10 = (bVar11 ^ 0x14) & bVar11;
        bVar8 = ((bVar11 ^ 0xff) & 4 | bVar11 & 0x10) ^ 4 | 0xeb;
        iVar16 = *(int *)puVar12;
        bVar6 = ((bVar6 ^ 0xff) & 0xe5 | bVar6 & 0x1a) ^ ((bVar7 ^ 0xff) & 0xe5 | bVar7 & 0x1a) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        bVar8 = ((bVar11 ^ 0xff) & 0x10 | bVar8 & 0xf) ^ (bVar10 & 0xf0 | ~bVar10 & 0xf) |
                (bVar8 | bVar10 ^ 0xff) ^ 0xff;
        puVar25[lVar19] =
             ((bVar8 ^ 0xff) & 0x6c | bVar8 & 0x93) ^ ((bVar6 ^ 0xff) & 0x6c | bVar6 & 0x93);
        uVar14 = local_68;
        lVar21 = lVar19 + 1;
        if (((iVar16 * (iVar16 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105700:
        bVar8 = (&DAT_001014e8)[lVar19];
        bVar10 = cVar9 * '\x11' + 9;
        bVar6 = bVar10 | bVar8 ^ 0xff;
        bVar10 = (bVar10 ^ 0xab ^ ((bVar8 ^ 0xff) & 0xab | bVar8 & 0x54)) & bVar10;
        bVar11 = (bVar6 & 0xd | (bVar6 ^ 0xff) & 0xf2) ^ ((bVar10 ^ 0xff) & 0xd | bVar10 & 0xf2) |
                 (bVar6 | bVar10 ^ 0xff) ^ 0xff;
        bVar10 = (bVar3 ^ 0x14) & (bVar3 ^ 0xff);
        bVar7 = (bVar3 ^ 0x14) & bVar3;
        bVar6 = (bVar11 ^ 0x14) & bVar11;
        bVar8 = ((bVar11 ^ 0xff) & 4 | bVar11 & 0x10) ^ 4 | 0xeb;
        bVar8 = ((bVar11 ^ 0xff) & 0x10 | bVar8 & 0xf) ^ (bVar6 & 0xf0 | ~bVar6 & 0xf) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar10 ^ 0xff) & 0xe5 | bVar10 & 0x1a) ^ ((bVar7 ^ 0xff) & 0xe5 | bVar7 & 0x1a) |
                (~bVar10 | bVar7 ^ 0xff) ^ 0xff;
        puVar25[lVar19] =
             ((bVar8 ^ 0xff) & 0x6c | bVar8 & 0x93) ^ ((bVar6 ^ 0xff) & 0x6c | bVar6 & 0x93);
      }
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105810:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_0010595c;
      while( true ) {
        bVar8 = (&DAT_001014e8)[lVar19];
        bVar10 = cVar9 * '\x11' + 9;
        iVar16 = *(int *)puVar12;
        bVar6 = bVar10 | bVar8 ^ 0xff;
        bVar10 = (bVar10 ^ 0xab ^ ((bVar8 ^ 0xff) & 0xab | bVar8 & 0x54)) & bVar10;
        bVar11 = (bVar6 & 0xd | (bVar6 ^ 0xff) & 0xf2) ^ ((bVar10 ^ 0xff) & 0xd | bVar10 & 0xf2) |
                 (bVar6 | bVar10 ^ 0xff) ^ 0xff;
        bVar6 = (bVar3 ^ 0x14) & (bVar3 ^ 0xff);
        bVar7 = (bVar3 ^ 0x14) & bVar3;
        bVar10 = (bVar11 ^ 0x14) & bVar11;
        bVar8 = ((bVar11 ^ 0xff) & 4 | bVar11 & 0x10) ^ 4 | 0xeb;
        bVar8 = ((bVar11 ^ 0xff) & 0x10 | bVar8 & 0xf) ^ (bVar10 & 0xf0 | ~bVar10 & 0xf) |
                (bVar8 | bVar10 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar6 ^ 0xff) & 0xe5 | bVar6 & 0x1a) ^ ((bVar7 ^ 0xff) & 0xe5 | bVar7 & 0x1a) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar25[lVar19] =
             ((bVar8 ^ 0xff) & 0x6c | bVar8 & 0x93) ^ ((bVar6 ^ 0xff) & 0x6c | bVar6 & 0x93);
        if (((iVar16 * (iVar16 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_0010595c:
        bVar8 = (&DAT_001014e8)[lVar19];
        bVar10 = cVar9 * '\x11' + 9;
        bVar6 = bVar10 | bVar8 ^ 0xff;
        bVar10 = (bVar10 ^ 0xab ^ ((bVar8 ^ 0xff) & 0xab | bVar8 & 0x54)) & bVar10;
        bVar11 = (bVar6 & 0xd | (bVar6 ^ 0xff) & 0xf2) ^ ((bVar10 ^ 0xff) & 0xd | bVar10 & 0xf2) |
                 (bVar6 | bVar10 ^ 0xff) ^ 0xff;
        bVar10 = (bVar3 ^ 0x14) & (bVar3 ^ 0xff);
        bVar7 = (bVar3 ^ 0x14) & bVar3;
        bVar6 = (bVar11 ^ 0x14) & bVar11;
        bVar8 = ((bVar11 ^ 0xff) & 4 | bVar11 & 0x10) ^ 4 | 0xeb;
        bVar8 = ((bVar11 ^ 0xff) & 0x10 | bVar8 & 0xf) ^ (bVar6 & 0xf0 | ~bVar6 & 0xf) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar10 ^ 0xff) & 0xe5 | bVar10 & 0x1a) ^ ((bVar7 ^ 0xff) & 0xe5 | bVar7 & 0x1a) |
                (~bVar10 | bVar7 ^ 0xff) ^ 0xff;
        puVar25[lVar19] =
             ((bVar8 ^ 0xff) & 0x6c | bVar8 & 0x93) ^ ((bVar6 ^ 0xff) & 0x6c | bVar6 & 0x93);
      }
    }
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    lVar19 = lVar21;
  } while (lVar21 != 0x10);
  uVar28 = *(undefined4 *)puVar12;
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
  goto LAB_00105b30;
  while( true ) {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00105af0;
    while( true ) {
      lVar19 = *param_1;
      puVar18[-0x270] = 0;
      uVar15 = (**(code **)(lVar19 + 0x108))(param_1,uVar14,pcVar26,puVar25);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105af0:
      lVar19 = *param_1;
      puVar18[-0x270] = 0;
      (**(code **)(lVar19 + 0x108))(param_1,uVar14,pcVar26,puVar25);
    }
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105b30:
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00106f94;
    while( true ) {
      lVar19 = *param_1;
      puVar18[-0x270] = 0;
      (**(code **)(lVar19 + 0x108))(param_1,uVar14,pcVar26,puVar25);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106f94:
      lVar19 = *param_1;
      puVar18[-0x270] = 0;
      (**(code **)(lVar19 + 0x108))(param_1,uVar14,pcVar26,puVar25);
    }
  }
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  lVar19 = 0;
  do {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00105be4;
    while( true ) {
      *pcVar26 = '\0';
      uVar14 = local_78;
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105be4:
      *pcVar26 = '\0';
    }
    lVar19 = lVar19 + -1;
    pcVar26 = pcVar26 + 1;
  } while (lVar19 != -0x60);
  lVar19 = 0xa0;
  do {
    uVar28 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00105cb0;
    while( true ) {
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00105c8c;
      while( true ) {
        *puVar25 = 0;
        lVar21 = lVar19 + -1;
        if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105c8c:
        *puVar25 = 0;
      }
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105cb0:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00105d10;
      while ((*puVar25 = 0, (*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar13))) {
LAB_00105d10:
        *puVar25 = 0;
      }
    }
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    lVar19 = lVar21;
    puVar25 = puVar25 + 1;
  } while (lVar21 != 0);
  uVar28 = *(undefined4 *)puVar12;
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
  goto LAB_00105e34;
  while( true ) {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00105ddc;
    while( true ) {
      local_70 = FUN_00125094(param_1,uVar14,uVar15);
      pcVar20 = *(code **)(*param_1 + 0x30);
      *(undefined8 *)pcVar24 = s_getDefaujava_io_nce_00101378._8_8_;
      *(int *)(puVar18 + -0x178) = (int)ram0x00101360;
      puVar18[-0x174] = 0;
      local_68 = (*pcVar20)(param_1,pcVar24);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105ddc:
      FUN_00125094(param_1,uVar14,uVar15);
      lVar19 = *param_1;
      puVar18[-0x174] = 0;
      pcVar20 = *(code **)(lVar19 + 0x30);
      *(undefined8 *)pcVar24 = s_getDefaujava_io_nce_00101378._8_8_;
      *(int *)(puVar18 + -0x178) = (int)ram0x00101360;
      (*pcVar20)(param_1,pcVar24);
    }
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105e34:
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_0010700c;
    while( true ) {
      FUN_00125094(param_1,uVar14,uVar15);
      lVar19 = *param_1;
      puVar18[-0x174] = 0;
      pcVar20 = *(code **)(lVar19 + 0x30);
      *(undefined8 *)pcVar24 = s_getDefaujava_io_nce_00101378._8_8_;
      *(int *)(puVar18 + -0x178) = (int)ram0x00101360;
      (*pcVar20)(param_1,pcVar24);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_0010700c:
      FUN_00125094(param_1,uVar14,uVar15);
      lVar19 = *param_1;
      puVar18[-0x174] = 0;
      pcVar20 = *(code **)(lVar19 + 0x30);
      *(undefined8 *)pcVar24 = s_getDefaujava_io_nce_00101378._8_8_;
      *(int *)(puVar18 + -0x178) = (int)ram0x00101360;
      (*pcVar20)(param_1,pcVar24);
    }
  }
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  lVar19 = 0x80;
  do {
    uVar28 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00105f50;
    while( true ) {
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00105f2c;
      while( true ) {
        *pcVar24 = '\0';
        lVar21 = lVar19 + -1;
        if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105f2c:
        *pcVar24 = '\0';
      }
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00105f50:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00105fb0;
      while ((*pcVar24 = '\0', (*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar13))) {
LAB_00105fb0:
        *pcVar24 = '\0';
      }
    }
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    lVar19 = lVar21;
    pcVar24 = pcVar24 + 1;
  } while (lVar21 != 0);
LAB_00105fc4:
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar13) goto LAB_00105fc4;
    }
    uVar28 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
  } while( true );
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  iVar17 = 0x5a3c8571;
  lVar19 = 0;
  do {
    uVar28 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    iVar17 = iVar17 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar17 >> 0x10);
    cVar9 = (char)lVar19;
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00106294;
    while( true ) {
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_001061c8;
      while( true ) {
        bVar8 = (&DAT_00101568)[lVar19];
        bVar7 = cVar9 * -0x11 - 0x1c;
        bVar6 = (bVar8 ^ 0xff) & 0xe2 | bVar8 & 0x1d;
        bVar10 = bVar7 & 0x68 | cVar9 * '\x11' + 0x1bU & 0x97;
        bVar8 = (bVar6 ^ 0x23) & (bVar6 ^ 0x1d) | bVar8 & 0x3e;
        bVar6 = (bVar10 & 9 | 8 | (bVar10 ^ 0x80) & 0xc0) ^ (bVar7 & 9 | 1 | (bVar7 ^ 0xff) & 0x36);
        iVar16 = *(int *)puVar12;
        bVar8 = (bVar8 ^ 0xff) & 0xa8 | bVar8 & 0x57;
        bVar6 = (bVar6 ^ 0xff) & 0xa8 | bVar6 & 0x57;
        lVar21 = lVar19 + 1;
        puVar23[lVar19] =
             (bVar3 ^ bVar8 ^ 0xff ^ bVar6 ^ 0xff) & bVar3 |
             (((bVar3 ^ 0xff) & 0xa9 | bVar3 & 0x56) ^ 0xa9 | bVar6 ^ bVar8 ^ 0xff) ^ 0xff;
        if (((iVar16 * (iVar16 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_001061c8:
        bVar8 = (&DAT_00101568)[lVar19];
        bVar7 = cVar9 * -0x11 - 0x1c;
        bVar6 = (bVar8 ^ 0xff) & 0xe2 | bVar8 & 0x1d;
        bVar10 = bVar7 & 0x68 | cVar9 * '\x11' + 0x1bU & 0x97;
        bVar8 = (bVar6 ^ 0x23) & (bVar6 ^ 0x1d) | bVar8 & 0x3e;
        bVar6 = (bVar10 & 9 | 8 | (bVar10 ^ 0x80) & 0xc0) ^ (bVar7 & 9 | 1 | (bVar7 ^ 0xff) & 0x36);
        bVar8 = (bVar8 ^ 0xff) & 0xa8 | bVar8 & 0x57;
        bVar6 = (bVar6 ^ 0xff) & 0xa8 | bVar6 & 0x57;
        puVar23[lVar19] =
             (bVar3 ^ bVar8 ^ 0xff ^ bVar6 ^ 0xff) & bVar3 |
             (((bVar3 ^ 0xff) & 0xa9 | bVar3 & 0x56) ^ 0xa9 | bVar6 ^ bVar8 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106294:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_0010639c;
      while( true ) {
        bVar8 = (&DAT_00101568)[lVar19];
        bVar7 = cVar9 * -0x11 - 0x1c;
        bVar6 = (bVar8 ^ 0xff) & 0xe2 | bVar8 & 0x1d;
        bVar10 = bVar7 & 0x68 | cVar9 * '\x11' + 0x1bU & 0x97;
        bVar8 = (bVar6 ^ 0x23) & (bVar6 ^ 0x1d) | bVar8 & 0x3e;
        bVar6 = (bVar10 & 9 | 8 | (bVar10 ^ 0x80) & 0xc0) ^ (bVar7 & 9 | 1 | (bVar7 ^ 0xff) & 0x36);
        iVar16 = *(int *)puVar12;
        bVar8 = (bVar8 ^ 0xff) & 0xa8 | bVar8 & 0x57;
        bVar6 = (bVar6 ^ 0xff) & 0xa8 | bVar6 & 0x57;
        puVar23[lVar19] =
             (bVar3 ^ bVar8 ^ 0xff ^ bVar6 ^ 0xff) & bVar3 |
             (((bVar3 ^ 0xff) & 0xa9 | bVar3 & 0x56) ^ 0xa9 | bVar6 ^ bVar8 ^ 0xff) ^ 0xff;
        if (((iVar16 * (iVar16 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_0010639c:
        bVar8 = (&DAT_00101568)[lVar19];
        bVar7 = cVar9 * -0x11 - 0x1c;
        bVar6 = (bVar8 ^ 0xff) & 0xe2 | bVar8 & 0x1d;
        bVar10 = bVar7 & 0x68 | cVar9 * '\x11' + 0x1bU & 0x97;
        bVar8 = (bVar6 ^ 0x23) & (bVar6 ^ 0x1d) | bVar8 & 0x3e;
        bVar6 = (bVar10 & 9 | 8 | (bVar10 ^ 0x80) & 0xc0) ^ (bVar7 & 9 | 1 | (bVar7 ^ 0xff) & 0x36);
        bVar8 = (bVar8 ^ 0xff) & 0xa8 | bVar8 & 0x57;
        bVar6 = (bVar6 ^ 0xff) & 0xa8 | bVar6 & 0x57;
        puVar23[lVar19] =
             (bVar3 ^ bVar8 ^ 0xff ^ bVar6 ^ 0xff) & bVar3 |
             (((bVar3 ^ 0xff) & 0xa9 | bVar3 & 0x56) ^ 0xa9 | bVar6 ^ bVar8 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    lVar19 = lVar21;
  } while (lVar21 != 0xf);
  uVar28 = *(undefined4 *)puVar12;
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
  goto LAB_001064f0;
  while( true ) {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_001064cc;
    while ((iVar17 = *(int *)puVar12, puVar18[-0x51] = 0, (iVar17 * (iVar17 + -1) & 1U) != 0 &&
           (9 < *(int *)puVar13))) {
LAB_001064cc:
      puVar18[-0x51] = 0;
    }
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_001064f0:
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00107068;
    while ((iVar17 = *(int *)puVar12, puVar18[-0x51] = 0, (iVar17 * (iVar17 + -1) & 1U) != 0 &&
           (9 < *(int *)puVar13))) {
LAB_00107068:
      puVar18[-0x51] = 0;
    }
  }
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  lVar19 = 0;
  iVar17 = 0x5a3c787e;
  do {
    uVar28 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    iVar16 = (int)lVar19;
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_001067bc;
    while( true ) {
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_001066d8;
      while( true ) {
        bVar3 = (&DAT_001015a8)[lVar19];
        uVar5 = iVar16 * 0x11 - 0x1a;
        uVar4 = uVar5 | bVar3 ^ 0xffffffff;
        uVar5 = ((bVar3 ^ 0xffffffff) & 0xffffffa1 | bVar3 & 0x5e) ^ 0xffffffa1 | uVar5 ^ 0xffffffff
        ;
        uVar5 = (uVar4 & 0xffffff91 | (uVar4 ^ 0xffffffff) & 0x6e) ^
                (uVar5 & 0xffffff91 | (uVar5 ^ 0xffffffff) & 0x6e) | (uVar4 | uVar5) ^ 0xffffffff;
        uVar4 = (uVar5 ^ 0xffffffd8) & uVar5;
        iVar1 = iVar17 * 0x41c64e6d + 0x3039;
        bVar10 = ((byte)uVar5 ^ 0xff) & 0x10 | (byte)uVar5 & 200;
        bVar8 = bVar10 ^ 0x37;
        bVar6 = (byte)uVar4;
        iVar2 = *(int *)puVar12;
        bVar3 = (byte)((uint)iVar1 >> 0x10);
        bVar8 = (bVar8 & 0x40 | (bVar10 ^ 0x8f) & 0x98) ^
                (bVar6 & 0x80 | bVar6 & 0x3f | (byte)((~uVar4 >> 6 & 1) << 6)) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar3 = (bVar3 ^ 0xff) & 0xd8 | (bVar3 ^ 0xd8) & bVar3;
        puVar22[lVar19] = bVar3 & (bVar8 ^ 0xff) | bVar8 & (bVar3 ^ 0xff);
        uVar14 = local_68;
        lVar21 = lVar19 + 1;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_001066d8:
        bVar3 = (&DAT_001015a8)[lVar19];
        uVar5 = iVar16 * 0x11 - 0x1a;
        uVar4 = uVar5 | bVar3 ^ 0xffffffff;
        uVar5 = ((bVar3 ^ 0xffffffff) & 0xffffffa1 | bVar3 & 0x5e) ^ 0xffffffa1 | uVar5 ^ 0xffffffff
        ;
        uVar4 = (uVar4 & 0xffffff91 | (uVar4 ^ 0xffffffff) & 0x6e) ^
                (uVar5 & 0xffffff91 | (uVar5 ^ 0xffffffff) & 0x6e) | (uVar4 | uVar5) ^ 0xffffffff;
        bVar10 = (byte)uVar4;
        uVar4 = (uVar4 ^ 0xffffffd8) & uVar4;
        bVar6 = (bVar10 ^ 0xff) & 0x10 | bVar10 & 200;
        bVar8 = (byte)uVar4;
        bVar3 = (byte)((uint)(iVar17 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar3 = (bVar3 ^ 0xff) & 0xd8 | (bVar3 ^ 0xd8) & bVar3;
        bVar8 = (bVar10 & 0x40 | (bVar6 ^ 0x8f) & 0x98) ^
                (bVar8 & 0x80 | bVar8 & 0x3f | (byte)((~uVar4 >> 6 & 1) << 6)) |
                (bVar6 | bVar8 ^ 0xff) ^ 0xff;
        puVar22[lVar19] = bVar3 & (bVar8 ^ 0xff) | bVar8 & (bVar3 ^ 0xff);
      }
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_001067bc:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_001068dc;
      while( true ) {
        bVar3 = (&DAT_001015a8)[lVar19];
        uVar5 = iVar16 * 0x11 - 0x1a;
        uVar4 = uVar5 | bVar3 ^ 0xffffffff;
        uVar5 = ((bVar3 ^ 0xffffffff) & 0xffffffa1 | bVar3 & 0x5e) ^ 0xffffffa1 | uVar5 ^ 0xffffffff
        ;
        uVar5 = (uVar4 & 0xffffff91 | (uVar4 ^ 0xffffffff) & 0x6e) ^
                (uVar5 & 0xffffff91 | (uVar5 ^ 0xffffffff) & 0x6e) | (uVar4 | uVar5) ^ 0xffffffff;
        uVar4 = (uVar5 ^ 0xffffffd8) & uVar5;
        bVar10 = ((byte)uVar5 ^ 0xff) & 0x10 | (byte)uVar5 & 200;
        iVar1 = *(int *)puVar12;
        bVar8 = bVar10 ^ 0x37;
        bVar6 = (byte)uVar4;
        bVar3 = (byte)((uint)(iVar17 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar8 = (bVar8 & 0x40 | (bVar10 ^ 0x8f) & 0x98) ^
                (bVar6 & 0x80 | bVar6 & 0x3f | (byte)((~uVar4 >> 6 & 1) << 6)) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar3 = (bVar3 ^ 0xff) & 0xd8 | (bVar3 ^ 0xd8) & bVar3;
        puVar22[lVar19] = bVar3 & (bVar8 ^ 0xff) | bVar8 & (bVar3 ^ 0xff);
        if (((iVar1 * (iVar1 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_001068dc:
        bVar3 = (&DAT_001015a8)[lVar19];
        uVar5 = iVar16 * 0x11 - 0x1a;
        uVar4 = uVar5 | bVar3 ^ 0xffffffff;
        uVar5 = ((bVar3 ^ 0xffffffff) & 0xffffffa1 | bVar3 & 0x5e) ^ 0xffffffa1 | uVar5 ^ 0xffffffff
        ;
        uVar4 = (uVar4 & 0xffffff91 | (uVar4 ^ 0xffffffff) & 0x6e) ^
                (uVar5 & 0xffffff91 | (uVar5 ^ 0xffffffff) & 0x6e) | (uVar4 | uVar5) ^ 0xffffffff;
        bVar10 = (byte)uVar4;
        uVar4 = (uVar4 ^ 0xffffffd8) & uVar4;
        bVar6 = (bVar10 ^ 0xff) & 0x10 | bVar10 & 200;
        bVar8 = (byte)uVar4;
        bVar3 = (byte)((uint)(iVar17 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar3 = (bVar3 ^ 0xff) & 0xd8 | (bVar3 ^ 0xd8) & bVar3;
        bVar8 = (bVar10 & 0x40 | (bVar6 ^ 0x8f) & 0x98) ^
                (bVar8 & 0x80 | bVar8 & 0x3f | (byte)((~uVar4 >> 6 & 1) << 6)) |
                (bVar6 | bVar8 ^ 0xff) ^ 0xff;
        puVar22[lVar19] = bVar3 & (bVar8 ^ 0xff) | bVar8 & (bVar3 ^ 0xff);
      }
    }
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    lVar19 = lVar21;
    iVar17 = iVar1;
  } while (lVar21 != 0x14);
  uVar28 = *(undefined4 *)puVar12;
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
  goto LAB_00106a84;
  while( true ) {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00106a44;
    while( true ) {
      lVar19 = *param_1;
      puVar18[-0xec] = 0;
      uVar15 = (**(code **)(lVar19 + 0x108))(param_1,uVar14,puVar23,puVar22);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106a44:
      lVar19 = *param_1;
      puVar18[-0xec] = 0;
      (**(code **)(lVar19 + 0x108))(param_1,uVar14,puVar23,puVar22);
    }
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106a84:
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_001070ac;
    while( true ) {
      lVar19 = *param_1;
      puVar18[-0xec] = 0;
      (**(code **)(lVar19 + 0x108))(param_1,uVar14,puVar23,puVar22);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_001070ac:
      lVar19 = *param_1;
      puVar18[-0xec] = 0;
      (**(code **)(lVar19 + 0x108))(param_1,uVar14,puVar23,puVar22);
    }
  }
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  lVar19 = 0x60;
  do {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00106b88;
    while( true ) {
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00106b64;
      while( true ) {
        *puVar23 = 0;
        lVar21 = ~(0x7614fc33b5f9707bU - lVar19) + 0x7614fc33b5f9707b;
        if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106b64:
        *puVar23 = 0;
      }
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106b88:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00106be8;
      while ((*puVar23 = 0, (*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar13))) {
LAB_00106be8:
        *puVar23 = 0;
      }
    }
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    lVar19 = lVar21;
    puVar23 = puVar23 + 1;
  } while (lVar21 != 0);
  lVar19 = 0xa0;
  do {
    uVar28 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00106ce0;
    while( true ) {
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00106cbc;
      while( true ) {
        *puVar22 = 0;
        uVar14 = local_70;
        lVar21 = ~(0x2adb9714c495483cU - lVar19) + 0x2adb9714c495483c;
        if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106cbc:
        *puVar22 = 0;
      }
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106ce0:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00106d40;
      while ((*puVar22 = 0, (*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar13))) {
LAB_00106d40:
        *puVar22 = 0;
      }
    }
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    lVar19 = lVar21;
    puVar22 = puVar22 + 1;
  } while (lVar21 != 0);
  uVar28 = *(undefined4 *)puVar12;
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
  goto LAB_00106e08;
  while( true ) {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00106dd8;
    while ((FUN_00125094(param_1,uVar14,uVar15),
           (*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0 && (9 < *(int *)puVar13))) {
LAB_00106dd8:
      FUN_00125094(param_1,uVar14,uVar15);
    }
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00106e08:
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_001070fc;
    while ((FUN_00125094(param_1,uVar14,uVar15),
           (*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0 && (9 < *(int *)puVar13))) {
LAB_001070fc:
      FUN_00125094(param_1,uVar14,uVar15);
    }
  }
  return;
}


