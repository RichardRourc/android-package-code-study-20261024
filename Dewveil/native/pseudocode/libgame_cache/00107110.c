// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00107110; body: [[00107110, 00108e57]]

void FUN_00107110(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined1 *puVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined4 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined4 uVar28;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long local_80;
  undefined1 *local_78;
  undefined4 *local_70;
  undefined8 local_68;
  
  puVar12 = PTR_y_10_0012a5e0;
  puVar11 = PTR_x_9_0012a5d8;
  puVar26 = auStack_90;
  uVar28 = *(undefined4 *)PTR_x_9_0012a5d8;
  do {
    if ((*(int *)PTR_x_9_0012a5d8 * (*(int *)PTR_x_9_0012a5d8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_10_0012a5e0);
  puVar18 = auStack_90;
  local_88 = param_2;
  local_68 = param_3;
  if (((*(int *)PTR_x_9_0012a5d8 * (*(int *)PTR_x_9_0012a5d8 + -1) & 1U) != 0) &&
     (puVar18 = auStack_90, 9 < *(int *)PTR_y_10_0012a5e0)) goto LAB_0010729c;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) &&
       (puVar26 = puVar18, 9 < *(int *)puVar12)) goto LAB_00107228;
    while( true ) {
      local_70 = (undefined4 *)(puVar18 + -0x60);
      puVar25 = puVar18 + -0x180;
      puVar27 = puVar18 + -0x1e0;
      puVar26 = puVar18 + -0x280;
      uVar14 = (**(code **)(*param_1 + 0xf8))(param_1,local_68);
      iVar20 = *(int *)puVar11;
      *(undefined8 *)(puVar18 + -0x1e0) = s_loadClasread_00101368._0_8_;
      *(undefined2 *)(puVar18 + -0x1d8) = 0x73;
      if (((iVar20 * (iVar20 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00107228:
      puVar18 = puVar26 + -0x280;
      (**(code **)(*param_1 + 0xf8))(param_1,local_68);
      *(undefined2 *)(puVar26 + -0x1d8) = 0x73;
      *(undefined8 *)(puVar26 + -0x1e0) = s_loadClasread_00101368._0_8_;
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0010729c:
    uVar14 = local_68;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) &&
       (puVar18 = puVar26, 9 < *(int *)puVar12)) goto LAB_00108c54;
    while( true ) {
      puVar18 = puVar26 + -0x280;
      (**(code **)(*param_1 + 0xf8))(param_1,uVar14);
      iVar20 = *(int *)puVar11;
      *(undefined8 *)(puVar26 + -0x1e0) = s_loadClasread_00101368._0_8_;
      *(undefined2 *)(puVar26 + -0x1d8) = 0x73;
      if (((iVar20 * (iVar20 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00108c54:
      puVar26 = puVar18 + -0x280;
      (**(code **)(*param_1 + 0xf8))(param_1,uVar14);
      *(undefined2 *)(puVar18 + -0x1d8) = 0x73;
      *(undefined8 *)(puVar18 + -0x1e0) = s_loadClasread_00101368._0_8_;
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  iVar20 = 0x5a3ca175;
  lVar19 = 0;
  local_78 = puVar18 + -0x100;
  do {
    uVar28 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    iVar20 = iVar20 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar20 >> 0x10);
    cVar9 = (char)lVar19;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_00107554;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00107490;
      while( true ) {
        iVar17 = *(int *)puVar11;
        bVar7 = cVar9 * '\x11' + 0x3f;
        bVar6 = ((bVar7 | 0x7c) & 0xd6 | (bVar7 ^ 0xff) & 0x28) ^
                ((~bVar7 | 0x83) & 0xd6 | bVar7 & 1);
        bVar7 = (bVar4 ^ 0xff) & 0x65 | bVar4 & 0x9a;
        bVar6 = ((bVar6 ^ 0xff) & 0xb2 | bVar6 & 0x4d) ^
                (((&DAT_001016b8)[lVar19] ^ 0x10) & 0xb2 | ((&DAT_001016b8)[lVar19] ^ 8) & 0x4d);
        bVar6 = ((bVar6 ^ 0xff) & 0x91 | bVar6 & 4) ^ 4 | bVar6 & 0x6a;
        bVar7 = (bVar7 ^ 0xf0) & (bVar7 ^ 0x9a) | (bVar4 ^ 0x95) & bVar4;
        lVar21 = lVar19 + 1;
        puVar26[lVar19] = bVar7 & (bVar6 ^ 0xff) | bVar6 & (bVar7 ^ 0xff);
        puVar23 = local_78;
        if (((iVar17 * (iVar17 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00107490:
        bVar7 = cVar9 * '\x11' + 0x3f;
        bVar7 = ((bVar7 | 0x7c) & 0xd6 | (bVar7 ^ 0xff) & 0x28) ^
                ((~bVar7 | 0x83) & 0xd6 | bVar7 & 1);
        bVar6 = ((bVar7 ^ 0xff) & 0xb2 | bVar7 & 0x4d) ^
                (((&DAT_001016b8)[lVar19] ^ 0x10) & 0xb2 | ((&DAT_001016b8)[lVar19] ^ 8) & 0x4d);
        bVar7 = (bVar4 ^ 0xff) & 0x65 | bVar4 & 0x9a;
        bVar6 = ((bVar6 ^ 0xff) & 0x91 | bVar6 & 4) ^ 4 | bVar6 & 0x6a;
        bVar7 = (bVar7 ^ 0xf0) & (bVar7 ^ 0x9a) | (bVar4 ^ 0x95) & bVar4;
        puVar26[lVar19] = bVar7 & (bVar6 ^ 0xff) | bVar6 & (bVar7 ^ 0xff);
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00107554:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00107654;
      while( true ) {
        bVar7 = cVar9 * '\x11' + 0x3f;
        iVar17 = *(int *)puVar11;
        bVar7 = ((bVar7 | 0x7c) & 0xd6 | (bVar7 ^ 0xff) & 0x28) ^
                ((~bVar7 | 0x83) & 0xd6 | bVar7 & 1);
        bVar6 = ((bVar7 ^ 0xff) & 0xb2 | bVar7 & 0x4d) ^
                (((&DAT_001016b8)[lVar19] ^ 0x10) & 0xb2 | ((&DAT_001016b8)[lVar19] ^ 8) & 0x4d);
        bVar7 = (bVar4 ^ 0xff) & 0x65 | bVar4 & 0x9a;
        bVar6 = ((bVar6 ^ 0xff) & 0x91 | bVar6 & 4) ^ 4 | bVar6 & 0x6a;
        bVar7 = (bVar7 ^ 0xf0) & (bVar7 ^ 0x9a) | (bVar4 ^ 0x95) & bVar4;
        puVar26[lVar19] = bVar7 & (bVar6 ^ 0xff) | bVar6 & (bVar7 ^ 0xff);
        if (((iVar17 * (iVar17 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00107654:
        bVar7 = cVar9 * '\x11' + 0x3f;
        bVar7 = ((bVar7 | 0x7c) & 0xd6 | (bVar7 ^ 0xff) & 0x28) ^
                ((~bVar7 | 0x83) & 0xd6 | bVar7 & 1);
        bVar6 = ((bVar7 ^ 0xff) & 0xb2 | bVar7 & 0x4d) ^
                (((&DAT_001016b8)[lVar19] ^ 0x10) & 0xb2 | ((&DAT_001016b8)[lVar19] ^ 8) & 0x4d);
        bVar7 = (bVar4 ^ 0xff) & 0x65 | bVar4 & 0x9a;
        bVar6 = ((bVar6 ^ 0xff) & 0x91 | bVar6 & 4) ^ 4 | bVar6 & 0x6a;
        bVar7 = (bVar7 ^ 0xf0) & (bVar7 ^ 0x9a) | (bVar4 ^ 0x95) & bVar4;
        puVar26[lVar19] = bVar7 & (bVar6 ^ 0xff) | bVar6 & (bVar7 ^ 0xff);
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    lVar19 = lVar21;
  } while (lVar21 != 0x25);
  uVar28 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
  goto LAB_001077dc;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_0010779c;
    while( true ) {
      lVar19 = *param_1;
      puVar18[-0x25b] = 0;
      uVar15 = (**(code **)(lVar19 + 0x108))(param_1,uVar14,puVar27,puVar26);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0010779c:
      lVar19 = *param_1;
      puVar18[-0x25b] = 0;
      (**(code **)(lVar19 + 0x108))(param_1,uVar14,puVar27,puVar26);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_001077dc:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_00108ce4;
    while( true ) {
      lVar19 = *param_1;
      puVar18[-0x25b] = 0;
      (**(code **)(lVar19 + 0x108))(param_1,uVar14,puVar27,puVar26);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00108ce4:
      lVar19 = *param_1;
      puVar18[-0x25b] = 0;
      (**(code **)(lVar19 + 0x108))(param_1,uVar14,puVar27,puVar26);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  lVar19 = 0x60;
  do {
    uVar28 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_001078d8;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_001078b4;
      while( true ) {
        *puVar27 = 0;
        lVar21 = lVar19 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_001078b4:
        *puVar27 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_001078d8:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00107938;
      while ((*puVar27 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar12))) {
LAB_00107938:
        *puVar27 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    lVar19 = lVar21;
    puVar27 = puVar27 + 1;
  } while (lVar21 != 0);
  lVar21 = 0;
  lVar19 = 0;
  do {
    uVar28 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_00107a34;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00107a10;
      while ((puVar26[lVar19] = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar12))) {
LAB_00107a10:
        puVar26[lVar19] = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00107a34:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00107a70;
      while ((puVar26[lVar19] = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar12))) {
LAB_00107a70:
        puVar26[lVar19] = 0;
      }
    }
    lVar21 = lVar21 + -1;
    lVar19 = lVar19 + 1;
  } while (lVar21 != -0xa0);
LAB_00107a84:
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar12) goto LAB_00107a84;
    }
    uVar28 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
  } while( true );
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  iVar20 = 0x5a3ccc16;
  lVar19 = 0;
  do {
    uVar28 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    iVar20 = iVar20 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar20 >> 0x10);
    cVar9 = (char)lVar19;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_00107d78;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00107c94;
      while( true ) {
        bVar7 = (&DAT_001016e8)[lVar19];
        bVar10 = cVar9 * '\x11' + 0x52;
        uVar1 = (bVar7 ^ 0xffffffcb) & (uint)bVar7;
        bVar6 = (bVar10 ^ 0xcb) & bVar10;
        bVar5 = (byte)uVar1;
        bVar8 = ~bVar5;
        bVar6 = (bVar10 | 0x34) & 0xeb ^ ((bVar6 ^ 0xff) & 0xeb | bVar6 & 0x14) |
                (bVar10 | 0x34 | bVar6 ^ 0xff) ^ 0xff;
        bVar7 = (bVar7 | 0x34) & 0xcf ^ (bVar8 & 0xc0 | bVar8 & 0xf | (byte)((uVar1 >> 4 & 3) << 4))
                | (bVar7 | 0x34 | bVar5 ^ 0xff) ^ 0xff;
        iVar17 = *(int *)puVar11;
        bVar7 = bVar7 & (bVar6 ^ 0xff) | bVar6 & (bVar7 ^ 0xff);
        bVar6 = (bVar7 ^ ((bVar4 ^ 0xff) & 0xee | bVar4 & 0x11) ^ 0xff ^ 0x11) & bVar7;
        bVar7 = ((bVar7 ^ 0xff) & 0x77 | bVar7 & 0x88) ^ 0x77 | bVar4 ^ 0xff;
        puVar25[lVar19] =
             (bVar7 & 0xef | (bVar7 ^ 0xff) & 0x10) ^ (~bVar6 & 0xef | bVar6 & 0x10) |
             (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        uVar14 = local_68;
        lVar21 = lVar19 + 1;
        if (((iVar17 * (iVar17 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00107c94:
        bVar7 = (&DAT_001016e8)[lVar19];
        bVar10 = cVar9 * '\x11' + 0x52;
        uVar1 = (bVar7 ^ 0xffffffcb) & (uint)bVar7;
        bVar6 = (bVar10 ^ 0xcb) & bVar10;
        bVar5 = (byte)uVar1;
        bVar8 = ~bVar5;
        bVar6 = (bVar10 | 0x34) & 0xeb ^ ((bVar6 ^ 0xff) & 0xeb | bVar6 & 0x14) |
                (bVar10 | 0x34 | bVar6 ^ 0xff) ^ 0xff;
        bVar7 = (bVar7 | 0x34) & 0xcf ^ (bVar8 & 0xc0 | bVar8 & 0xf | (byte)((uVar1 >> 4 & 3) << 4))
                | (bVar7 | 0x34 | bVar5 ^ 0xff) ^ 0xff;
        bVar7 = bVar7 & (bVar6 ^ 0xff) | bVar6 & (bVar7 ^ 0xff);
        bVar6 = (bVar7 ^ ((bVar4 ^ 0xff) & 0xee | bVar4 & 0x11) ^ 0xff ^ 0x11) & bVar7;
        bVar7 = ((bVar7 ^ 0xff) & 0x77 | bVar7 & 0x88) ^ 0x77 | bVar4 ^ 0xff;
        puVar25[lVar19] =
             (bVar7 & 0xef | (bVar7 ^ 0xff) & 0x10) ^ (~bVar6 & 0xef | bVar6 & 0x10) |
             (bVar7 | bVar6 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00107d78:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00107e98;
      while( true ) {
        bVar7 = (&DAT_001016e8)[lVar19];
        bVar10 = cVar9 * '\x11' + 0x52;
        uVar1 = (bVar7 ^ 0xffffffcb) & (uint)bVar7;
        bVar6 = (bVar10 ^ 0xcb) & bVar10;
        bVar5 = (byte)uVar1;
        bVar8 = ~bVar5;
        bVar6 = (bVar10 | 0x34) & 0xeb ^ ((bVar6 ^ 0xff) & 0xeb | bVar6 & 0x14) |
                (bVar10 | 0x34 | bVar6 ^ 0xff) ^ 0xff;
        bVar7 = (bVar7 | 0x34) & 0xcf ^ (bVar8 & 0xc0 | bVar8 & 0xf | (byte)((uVar1 >> 4 & 3) << 4))
                | (bVar7 | 0x34 | bVar5 ^ 0xff) ^ 0xff;
        iVar17 = *(int *)puVar11;
        bVar7 = bVar7 & (bVar6 ^ 0xff) | bVar6 & (bVar7 ^ 0xff);
        bVar6 = (bVar7 ^ ((bVar4 ^ 0xff) & 0xee | bVar4 & 0x11) ^ 0xff ^ 0x11) & bVar7;
        bVar7 = ((bVar7 ^ 0xff) & 0x77 | bVar7 & 0x88) ^ 0x77 | bVar4 ^ 0xff;
        puVar25[lVar19] =
             (bVar7 & 0xef | (bVar7 ^ 0xff) & 0x10) ^ (~bVar6 & 0xef | bVar6 & 0x10) |
             (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        if (((iVar17 * (iVar17 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00107e98:
        bVar7 = (&DAT_001016e8)[lVar19];
        bVar10 = cVar9 * '\x11' + 0x52;
        uVar1 = (bVar7 ^ 0xffffffcb) & (uint)bVar7;
        bVar6 = (bVar10 ^ 0xcb) & bVar10;
        bVar5 = (byte)uVar1;
        bVar8 = ~bVar5;
        bVar6 = (bVar10 | 0x34) & 0xeb ^ ((bVar6 ^ 0xff) & 0xeb | bVar6 & 0x14) |
                (bVar10 | 0x34 | bVar6 ^ 0xff) ^ 0xff;
        bVar7 = (bVar7 | 0x34) & 0xcf ^ (bVar8 & 0xc0 | bVar8 & 0xf | (byte)((uVar1 >> 4 & 3) << 4))
                | (bVar7 | 0x34 | bVar5 ^ 0xff) ^ 0xff;
        bVar7 = bVar7 & (bVar6 ^ 0xff) | bVar6 & (bVar7 ^ 0xff);
        bVar6 = (bVar7 ^ ((bVar4 ^ 0xff) & 0xee | bVar4 & 0x11) ^ 0xff ^ 0x11) & bVar7;
        bVar7 = ((bVar7 ^ 0xff) & 0x77 | bVar7 & 0x88) ^ 0x77 | bVar4 ^ 0xff;
        puVar25[lVar19] =
             (bVar7 & 0xef | (bVar7 ^ 0xff) & 0x10) ^ (~bVar6 & 0xef | bVar6 & 0x10) |
             (bVar7 | bVar6 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    lVar19 = lVar21;
  } while (lVar21 != 0x27);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
  goto LAB_00107fb4;
  while( true ) {
    lVar19 = *param_1;
    puVar18[-0x159] = 0;
    uVar16 = (**(code **)(lVar19 + 0x538))(param_1,puVar25);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00107fb4:
    lVar19 = *param_1;
    puVar18[-0x159] = 0;
    (**(code **)(lVar19 + 0x538))(param_1,puVar25);
  }
  lVar19 = 0;
  do {
    puVar25[lVar19] = 0;
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x80);
  uVar28 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
  goto LAB_001080f4;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_001080ac;
    while( true ) {
      lVar19 = FUN_00125094(param_1,uVar14,uVar15,uVar16);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar16);
      puVar13 = local_70;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_001080ac:
      FUN_00125094(param_1,uVar14,uVar15,uVar16);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar16);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_001080f4:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_00108d4c;
    while( true ) {
      FUN_00125094(param_1,uVar14,uVar15,uVar16);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar16);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00108d4c:
      FUN_00125094(param_1,uVar14,uVar15,uVar16);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar16);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  if (lVar19 != 0) {
    uVar28 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    uVar28 = (undefined4)DAT_00101390;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_001081f0;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_001081c4;
      while( true ) {
        iVar20 = *(int *)puVar11;
        *(undefined1 *)(puVar13 + 1) = 0;
        *puVar13 = uVar28;
        puVar24 = local_70;
        if (((iVar20 * (iVar20 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_001081c4:
        *(undefined1 *)(puVar13 + 1) = 0;
        *puVar13 = uVar28;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_001081f0:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00108da0;
      while( true ) {
        iVar20 = *(int *)puVar11;
        *(undefined1 *)(puVar13 + 1) = 0;
        *puVar13 = uVar28;
        if (((iVar20 * (iVar20 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00108da0:
        *(undefined1 *)(puVar13 + 1) = 0;
        *puVar13 = uVar28;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    iVar20 = 0x5a3cdf6b;
    lVar21 = 0;
    do {
      uVar28 = *(undefined4 *)puVar11;
      do {
        if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar12);
      iVar20 = iVar20 * 0x41c64e6d + 0x3039;
      iVar17 = (int)lVar21;
      bVar4 = (byte)((uint)iVar20 >> 0x10);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_0010850c;
      while( true ) {
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
        goto LAB_0010841c;
        while( true ) {
          bVar7 = (&DAT_00101720)[lVar21];
          uVar1 = iVar17 * 0x11 + 0x41;
          bVar6 = (bVar4 ^ 0xff) & 0x6b | bVar4 & 0x94;
          bVar5 = (bVar4 ^ 0xc1) & bVar4;
          uVar2 = ((uint)bVar7 ^ ~uVar1 ^ 0xffffffff) & (uint)bVar7;
          uVar1 = (uVar1 ^ ((bVar7 ^ 0xffffffff) & 0xffffffc2 | bVar7 & 0x3d) ^ 0xffffffff ^ 0x3d) &
                  uVar1;
          bVar7 = (bVar6 ^ 0xaa) & (bVar6 ^ 0x94);
          uVar1 = ((uVar2 ^ 0xffffffff) & 0x66 | uVar2 & 0x99999999) ^
                  ((uVar1 ^ 0xffffffff) & 0x66 | uVar1 & 0xffffff99) |
                  (~uVar2 | uVar1 ^ 0xffffffff) ^ 0xffffffff;
          bVar6 = ~(byte)uVar1;
          iVar3 = *(int *)puVar11;
          bVar8 = (byte)((uVar1 >> 1 & 0x1f) << 1);
          bVar7 = ((bVar7 ^ 0xff) & 0xf4 | bVar7 & 0xb) ^ ((bVar5 ^ 0xff) & 0xf4 | bVar5 & 0xb) |
                  (~bVar7 | bVar5 ^ 0xff) ^ 0xff;
          lVar22 = lVar21 + 1;
          puVar23[lVar21] =
               (((bVar6 & 0xc0 | bVar8) ^ 0xff) & 0xd2 | bVar6 & 1 | bVar8 & 0x2d) ^
               ((bVar7 ^ 0xff) & 0xd2 | bVar7 & 0x2d);
          if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0010841c:
          bVar7 = (&DAT_00101720)[lVar21];
          uVar1 = iVar17 * 0x11 + 0x41;
          uVar2 = ((uint)bVar7 ^ ~uVar1 ^ 0xffffffff) & (uint)bVar7;
          bVar6 = (bVar4 ^ 0xff) & 0x6b | bVar4 & 0x94;
          uVar1 = (uVar1 ^ ((bVar7 ^ 0xffffffff) & 0xffffffc2 | bVar7 & 0x3d) ^ 0xffffffff ^ 0x3d) &
                  uVar1;
          bVar5 = (bVar4 ^ 0xc1) & bVar4;
          uVar1 = ((uVar2 ^ 0xffffffff) & 0x66 | uVar2 & 0x99999999) ^
                  ((uVar1 ^ 0xffffffff) & 0x66 | uVar1 & 0xffffff99) |
                  (~uVar2 | uVar1 ^ 0xffffffff) ^ 0xffffffff;
          bVar7 = (bVar6 ^ 0xaa) & (bVar6 ^ 0x94);
          bVar6 = ~(byte)uVar1;
          bVar8 = (byte)((uVar1 >> 1 & 0x1f) << 1);
          bVar7 = ((bVar7 ^ 0xff) & 0xf4 | bVar7 & 0xb) ^ ((bVar5 ^ 0xff) & 0xf4 | bVar5 & 0xb) |
                  (~bVar7 | bVar5 ^ 0xff) ^ 0xff;
          puVar23[lVar21] =
               (((bVar6 & 0xc0 | bVar8) ^ 0xff) & 0xd2 | bVar6 & 1 | bVar8 & 0x2d) ^
               ((bVar7 ^ 0xff) & 0xd2 | bVar7 & 0x2d);
        }
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0010850c:
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
        goto LAB_00108638;
        while( true ) {
          bVar7 = (&DAT_00101720)[lVar21];
          iVar3 = *(int *)puVar11;
          uVar1 = iVar17 * 0x11 + 0x41;
          uVar2 = ((uint)bVar7 ^ ~uVar1 ^ 0xffffffff) & (uint)bVar7;
          bVar6 = (bVar4 ^ 0xff) & 0x6b | bVar4 & 0x94;
          uVar1 = (uVar1 ^ ((bVar7 ^ 0xffffffff) & 0xffffffc2 | bVar7 & 0x3d) ^ 0xffffffff ^ 0x3d) &
                  uVar1;
          bVar5 = (bVar4 ^ 0xc1) & bVar4;
          uVar1 = ((uVar2 ^ 0xffffffff) & 0x66 | uVar2 & 0x99999999) ^
                  ((uVar1 ^ 0xffffffff) & 0x66 | uVar1 & 0xffffff99) |
                  (~uVar2 | uVar1 ^ 0xffffffff) ^ 0xffffffff;
          bVar7 = (bVar6 ^ 0xaa) & (bVar6 ^ 0x94);
          bVar6 = ~(byte)uVar1;
          bVar8 = (byte)((uVar1 >> 1 & 0x1f) << 1);
          bVar7 = ((bVar7 ^ 0xff) & 0xf4 | bVar7 & 0xb) ^ ((bVar5 ^ 0xff) & 0xf4 | bVar5 & 0xb) |
                  (~bVar7 | bVar5 ^ 0xff) ^ 0xff;
          puVar23[lVar21] =
               (((bVar6 & 0xc0 | bVar8) ^ 0xff) & 0xd2 | bVar6 & 1 | bVar8 & 0x2d) ^
               ((bVar7 ^ 0xff) & 0xd2 | bVar7 & 0x2d);
          if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00108638:
          bVar7 = (&DAT_00101720)[lVar21];
          uVar1 = iVar17 * 0x11 + 0x41;
          uVar2 = ((uint)bVar7 ^ ~uVar1 ^ 0xffffffff) & (uint)bVar7;
          bVar6 = (bVar4 ^ 0xff) & 0x6b | bVar4 & 0x94;
          uVar1 = (uVar1 ^ ((bVar7 ^ 0xffffffff) & 0xffffffc2 | bVar7 & 0x3d) ^ 0xffffffff ^ 0x3d) &
                  uVar1;
          bVar5 = (bVar4 ^ 0xc1) & bVar4;
          uVar1 = ((uVar2 ^ 0xffffffff) & 0x66 | uVar2 & 0x99999999) ^
                  ((uVar1 ^ 0xffffffff) & 0x66 | uVar1 & 0xffffff99) |
                  (~uVar2 | uVar1 ^ 0xffffffff) ^ 0xffffffff;
          bVar7 = (bVar6 ^ 0xaa) & (bVar6 ^ 0x94);
          bVar6 = ~(byte)uVar1;
          bVar8 = (byte)((uVar1 >> 1 & 0x1f) << 1);
          bVar7 = ((bVar7 ^ 0xff) & 0xf4 | bVar7 & 0xb) ^ ((bVar5 ^ 0xff) & 0xf4 | bVar5 & 0xb) |
                  (~bVar7 | bVar5 ^ 0xff) ^ 0xff;
          puVar23[lVar21] =
               (((bVar6 & 0xc0 | bVar8) ^ 0xff) & 0xd2 | bVar6 & 1 | bVar8 & 0x2d) ^
               ((bVar7 ^ 0xff) & 0xd2 | bVar7 & 0x2d);
        }
      }
      do {
        if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar12);
      lVar21 = lVar22;
    } while (lVar22 != 0x1c);
    uVar28 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    local_80 = lVar19;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_001087f0;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_001087b0;
      while( true ) {
        lVar21 = *param_1;
        puVar23[0x1c] = 0;
        uVar15 = (**(code **)(lVar21 + 0x388))(param_1,lVar19,puVar24,puVar23);
        uVar14 = local_88;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_001087b0:
        lVar21 = *param_1;
        puVar23[0x1c] = 0;
        (**(code **)(lVar21 + 0x388))(param_1,lVar19,puVar24,puVar23);
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_001087f0:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00108dec;
      while( true ) {
        lVar21 = *param_1;
        puVar23[0x1c] = 0;
        (**(code **)(lVar21 + 0x388))(param_1,lVar19,puVar24,puVar23);
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00108dec:
        lVar21 = *param_1;
        puVar23[0x1c] = 0;
        (**(code **)(lVar21 + 0x388))(param_1,lVar19,puVar24,puVar23);
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    lVar21 = 0x60;
    do {
      uVar28 = *(undefined4 *)puVar11;
      do {
        if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar12);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_0010891c;
      while( true ) {
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
        goto LAB_001088f8;
        while( true ) {
          *(undefined1 *)puVar24 = 0;
          lVar22 = lVar21 + -1;
          if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10))
          break;
LAB_001088f8:
          *(undefined1 *)puVar24 = 0;
        }
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0010891c:
        *(undefined1 *)puVar24 = 0;
      }
      do {
        if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar12);
      lVar21 = lVar22;
      puVar24 = (undefined4 *)((long)puVar24 + 1);
    } while (lVar22 != 0);
    lVar21 = 0xa0;
    do {
      uVar28 = *(undefined4 *)puVar11;
      do {
        if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar12);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00108a04;
      while( true ) {
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
        goto LAB_001089e0;
        while( true ) {
          *puVar23 = 0;
          lVar22 = lVar21 + -1;
          if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10))
          break;
LAB_001089e0:
          *puVar23 = 0;
        }
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00108a04:
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
        goto LAB_00108a64;
        while ((*puVar23 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
               (9 < *(int *)puVar12))) {
LAB_00108a64:
          *puVar23 = 0;
        }
      }
      do {
        if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar12);
      lVar21 = lVar22;
      puVar23 = puVar23 + 1;
    } while (lVar22 != 0);
    uVar28 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_00108ae4;
    while ((FUN_00125364(param_1,lVar19,uVar15,uVar14),
           (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *(int *)puVar12))) {
LAB_00108ae4:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00108e40;
      while ((FUN_00125364(param_1,lVar19,uVar15,uVar14),
             (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *(int *)puVar12))) {
LAB_00108e40:
        FUN_00125364(param_1,lVar19,uVar15,uVar14);
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
  }
  uVar28 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
LAB_00108b58:
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar12) goto LAB_00108b58;
    }
    uVar28 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) {
      do {
        if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *(int *)puVar12);
      return;
    }
  } while( true );
}


