// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 0011ef7c; body: [[0011ef7c, 00121757]]

bool FUN_0011ef7c(long *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  undefined1 *puVar27;
  char *pcVar28;
  long *plVar29;
  undefined4 uVar30;
  long local_80;
  char *local_78;
  long local_70;
  undefined1 *local_68;
  
  puVar10 = PTR_y_46_0012a700;
  puVar9 = PTR_x_45_0012a6f8;
  uVar30 = *(undefined4 *)PTR_x_45_0012a6f8;
  do {
    if ((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_46_0012a700);
  plVar19 = &local_80;
  if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) != 0) &&
     (plVar19 = &local_80, plVar29 = &local_80, 9 < *(int *)PTR_y_46_0012a700)) goto LAB_0011f0c0;
  while( true ) {
    if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) != 0) &&
       (plVar29 = plVar19, 9 < *(int *)PTR_y_46_0012a700)) goto LAB_0011f068;
    while( true ) {
      local_78 = (char *)((long)plVar19 + -0x80);
      local_68 = (undefined1 *)((long)plVar19 + -0x100);
      puVar26 = (undefined4 *)((long)plVar19 + -0x160);
      puVar25 = (undefined1 *)((long)plVar19 + -0x200);
      pcVar28 = (char *)((long)plVar19 + -0x260);
      puVar27 = (undefined1 *)((long)plVar19 + -0x300);
      plVar29 = (long *)((long)plVar19 + -0x380);
      if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_46_0012a700 < 10)) break;
LAB_0011f068:
      plVar19 = (long *)((long)plVar29 + -0x380);
    }
    if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_46_0012a700 < 10)) break;
LAB_0011f0c0:
    plVar19 = plVar29;
    if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_46_0012a700)) goto LAB_0011f588;
    while ((plVar19 = (long *)((long)plVar19 + -0x380),
           (*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_46_0012a700))) {
LAB_0011f588:
      plVar19 = (long *)((long)plVar19 + -0x380);
    }
  }
  iVar18 = 0x5a3ccf6f;
  lVar20 = 0;
  do {
    uVar30 = *(undefined4 *)PTR_x_45_0012a6f8;
    do {
      if ((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_46_0012a700);
    iVar18 = iVar18 * 0x41c64e6d + 0x3039;
    iVar13 = (int)lVar20;
    bVar5 = (byte)((uint)iVar18 >> 0x10);
    if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_46_0012a700)) goto LAB_0011f344;
    while( true ) {
      if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_46_0012a700)) goto LAB_0011f26c;
      while( true ) {
        bVar3 = (&DAT_00101588)[lVar20];
        uVar1 = iVar13 * 0x11 + 0x51;
        uVar4 = ~uVar1;
        bVar6 = (byte)uVar1;
        bVar7 = bVar6 & 0xc0 | bVar6 & 3 | (byte)((uVar4 >> 2 & 0xf) << 2);
        bVar3 = ((bVar3 ^ 0xff) & 2 | bVar3 & 0x4c) ^ 0x4c | bVar3 & 0xb1;
        bVar6 = ((bVar7 ^ 8) & 0x68 | 0x20 | (bVar7 ^ 2) & 6) ^
                (((byte)uVar4 | 0xdf) & 0x68 | bVar6 & 0x91);
        bVar6 = bVar3 & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xff);
        iVar2 = *(int *)PTR_x_45_0012a6f8;
        bVar3 = bVar6 | bVar5 ^ 0xff;
        bVar6 = ((bVar5 ^ 0xff) & 0x98 | bVar5 & 0x67) ^ 0x98 | bVar6 ^ 0xff;
        *(byte *)((long)plVar29 + lVar20) =
             (bVar3 & 0x30 | ~bVar3 & 0xcf) ^ (bVar6 & 0x30 | ~bVar6 & 0xcf) |
             (bVar3 | bVar6) ^ 0xff;
        lVar21 = lVar20 + 1;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_46_0012a700 < 10)) break;
LAB_0011f26c:
        bVar3 = (&DAT_00101588)[lVar20];
        uVar1 = iVar13 * 0x11 + 0x51;
        uVar4 = ~uVar1;
        bVar6 = (byte)uVar1;
        bVar7 = bVar6 & 0xc0 | bVar6 & 3 | (byte)((uVar4 >> 2 & 0xf) << 2);
        bVar6 = ((bVar7 ^ 8) & 0x68 | 0x20 | (bVar7 ^ 2) & 6) ^
                (((byte)uVar4 | 0xdf) & 0x68 | bVar6 & 0x91);
        bVar3 = ((bVar3 ^ 0xff) & 2 | bVar3 & 0x4c) ^ 0x4c | bVar3 & 0xb1;
        bVar6 = bVar3 & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xff);
        bVar3 = bVar6 | bVar5 ^ 0xff;
        bVar6 = ((bVar5 ^ 0xff) & 0x98 | bVar5 & 0x67) ^ 0x98 | bVar6 ^ 0xff;
        *(byte *)((long)plVar29 + lVar20) =
             (bVar3 & 0x30 | ~bVar3 & 0xcf) ^ (bVar6 & 0x30 | ~bVar6 & 0xcf) |
             (bVar3 | bVar6) ^ 0xff;
      }
      if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_46_0012a700 < 10)) break;
