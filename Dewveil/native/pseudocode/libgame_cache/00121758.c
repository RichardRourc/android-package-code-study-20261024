// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00121758; body: [[00121758, 00124ae7]]

void FUN_00121758(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined4 *local_70;
  undefined8 local_68;
  
  puVar14 = PTR_y_48_0012a710;
  puVar13 = PTR_x_47_0012a708;
  uVar2 = *(undefined4 *)PTR_x_47_0012a708;
  do {
    if ((*(int *)PTR_x_47_0012a708 * (*(int *)PTR_x_47_0012a708 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_48_0012a710);
  puVar22 = auStack_90;
  if (((*(int *)PTR_x_47_0012a708 * (*(int *)PTR_x_47_0012a708 + -1) & 1U) != 0) &&
     (puVar22 = auStack_90, puVar29 = auStack_90, 9 < *(int *)PTR_y_48_0012a710)) goto LAB_001218bc;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) &&
       (puVar29 = puVar22, 9 < *(int *)puVar14)) goto LAB_00121854;
    while( true ) {
      local_70 = (undefined4 *)(puVar22 + -0xe0);
      puVar25 = puVar22 + -0x200;
      puVar28 = puVar22 + -0x260;
      puVar27 = puVar22 + -0x300;
      puVar30 = puVar22 + -0x380;
      puVar29 = puVar22 + -0x400;
      uVar16 = FUN_0011ef7c(param_1);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00121854:
      puVar22 = puVar29 + -0x400;
      FUN_0011ef7c(param_1);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001218bc:
    puVar22 = puVar29;
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_0012476c;
    while( true ) {
      puVar22 = puVar22 + -0x400;
      FUN_0011ef7c(param_1);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_0012476c:
      puVar22 = puVar22 + -0x400;
      FUN_0011ef7c(param_1);
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if ((uVar16 & 1) != 0) {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
LAB_00121934:
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) {
        if (9 < *(int *)puVar14) goto LAB_00121934;
      }
      uVar2 = *(undefined4 *)puVar13;
      do {
        if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
      } while (9 < *(int *)puVar14);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10))
      goto LAB_00121988;
    } while( true );
  }
  goto LAB_00124640;