LAB_0011f344:
      if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_46_0012a700)) goto LAB_0011f458;
      while( true ) {
        bVar3 = (&DAT_00101588)[lVar20];
        uVar1 = iVar13 * 0x11 + 0x51;
        uVar4 = ~uVar1;
        bVar6 = (byte)uVar1;
        bVar7 = bVar6 & 0xc0 | bVar6 & 3 | (byte)((uVar4 >> 2 & 0xf) << 2);
        bVar3 = ((bVar3 ^ 0xff) & 2 | bVar3 & 0x4c) ^ 0x4c | bVar3 & 0xb1;
        bVar6 = ((bVar7 ^ 8) & 0x68 | 0x20 | (bVar7 ^ 2) & 6) ^
                (((byte)uVar4 | 0xdf) & 0x68 | bVar6 & 0x91);
        iVar2 = *(int *)PTR_x_45_0012a6f8;
        bVar6 = bVar3 & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xff);
        bVar3 = bVar6 | bVar5 ^ 0xff;
        bVar6 = ((bVar5 ^ 0xff) & 0x98 | bVar5 & 0x67) ^ 0x98 | bVar6 ^ 0xff;
        *(byte *)((long)plVar29 + lVar20) =
             (bVar3 & 0x30 | ~bVar3 & 0xcf) ^ (bVar6 & 0x30 | ~bVar6 & 0xcf) |
             (bVar3 | bVar6) ^ 0xff;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_46_0012a700 < 10)) break;
LAB_0011f458:
        bVar3 = (&DAT_00101588)[lVar20];
        uVar1 = iVar13 * 0x11 + 0x51;
        uVar4 = ~uVar1;
        bVar6 = (byte)uVar1;
        bVar7 = bVar6 & 0xc0 | bVar6 & 3 | (byte)((uVar4 >> 2 & 0xf) << 2);
        bVar6 = ((bVar7 ^ 8) & 0x68 | 0x20 | (bVar7 ^ 2) & 6) ^
                (((byte)uVar4 | 0xdf) & 0x68 | bVar6 & 0x91);
        bVar3 = ((bVar3 ^ 0xff) & 2 | bVar3 & 0x4c) ^ 0x4c | bVar3 & 0xb1;
        bVar6 = bVar3 & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xff);
        bVar3 = bVar6 | bVar5 ^ 0xff;
        bVar6 = ((bVar5 ^ 0xff) & 0x98 | bVar5 & 0x67) ^ 0x98 | bVar6 ^ 0xff;
        *(byte *)((long)plVar29 + lVar20) =
             (bVar3 & 0x30 | ~bVar3 & 0xcf) ^ (bVar6 & 0x30 | ~bVar6 & 0xcf) |
             (bVar3 | bVar6) ^ 0xff;
      }
    }
    do {
      if ((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_46_0012a700);
    lVar20 = lVar21;
  } while (lVar21 != 0x12);
  if (((*(int *)PTR_x_45_0012a6f8 * (*(int *)PTR_x_45_0012a6f8 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_46_0012a700)) goto LAB_0011f5fc;
  while( true ) {
    lVar20 = *param_1;
    *(undefined1 *)((long)plVar19 + -0x36e) = 0;
    local_70 = (**(code **)(lVar20 + 0x30))(param_1,plVar29);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011f5fc:
    lVar20 = *param_1;
    *(undefined1 *)((long)plVar19 + -0x36e) = 0;
    (**(code **)(lVar20 + 0x30))(param_1,plVar29);
  }
  lVar20 = 0x80;
  do {
    uVar30 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_0011f708;
    while( true ) {
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_0011f6e4;
      while( true ) {
        *(undefined1 *)plVar29 = 0;
        lVar21 = lVar20 + -1;
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011f6e4:
        *(undefined1 *)plVar29 = 0;
      }
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011f708:
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_0011f768;
      while ((*(undefined1 *)plVar29 = 0, (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar10))) {
LAB_0011f768:
        *(undefined1 *)plVar29 = 0;
      }
    }
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    lVar20 = lVar21;
    plVar29 = (long *)((long)plVar29 + 1);
  } while (lVar21 != 0);
  uVar30 = *(undefined4 *)puVar9;
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar10);
  if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
  goto LAB_0011f800;
  do {
    uVar30 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011f800:
    uVar30 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
  } while( true );
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar10);
  if (local_70 != 0) {
    uVar30 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_0011f914;
    while( true ) {
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_0011f8e0;
      while( true ) {
        iVar18 = *(int *)puVar9;
        *(undefined1 *)((long)plVar19 + -0x256) = 0;
        *(undefined8 *)pcVar28 = s_getDefaujava_io_nce_00101378._0_8_;
        *(undefined2 *)((long)plVar19 + -600) = 0x746c;
        if (((iVar18 * (iVar18 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011f8e0:
        *(undefined1 *)((long)plVar19 + -0x256) = 0;
        *(undefined2 *)((long)plVar19 + -600) = 0x746c;
        *(undefined8 *)pcVar28 = s_getDefaujava_io_nce_00101378._0_8_;
      }
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011f914:
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_0011fc80;
      while( true ) {
        iVar18 = *(int *)puVar9;
        *(undefined1 *)((long)plVar19 + -0x256) = 0;
        *(undefined8 *)pcVar28 = s_getDefaujava_io_nce_00101378._0_8_;
        *(undefined2 *)((long)plVar19 + -600) = 0x746c;
        if (((iVar18 * (iVar18 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011fc80:
        *(undefined1 *)((long)plVar19 + -0x256) = 0;
        *(undefined2 *)((long)plVar19 + -600) = 0x746c;
        *(undefined8 *)pcVar28 = s_getDefaujava_io_nce_00101378._0_8_;
      }
    }
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    lVar20 = 0;
    iVar18 = 0x5a3cef63;
    do {
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      iVar18 = iVar18 * 0x41c64e6d + 0x3039;
      bVar5 = (byte)((uint)iVar18 >> 0x10);
      cVar12 = (char)lVar20;
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_0011faac;
      while( true ) {
        bVar3 = (&DAT_001014a8)[lVar20];
        bVar7 = cVar12 * '\x11' + 0x71;
        bVar6 = bVar7 | bVar3 ^ 0xff;
        bVar7 = (bVar7 ^ 0xa6 ^ ((bVar3 ^ 0xff) & 0xa6 | bVar3 & 0x59)) & bVar7;
        iVar13 = *(int *)puVar9;
        bVar3 = (bVar6 & 0x49 | (bVar6 ^ 0xff) & 0xb6) ^ ((bVar7 ^ 0xff) & 0x49 | bVar7 & 0xb6) |
                (bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar27[lVar20] =
             (bVar5 ^ (~bVar3 & 0x87 | bVar3 & 0x78) ^ 0xff ^ 0x78) & bVar5 |
             (((bVar5 ^ 0xff) & 0x9a | bVar5 & 0x65) ^ 0x9a | bVar3 ^ 0xff) ^ 0xff;
        lVar21 = local_70;
        if (((iVar13 * (iVar13 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011faac:
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_0011fba4;
        while( true ) {
          bVar3 = (&DAT_001014a8)[lVar20];
          bVar7 = cVar12 * '\x11' + 0x71;
          bVar6 = bVar7 | bVar3 ^ 0xff;
          bVar7 = (bVar7 ^ 0xa6 ^ ((bVar3 ^ 0xff) & 0xa6 | bVar3 & 0x59)) & bVar7;
          iVar13 = *(int *)puVar9;
          bVar3 = (bVar6 & 0x49 | (bVar6 ^ 0xff) & 0xb6) ^ ((bVar7 ^ 0xff) & 0x49 | bVar7 & 0xb6) |
                  (bVar6 | bVar7 ^ 0xff) ^ 0xff;
          puVar27[lVar20] =
               (bVar5 ^ (~bVar3 & 0x87 | bVar3 & 0x78) ^ 0xff ^ 0x78) & bVar5 |
               (((bVar5 ^ 0xff) & 0x9a | bVar5 & 0x65) ^ 0x9a | bVar3 ^ 0xff) ^ 0xff;
          if (((iVar13 * (iVar13 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011fba4:
          bVar3 = (&DAT_001014a8)[lVar20];
          bVar7 = cVar12 * '\x11' + 0x71;
          bVar6 = bVar7 | bVar3 ^ 0xff;
          bVar7 = (bVar7 ^ 0xa6 ^ ((bVar3 ^ 0xff) & 0xa6 | bVar3 & 0x59)) & bVar7;
          bVar3 = (bVar6 & 0x49 | (bVar6 ^ 0xff) & 0xb6) ^ ((bVar7 ^ 0xff) & 0x49 | bVar7 & 0xb6) |
                  (bVar6 | bVar7 ^ 0xff) ^ 0xff;
          puVar27[lVar20] =
               (bVar5 ^ (~bVar3 & 0x87 | bVar3 & 0x78) ^ 0xff ^ 0x78) & bVar5 |
               (((bVar5 ^ 0xff) & 0x9a | bVar5 & 0x65) ^ 0x9a | bVar3 ^ 0xff) ^ 0xff;
        }
      }
      lVar20 = lVar20 + 1;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
    } while (lVar20 != 0x16);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_0011fcd8;
    while( true ) {
      lVar20 = *param_1;
      *(undefined1 *)((long)plVar19 + -0x2ea) = 0;
      lVar20 = (**(code **)(lVar20 + 0x388))(param_1,lVar21,pcVar28,puVar27);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011fcd8:
      lVar20 = *param_1;
      *(undefined1 *)((long)plVar19 + -0x2ea) = 0;
      (**(code **)(lVar20 + 0x388))(param_1,lVar21,pcVar28,puVar27);
    }
    lVar23 = 0x60;
    do {
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_0011fd90;
      while( true ) {
        *pcVar28 = '\0';
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011fd90:
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_0011fe08;
        while ((*pcVar28 = '\0', (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 &&
               (9 < *(int *)puVar10))) {
LAB_0011fe08:
          *pcVar28 = '\0';
        }
      }
      lVar23 = lVar23 + -1;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      pcVar28 = pcVar28 + 1;
    } while (lVar23 != 0);
    lVar23 = 0xa0;
    do {
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_0011fed0;
      while( true ) {
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_0011feac;
        while( true ) {
          *puVar27 = 0;
          lVar24 = lVar23 + -1;
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011feac:
          *puVar27 = 0;
        }
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0011fed0:
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_0011ff30;
        while ((*puVar27 = 0, (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 &&
               (9 < *(int *)puVar10))) {
LAB_0011ff30:
          *puVar27 = 0;
        }
      }
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      lVar23 = lVar24;
      puVar27 = puVar27 + 1;
    } while (lVar24 != 0);
    uVar30 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_0011ff98;
    do {
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10))
      goto LAB_0011ffc4;
LAB_0011ff98:
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
    } while( true );
  }
  goto LAB_00120bb0;
LAB_0011ffc4:
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar10);
  if (lVar20 != 0) {
    uVar30 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_001200a0;
    while( true ) {
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00120070;
      while ((local_80 = FUN_00125634(param_1,lVar21,lVar20),
             (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 && (9 < *(int *)puVar10))) {
LAB_00120070:
        FUN_00125634(param_1,lVar21,lVar20);
      }
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001200a0:
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00120158;
      while ((FUN_00125634(param_1,lVar21,lVar20),
             (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 && (9 < *(int *)puVar10))) {
LAB_00120158:
        FUN_00125634(param_1,lVar21,lVar20);
      }
    }
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (local_80 != 0) {
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      uVar30 = (undefined4)DAT_001013e0;
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_001201e4;
      while( true ) {
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_001201b4;
        while( true ) {
          iVar18 = *(int *)puVar9;
          *puVar26 = uVar30;
          *(undefined2 *)((long)plVar19 + -0x15c) = 0x44;
          if (((iVar18 * (iVar18 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001201b4:
          *(undefined2 *)((long)plVar19 + -0x15c) = 0x44;
          *puVar26 = uVar30;
        }
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001201e4:
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_001207a0;
        while( true ) {
          iVar18 = *(int *)puVar9;
          *puVar26 = uVar30;
          *(undefined2 *)((long)plVar19 + -0x15c) = 0x44;
          if (((iVar18 * (iVar18 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001207a0:
          *(undefined2 *)((long)plVar19 + -0x15c) = 0x44;
          *puVar26 = uVar30;
        }
      }
      iVar18 = 0x5a3c787e;
      lVar20 = 0;
      do {
        uVar30 = *(undefined4 *)puVar9;
        do {
          if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
        } while (9 < *(int *)puVar10);
        iVar13 = iVar18 * 0x41c64e6d;
        cVar12 = (char)lVar20;
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_00120518;
        while( true ) {
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
          goto LAB_00120420;
          while( true ) {
            bVar3 = (&DAT_001015a8)[lVar20];
            bVar6 = cVar12 * '\x11' - 0x1a;
            iVar18 = iVar13 + 0x3039;
            bVar5 = ~bVar3 & 0xe0 | ~bVar3 & 0xf | (bVar3 >> 4 & 1) << 4;
            bVar6 = ((bVar6 ^ 0xff) & 0x4c | bVar6 & 0x80) ^ 0x80 | (bVar6 ^ 0xcc) & bVar6;
            bVar5 = (bVar5 ^ 0x23) & (bVar5 ^ 0x10) | (bVar3 ^ 0xcc) & bVar3;
            bVar3 = (byte)((uint)iVar18 >> 0x10);
            bVar6 = bVar5 & (bVar6 ^ 0xff) | bVar6 & (bVar5 ^ 0xff);
            bVar5 = (bVar3 ^ 0xff) & 0x8d | bVar3 & 0x72;
            bVar3 = (bVar5 ^ 0xc5) & (bVar5 ^ 0x72) | bVar3 & 0xb7;
            iVar2 = *(int *)puVar9;
            bVar5 = ((bVar6 ^ 0xff) & 0x40 | bVar6 & 8) ^ 8 | (bVar6 ^ 0x48) & bVar6;
            lVar21 = lVar20 + 1;
            puVar25[lVar20] =
                 ((bVar5 ^ 0xff) & 0x45 | bVar5 & 0xba) ^ ((bVar3 ^ 0xff) & 0x45 | bVar3 & 0xba);
            lVar24 = local_70;
            lVar23 = local_80;
            if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00120420:
            bVar3 = (&DAT_001015a8)[lVar20];
            bVar6 = cVar12 * '\x11' - 0x1a;
            bVar5 = ~bVar3 & 0xe0 | ~bVar3 & 0xf | (bVar3 >> 4 & 1) << 4;
            bVar7 = ((bVar6 ^ 0xff) & 0x4c | bVar6 & 0x80) ^ 0x80 | (bVar6 ^ 0xcc) & bVar6;
            bVar5 = (bVar5 ^ 0x23) & (bVar5 ^ 0x10) | (bVar3 ^ 0xcc) & bVar3;
            bVar6 = (byte)((uint)(iVar13 + 0x3039) >> 0x10);
            bVar5 = bVar5 & (bVar7 ^ 0xff) | bVar7 & (bVar5 ^ 0xff);
            bVar3 = (bVar6 ^ 0xff) & 0x8d | bVar6 & 0x72;
            bVar5 = ((bVar5 ^ 0xff) & 0x40 | bVar5 & 8) ^ 8 | (bVar5 ^ 0x48) & bVar5;
            bVar3 = (bVar3 ^ 0xc5) & (bVar3 ^ 0x72) | bVar6 & 0xb7;
            puVar25[lVar20] =
                 ((bVar5 ^ 0xff) & 0x45 | bVar5 & 0xba) ^ ((bVar3 ^ 0xff) & 0x45 | bVar3 & 0xba);
          }
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00120518:
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
          goto LAB_0012064c;
          while( true ) {
            bVar3 = (&DAT_001015a8)[lVar20];
            bVar6 = cVar12 * '\x11' - 0x1a;
            bVar5 = ~bVar3 & 0xe0 | ~bVar3 & 0xf | (bVar3 >> 4 & 1) << 4;
            bVar7 = ((bVar6 ^ 0xff) & 0x4c | bVar6 & 0x80) ^ 0x80 | (bVar6 ^ 0xcc) & bVar6;
            bVar5 = (bVar5 ^ 0x23) & (bVar5 ^ 0x10) | (bVar3 ^ 0xcc) & bVar3;
            bVar6 = (byte)((uint)(iVar13 + 0x3039) >> 0x10);
            bVar5 = bVar5 & (bVar7 ^ 0xff) | bVar7 & (bVar5 ^ 0xff);
            iVar18 = *(int *)puVar9;
            bVar3 = (bVar6 ^ 0xff) & 0x8d | bVar6 & 0x72;
            bVar5 = ((bVar5 ^ 0xff) & 0x40 | bVar5 & 8) ^ 8 | (bVar5 ^ 0x48) & bVar5;
            bVar3 = (bVar3 ^ 0xc5) & (bVar3 ^ 0x72) | bVar6 & 0xb7;
            puVar25[lVar20] =
                 ((bVar5 ^ 0xff) & 0x45 | bVar5 & 0xba) ^ ((bVar3 ^ 0xff) & 0x45 | bVar3 & 0xba);
            if (((iVar18 * (iVar18 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0012064c:
            bVar3 = (&DAT_001015a8)[lVar20];
            bVar6 = cVar12 * '\x11' - 0x1a;
            bVar5 = ~bVar3 & 0xe0 | ~bVar3 & 0xf | (bVar3 >> 4 & 1) << 4;
            bVar7 = ((bVar6 ^ 0xff) & 0x4c | bVar6 & 0x80) ^ 0x80 | (bVar6 ^ 0xcc) & bVar6;
            bVar5 = (bVar5 ^ 0x23) & (bVar5 ^ 0x10) | (bVar3 ^ 0xcc) & bVar3;
            bVar6 = (byte)((uint)(iVar13 + 0x3039) >> 0x10);
            bVar5 = bVar5 & (bVar7 ^ 0xff) | bVar7 & (bVar5 ^ 0xff);
            bVar3 = (bVar6 ^ 0xff) & 0x8d | bVar6 & 0x72;
            bVar5 = ((bVar5 ^ 0xff) & 0x40 | bVar5 & 8) ^ 8 | (bVar5 ^ 0x48) & bVar5;
            bVar3 = (bVar3 ^ 0xc5) & (bVar3 ^ 0x72) | bVar6 & 0xb7;
            puVar25[lVar20] =
                 ((bVar5 ^ 0xff) & 0x45 | bVar5 & 0xba) ^ ((bVar3 ^ 0xff) & 0x45 | bVar3 & 0xba);
          }
        }
        do {
          if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
        } while (9 < *(int *)puVar10);
        lVar20 = lVar21;
      } while (lVar21 != 0x14);
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00120850;
      while( true ) {
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_00120810;
        while( true ) {
          lVar20 = *param_1;
          *(undefined1 *)((long)plVar19 + -0x1ec) = 0;
          lVar20 = (**(code **)(lVar20 + 0x108))(param_1,lVar24,puVar26,puVar25);
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00120810:
          lVar20 = *param_1;
          *(undefined1 *)((long)plVar19 + -0x1ec) = 0;
          (**(code **)(lVar20 + 0x108))(param_1,lVar24,puVar26,puVar25);
        }
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00120850:
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_00120ab4;
        while( true ) {
          lVar20 = *param_1;
          *(undefined1 *)((long)plVar19 + -0x1ec) = 0;
          (**(code **)(lVar20 + 0x108))(param_1,lVar24,puVar26,puVar25);
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00120ab4:
          lVar20 = *param_1;
          *(undefined1 *)((long)plVar19 + -0x1ec) = 0;
          (**(code **)(lVar20 + 0x108))(param_1,lVar24,puVar26,puVar25);
        }
      }
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      lVar21 = 0;
      lVar24 = 0x60;
      do {
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_001208e8;
        while ((*(undefined1 *)((long)puVar26 + lVar21) = 0,
               (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 && (9 < *(int *)puVar10))) {
LAB_001208e8:
          *(undefined1 *)((long)puVar26 + lVar21) = 0;
        }
        lVar24 = lVar24 + -1;
        lVar21 = lVar21 + 1;
      } while (lVar24 != 0);
      lVar21 = 0xa0;
      do {
        uVar30 = *(undefined4 *)puVar9;
        do {
          if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
        } while (9 < *(int *)puVar10);
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_001209c8;
        while( true ) {
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
          goto LAB_001209a4;
          while( true ) {
            *puVar25 = 0;
            lVar24 = lVar21 + -1;
            if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10))
            break;
LAB_001209a4:
            *puVar25 = 0;
          }
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001209c8:
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
          goto LAB_00120a28;
          while ((*puVar25 = 0, (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 &&
                 (9 < *(int *)puVar10))) {
LAB_00120a28:
            *puVar25 = 0;
          }
        }
        do {
          if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
        } while (9 < *(int *)puVar10);
        lVar21 = lVar24;
        puVar25 = puVar25 + 1;
      } while (lVar24 != 0);
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00120b1c;
      do {
        uVar30 = *(undefined4 *)puVar9;
        do {
          if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
        } while (9 < *(int *)puVar10);
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10))
        goto LAB_00120b48;
LAB_00120b1c:
        uVar30 = *(undefined4 *)puVar9;
        do {
          if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
        } while (9 < *(int *)puVar10);
      } while( true );
    }
  }
  goto LAB_00120bb0;
LAB_00120b48:
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar10);
  if (lVar20 != 0) {
    uVar30 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_00120c68;
    while ((uVar14 = FUN_00125094(param_1,lVar23,lVar20), puVar25 = local_68,
           (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 && (9 < *(int *)puVar10))) {
LAB_00120c68:
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00121120;
      while ((FUN_00125094(param_1,lVar23,lVar20),
             (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 && (9 < *(int *)puVar10))) {
LAB_00121120:
        FUN_00125094(param_1,lVar23,lVar20);
      }
    }
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    iVar18 = 0x5a3c4eb4;
    lVar20 = 0;
    do {
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      iVar18 = iVar18 * 0x41c64e6d + 0x3039;
      iVar13 = (int)lVar20;
      bVar5 = (byte)((uint)iVar18 >> 0x10);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00120f20;
      while( true ) {
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_00120e44;
        while( true ) {
          bVar3 = (&DAT_00101528)[lVar20];
          uVar4 = iVar13 * 0x11 - 0x30;
          uVar1 = (uVar4 ^ 0xffffffa1) & uVar4;
          bVar6 = (byte)uVar4 | 0x5e;
          bVar8 = (byte)uVar1;
          bVar7 = ~bVar8;
          iVar2 = *(int *)puVar9;
          bVar3 = ((bVar3 ^ 0xff) & 0x80 | (((bVar3 ^ 0xff) & 0xa0 | bVar3 & 1) ^ 0x3e) & 0x3f) ^
                  (bVar3 & 0x40 | (~bVar3 | 0xe1) & 0x3f);
          bVar6 = bVar6 & 0xfb ^ (bVar7 & 0xf8 | bVar7 & 3 | (byte)((uVar1 >> 2 & 1) << 2)) |
                  (bVar6 | bVar8 ^ 0xff) ^ 0xff;
          bVar6 = ((bVar6 ^ 0xff) & 0xf5 | bVar6 & 10) ^ ((bVar3 ^ 0xff) & 0xf5 | bVar3 & 10);
          bVar3 = bVar6 | bVar5 ^ 0xff;
          bVar6 = ((bVar5 ^ 0xff) & 0x8d | bVar5 & 0x72) ^ 0x8d | bVar6 ^ 0xff;
          local_68[lVar20] =
               (bVar3 & 0xba | (bVar3 ^ 0xff) & 0x45) ^ (bVar6 & 0xba | (bVar6 ^ 0xff) & 0x45) |
               (bVar3 | bVar6) ^ 0xff;
          lVar21 = lVar20 + 1;
          if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00120e44:
          bVar3 = (&DAT_00101528)[lVar20];
          uVar4 = iVar13 * 0x11 - 0x30;
          uVar1 = (uVar4 ^ 0xffffffa1) & uVar4;
          bVar6 = (byte)uVar4 | 0x5e;
          bVar8 = (byte)uVar1;
          bVar7 = ~bVar8;
          bVar3 = ((bVar3 ^ 0xff) & 0x80 | (((bVar3 ^ 0xff) & 0xa0 | bVar3 & 1) ^ 0x3e) & 0x3f) ^
                  (bVar3 & 0x40 | (~bVar3 | 0xe1) & 0x3f);
          bVar6 = bVar6 & 0xfb ^ (bVar7 & 0xf8 | bVar7 & 3 | (byte)((uVar1 >> 2 & 1) << 2)) |
                  (bVar6 | bVar8 ^ 0xff) ^ 0xff;
          bVar6 = ((bVar6 ^ 0xff) & 0xf5 | bVar6 & 10) ^ ((bVar3 ^ 0xff) & 0xf5 | bVar3 & 10);
          bVar3 = bVar6 | bVar5 ^ 0xff;
          bVar6 = ((bVar5 ^ 0xff) & 0x8d | bVar5 & 0x72) ^ 0x8d | bVar6 ^ 0xff;
          local_68[lVar20] =
               (bVar3 & 0xba | (bVar3 ^ 0xff) & 0x45) ^ (bVar6 & 0xba | (bVar6 ^ 0xff) & 0x45) |
               (bVar3 | bVar6) ^ 0xff;
        }
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00120f20:
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_00121014;
        while( true ) {
          bVar3 = (&DAT_00101528)[lVar20];
          uVar4 = iVar13 * 0x11 - 0x30;
          uVar1 = (uVar4 ^ 0xffffffa1) & uVar4;
          bVar6 = (byte)uVar4 | 0x5e;
          bVar8 = (byte)uVar1;
          bVar7 = ~bVar8;
          iVar2 = *(int *)puVar9;
          bVar3 = ((bVar3 ^ 0xff) & 0x80 | (((bVar3 ^ 0xff) & 0xa0 | bVar3 & 1) ^ 0x3e) & 0x3f) ^
                  (bVar3 & 0x40 | (~bVar3 | 0xe1) & 0x3f);
          bVar6 = bVar6 & 0xfb ^ (bVar7 & 0xf8 | bVar7 & 3 | (byte)((uVar1 >> 2 & 1) << 2)) |
                  (bVar6 | bVar8 ^ 0xff) ^ 0xff;
          bVar6 = ((bVar6 ^ 0xff) & 0xf5 | bVar6 & 10) ^ ((bVar3 ^ 0xff) & 0xf5 | bVar3 & 10);
          bVar3 = bVar6 | bVar5 ^ 0xff;
          bVar6 = ((bVar5 ^ 0xff) & 0x8d | bVar5 & 0x72) ^ 0x8d | bVar6 ^ 0xff;
          local_68[lVar20] =
               (bVar3 & 0xba | (bVar3 ^ 0xff) & 0x45) ^ (bVar6 & 0xba | (bVar6 ^ 0xff) & 0x45) |
               (bVar3 | bVar6) ^ 0xff;
          if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00121014:
          bVar3 = (&DAT_00101528)[lVar20];
          uVar4 = iVar13 * 0x11 - 0x30;
          uVar1 = (uVar4 ^ 0xffffffa1) & uVar4;
          bVar6 = (byte)uVar4 | 0x5e;
          bVar8 = (byte)uVar1;
          bVar7 = ~bVar8;
          bVar3 = ((bVar3 ^ 0xff) & 0x80 | (((bVar3 ^ 0xff) & 0xa0 | bVar3 & 1) ^ 0x3e) & 0x3f) ^
                  (bVar3 & 0x40 | (~bVar3 | 0xe1) & 0x3f);
          bVar6 = bVar6 & 0xfb ^ (bVar7 & 0xf8 | bVar7 & 3 | (byte)((uVar1 >> 2 & 1) << 2)) |
                  (bVar6 | bVar8 ^ 0xff) ^ 0xff;
          bVar6 = ((bVar6 ^ 0xff) & 0xf5 | bVar6 & 10) ^ ((bVar3 ^ 0xff) & 0xf5 | bVar3 & 10);
          bVar3 = bVar6 | bVar5 ^ 0xff;
          bVar6 = ((bVar5 ^ 0xff) & 0x8d | bVar5 & 0x72) ^ 0x8d | bVar6 ^ 0xff;
          local_68[lVar20] =
               (bVar3 & 0xba | (bVar3 ^ 0xff) & 0x45) ^ (bVar6 & 0xba | (bVar6 ^ 0xff) & 0x45) |
               (bVar3 | bVar6) ^ 0xff;
        }
      }
      lVar20 = lVar21;
    } while (lVar21 != 0x10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_001211c0;
    while( true ) {
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00121188;
      while( true ) {
        lVar20 = *param_1;
        puVar25[0x10] = 0;
        uVar15 = (**(code **)(lVar20 + 0x30))(param_1,puVar25);
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00121188:
        lVar20 = *param_1;
        puVar25[0x10] = 0;
        (**(code **)(lVar20 + 0x30))(param_1,puVar25);
      }
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001211c0:
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_001213a8;
      while( true ) {
        lVar20 = *param_1;
        puVar25[0x10] = 0;
        (**(code **)(lVar20 + 0x30))(param_1,puVar25);
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001213a8:
        lVar20 = *param_1;
        puVar25[0x10] = 0;
        (**(code **)(lVar20 + 0x30))(param_1,puVar25);
      }
    }
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    lVar20 = 0x80;
    do {
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_001212bc;
      while( true ) {
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_00121298;
        while( true ) {
          *puVar25 = 0;
          lVar21 = lVar20 + -1;
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00121298:
          *puVar25 = 0;
        }
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001212bc:
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_0012131c;
        while ((*puVar25 = 0, (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 &&
               (9 < *(int *)puVar10))) {
LAB_0012131c:
          *puVar25 = 0;
        }
      }
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      lVar20 = lVar21;
      puVar25 = puVar25 + 1;
    } while (lVar21 != 0);
    uVar30 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_00121428;
    while( true ) {
      uVar16 = FUN_00103b60(param_1,uVar15,&DAT_00101b98,&DAT_00101a90);
      pcVar28 = local_78;
      pcVar22 = *(code **)(*param_1 + 0x538);
      *(undefined8 *)local_78 = s_Asia_MangetFiles__BII_V_00101450._0_8_;
      *(int *)(pcVar28 + 8) = (int)DAT_00101428;
      uVar17 = (*pcVar22)(param_1);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00121428:
      FUN_00103b60(param_1,uVar15,&DAT_00101b98,&DAT_00101a90);
      pcVar28 = local_78;
      pcVar22 = *(code **)(*param_1 + 0x538);
      *(undefined8 *)local_78 = s_Asia_MangetFiles__BII_V_00101450._0_8_;
      *(int *)(pcVar28 + 8) = (int)DAT_00101428;
      (*pcVar22)(param_1);
    }
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    lVar20 = 0x80;
    pcVar28 = local_78;
    do {
      uVar30 = *(undefined4 *)puVar9;
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_0012154c;
      while( true ) {
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_00121528;
        while( true ) {
          *pcVar28 = '\0';
          lVar21 = lVar20 + -1;
          if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00121528:
          *pcVar28 = '\0';
        }
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0012154c:
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
        goto LAB_001215ac;
        while ((*pcVar28 = '\0', (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 &&
               (9 < *(int *)puVar10))) {
LAB_001215ac:
          *pcVar28 = '\0';
        }
      }
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar10);
      lVar20 = lVar21;
      pcVar28 = pcVar28 + 1;
    } while (lVar21 != 0);
    uVar30 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_001216a8;
    while( true ) {
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00121660;
      while( true ) {
        cVar12 = FUN_00125df0(param_1,uVar14,uVar16,uVar17);
        bVar11 = cVar12 != '\0';
        (**(code **)(*param_1 + 0xb8))(param_1,uVar17);
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00121660:
        FUN_00125df0(param_1,uVar14,uVar16,uVar17);
        (**(code **)(*param_1 + 0xb8))(param_1,uVar17);
      }
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001216a8:
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_0012172c;
      while( true ) {
        FUN_00125df0(param_1,uVar14,uVar16,uVar17);
        (**(code **)(*param_1 + 0xb8))(param_1,uVar17);
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_0012172c:
        FUN_00125df0(param_1,uVar14,uVar16,uVar17);
        (**(code **)(*param_1 + 0xb8))(param_1,uVar17);
      }
    }
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    goto LAB_00120bb4;
  }
LAB_00120bb0:
  bVar11 = false;
LAB_00120bb4:
  uVar30 = *(undefined4 *)puVar9;
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar10);
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar10);
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) {
      return bVar11;
    }
  } while (9 < *(int *)puVar10);
  return bVar11;
}