LAB_00121988:
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar23 = 0;
  iVar15 = 0x5a3c5942;
  local_88 = puVar22 + -0x180;
  local_78 = puVar22 + -0x80;
  do {
    cVar8 = (char)lVar23;
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00121bf0;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00121b20;
      while( true ) {
        bVar5 = (&DAT_00101748)[lVar23];
        bVar10 = cVar8 * '\x11' - 0x39;
        uVar1 = (bVar5 ^ 0xffffffb4) & (uint)bVar5;
        bVar9 = (byte)uVar1;
        bVar11 = ~bVar9;
        bVar5 = ((bVar5 ^ 0xff) & 0x24 | bVar5 & 0x90) ^ 0x6f;
        bVar10 = (bVar10 ^ 0xff) & 0xb4 | bVar10 & 0x4b;
        bVar5 = bVar5 & 0xfd ^ (bVar11 & 0xfc | bVar11 & 1 | (byte)((uVar1 >> 1 & 1) << 1)) |
                (bVar5 | bVar9 ^ 0xff) ^ 0xff;
        iVar21 = iVar15 * 0x41c64e6d + 0x3039;
        bVar10 = bVar5 & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0xff);
        iVar3 = *(int *)puVar13;
        bVar11 = (byte)((uint)iVar21 >> 0x10);
        bVar5 = bVar10 | bVar11 ^ 0xff;
        bVar10 = bVar10 & (bVar10 ^ bVar11 ^ 0xff ^ 0xff);
        puVar29[lVar23] =
             (bVar5 & 0x38 | ~bVar5 & 199) ^ ((bVar10 ^ 0xff) & 0x38 | bVar10 & 199) |
             (bVar5 | bVar10 ^ 0xff) ^ 0xff;
        lVar24 = lVar23 + 1;
        if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00121b20:
        bVar5 = (&DAT_00101748)[lVar23];
        bVar10 = cVar8 * '\x11' - 0x39;
        uVar1 = (bVar5 ^ 0xffffffb4) & (uint)bVar5;
        bVar9 = (byte)uVar1;
        bVar11 = ~bVar9;
        bVar5 = ((bVar5 ^ 0xff) & 0x24 | bVar5 & 0x90) ^ 0x6f;
        bVar10 = (bVar10 ^ 0xff) & 0xb4 | bVar10 & 0x4b;
        bVar5 = bVar5 & 0xfd ^ (bVar11 & 0xfc | bVar11 & 1 | (byte)((uVar1 >> 1 & 1) << 1)) |
                (bVar5 | bVar9 ^ 0xff) ^ 0xff;
        bVar10 = bVar5 & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0xff);
        bVar11 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar5 = bVar10 | bVar11 ^ 0xff;
        bVar10 = bVar10 & (bVar10 ^ bVar11 ^ 0xff ^ 0xff);
        puVar29[lVar23] =
             (bVar5 & 0x38 | ~bVar5 & 199) ^ ((bVar10 ^ 0xff) & 0x38 | bVar10 & 199) |
             (bVar5 | bVar10 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00121bf0:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00121cfc;
      while( true ) {
        bVar5 = (&DAT_00101748)[lVar23];
        bVar10 = cVar8 * '\x11' - 0x39;
        uVar1 = (bVar5 ^ 0xffffffb4) & (uint)bVar5;
        bVar9 = (byte)uVar1;
        bVar11 = ~bVar9;
        bVar5 = ((bVar5 ^ 0xff) & 0x24 | bVar5 & 0x90) ^ 0x6f;
        bVar10 = (bVar10 ^ 0xff) & 0xb4 | bVar10 & 0x4b;
        bVar5 = bVar5 & 0xfd ^ (bVar11 & 0xfc | bVar11 & 1 | (byte)((uVar1 >> 1 & 1) << 1)) |
                (bVar5 | bVar9 ^ 0xff) ^ 0xff;
        iVar21 = *(int *)puVar13;
        bVar10 = bVar5 & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0xff);
        bVar11 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar5 = bVar10 | bVar11 ^ 0xff;
        bVar10 = bVar10 & (bVar10 ^ bVar11 ^ 0xff ^ 0xff);
        puVar29[lVar23] =
             (bVar5 & 0x38 | ~bVar5 & 199) ^ ((bVar10 ^ 0xff) & 0x38 | bVar10 & 199) |
             (bVar5 | bVar10 ^ 0xff) ^ 0xff;
        if (((iVar21 * (iVar21 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00121cfc:
        bVar5 = (&DAT_00101748)[lVar23];
        bVar10 = cVar8 * '\x11' - 0x39;
        uVar1 = (bVar5 ^ 0xffffffb4) & (uint)bVar5;
        bVar9 = (byte)uVar1;
        bVar11 = ~bVar9;
        bVar5 = ((bVar5 ^ 0xff) & 0x24 | bVar5 & 0x90) ^ 0x6f;
        bVar10 = (bVar10 ^ 0xff) & 0xb4 | bVar10 & 0x4b;
        bVar5 = bVar5 & 0xfd ^ (bVar11 & 0xfc | bVar11 & 1 | (byte)((uVar1 >> 1 & 1) << 1)) |
                (bVar5 | bVar9 ^ 0xff) ^ 0xff;
        bVar10 = bVar5 & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0xff);
        bVar11 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar5 = bVar10 | bVar11 ^ 0xff;
        bVar10 = bVar10 & (bVar10 ^ bVar11 ^ 0xff ^ 0xff);
        puVar29[lVar23] =
             (bVar5 & 0x38 | ~bVar5 & 199) ^ ((bVar10 ^ 0xff) & 0x38 | bVar10 & 199) |
             (bVar5 | bVar10 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    iVar15 = iVar21;
  } while (lVar24 != 0x1d);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_00121e80;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00121e48;
    while( true ) {
      lVar23 = *param_1;
      puVar22[-0x3e3] = 0;
      uVar17 = (**(code **)(lVar23 + 0x30))(param_1,puVar29);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00121e48:
      lVar23 = *param_1;
      puVar22[-0x3e3] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar29);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00121e80:
    lVar23 = *param_1;
    puVar22[-0x3e3] = 0;
    (**(code **)(lVar23 + 0x30))(param_1,puVar29);
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar23 = 0x80;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00121f90;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00121f6c;
      while( true ) {
        *puVar29 = 0;
        lVar24 = ~(0xdeae79e40cfa25baU - lVar23) + 0xdeae79e40cfa25ba;
        if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00121f6c:
        *puVar29 = 0;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00121f90:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00121ff0;
      while ((*puVar29 = 0, (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_00121ff0:
        *puVar29 = 0;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    puVar29 = puVar29 + 1;
  } while (lVar24 != 0);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_001220dc;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00122098;
    while( true ) {
      uVar18 = FUN_00112014(param_1,uVar17);
      local_80 = (**(code **)(*param_1 + 0x488))(param_1,uVar17,uVar18);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00122098:
      uVar18 = FUN_00112014(param_1,uVar17);
      (**(code **)(*param_1 + 0x488))(param_1,uVar17,uVar18);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001220dc:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001247f8;
    while( true ) {
      uVar18 = FUN_00112014(param_1,uVar17);
      (**(code **)(*param_1 + 0x488))(param_1,uVar17,uVar18);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001247f8:
      uVar18 = FUN_00112014(param_1,uVar17);
      (**(code **)(*param_1 + 0x488))(param_1,uVar17,uVar18);
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  local_68 = CONCAT44(local_68._4_4_,0x5728bc89);
  lVar23 = 0;
  iVar15 = 0x5a3cb46a;
  do {
    cVar8 = (char)lVar23;
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_0012236c;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_001222b0;
      while( true ) {
        bVar5 = (&DAT_00101690)[lVar23];
        bVar10 = cVar8 * '\x11' + 0x2a;
        bVar10 = (bVar10 ^ 0xff) & 0x92 | bVar10 & 0x6d;
        bVar5 = (bVar5 ^ 0xff) & 0x92 | (bVar5 ^ 0x92) & bVar5;
        iVar21 = iVar15 * 0x41c64e6d + -0x57288c50 + (int)local_68;
        iVar3 = *(int *)puVar13;
        bVar10 = ((bVar10 ^ 0xff) & 0x39 | bVar10 & 0xc6) ^ ((bVar5 ^ 0xff) & 0x39 | bVar5 & 0xc6);
        bVar5 = (byte)((uint)iVar21 >> 0x10);
        bVar10 = (bVar10 ^ 0xff) & 0x4f | bVar10 & 0xb0;
        bVar5 = (bVar5 ^ 0x4f) & (bVar5 ^ 0xff) | bVar5 & 0xb0;
        lVar24 = lVar23 + 1;
        puVar30[lVar23] = bVar5 & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0xff);
        if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001222b0:
        bVar5 = (&DAT_00101690)[lVar23];
        bVar10 = cVar8 * '\x11' + 0x2a;
        bVar10 = (bVar10 ^ 0xff) & 0x92 | bVar10 & 0x6d;
        bVar5 = (bVar5 ^ 0xff) & 0x92 | (bVar5 ^ 0x92) & bVar5;
        bVar10 = ((bVar10 ^ 0xff) & 0x39 | bVar10 & 0xc6) ^ ((bVar5 ^ 0xff) & 0x39 | bVar5 & 0xc6);
        bVar5 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar10 = (bVar10 ^ 0xff) & 0x4f | bVar10 & 0xb0;
        bVar5 = (bVar5 ^ 0x4f) & (bVar5 ^ 0xff) | bVar5 & 0xb0;
        puVar30[lVar23] = bVar5 & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0xff);
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_0012236c:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_0012245c;
      while( true ) {
        bVar5 = (&DAT_00101690)[lVar23];
        bVar10 = cVar8 * '\x11' + 0x2a;
        bVar10 = (bVar10 ^ 0xff) & 0x92 | bVar10 & 0x6d;
        bVar5 = (bVar5 ^ 0xff) & 0x92 | (bVar5 ^ 0x92) & bVar5;
        bVar10 = ((bVar10 ^ 0xff) & 0x39 | bVar10 & 0xc6) ^ ((bVar5 ^ 0xff) & 0x39 | bVar5 & 0xc6);
        iVar21 = *(int *)puVar13;
        bVar5 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar10 = (bVar10 ^ 0xff) & 0x4f | bVar10 & 0xb0;
        bVar5 = (bVar5 ^ 0x4f) & (bVar5 ^ 0xff) | bVar5 & 0xb0;
        puVar30[lVar23] = bVar5 & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0xff);
        if (((iVar21 * (iVar21 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_0012245c:
        bVar5 = (&DAT_00101690)[lVar23];
        bVar10 = cVar8 * '\x11' + 0x2a;
        bVar10 = (bVar10 ^ 0xff) & 0x92 | bVar10 & 0x6d;
        bVar5 = (bVar5 ^ 0xff) & 0x92 | (bVar5 ^ 0x92) & bVar5;
        bVar10 = ((bVar10 ^ 0xff) & 0x39 | bVar10 & 0xc6) ^ ((bVar5 ^ 0xff) & 0x39 | bVar5 & 0xc6);
        bVar5 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar10 = (bVar10 ^ 0xff) & 0x4f | bVar10 & 0xb0;
        bVar5 = (bVar5 ^ 0x4f) & (bVar5 ^ 0xff) | bVar5 & 0xb0;
        puVar30[lVar23] = bVar5 & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0xff);
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    iVar15 = iVar21;
  } while (lVar24 != 0x17);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_001225c4;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_0012258c;
    while( true ) {
      lVar23 = *param_1;
      puVar22[-0x369] = 0;
      uVar17 = (**(code **)(lVar23 + 0x30))(param_1,puVar30);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_0012258c:
      lVar23 = *param_1;
      puVar22[-0x369] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001225c4:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00124854;
    while( true ) {
      lVar23 = *param_1;
      puVar22[-0x369] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00124854:
      lVar23 = *param_1;
      puVar22[-0x369] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar23 = 0x80;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001226d8;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_001226b4;
      while( true ) {
        *puVar30 = 0;
        lVar24 = lVar23 + -1;
        if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001226b4:
        *puVar30 = 0;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001226d8:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00122738;
      while ((*puVar30 = 0, (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_00122738:
        *puVar30 = 0;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    puVar30 = puVar30 + 1;
  } while (lVar24 != 0);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
LAB_00122780:
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar14) goto LAB_00122780;
    }
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
  } while( true );
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  iVar15 = 0x5a3c2f5f;
  lVar23 = 0;
  iVar21 = 0x5a3c3f5b;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    cVar8 = (char)lVar23;
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00122a10;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00122970;
      while( true ) {
        bVar5 = cVar8 * '\x11' + 0xa1;
        iVar3 = iVar21 * 0x41c64e6d + 0x3039;
        iVar4 = *(int *)puVar13;
        bVar5 = ((&DAT_001014c8)[lVar23] ^ cVar8 * -0x11 + 0x5eU ^ 0xff) & bVar5 |
                (bVar5 | (&DAT_001014c8)[lVar23] ^ 0xff) ^ 0xff;
        bVar11 = (byte)((uint)iVar3 >> 0x10);
        bVar10 = (bVar11 ^ ~bVar5 ^ 0xff) & bVar11;
        bVar5 = ((bVar11 ^ 0xff) & 0xa0 | bVar11 & 0x5f) ^ 0xa0 | bVar5 ^ 0xff;
        puVar28[lVar23] =
             (~bVar10 & 0xf7 | bVar10 & 8) ^ (bVar5 & 0xf7 | (bVar5 ^ 0xff) & 8) |
             (bVar5 | bVar10 ^ 0xff) ^ 0xff;
        lVar24 = lVar23 + 1;
        if (((iVar4 * (iVar4 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00122970:
        bVar5 = cVar8 * '\x11' + 0xa1;
        bVar5 = ((&DAT_001014c8)[lVar23] ^ cVar8 * -0x11 + 0x5eU ^ 0xff) & bVar5 |
                (bVar5 | (&DAT_001014c8)[lVar23] ^ 0xff) ^ 0xff;
        bVar11 = (byte)((uint)(iVar21 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar10 = (bVar11 ^ ~bVar5 ^ 0xff) & bVar11;
        bVar5 = ((bVar11 ^ 0xff) & 0xa0 | bVar11 & 0x5f) ^ 0xa0 | bVar5 ^ 0xff;
        puVar28[lVar23] =
             (~bVar10 & 0xf7 | bVar10 & 8) ^ (bVar5 & 0xf7 | (bVar5 ^ 0xff) & 8) |
             (bVar5 | bVar10 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00122a10:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00122ac8;
      while( true ) {
        bVar5 = cVar8 * '\x11' + 0xa1;
        bVar5 = ((&DAT_001014c8)[lVar23] ^ cVar8 * -0x11 + 0x5eU ^ 0xff) & bVar5 |
                (bVar5 | (&DAT_001014c8)[lVar23] ^ 0xff) ^ 0xff;
        iVar3 = *(int *)puVar13;
        bVar11 = (byte)((uint)(iVar21 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar10 = (bVar11 ^ ~bVar5 ^ 0xff) & bVar11;
        bVar5 = ((bVar11 ^ 0xff) & 0xa0 | bVar11 & 0x5f) ^ 0xa0 | bVar5 ^ 0xff;
        puVar28[lVar23] =
             (~bVar10 & 0xf7 | bVar10 & 8) ^ (bVar5 & 0xf7 | (bVar5 ^ 0xff) & 8) |
             (bVar5 | bVar10 ^ 0xff) ^ 0xff;
        if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00122ac8:
        bVar5 = cVar8 * '\x11' + 0xa1;
        bVar5 = ((&DAT_001014c8)[lVar23] ^ cVar8 * -0x11 + 0x5eU ^ 0xff) & bVar5 |
                (bVar5 | (&DAT_001014c8)[lVar23] ^ 0xff) ^ 0xff;
        bVar11 = (byte)((uint)(iVar21 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar10 = (bVar11 ^ ~bVar5 ^ 0xff) & bVar11;
        bVar5 = ((bVar11 ^ 0xff) & 0xa0 | bVar11 & 0x5f) ^ 0xa0 | bVar5 ^ 0xff;
        puVar28[lVar23] =
             (~bVar10 & 0xf7 | bVar10 & 8) ^ (bVar5 & 0xf7 | (bVar5 ^ 0xff) & 8) |
             (bVar5 | bVar10 ^ 0xff) ^ 0xff;
      }
    }
    lVar23 = lVar24;
    iVar21 = iVar3;
  } while (lVar24 != 0x12);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_00122bc8;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00122ba4;
    while ((iVar21 = *(int *)puVar13, puVar22[-0x24e] = 0, (iVar21 * (iVar21 + -1) & 1U) != 0 &&
           (9 < *(int *)puVar14))) {
LAB_00122ba4:
      puVar22[-0x24e] = 0;
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00122bc8:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00124890;
    while ((iVar21 = *(int *)puVar13, puVar22[-0x24e] = 0, (iVar21 * (iVar21 + -1) & 1U) != 0 &&
           (9 < *(int *)puVar14))) {
LAB_00124890:
      puVar22[-0x24e] = 0;
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar23 = 0;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar5 = (byte)((uint)iVar15 >> 0x10);
    cVar8 = (char)lVar23;
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00122d64;
    while( true ) {
      bVar10 = (&DAT_00101ba8)[lVar23];
      bVar9 = cVar8 * '\x11' + 0xb1;
      bVar11 = bVar9 | bVar10 ^ 0xff;
      bVar9 = (bVar9 ^ 0xc2 ^ ((bVar10 ^ 0xff) & 0xc2 | bVar10 & 0x3d)) & bVar9;
      iVar21 = *(int *)puVar13;
      bVar10 = (bVar11 & 0x96 | (bVar11 ^ 0xff) & 0x69) ^ ((bVar9 ^ 0xff) & 0x96 | bVar9 & 0x69) |
               (bVar11 | bVar9 ^ 0xff) ^ 0xff;
      puVar27[lVar23] =
           (bVar10 ^ ((bVar5 ^ 0xff) & 0xe8 | bVar5 & 0x17) ^ 0xff ^ 0x17) & bVar10 |
           (((bVar10 ^ 0xff) & 0x8c | bVar10 & 0x73) ^ 0x8c | bVar5 ^ 0xff) ^ 0xff;
      uVar18 = local_80;
      if (((iVar21 * (iVar21 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00122d64:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00122e60;
      while( true ) {
        bVar10 = (&DAT_00101ba8)[lVar23];
        bVar9 = cVar8 * '\x11' + 0xb1;
        bVar11 = bVar9 | bVar10 ^ 0xff;
        bVar9 = (bVar9 ^ 0xc2 ^ ((bVar10 ^ 0xff) & 0xc2 | bVar10 & 0x3d)) & bVar9;
        iVar21 = *(int *)puVar13;
        bVar10 = (bVar11 & 0x96 | (bVar11 ^ 0xff) & 0x69) ^ ((bVar9 ^ 0xff) & 0x96 | bVar9 & 0x69) |
                 (bVar11 | bVar9 ^ 0xff) ^ 0xff;
        puVar27[lVar23] =
             (bVar10 ^ ((bVar5 ^ 0xff) & 0xe8 | bVar5 & 0x17) ^ 0xff ^ 0x17) & bVar10 |
             (((bVar10 ^ 0xff) & 0x8c | bVar10 & 0x73) ^ 0x8c | bVar5 ^ 0xff) ^ 0xff;
        if (((iVar21 * (iVar21 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00122e60:
        bVar10 = (&DAT_00101ba8)[lVar23];
        bVar9 = cVar8 * '\x11' + 0xb1;
        bVar11 = bVar9 | bVar10 ^ 0xff;
        bVar9 = (bVar9 ^ 0xc2 ^ ((bVar10 ^ 0xff) & 0xc2 | bVar10 & 0x3d)) & bVar9;
        bVar10 = (bVar11 & 0x96 | (bVar11 ^ 0xff) & 0x69) ^ ((bVar9 ^ 0xff) & 0x96 | bVar9 & 0x69) |
                 (bVar11 | bVar9 ^ 0xff) ^ 0xff;
        puVar27[lVar23] =
             (bVar10 ^ ((bVar5 ^ 0xff) & 0xe8 | bVar5 & 0x17) ^ 0xff ^ 0x17) & bVar10 |
             (((bVar10 ^ 0xff) & 0x8c | bVar10 & 0x73) ^ 0x8c | bVar5 ^ 0xff) ^ 0xff;
      }
    }
    lVar23 = 0x3815599d3c61fd9d - ~(lVar23 + 0xc7eaa662c39e0263U);
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
  } while (lVar23 != 0x23);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_00122fc8;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00122f88;
    while( true ) {
      lVar23 = *param_1;
      puVar22[-0x2dd] = 0;
      uVar19 = (**(code **)(lVar23 + 0x108))(param_1,uVar17,puVar28,puVar27);
      puVar29 = local_88;
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00122f88:
      lVar23 = *param_1;
      puVar22[-0x2dd] = 0;
      (**(code **)(lVar23 + 0x108))(param_1,uVar17,puVar28,puVar27);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00122fc8:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001248d4;
    while( true ) {
      lVar23 = *param_1;
      puVar22[-0x2dd] = 0;
      (**(code **)(lVar23 + 0x108))(param_1,uVar17,puVar28,puVar27);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001248d4:
      lVar23 = *param_1;
      puVar22[-0x2dd] = 0;
      (**(code **)(lVar23 + 0x108))(param_1,uVar17,puVar28,puVar27);
    }
  }
  lVar23 = 0x60;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001230c4;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_001230a0;
      while( true ) {
        *puVar28 = 0;
        lVar24 = lVar23 + -1;
        if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001230a0:
        *puVar28 = 0;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001230c4:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00123124;
      while ((*puVar28 = 0, (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_00123124:
        *puVar28 = 0;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    puVar28 = puVar28 + 1;
  } while (lVar24 != 0);
  lVar23 = 0xa0;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_0012321c;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_001231f8;
      while( true ) {
        *puVar27 = 0;
        lVar24 = ~(0xcd998016a9d98dabU - lVar23) + 0xcd998016a9d98dab;
        if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001231f8:
        *puVar27 = 0;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_0012321c:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_0012327c;
      while ((*puVar27 = 0, (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_0012327c:
        *puVar27 = 0;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    puVar27 = puVar27 + 1;
  } while (lVar24 != 0);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_00123340;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00123310;
    while ((uVar17 = FUN_00125094(param_1,uVar18,uVar19),
           (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 && (9 < *(int *)puVar14))) {
LAB_00123310:
      FUN_00125094(param_1,uVar18,uVar19);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123340:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00124924;
    while ((FUN_00125094(param_1,uVar18,uVar19),
           (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 && (9 < *(int *)puVar14))) {
LAB_00124924:
      FUN_00125094(param_1,uVar18,uVar19);
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar23 = 0;
  iVar15 = 0x5a3c5f5d;
  local_68 = uVar17;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    iVar21 = (int)lVar23;
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001235b8;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00123500;
      while( true ) {
        bVar5 = (&DAT_00101bd8)[lVar23];
        uVar7 = iVar21 * 0x11 - 0x3f;
        uVar1 = (uVar7 ^ 0xffffffff) & 0xffffffb7 | uVar7 & 0x48;
        uVar6 = (uVar1 ^ 0xfffffff7) & 0x39 | (uVar1 ^ 0x40) & 0x44;
        uVar1 = uVar7 & 0xffffffbb | 0x39;
        uVar7 = ((bVar5 ^ 0xffffffff) & 0x1c | bVar5 & 0x61) ^ 0x61 | (bVar5 ^ 0x7d) & (uint)bVar5;
        bVar5 = (byte)uVar6 ^ (byte)uVar1 ^ 0xff;
        bVar10 = ~(byte)uVar7;
        iVar4 = *(int *)puVar13;
        iVar3 = iVar15 * 0x41c64e6d + 0x3039;
        bVar5 = (bVar5 & 0xf0 | bVar5 & 3 | (byte)(((uVar6 ^ uVar1) >> 2 & 3) << 2)) ^
                (bVar10 & 0xf0 | bVar10 & 3 | (byte)((uVar7 >> 2 & 3) << 2));
        bVar10 = (byte)((uint)iVar3 >> 0x10);
        puVar25[lVar23] = ~(bVar5 | bVar10 ^ 0xff) | (bVar10 | bVar5 ^ 0xff) ^ 0xff;
        lVar24 = lVar23 + 1;
        if (((iVar4 * (iVar4 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123500:
        bVar5 = (&DAT_00101bd8)[lVar23];
        uVar7 = iVar21 * 0x11 - 0x3f;
        uVar1 = (uVar7 ^ 0xffffffff) & 0xffffffb7 | uVar7 & 0x48;
        uVar6 = (uVar1 ^ 0xfffffff7) & 0x39 | (uVar1 ^ 0x40) & 0x44;
        uVar1 = uVar7 & 0xffffffbb | 0x39;
        uVar7 = ((bVar5 ^ 0xffffffff) & 0x1c | bVar5 & 0x61) ^ 0x61 | (bVar5 ^ 0x7d) & (uint)bVar5;
        bVar5 = (byte)uVar6 ^ (byte)uVar1 ^ 0xff;
        bVar10 = ~(byte)uVar7;
        bVar5 = (bVar5 & 0xf0 | bVar5 & 3 | (byte)(((uVar6 ^ uVar1) >> 2 & 3) << 2)) ^
                (bVar10 & 0xf0 | bVar10 & 3 | (byte)((uVar7 >> 2 & 3) << 2));
        bVar10 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        puVar25[lVar23] = ~(bVar5 | bVar10 ^ 0xff) | (bVar10 | bVar5 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001235b8:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_001236ac;
      while( true ) {
        bVar5 = (&DAT_00101bd8)[lVar23];
        uVar7 = iVar21 * 0x11 - 0x3f;
        uVar1 = (uVar7 ^ 0xffffffff) & 0xffffffb7 | uVar7 & 0x48;
        uVar6 = (uVar1 ^ 0xfffffff7) & 0x39 | (uVar1 ^ 0x40) & 0x44;
        uVar1 = uVar7 & 0xffffffbb | 0x39;
        uVar7 = ((bVar5 ^ 0xffffffff) & 0x1c | bVar5 & 0x61) ^ 0x61 | (bVar5 ^ 0x7d) & (uint)bVar5;
        bVar5 = (byte)uVar6 ^ (byte)uVar1 ^ 0xff;
        bVar10 = ~(byte)uVar7;
        iVar3 = *(int *)puVar13;
        bVar5 = (bVar5 & 0xf0 | bVar5 & 3 | (byte)(((uVar6 ^ uVar1) >> 2 & 3) << 2)) ^
                (bVar10 & 0xf0 | bVar10 & 3 | (byte)((uVar7 >> 2 & 3) << 2));
        bVar10 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        puVar25[lVar23] = ~(bVar5 | bVar10 ^ 0xff) | (bVar10 | bVar5 ^ 0xff) ^ 0xff;
        if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001236ac:
        bVar5 = (&DAT_00101bd8)[lVar23];
        uVar7 = iVar21 * 0x11 - 0x3f;
        uVar1 = (uVar7 ^ 0xffffffff) & 0xffffffb7 | uVar7 & 0x48;
        uVar6 = (uVar1 ^ 0xfffffff7) & 0x39 | (uVar1 ^ 0x40) & 0x44;
        uVar1 = uVar7 & 0xffffffbb | 0x39;
        uVar7 = ((bVar5 ^ 0xffffffff) & 0x1c | bVar5 & 0x61) ^ 0x61 | (bVar5 ^ 0x7d) & (uint)bVar5;
        bVar5 = (byte)uVar6 ^ (byte)uVar1 ^ 0xff;
        bVar10 = ~(byte)uVar7;
        bVar5 = (bVar5 & 0xf0 | bVar5 & 3 | (byte)(((uVar6 ^ uVar1) >> 2 & 3) << 2)) ^
                (bVar10 & 0xf0 | bVar10 & 3 | (byte)((uVar7 >> 2 & 3) << 2));
        bVar10 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        puVar25[lVar23] = ~(bVar5 | bVar10 ^ 0xff) | (bVar10 | bVar5 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    iVar15 = iVar3;
  } while (lVar24 != 0x20);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_00123818;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001237e0;
    while( true ) {
      lVar23 = *param_1;
      puVar22[-0x1e0] = 0;
      uVar17 = (**(code **)(lVar23 + 0x30))(param_1,puVar25);
      puVar26 = local_70;
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001237e0:
      lVar23 = *param_1;
      puVar22[-0x1e0] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar25);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123818:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_0012496c;
    while( true ) {
      lVar23 = *param_1;
      puVar22[-0x1e0] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar25);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_0012496c:
      lVar23 = *param_1;
      puVar22[-0x1e0] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar25);
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar23 = 0x80;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_0012394c;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00123928;
      while( true ) {
        *puVar25 = 0;
        lVar24 = lVar23 + -1;
        if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123928:
        *puVar25 = 0;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_0012394c:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_001239ac;
      while ((*puVar25 = 0, (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_001239ac:
        *puVar25 = 0;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    puVar25 = puVar25 + 1;
  } while (lVar24 != 0);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_00123a08;
  while( true ) {
    iVar15 = *(int *)puVar13;
    *(undefined1 *)((long)puVar26 + 6) = 0;
    *puVar26 = (int)DAT_001013e0;
    *(undefined2 *)(puVar26 + 1) = 0x746e;
    if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123a08:
    *(undefined1 *)((long)puVar26 + 6) = 0;
    *(undefined2 *)(puVar26 + 1) = 0x746e;
    *puVar26 = (int)DAT_001013e0;
  }
  lVar23 = 0;
  iVar15 = 0x5a3c7f51;
  do {
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar5 = (byte)((uint)iVar15 >> 0x10);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00123ae8;
    while( true ) {
      bVar10 = (&DAT_00101c08)[lVar23];
      bVar11 = (char)lVar23 * '\x11' - 0x1f;
      iVar21 = *(int *)puVar13;
      bVar10 = (bVar10 ^ ((bVar11 ^ 0xff) & 0x21 | bVar11 & 0xde) ^ 0xff ^ 0xde) & bVar10 |
               (((bVar10 ^ 0xff) & 0xad | bVar10 & 0x52) ^ 0xad | bVar11 ^ 0xff) ^ 0xff;
      puVar29[lVar23] = ~(bVar10 | bVar5 ^ 0xff) | (bVar5 | bVar10 ^ 0xff) ^ 0xff;
      if (((iVar21 * (iVar21 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123ae8:
      bVar10 = (&DAT_00101c08)[lVar23];
      bVar11 = (char)lVar23 * '\x11' - 0x1f;
      bVar10 = (bVar10 ^ ((bVar11 ^ 0xff) & 0x21 | bVar11 & 0xde) ^ 0xff ^ 0xde) & bVar10 |
               (((bVar10 ^ 0xff) & 0xad | bVar10 & 0x52) ^ 0xad | bVar11 ^ 0xff) ^ 0xff;
      puVar29[lVar23] = ~(bVar10 | bVar5 ^ 0xff) | (bVar5 | bVar10 ^ 0xff) ^ 0xff;
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0x37);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_00123c20;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00123be0;
    while( true ) {
      lVar23 = *param_1;
      puVar29[0x37] = 0;
      uVar19 = (**(code **)(lVar23 + 0x388))(param_1,uVar17,puVar26,puVar29);
      uVar18 = local_68;
      puVar22 = local_78;
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123be0:
      lVar23 = *param_1;
      puVar29[0x37] = 0;
      (**(code **)(lVar23 + 0x388))(param_1,uVar17,puVar26,puVar29);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123c20:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001249c4;
    while( true ) {
      lVar23 = *param_1;
      puVar29[0x37] = 0;
      (**(code **)(lVar23 + 0x388))(param_1,uVar17,puVar26,puVar29);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001249c4:
      lVar23 = *param_1;
      puVar29[0x37] = 0;
      (**(code **)(lVar23 + 0x388))(param_1,uVar17,puVar26,puVar29);
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar23 = 0x60;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00123d34;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00123d10;
      while( true ) {
        *(undefined1 *)puVar26 = 0;
        lVar24 = lVar23 + -1;
        if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123d10:
        *(undefined1 *)puVar26 = 0;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123d34:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00123d94;
      while ((*(undefined1 *)puVar26 = 0, (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_00123d94:
        *(undefined1 *)puVar26 = 0;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    puVar26 = (undefined4 *)((long)puVar26 + 1);
  } while (lVar24 != 0);
  lVar23 = 0xa0;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00123e5c;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00123e38;
      while( true ) {
        *puVar29 = 0;
        lVar24 = lVar23 + -1;
        if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123e38:
        *puVar29 = 0;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00123e5c:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00123ebc;
      while ((*puVar29 = 0, (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_00123ebc:
        *puVar29 = 0;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    puVar29 = puVar29 + 1;
  } while (lVar24 != 0);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
LAB_00123efc:
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar14) goto LAB_00123efc;
    }
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
  } while( true );
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar23 = 0;
  iVar15 = 0x5a3cdac0;
  do {
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar5 = (byte)((uint)iVar15 >> 0x10);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00124124;
    while( true ) {
      bVar10 = (&DAT_00101c50)[lVar23];
      uVar1 = (int)lVar23 * 0x11 + 0x44;
      bVar11 = (char)lVar23 * -0x11 + 0xbb;
      bVar9 = (byte)uVar1;
      bVar12 = bVar11 & 0xf0 | bVar11 & 7 | (byte)((uVar1 >> 3 & 1) << 3);
      bVar9 = (bVar9 ^ 0x4b) & bVar9;
      bVar11 = bVar12 ^ 199 | 0xb4;
      bVar10 = ((bVar10 ^ 0xff) & 0x41 | bVar10 & 10) ^ 10 | (bVar10 ^ 0x4b) & bVar10;
      bVar11 = (bVar11 & 0xb2 | (bVar12 ^ 8) & 0x49) ^ ((bVar9 ^ 0xff) & 0xb2 | bVar9 & 0x4d) |
               (bVar11 | bVar9 ^ 0xff) ^ 0xff;
      bVar11 = ((bVar11 ^ 0xff) & 0x2f | bVar11 & 0xd0) ^ ((bVar10 ^ 0xff) & 0x2f | bVar10 & 0xd0);
      bVar10 = (bVar11 ^ 0xff) & 0x32 | bVar11 & 0xcd;
      iVar21 = *(int *)puVar13;
      bVar10 = (bVar10 & 0xc3 | 0x82 | (bVar10 ^ 8) & 0x38) ^
               ((bVar11 ^ 0xff) & 0xc3 | 0x41 | bVar11 & 4);
      local_78[lVar23] = (bVar5 ^ 0x79) & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0x86);
      if (((iVar21 * (iVar21 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00124124:
      bVar10 = (&DAT_00101c50)[lVar23];
      uVar1 = (int)lVar23 * 0x11 + 0x44;
      bVar11 = (char)lVar23 * -0x11 + 0xbb;
      bVar9 = (byte)uVar1;
      bVar9 = (bVar9 ^ 0x4b) & bVar9;
      bVar12 = bVar11 & 0xf0 | bVar11 & 7 | (byte)((uVar1 >> 3 & 1) << 3);
      bVar10 = ((bVar10 ^ 0xff) & 0x41 | bVar10 & 10) ^ 10 | (bVar10 ^ 0x4b) & bVar10;
      bVar11 = bVar12 ^ 199 | 0xb4;
      bVar11 = (bVar11 & 0xb2 | (bVar12 ^ 8) & 0x49) ^ ((bVar9 ^ 0xff) & 0xb2 | bVar9 & 0x4d) |
               (bVar11 | bVar9 ^ 0xff) ^ 0xff;
      bVar11 = ((bVar11 ^ 0xff) & 0x2f | bVar11 & 0xd0) ^ ((bVar10 ^ 0xff) & 0x2f | bVar10 & 0xd0);
      bVar10 = (bVar11 ^ 0xff) & 0x32 | bVar11 & 0xcd;
      bVar10 = (bVar10 & 0xc3 | 0x82 | (bVar10 ^ 8) & 0x38) ^
               ((bVar11 ^ 0xff) & 0xc3 | 0x41 | bVar11 & 4);
      local_78[lVar23] = (bVar5 ^ 0x79) & (bVar10 ^ 0xff) | bVar10 & (bVar5 ^ 0x86);
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0x1c);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_00124298;
  while( true ) {
    lVar23 = *param_1;
    puVar22[0x1c] = 0;
    uVar20 = (**(code **)(lVar23 + 0x538))(param_1,puVar22);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00124298:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00124a1c;
    while( true ) {
      lVar23 = *param_1;
      puVar22[0x1c] = 0;
      (**(code **)(lVar23 + 0x538))(param_1,puVar22);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00124a1c:
      lVar23 = *param_1;
      puVar22[0x1c] = 0;
      (**(code **)(lVar23 + 0x538))(param_1,puVar22);
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar23 = 0x80;
  do {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001243ac;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00124388;
      while( true ) {
        *puVar22 = 0;
        lVar24 = lVar23 + -1;
        if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00124388:
        *puVar22 = 0;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001243ac:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_0012440c;
      while ((*puVar22 = 0, (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_0012440c:
        *puVar22 = 0;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar23 = lVar24;
    puVar22 = puVar22 + 1;
  } while (lVar24 != 0);
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
  goto LAB_00124514;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001244c4;
    while( true ) {
      iVar15 = FUN_001260c0(param_1,uVar17,uVar19,uVar18,uVar20,0);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar20);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001244c4:
      FUN_001260c0(param_1,uVar17,uVar19,uVar18,uVar20,0);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar20);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00124514:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00124a84;
    while( true ) {
      FUN_001260c0(param_1,uVar17,uVar19,uVar18,uVar20,0);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar20);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00124a84:
      FUN_001260c0(param_1,uVar17,uVar19,uVar18,uVar20,0);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar20);
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  if (iVar15 != 1) {
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00124604;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_001245dc;
      while ((FUN_001165a8(param_1), (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_001245dc:
        FUN_001165a8(param_1);
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00124604:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00124adc;
      while ((FUN_001165a8(param_1), (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_00124adc:
        FUN_001165a8(param_1);
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
  }
LAB_00124640:
  uVar2 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
LAB_00124678:
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar14) goto LAB_00124678;
    }
    uVar2 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) {
      do {
        if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *(int *)puVar14);
      return;
    }
  } while( true );
}


