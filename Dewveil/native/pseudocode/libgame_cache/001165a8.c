// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 001165a8; body: [[001165a8, 0011e047]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001165a8(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  code *pcVar24;
  int iVar25;
  long lVar26;
  undefined4 *puVar27;
  char *pcVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  int *piVar34;
  int *piVar35;
  undefined1 auStack_f0 [8];
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  char *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  puVar12 = PTR_y_40_0012a6d0;
  puVar11 = PTR_x_39_0012a6c8;
  uVar1 = *(undefined4 *)PTR_x_39_0012a6c8;
  do {
    if ((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  puVar22 = auStack_f0;
  if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) != 0) &&
     (puVar22 = auStack_f0, puVar30 = auStack_f0, 9 < *(int *)PTR_y_40_0012a6d0)) goto LAB_001167d0;
  while( true ) {
    if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) != 0) &&
       (puVar30 = puVar22, 9 < *(int *)PTR_y_40_0012a6d0)) goto LAB_00116710;
    while( true ) {
      local_88 = puVar22 + -0x80;
      pcVar31 = puVar22 + -0xc0;
      local_a8 = puVar22 + -0x140;
      local_c8 = puVar22 + -0x1a0;
      local_c0 = puVar22 + -0x240;
      local_d0 = puVar22 + -0x2c0;
      local_90 = (undefined4 *)(puVar22 + -800);
      local_e8 = puVar22 + -0x3c0;
      local_b0 = puVar22 + -0x440;
      pcVar32 = puVar22 + -0x480;
      local_68 = puVar22 + -0x500;
      local_d8 = puVar22 + -0x580;
      local_e0 = puVar22 + -0x5e0;
      local_80 = puVar22 + -0x680;
      local_70 = puVar22 + -0x700;
      local_78 = puVar22 + -0x760;
      local_a0 = (undefined4 *)(puVar22 + -0x800);
      pcVar33 = puVar22 + -0x880;
      pcVar28 = puVar22 + -0x900;
      puVar30 = puVar22 + -0x980;
      if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_00116710:
      puVar22 = puVar30 + -0x980;
    }
    if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_001167d0:
    puVar22 = puVar30;
    if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_40_0012a6d0)) goto LAB_0011d22c;
    while ((puVar22 = puVar22 + -0x980,
           (*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_40_0012a6d0))) {
LAB_0011d22c:
      puVar22 = puVar22 + -0x980;
    }
  }
  iVar14 = 0x5a3c5942;
  local_98 = CONCAT44(local_98._4_4_,0xab91bd42);
  lVar23 = 0;
  do {
    uVar1 = *(undefined4 *)PTR_x_39_0012a6c8;
    do {
      if ((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_40_0012a6d0);
    iVar15 = iVar14 * 0x41c64e6d;
    cVar13 = (char)lVar23;
    if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_40_0012a6d0)) goto LAB_00116a90;
    while( true ) {
      if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_40_0012a6d0)) goto LAB_001169b8;
      while( true ) {
        bVar3 = (&DAT_00101748)[lVar23];
        iVar14 = iVar15 + 0x546e72f7 + (int)local_98;
        bVar9 = cVar13 * '\x11' - 0x39;
        bVar7 = (byte)((uint)iVar14 >> 0x10);
        bVar6 = (bVar7 ^ 0x6c) & (bVar7 ^ 0xff);
        bVar7 = (bVar7 ^ 0x6c) & bVar7;
        bVar3 = (((bVar9 ^ 0xff) & 0x2e | bVar9 & 0xd1) ^ bVar3 ^ 0x2e) & bVar3 |
                (bVar3 | bVar9 ^ 0xff) ^ 0xff;
        iVar25 = *(int *)PTR_x_39_0012a6c8;
        bVar3 = ((bVar3 ^ 0xff) & 0x20 | bVar3 & 0x4c) ^ 0x4c | (bVar3 ^ 0x6c) & bVar3;
        bVar6 = ((bVar6 ^ 0xff) & 0xb3 | bVar6 & 0x4c) ^ ((bVar7 ^ 0xff) & 0xb3 | bVar7 & 0x4c) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        lVar26 = lVar23 + 1;
        puVar30[lVar23] = (~bVar3 & 0xe3 | bVar3 & 0x1c) ^ (~bVar6 & 0xe3 | bVar6 & 0x1c);
        if (((iVar25 * (iVar25 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_001169b8:
        bVar3 = (&DAT_00101748)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x39;
        bVar7 = (byte)((uint)(iVar15 + 0x3039) >> 0x10);
        bVar6 = (bVar7 ^ 0x6c) & (bVar7 ^ 0xff);
        bVar7 = (bVar7 ^ 0x6c) & bVar7;
        bVar3 = (((bVar9 ^ 0xff) & 0x2e | bVar9 & 0xd1) ^ bVar3 ^ 0x2e) & bVar3 |
                (bVar3 | bVar9 ^ 0xff) ^ 0xff;
        bVar3 = ((bVar3 ^ 0xff) & 0x20 | bVar3 & 0x4c) ^ 0x4c | (bVar3 ^ 0x6c) & bVar3;
        bVar6 = ((bVar6 ^ 0xff) & 0xb3 | bVar6 & 0x4c) ^ ((bVar7 ^ 0xff) & 0xb3 | bVar7 & 0x4c) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar30[lVar23] = (~bVar3 & 0xe3 | bVar3 & 0x1c) ^ (~bVar6 & 0xe3 | bVar6 & 0x1c);
      }
      if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_00116a90:
      if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_40_0012a6d0)) goto LAB_00116b88;
      while( true ) {
        bVar3 = (&DAT_00101748)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x39;
        bVar7 = (byte)((uint)(iVar15 + 0x3039) >> 0x10);
        bVar6 = (bVar7 ^ 0x6c) & (bVar7 ^ 0xff);
        bVar7 = (bVar7 ^ 0x6c) & bVar7;
        bVar3 = (((bVar9 ^ 0xff) & 0x2e | bVar9 & 0xd1) ^ bVar3 ^ 0x2e) & bVar3 |
                (bVar3 | bVar9 ^ 0xff) ^ 0xff;
        iVar14 = *(int *)PTR_x_39_0012a6c8;
        bVar3 = ((bVar3 ^ 0xff) & 0x20 | bVar3 & 0x4c) ^ 0x4c | (bVar3 ^ 0x6c) & bVar3;
        bVar6 = ((bVar6 ^ 0xff) & 0xb3 | bVar6 & 0x4c) ^ ((bVar7 ^ 0xff) & 0xb3 | bVar7 & 0x4c) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar30[lVar23] = (~bVar3 & 0xe3 | bVar3 & 0x1c) ^ (~bVar6 & 0xe3 | bVar6 & 0x1c);
        if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_00116b88:
        bVar3 = (&DAT_00101748)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x39;
        bVar7 = (byte)((uint)(iVar15 + 0x3039) >> 0x10);
        bVar6 = (bVar7 ^ 0x6c) & (bVar7 ^ 0xff);
        bVar7 = (bVar7 ^ 0x6c) & bVar7;
        bVar3 = (((bVar9 ^ 0xff) & 0x2e | bVar9 & 0xd1) ^ bVar3 ^ 0x2e) & bVar3 |
                (bVar3 | bVar9 ^ 0xff) ^ 0xff;
        bVar3 = ((bVar3 ^ 0xff) & 0x20 | bVar3 & 0x4c) ^ 0x4c | (bVar3 ^ 0x6c) & bVar3;
        bVar6 = ((bVar6 ^ 0xff) & 0xb3 | bVar6 & 0x4c) ^ ((bVar7 ^ 0xff) & 0xb3 | bVar7 & 0x4c) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar30[lVar23] = (~bVar3 & 0xe3 | bVar3 & 0x1c) ^ (~bVar6 & 0xe3 | bVar6 & 0x1c);
      }
    }
    lVar23 = lVar26;
  } while (lVar26 != 0x1d);
  uVar1 = *(undefined4 *)PTR_x_39_0012a6c8;
  do {
    if ((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  if (((*(int *)PTR_x_39_0012a6c8 * (*(int *)PTR_x_39_0012a6c8 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_40_0012a6d0)) goto LAB_00116d14;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_00116cdc;
    while( true ) {
      lVar23 = *param_1;
      puVar22[-0x963] = 0;
      uVar16 = (**(code **)(lVar23 + 0x30))(param_1,puVar30);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00116cdc:
      lVar23 = *param_1;
      puVar22[-0x963] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00116d14:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_0011d304;
    while( true ) {
      lVar23 = *param_1;
      puVar22[-0x963] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011d304:
      lVar23 = *param_1;
      puVar22[-0x963] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  lVar23 = 0x80;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_00116e10;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00116dec;
      while( true ) {
        *puVar30 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00116dec:
        *puVar30 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_00116e10:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_00116e4c;
      while ((*puVar30 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar12))) {
LAB_00116e4c:
        *puVar30 = 0;
      }
    }
    lVar23 = lVar26;
    puVar30 = puVar30 + 1;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
  goto LAB_00116fc8;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_00116f4c;
    while( true ) {
      uVar17 = FUN_00112014(param_1,uVar16);
      local_b8 = (**(code **)(*param_1 + 0x488))(param_1,uVar16,uVar17);
      uVar17 = FUN_00104d9c(param_1);
      pcVar24 = *(code **)(*param_1 + 0x538);
      *(undefined8 *)pcVar28 = s_getBytes_base_apFile_00101350._8_8_;
      *(undefined2 *)(puVar22 + -0x8f8) = 0x6b;
      uVar18 = (*pcVar24)(param_1,pcVar28);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)
         ) break;
LAB_00116f4c:
      uVar17 = FUN_00112014(param_1,uVar16);
      uVar17 = (**(code **)(*param_1 + 0x488))(param_1,uVar16,uVar17);
      FUN_00104d9c(param_1,uVar17);
      lVar23 = *param_1;
      *(undefined2 *)(puVar22 + -0x8f8) = 0x6b;
      pcVar24 = *(code **)(lVar23 + 0x538);
      *(undefined8 *)pcVar28 = s_getBytes_base_apFile_00101350._8_8_;
      (*pcVar24)(param_1,pcVar28);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10))
    break;
LAB_00116fc8:
    uVar17 = FUN_00112014(param_1,uVar16);
    uVar17 = (**(code **)(*param_1 + 0x488))(param_1,uVar16,uVar17);
    FUN_00104d9c(param_1,uVar17);
    lVar23 = *param_1;
    *(undefined2 *)(puVar22 + -0x8f8) = 0x6b;
    pcVar24 = *(code **)(lVar23 + 0x538);
    *(undefined8 *)pcVar28 = s_getBytes_base_apFile_00101350._8_8_;
    (*pcVar24)(param_1,pcVar28);
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  lVar23 = 0;
  lVar26 = 0x80;
  do {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_001170b0;
    while ((pcVar28[lVar23] = '\0', (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_40_0012a6d0))) {
LAB_001170b0:
      pcVar28[lVar23] = '\0';
    }
    lVar26 = lVar26 + -1;
    lVar23 = lVar23 + 1;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
  goto LAB_00117228;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_001171b0;
    while( true ) {
      uVar16 = FUN_00102538(param_1,uVar17,uVar18);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar18);
      lVar23 = *param_1;
      *(int *)(puVar22 + -0x878) = (int)ram0x00101360;
      pcVar24 = *(code **)(lVar23 + 0x30);
      *(undefined8 *)pcVar33 = s_getDefaujava_io_nce_00101378._8_8_;
      puVar22[-0x874] = 0;
      uVar19 = (*pcVar24)(param_1,pcVar33);
      piVar35 = (int *)PTR_y_40_0012a6d0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)
         ) break;
LAB_001171b0:
      FUN_00102538(param_1,uVar17,uVar18);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar18);
      lVar23 = *param_1;
      *(int *)(puVar22 + -0x878) = (int)ram0x00101360;
      pcVar24 = *(code **)(lVar23 + 0x30);
      *(undefined8 *)pcVar33 = s_getDefaujava_io_nce_00101378._8_8_;
      puVar22[-0x874] = 0;
      (*pcVar24)(param_1,pcVar33);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10))
    break;
LAB_00117228:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_0011d394;
    while( true ) {
      FUN_00102538(param_1,uVar17,uVar18);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar18);
      lVar23 = *param_1;
      *(int *)(puVar22 + -0x878) = (int)ram0x00101360;
      pcVar24 = *(code **)(lVar23 + 0x30);
      *(undefined8 *)pcVar33 = s_getDefaujava_io_nce_00101378._8_8_;
      puVar22[-0x874] = 0;
      (*pcVar24)(param_1,pcVar33);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)
         ) break;
LAB_0011d394:
      FUN_00102538(param_1,uVar17,uVar18);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar18);
      lVar23 = *param_1;
      *(int *)(puVar22 + -0x878) = (int)ram0x00101360;
      pcVar24 = *(code **)(lVar23 + 0x30);
      *(undefined8 *)pcVar33 = s_getDefaujava_io_nce_00101378._8_8_;
      puVar22[-0x874] = 0;
      (*pcVar24)(param_1,pcVar33);
    }
  }
  lVar23 = 0;
  lVar26 = 0x80;
  do {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_00117364;
    while ((pcVar33[lVar23] = '\0', (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_40_0012a6d0))) {
LAB_00117364:
      pcVar33[lVar23] = '\0';
    }
    lVar26 = lVar26 + -1;
    lVar23 = lVar23 + 1;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
  goto code_r0x001174cc;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
    goto code_r0x0011744c;
    while( true ) {
      uVar17 = FUN_00103b60(param_1,uVar19,&DAT_00101628,&DAT_00101638);
      uVar17 = FUN_00124e5c(param_1,uVar19,uVar17,uVar16);
      uVar18 = FUN_0011e048(param_1,uVar19,&DAT_001019d8,&DAT_001019e8);
      cVar13 = FUN_00125df0(param_1,uVar17,uVar18);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
code_r0x0011744c:
      uVar17 = FUN_00103b60(param_1,uVar19,&DAT_00101628,&DAT_00101638);
      uVar17 = FUN_00124e5c(param_1,uVar19,uVar17,uVar16);
      uVar18 = FUN_0011e048(param_1,uVar19,&DAT_001019d8,&DAT_001019e8);
      FUN_00125df0(param_1,uVar17,uVar18);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
code_r0x001174cc:
    uVar17 = FUN_00103b60(param_1,uVar19,&DAT_00101628,&DAT_00101638);
    uVar17 = FUN_00124e5c(param_1,uVar19,uVar17,uVar16);
    uVar18 = FUN_0011e048(param_1,uVar19,&DAT_001019d8,&DAT_001019e8);
    FUN_00125df0(param_1,uVar17,uVar18);
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (cVar13 == '\0') {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_001175dc;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_001175b0;
      while ((FUN_00108e58(param_1,uVar16), (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *piVar35))) {
LAB_001175b0:
        FUN_00108e58(param_1,uVar16);
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_001175dc:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011d410;
      while ((FUN_00108e58(param_1,uVar16), (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *piVar35))) {
LAB_0011d410:
        FUN_00108e58(param_1,uVar16);
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
  }
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  local_98 = uVar17;
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_00117740;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_001176e4;
    while( true ) {
      pcVar28 = local_78;
      puVar27 = local_a0;
      pcVar24 = *(code **)(*param_1 + 0x108);
      *(undefined8 *)local_78 = s_getAssetsetWrita<ini_001013b0._8_8_;
      *(int *)(pcVar28 + 8) = (int)ram0x001013d8;
      *puVar27 = (int)DAT_001013a8;
      *(undefined2 *)(puVar27 + 1) = 0x5a;
      uVar17 = (*pcVar24)(param_1,uVar19);
      uVar16 = local_98;
      puVar27 = local_a0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_001176e4:
      pcVar28 = local_78;
      puVar27 = local_a0;
      pcVar24 = *(code **)(*param_1 + 0x108);
      *(undefined8 *)local_78 = s_getAssetsetWrita<ini_001013b0._8_8_;
      *(int *)(pcVar28 + 8) = (int)ram0x001013d8;
      *puVar27 = (int)DAT_001013a8;
      *(undefined2 *)(puVar27 + 1) = 0x5a;
      (*pcVar24)(param_1,uVar19);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_00117740:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011d478;
    while( true ) {
      pcVar28 = local_78;
      puVar27 = local_a0;
      pcVar24 = *(code **)(*param_1 + 0x108);
      *(undefined8 *)local_78 = s_getAssetsetWrita<ini_001013b0._8_8_;
      *(int *)(pcVar28 + 8) = (int)ram0x001013d8;
      *puVar27 = (int)DAT_001013a8;
      *(undefined2 *)(puVar27 + 1) = 0x5a;
      (*pcVar24)(param_1,uVar19);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011d478:
      pcVar28 = local_78;
      puVar27 = local_a0;
      pcVar24 = *(code **)(*param_1 + 0x108);
      *(undefined8 *)local_78 = s_getAssetsetWrita<ini_001013b0._8_8_;
      *(int *)(pcVar28 + 8) = (int)ram0x001013d8;
      *puVar27 = (int)DAT_001013a8;
      *(undefined2 *)(puVar27 + 1) = 0x5a;
      (*pcVar24)(param_1,uVar19);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  lVar23 = 0x60;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_00117808;
    while( true ) {
      pcVar28 = local_78 + 1;
      *local_78 = '\0';
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_00117808:
      *local_78 = '\0';
    }
    lVar23 = lVar23 + -1;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    local_78 = pcVar28;
  } while (lVar23 != 0);
  lVar23 = 0xa0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011794c;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_00117928;
      while( true ) {
        *(undefined1 *)puVar27 = 0;
        lVar26 = ~(0x2883b933aa4f63beU - lVar23) + 0x2883b933aa4f63be;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_00117928:
        *(undefined1 *)puVar27 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011794c:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_001179ac;
      while ((*(undefined1 *)puVar27 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *piVar35))) {
LAB_001179ac:
        *(undefined1 *)puVar27 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    lVar23 = lVar26;
    puVar27 = (undefined4 *)((long)puVar27 + 1);
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_00117a80;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_00117a48;
    while ((FUN_00125df0(param_1,uVar16,uVar17,0,0), puVar21 = local_70, puVar30 = local_e0,
           piVar34 = (int *)PTR_y_40_0012a6d0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0
           && (9 < *piVar35))) {
LAB_00117a48:
      FUN_00125df0(param_1,uVar16,uVar17,0,0);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_00117a80:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011d4ec;
    while ((FUN_00125df0(param_1,uVar16,uVar17,0,0),
           (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar35))) {
LAB_0011d4ec:
      FUN_00125df0(param_1,uVar16,uVar17,0,0);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  iVar14 = 0x5a3cb46a;
  lVar23 = 0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar14 >> 0x10);
    cVar13 = (char)lVar23;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_00117da4;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
      goto LAB_00117c9c;
      while( true ) {
        bVar6 = (&DAT_00101690)[lVar23];
        bVar7 = cVar13 * '\x11' + 0x2a;
        iVar15 = *(int *)puVar11;
        bVar6 = ((bVar6 ^ 0xff) & 0x30 | bVar6 & 0xc5) ^ 0xc5 | bVar6 & 10;
        bVar7 = (((bVar7 ^ 0xff) & 0x10 | bVar7 & 0xc1) ^ 0x12 | (bVar7 ^ 0xff) & 0x24) ^
                ((~bVar7 | 0xf1) & 0xd3 | bVar7 & 8);
        bVar9 = bVar3 ^ 0xff | 0x21;
        bVar8 = (bVar3 ^ 0x21) & (bVar3 ^ 0xff);
        bVar7 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        bVar6 = (bVar7 ^ 0x21) & bVar7;
        bVar7 = ((bVar7 | 0xde) ^ 0xff | 0x8e) ^ ((bVar6 ^ 0xff) & 0x8e | bVar6 & 0x71) |
                (bVar7 | 0xde | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar8 ^ 0xff) & 0x22 | bVar8 & 0xdd) ^ (bVar9 & 0x22 | bVar3 & 0xdc) |
                (bVar9 | bVar8 ^ 0xff) ^ 0xff;
        lVar26 = lVar23 + 1;
        local_70[lVar23] = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_00117c9c:
        bVar6 = (&DAT_00101690)[lVar23];
        bVar7 = cVar13 * '\x11' + 0x2a;
        bVar6 = ((bVar6 ^ 0xff) & 0x30 | bVar6 & 0xc5) ^ 0xc5 | bVar6 & 10;
        bVar7 = (((bVar7 ^ 0xff) & 0x10 | bVar7 & 0xc1) ^ 0x12 | (bVar7 ^ 0xff) & 0x24) ^
                ((~bVar7 | 0xf1) & 0xd3 | bVar7 & 8);
        bVar8 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        bVar6 = bVar3 ^ 0xff | 0x21;
        bVar9 = (bVar3 ^ 0x21) & (bVar3 ^ 0xff);
        bVar7 = (bVar8 ^ 0x21) & bVar8;
        bVar7 = ((bVar8 | 0xde) ^ 0xff | 0x8e) ^ ((bVar7 ^ 0xff) & 0x8e | bVar7 & 0x71) |
                (bVar8 | 0xde | bVar7 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar9 ^ 0xff) & 0x22 | bVar9 & 0xdd) ^ (bVar6 & 0x22 | bVar3 & 0xdc) |
                (bVar6 | bVar9 ^ 0xff) ^ 0xff;
        local_70[lVar23] = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)
         ) break;
LAB_00117da4:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
      goto LAB_00117ef8;
      while( true ) {
        bVar6 = (&DAT_00101690)[lVar23];
        bVar7 = cVar13 * '\x11' + 0x2a;
        iVar15 = *(int *)puVar11;
        bVar6 = ((bVar6 ^ 0xff) & 0x30 | bVar6 & 0xc5) ^ 0xc5 | bVar6 & 10;
        bVar7 = (((bVar7 ^ 0xff) & 0x10 | bVar7 & 0xc1) ^ 0x12 | (bVar7 ^ 0xff) & 0x24) ^
                ((~bVar7 | 0xf1) & 0xd3 | bVar7 & 8);
        bVar9 = bVar3 ^ 0xff | 0x21;
        bVar8 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        bVar6 = (bVar3 ^ 0x21) & (bVar3 ^ 0xff);
        bVar7 = (bVar8 ^ 0x21) & bVar8;
        bVar7 = ((bVar8 | 0xde) ^ 0xff | 0x8e) ^ ((bVar7 ^ 0xff) & 0x8e | bVar7 & 0x71) |
                (bVar8 | 0xde | bVar7 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar6 ^ 0xff) & 0x22 | bVar6 & 0xdd) ^ (bVar9 & 0x22 | bVar3 & 0xdc) |
                (bVar9 | bVar6 ^ 0xff) ^ 0xff;
        local_70[lVar23] = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_00117ef8:
        bVar6 = (&DAT_00101690)[lVar23];
        bVar7 = cVar13 * '\x11' + 0x2a;
        bVar6 = ((bVar6 ^ 0xff) & 0x30 | bVar6 & 0xc5) ^ 0xc5 | bVar6 & 10;
        bVar7 = (((bVar7 ^ 0xff) & 0x10 | bVar7 & 0xc1) ^ 0x12 | (bVar7 ^ 0xff) & 0x24) ^
                ((~bVar7 | 0xf1) & 0xd3 | bVar7 & 8);
        bVar8 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        bVar6 = bVar3 ^ 0xff | 0x21;
        bVar9 = (bVar3 ^ 0x21) & (bVar3 ^ 0xff);
        bVar7 = (bVar8 ^ 0x21) & bVar8;
        bVar7 = ((bVar8 | 0xde) ^ 0xff | 0x8e) ^ ((bVar7 ^ 0xff) & 0x8e | bVar7 & 0x71) |
                (bVar8 | 0xde | bVar7 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar9 ^ 0xff) & 0x22 | bVar9 & 0xdd) ^ (bVar6 & 0x22 | bVar3 & 0xdc) |
                (bVar6 | bVar9 ^ 0xff) ^ 0xff;
        local_70[lVar23] = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_40_0012a6d0);
    lVar23 = lVar26;
    piVar35 = (int *)PTR_y_40_0012a6d0;
  } while (lVar26 != 0x17);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
  goto LAB_001180b0;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_00118078;
    while( true ) {
      lVar23 = *param_1;
      puVar21[0x17] = 0;
      uVar16 = (**(code **)(lVar23 + 0x30))(param_1,puVar21);
      puVar29 = local_80;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118078:
      lVar23 = *param_1;
      puVar21[0x17] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar21);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001180b0:
    lVar23 = *param_1;
    puVar21[0x17] = 0;
    (**(code **)(lVar23 + 0x30))(param_1,puVar21);
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  lVar23 = 0x80;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001181cc;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_001181a8;
      while( true ) {
        *puVar21 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001181a8:
        *puVar21 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001181cc:
      *puVar21 = 0;
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    lVar23 = lVar26;
    puVar21 = puVar21 + 1;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
LAB_0011822c:
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) {
      if (9 < *piVar34) goto LAB_0011822c;
    }
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
  } while( true );
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  iVar14 = 0x5a3c3ce2;
  lVar23 = 0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    iVar15 = (int)lVar23;
    bVar3 = (byte)((uint)iVar14 >> 0x10);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001184c4;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_00118418;
      while( true ) {
        bVar6 = (&DAT_001019f8)[lVar23];
        uVar4 = iVar15 * 0x11 - 0x5e;
        bVar7 = (byte)uVar4;
        iVar25 = *(int *)puVar11;
        bVar7 = (bVar7 ^ (bVar6 & 0xf0 | bVar6 & 7 | (byte)((~(uint)bVar6 >> 3 & 1) << 3)) ^ 0xff ^
                0xf7) & bVar7 |
                ((~bVar7 & 0xe0 | ~bVar7 & 0xf | (byte)((uVar4 >> 4 & 1) << 4)) ^ 0xef |
                bVar6 ^ 0xff) ^ 0xff;
        bVar6 = (bVar3 ^ 0xff) & 0x88 | bVar3 & 0x77;
        bVar7 = ((bVar7 ^ 0xff) & 2 | bVar7 & 4) ^ 4 | (bVar7 ^ 6) & bVar7;
        bVar6 = (bVar6 ^ 0x8e) & (bVar6 ^ 0x77) | bVar3 & 0xf9;
        puVar30[lVar23] = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        lVar26 = lVar23 + 1;
        if (((iVar25 * (iVar25 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118418:
        bVar6 = (&DAT_001019f8)[lVar23];
        uVar4 = iVar15 * 0x11 - 0x5e;
        bVar7 = (byte)uVar4;
        bVar7 = (bVar7 ^ (bVar6 & 0xf0 | bVar6 & 7 | (byte)((~(uint)bVar6 >> 3 & 1) << 3)) ^ 0xff ^
                0xf7) & bVar7 |
                ((~bVar7 & 0xe0 | ~bVar7 & 0xf | (byte)((uVar4 >> 4 & 1) << 4)) ^ 0xef |
                bVar6 ^ 0xff) ^ 0xff;
        bVar6 = (bVar3 ^ 0xff) & 0x88 | bVar3 & 0x77;
        bVar7 = ((bVar7 ^ 0xff) & 2 | bVar7 & 4) ^ 4 | (bVar7 ^ 6) & bVar7;
        bVar6 = (bVar6 ^ 0x8e) & (bVar6 ^ 0x77) | bVar3 & 0xf9;
        puVar30[lVar23] = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001184c4:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_001185ac;
      while( true ) {
        bVar6 = (&DAT_001019f8)[lVar23];
        uVar4 = iVar15 * 0x11 - 0x5e;
        bVar7 = (byte)uVar4;
        bVar9 = (bVar3 ^ 0xff) & 0x88 | bVar3 & 0x77;
        iVar25 = *(int *)puVar11;
        bVar6 = (bVar7 ^ (bVar6 & 0xf0 | bVar6 & 7 | (byte)((~(uint)bVar6 >> 3 & 1) << 3)) ^ 0xff ^
                0xf7) & bVar7 |
                ((~bVar7 & 0xe0 | ~bVar7 & 0xf | (byte)((uVar4 >> 4 & 1) << 4)) ^ 0xef |
                bVar6 ^ 0xff) ^ 0xff;
        bVar7 = ((bVar6 ^ 0xff) & 2 | bVar6 & 4) ^ 4 | (bVar6 ^ 6) & bVar6;
        bVar6 = (bVar9 ^ 0x8e) & (bVar9 ^ 0x77) | bVar3 & 0xf9;
        puVar30[lVar23] = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        if (((iVar25 * (iVar25 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001185ac:
        bVar6 = (&DAT_001019f8)[lVar23];
        uVar4 = iVar15 * 0x11 - 0x5e;
        bVar7 = (byte)uVar4;
        bVar7 = (bVar7 ^ (bVar6 & 0xf0 | bVar6 & 7 | (byte)((~(uint)bVar6 >> 3 & 1) << 3)) ^ 0xff ^
                0xf7) & bVar7 |
                ((~bVar7 & 0xe0 | ~bVar7 & 0xf | (byte)((uVar4 >> 4 & 1) << 4)) ^ 0xef |
                bVar6 ^ 0xff) ^ 0xff;
        bVar6 = (bVar3 ^ 0xff) & 0x88 | bVar3 & 0x77;
        bVar7 = ((bVar7 ^ 0xff) & 2 | bVar7 & 4) ^ 4 | (bVar7 ^ 6) & bVar7;
        bVar6 = (bVar6 ^ 0x8e) & (bVar6 ^ 0x77) | bVar3 & 0xf9;
        puVar30[lVar23] = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    lVar23 = lVar26;
  } while (lVar26 != 0xe);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001186e0;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001186bc;
    while ((iVar14 = *(int *)puVar11, puVar30[0xe] = 0, puVar21 = local_e0,
           (iVar14 * (iVar14 + -1) & 1U) != 0 && (9 < *piVar34))) {
LAB_001186bc:
      puVar30[0xe] = 0;
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001186e0:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_0011d528;
    while ((iVar14 = *(int *)puVar11, puVar30[0xe] = 0, (iVar14 * (iVar14 + -1) & 1U) != 0 &&
           (9 < *piVar34))) {
LAB_0011d528:
      puVar30[0xe] = 0;
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  lVar23 = 0;
  iVar14 = 0x5a3c2dd1;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    iVar15 = (int)lVar23;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001189c0;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_001188d8;
      while( true ) {
        uVar5 = iVar15 * 0x11 - 0x4d;
        uVar4 = ~(uint)(byte)(&DAT_00101a10)[lVar23];
        uVar5 = (uVar5 ^ 0xffffffff) & 100 | uVar5 & 0xffffff9b;
        uVar5 = (uVar5 ^ 0x60) & 0x69 | (uVar5 ^ 0xfffffff3) & 0xffffff96;
        uVar4 = ((uVar4 & 0xfffffffc | uVar4 & 1 | ((byte)(&DAT_00101a10)[lVar23] >> 1 & 1) << 1) ^
                0xfffffffd) & 0x77777777 | uVar4 & 0xffffff88;
        iVar25 = iVar14 * 0x41c64e6d + 0x3039;
        uVar5 = (uVar5 ^ 0x1e) & 0x77 | (uVar5 ^ 8) & 0xffffff88;
        iVar2 = *(int *)puVar11;
        bVar3 = (byte)uVar5 ^ (byte)uVar4 ^ 0xff;
        bVar6 = (byte)((uint)iVar25 >> 0x10);
        bVar3 = bVar3 & 0xf0 | bVar3 & 3 | (byte)(((uVar5 ^ uVar4) >> 2 & 3) << 2);
        bVar6 = (bVar6 & 0xd9 | 8 | (bVar6 ^ 0xff) & 0x22) ^ ((~bVar6 | 0xf7) & 0xd9 | bVar6 & 4);
        local_80[lVar23] =
             ((bVar3 ^ 0xff) & 0x78 | bVar3 & 0x87) ^ ((bVar6 ^ 0xff) & 0x78 | bVar6 & 0x87);
        lVar26 = lVar23 + 1;
        puVar29 = local_80;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001188d8:
        uVar5 = iVar15 * 0x11 - 0x4d;
        uVar4 = ~(uint)(byte)(&DAT_00101a10)[lVar23];
        uVar5 = (uVar5 ^ 0xffffffff) & 100 | uVar5 & 0xffffff9b;
        uVar5 = (uVar5 ^ 0x60) & 0x69 | (uVar5 ^ 0xfffffff3) & 0xffffff96;
        uVar4 = ((uVar4 & 0xfffffffc | uVar4 & 1 | ((byte)(&DAT_00101a10)[lVar23] >> 1 & 1) << 1) ^
                0xfffffffd) & 0x77777777 | uVar4 & 0xffffff88;
        uVar5 = (uVar5 ^ 0x1e) & 0x77 | (uVar5 ^ 8) & 0xffffff88;
        bVar3 = (byte)uVar5 ^ (byte)uVar4 ^ 0xff;
        bVar6 = (byte)((uint)(iVar14 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar3 = bVar3 & 0xf0 | bVar3 & 3 | (byte)(((uVar5 ^ uVar4) >> 2 & 3) << 2);
        bVar6 = (bVar6 & 0xd9 | 8 | (bVar6 ^ 0xff) & 0x22) ^ ((~bVar6 | 0xf7) & 0xd9 | bVar6 & 4);
        puVar29[lVar23] =
             ((bVar3 ^ 0xff) & 0x78 | bVar3 & 0x87) ^ ((bVar6 ^ 0xff) & 0x78 | bVar6 & 0x87);
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001189c0:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_00118ae4;
      while( true ) {
        uVar5 = iVar15 * 0x11 - 0x4d;
        uVar4 = ~(uint)(byte)(&DAT_00101a10)[lVar23];
        uVar5 = (uVar5 ^ 0xffffffff) & 100 | uVar5 & 0xffffff9b;
        uVar5 = (uVar5 ^ 0x60) & 0x69 | (uVar5 ^ 0xfffffff3) & 0xffffff96;
        uVar4 = ((uVar4 & 0xfffffffc | uVar4 & 1 | ((byte)(&DAT_00101a10)[lVar23] >> 1 & 1) << 1) ^
                0xfffffffd) & 0x77777777 | uVar4 & 0xffffff88;
        uVar5 = (uVar5 ^ 0x1e) & 0x77 | (uVar5 ^ 8) & 0xffffff88;
        iVar25 = *(int *)puVar11;
        bVar3 = (byte)uVar5 ^ (byte)uVar4 ^ 0xff;
        bVar6 = (byte)((uint)(iVar14 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar3 = bVar3 & 0xf0 | bVar3 & 3 | (byte)(((uVar5 ^ uVar4) >> 2 & 3) << 2);
        bVar6 = (bVar6 & 0xd9 | 8 | (bVar6 ^ 0xff) & 0x22) ^ ((~bVar6 | 0xf7) & 0xd9 | bVar6 & 4);
        puVar29[lVar23] =
             ((bVar3 ^ 0xff) & 0x78 | bVar3 & 0x87) ^ ((bVar6 ^ 0xff) & 0x78 | bVar6 & 0x87);
        if (((iVar25 * (iVar25 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118ae4:
        uVar5 = iVar15 * 0x11 - 0x4d;
        uVar4 = ~(uint)(byte)(&DAT_00101a10)[lVar23];
        uVar5 = (uVar5 ^ 0xffffffff) & 100 | uVar5 & 0xffffff9b;
        uVar5 = (uVar5 ^ 0x60) & 0x69 | (uVar5 ^ 0xfffffff3) & 0xffffff96;
        uVar4 = ((uVar4 & 0xfffffffc | uVar4 & 1 | ((byte)(&DAT_00101a10)[lVar23] >> 1 & 1) << 1) ^
                0xfffffffd) & 0x77777777 | uVar4 & 0xffffff88;
        uVar5 = (uVar5 ^ 0x1e) & 0x77 | (uVar5 ^ 8) & 0xffffff88;
        bVar3 = (byte)uVar5 ^ (byte)uVar4 ^ 0xff;
        bVar6 = (byte)((uint)(iVar14 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar3 = bVar3 & 0xf0 | bVar3 & 3 | (byte)(((uVar5 ^ uVar4) >> 2 & 3) << 2);
        bVar6 = (bVar6 & 0xd9 | 8 | (bVar6 ^ 0xff) & 0x22) ^ ((~bVar6 | 0xf7) & 0xd9 | bVar6 & 4);
        puVar29[lVar23] =
             ((bVar3 ^ 0xff) & 0x78 | bVar3 & 0x87) ^ ((bVar6 ^ 0xff) & 0x78 | bVar6 & 0x87);
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    lVar23 = lVar26;
    iVar14 = iVar25;
  } while (lVar26 != 0x19);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_00118c98;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_00118c54;
    while( true ) {
      lVar23 = *param_1;
      local_80[0x19] = 0;
      uVar18 = (**(code **)(lVar23 + 0x108))(param_1,uVar16,puVar21,local_80);
      uVar17 = local_b8;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118c54:
      lVar23 = *param_1;
      local_80[0x19] = 0;
      (**(code **)(lVar23 + 0x108))(param_1,uVar16,puVar21,local_80);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118c98:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_0011d570;
    while( true ) {
      lVar23 = *param_1;
      local_80[0x19] = 0;
      (**(code **)(lVar23 + 0x108))(param_1,uVar16,puVar21,local_80);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_0011d570:
      lVar23 = *param_1;
      local_80[0x19] = 0;
      (**(code **)(lVar23 + 0x108))(param_1,uVar16,puVar21,local_80);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  lVar23 = 0x60;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_00118d98;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_00118d74;
      while( true ) {
        *puVar21 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118d74:
        *puVar21 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118d98:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_00118df8;
      while ((*puVar21 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar34)))
      {
LAB_00118df8:
        *puVar21 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    lVar23 = lVar26;
    puVar21 = puVar21 + 1;
  } while (lVar26 != 0);
  lVar23 = 0xa0;
  puVar30 = local_80;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_00118ec0;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_00118e9c;
      while( true ) {
        *puVar30 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118e9c:
        *puVar30 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118ec0:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_00118f20;
      while ((*puVar30 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar34)))
      {
LAB_00118f20:
        *puVar30 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    lVar23 = lVar26;
    puVar30 = puVar30 + 1;
  } while (lVar26 != 0);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_00118fc0;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_00118f90;
    while ((uVar16 = FUN_00125094(param_1,uVar17,uVar18), puVar30 = local_d8,
           (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar34))) {
LAB_00118f90:
      FUN_00125094(param_1,uVar17,uVar18);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00118fc0:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_0011d5c4;
    while ((FUN_00125094(param_1,uVar17,uVar18),
           (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar34))) {
LAB_0011d5c4:
      FUN_00125094(param_1,uVar17,uVar18);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  iVar14 = 0x5a3c5ac0;
  lVar23 = 0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar14 >> 0x10);
    cVar13 = (char)lVar23;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001191e4;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_0011914c;
      while( true ) {
        bVar6 = (&DAT_00101a38)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x3c;
        bVar7 = (bVar9 | 0xc1) & 0x43 | (bVar9 ^ 0xff) & 0x8c;
        bVar9 = ~bVar9 & 0x43 | 2 | bVar9 & 0x30;
        bVar6 = ((bVar6 ^ 0xff) & 6 | bVar6 & 0x88) ^ 0x88 | bVar6 & 0x71;
        iVar15 = *(int *)puVar11;
        bVar6 = ((bVar7 ^ bVar9 ^ 0xff) & 0xfc | (bVar7 ^ bVar9) & 3) ^ (~bVar6 & 0xfc | bVar6 & 3);
        local_d8[lVar23] = bVar3 & (bVar6 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar6 ^ 0xff) ^ 0xff;
        lVar26 = lVar23 + 1;
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_0011914c:
        bVar6 = (&DAT_00101a38)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x3c;
        bVar7 = (bVar9 | 0xc1) & 0x43 | (bVar9 ^ 0xff) & 0x8c;
        bVar6 = ((bVar6 ^ 0xff) & 6 | bVar6 & 0x88) ^ 0x88 | bVar6 & 0x71;
        bVar9 = ~bVar9 & 0x43 | 2 | bVar9 & 0x30;
        bVar6 = ((bVar7 ^ bVar9 ^ 0xff) & 0xfc | (bVar7 ^ bVar9) & 3) ^ (~bVar6 & 0xfc | bVar6 & 3);
        local_d8[lVar23] = bVar3 & (bVar6 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar6 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001191e4:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_00119294;
      while( true ) {
        bVar6 = (&DAT_00101a38)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x3c;
        bVar7 = (bVar9 | 0xc1) & 0x43 | (bVar9 ^ 0xff) & 0x8c;
        bVar9 = ~bVar9 & 0x43 | 2 | bVar9 & 0x30;
        bVar6 = ((bVar6 ^ 0xff) & 6 | bVar6 & 0x88) ^ 0x88 | bVar6 & 0x71;
        iVar15 = *(int *)puVar11;
        bVar6 = ((bVar7 ^ bVar9 ^ 0xff) & 0xfc | (bVar7 ^ bVar9) & 3) ^ (~bVar6 & 0xfc | bVar6 & 3);
        local_d8[lVar23] = bVar3 & (bVar6 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar6 ^ 0xff) ^ 0xff;
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00119294:
        bVar6 = (&DAT_00101a38)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x3c;
        bVar7 = (bVar9 | 0xc1) & 0x43 | (bVar9 ^ 0xff) & 0x8c;
        bVar6 = ((bVar6 ^ 0xff) & 6 | bVar6 & 0x88) ^ 0x88 | bVar6 & 0x71;
        bVar9 = ~bVar9 & 0x43 | 2 | bVar9 & 0x30;
        bVar6 = ((bVar7 ^ bVar9 ^ 0xff) & 0xfc | (bVar7 ^ bVar9) & 3) ^ (~bVar6 & 0xfc | bVar6 & 3);
        local_d8[lVar23] = bVar3 & (bVar6 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar6 ^ 0xff) ^ 0xff;
      }
    }
    lVar23 = lVar26;
  } while (lVar26 != 0x20);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001193e0;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001193a8;
    while( true ) {
      lVar23 = *param_1;
      puVar30[0x20] = 0;
      uVar17 = (**(code **)(lVar23 + 0x30))(param_1,puVar30);
      piVar35 = (int *)PTR_y_40_0012a6d0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001193a8:
      lVar23 = *param_1;
      puVar30[0x20] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001193e0:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_0011d60c;
    while( true ) {
      lVar23 = *param_1;
      puVar30[0x20] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_0011d60c:
      lVar23 = *param_1;
      puVar30[0x20] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  lVar23 = 0x80;
  do {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001194e8;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_001194c4;
      while( true ) {
        *puVar30 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001194c4:
        *puVar30 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001194e8:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34))
      goto LAB_00119548;
      while ((*puVar30 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar34)))
      {
LAB_00119548:
        *puVar30 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    lVar23 = lVar26;
    puVar30 = puVar30 + 1;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_00119610;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_001195e4;
    while( true ) {
      iVar14 = *(int *)puVar11;
      puVar22[-0x478] = 0;
      *(undefined8 *)pcVar32 = s_pathListnts_00101418._0_8_;
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_001195e4:
      puVar22[-0x478] = 0;
      *(undefined8 *)pcVar32 = s_pathListnts_00101418._0_8_;
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_00119610:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar34)) goto LAB_0011d650;
    while( true ) {
      iVar14 = *(int *)puVar11;
      puVar22[-0x478] = 0;
      *(undefined8 *)pcVar32 = s_pathListnts_00101418._0_8_;
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*piVar34 < 10)) break;
LAB_0011d650:
      puVar22[-0x478] = 0;
      *(undefined8 *)pcVar32 = s_pathListnts_00101418._0_8_;
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar34);
  iVar15 = 0x5a3c6995;
  iVar14 = 0x5a3c78a6;
  lVar23 = 0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar34);
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar14 >> 0x10);
    cVar13 = (char)lVar23;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_001198d0;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
      goto LAB_00119810;
      while( true ) {
        bVar6 = (&DAT_00101a68)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x1a;
        bVar7 = (bVar9 ^ 0xff) & 0xe1;
        bVar6 = ((bVar6 ^ 0xff) & 0x88 | bVar6 & 0x71) ^ 0x71 | (bVar6 ^ 0xf9) & bVar6;
        bVar7 = ((bVar7 ^ 0xff) & 0x27 | ((bVar7 | bVar9 & 0x18) ^ 0x18) & 0xd8) ^
                (~bVar9 | 0xe1) & 0x27;
        bVar6 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        iVar25 = *(int *)puVar11;
        local_68[lVar23] =
             (bVar3 ^ ((bVar6 ^ 0xff) & 0xd4 | bVar6 & 0x2b) ^ 0xff ^ 0x2b) & bVar3 |
             (((bVar3 ^ 0xff) & 0xa9 | bVar3 & 0x56) ^ 0xa9 | bVar6 ^ 0xff) ^ 0xff;
        lVar26 = 0x25aeb920ad9d954a - ~(lVar23 + 0xda5146df52626ab6U);
        if (((iVar25 * (iVar25 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_00119810:
        bVar6 = (&DAT_00101a68)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x1a;
        bVar7 = (bVar9 ^ 0xff) & 0xe1;
        bVar6 = ((bVar6 ^ 0xff) & 0x88 | bVar6 & 0x71) ^ 0x71 | (bVar6 ^ 0xf9) & bVar6;
        bVar7 = ((bVar7 ^ 0xff) & 0x27 | ((bVar7 | bVar9 & 0x18) ^ 0x18) & 0xd8) ^
                (~bVar9 | 0xe1) & 0x27;
        bVar6 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        local_68[lVar23] =
             (bVar3 ^ ((bVar6 ^ 0xff) & 0xd4 | bVar6 & 0x2b) ^ 0xff ^ 0x2b) & bVar3 |
             (((bVar3 ^ 0xff) & 0xa9 | bVar3 & 0x56) ^ 0xa9 | bVar6 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)
         ) break;
LAB_001198d0:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
      goto LAB_001199e0;
      while( true ) {
        bVar6 = (&DAT_00101a68)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x1a;
        bVar7 = (bVar9 ^ 0xff) & 0xe1;
        bVar6 = ((bVar6 ^ 0xff) & 0x88 | bVar6 & 0x71) ^ 0x71 | (bVar6 ^ 0xf9) & bVar6;
        bVar7 = ((bVar7 ^ 0xff) & 0x27 | ((bVar7 | bVar9 & 0x18) ^ 0x18) & 0xd8) ^
                (~bVar9 | 0xe1) & 0x27;
        bVar6 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        iVar25 = *(int *)puVar11;
        local_68[lVar23] =
             (bVar3 ^ ((bVar6 ^ 0xff) & 0xd4 | bVar6 & 0x2b) ^ 0xff ^ 0x2b) & bVar3 |
             (((bVar3 ^ 0xff) & 0xa9 | bVar3 & 0x56) ^ 0xa9 | bVar6 ^ 0xff) ^ 0xff;
        if (((iVar25 * (iVar25 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_001199e0:
        bVar6 = (&DAT_00101a68)[lVar23];
        bVar9 = cVar13 * '\x11' - 0x1a;
        bVar7 = (bVar9 ^ 0xff) & 0xe1;
        bVar6 = ((bVar6 ^ 0xff) & 0x88 | bVar6 & 0x71) ^ 0x71 | (bVar6 ^ 0xf9) & bVar6;
        bVar7 = ((bVar7 ^ 0xff) & 0x27 | ((bVar7 | bVar9 & 0x18) ^ 0x18) & 0xd8) ^
                (~bVar9 | 0xe1) & 0x27;
        bVar6 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
        local_68[lVar23] =
             (bVar3 ^ ((bVar6 ^ 0xff) & 0xd4 | bVar6 & 0x2b) ^ 0xff ^ 0x2b) & bVar3 |
             (((bVar3 ^ 0xff) & 0xa9 | bVar3 & 0x56) ^ 0xa9 | bVar6 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_40_0012a6d0);
    lVar23 = lVar26;
    piVar34 = (int *)PTR_y_40_0012a6d0;
  } while (lVar26 != 0x1b);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  local_80 = (undefined1 *)uVar18;
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
  goto LAB_00119d5c;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_00119c1c;
    while( true ) {
      lVar23 = *param_1;
      local_68[0x1b] = 0;
      uVar18 = (**(code **)(lVar23 + 0x2f0))(param_1,uVar17,pcVar32);
      *pcVar32 = '\0';
      puVar22[-0x47f] = 0;
      puVar22[-0x47e] = 0;
      puVar22[-0x47d] = 0;
      puVar22[-0x47c] = 0;
      puVar22[-0x47b] = 0;
      puVar22[-0x47a] = 0;
      puVar22[-0x479] = 0;
      puVar22[-0x478] = 0;
      puVar22[-0x477] = 0;
      puVar22[-0x476] = 0;
      puVar22[-0x475] = 0;
      puVar22[-0x474] = 0;
      puVar22[-0x473] = 0;
      puVar22[-0x472] = 0;
      puVar22[-0x471] = 0;
      puVar22[-0x470] = 0;
      puVar22[-0x46f] = 0;
      puVar22[-0x46e] = 0;
      puVar22[-0x46d] = 0;
      puVar22[-0x46c] = 0;
      puVar22[-0x46b] = 0;
      puVar22[-0x46a] = 0;
      puVar22[-0x469] = 0;
      puVar22[-0x468] = 0;
      puVar22[-0x467] = 0;
      puVar22[-0x466] = 0;
      puVar22[-0x465] = 0;
      puVar22[-0x464] = 0;
      puVar22[-0x463] = 0;
      puVar22[-0x462] = 0;
      puVar22[-0x461] = 0;
      puVar22[-0x460] = 0;
      puVar22[-0x45f] = 0;
      puVar22[-0x45e] = 0;
      puVar22[-0x45d] = 0;
      puVar22[-0x45c] = 0;
      puVar22[-0x45b] = 0;
      puVar22[-0x45a] = 0;
      puVar22[-0x459] = 0;
      puVar22[-0x458] = 0;
      puVar22[-0x457] = 0;
      puVar22[-0x456] = 0;
      puVar22[-0x455] = 0;
      puVar22[-0x454] = 0;
      puVar22[-0x453] = 0;
      puVar22[-0x452] = 0;
      puVar22[-0x451] = 0;
      puVar22[-0x450] = 0;
      puVar22[-0x44f] = 0;
      puVar22[-0x44e] = 0;
      puVar22[-0x44d] = 0;
      puVar22[-0x44c] = 0;
      puVar22[-1099] = 0;
      puVar22[-0x44a] = 0;
      puVar22[-0x449] = 0;
      puVar22[-0x448] = 0;
      puVar22[-0x447] = 0;
      puVar22[-0x446] = 0;
      puVar22[-0x445] = 0;
      puVar22[-0x444] = 0;
      puVar22[-0x443] = 0;
      puVar22[-0x442] = 0;
      puVar22[-0x441] = 0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_00119c1c:
      lVar23 = *param_1;
      local_68[0x1b] = 0;
      (**(code **)(lVar23 + 0x2f0))(param_1,uVar17,pcVar32);
      *pcVar32 = '\0';
      puVar22[-0x47f] = 0;
      puVar22[-0x47e] = 0;
      puVar22[-0x47d] = 0;
      puVar22[-0x47c] = 0;
      puVar22[-0x47b] = 0;
      puVar22[-0x47a] = 0;
      puVar22[-0x479] = 0;
      puVar22[-0x478] = 0;
      puVar22[-0x477] = 0;
      puVar22[-0x476] = 0;
      puVar22[-0x475] = 0;
      puVar22[-0x474] = 0;
      puVar22[-0x473] = 0;
      puVar22[-0x472] = 0;
      puVar22[-0x471] = 0;
      puVar22[-0x470] = 0;
      puVar22[-0x46f] = 0;
      puVar22[-0x46e] = 0;
      puVar22[-0x46d] = 0;
      puVar22[-0x46c] = 0;
      puVar22[-0x46b] = 0;
      puVar22[-0x46a] = 0;
      puVar22[-0x469] = 0;
      puVar22[-0x468] = 0;
      puVar22[-0x467] = 0;
      puVar22[-0x466] = 0;
      puVar22[-0x465] = 0;
      puVar22[-0x464] = 0;
      puVar22[-0x463] = 0;
      puVar22[-0x462] = 0;
      puVar22[-0x461] = 0;
      puVar22[-0x460] = 0;
      puVar22[-0x45f] = 0;
      puVar22[-0x45e] = 0;
      puVar22[-0x45d] = 0;
      puVar22[-0x45c] = 0;
      puVar22[-0x45b] = 0;
      puVar22[-0x45a] = 0;
      puVar22[-0x459] = 0;
      puVar22[-0x458] = 0;
      puVar22[-0x457] = 0;
      puVar22[-0x456] = 0;
      puVar22[-0x455] = 0;
      puVar22[-0x454] = 0;
      puVar22[-0x453] = 0;
      puVar22[-0x452] = 0;
      puVar22[-0x451] = 0;
      puVar22[-0x450] = 0;
      puVar22[-0x44f] = 0;
      puVar22[-0x44e] = 0;
      puVar22[-0x44d] = 0;
      puVar22[-0x44c] = 0;
      puVar22[-1099] = 0;
      puVar22[-0x44a] = 0;
      puVar22[-0x449] = 0;
      puVar22[-0x448] = 0;
      puVar22[-0x447] = 0;
      puVar22[-0x446] = 0;
      puVar22[-0x445] = 0;
      puVar22[-0x444] = 0;
      puVar22[-0x443] = 0;
      puVar22[-0x442] = 0;
      puVar22[-0x441] = 0;
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_00119d5c:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011d79c;
    while( true ) {
      lVar23 = *param_1;
      local_68[0x1b] = 0;
      (**(code **)(lVar23 + 0x2f0))(param_1,uVar17,pcVar32);
      *pcVar32 = '\0';
      puVar22[-0x47f] = 0;
      puVar22[-0x47e] = 0;
      puVar22[-0x47d] = 0;
      puVar22[-0x47c] = 0;
      puVar22[-0x47b] = 0;
      puVar22[-0x47a] = 0;
      puVar22[-0x479] = 0;
      puVar22[-0x478] = 0;
      puVar22[-0x477] = 0;
      puVar22[-0x476] = 0;
      puVar22[-0x475] = 0;
      puVar22[-0x474] = 0;
      puVar22[-0x473] = 0;
      puVar22[-0x472] = 0;
      puVar22[-0x471] = 0;
      puVar22[-0x470] = 0;
      puVar22[-0x46f] = 0;
      puVar22[-0x46e] = 0;
      puVar22[-0x46d] = 0;
      puVar22[-0x46c] = 0;
      puVar22[-0x46b] = 0;
      puVar22[-0x46a] = 0;
      puVar22[-0x469] = 0;
      puVar22[-0x468] = 0;
      puVar22[-0x467] = 0;
      puVar22[-0x466] = 0;
      puVar22[-0x465] = 0;
      puVar22[-0x464] = 0;
      puVar22[-0x463] = 0;
      puVar22[-0x462] = 0;
      puVar22[-0x461] = 0;
      puVar22[-0x460] = 0;
      puVar22[-0x45f] = 0;
      puVar22[-0x45e] = 0;
      puVar22[-0x45d] = 0;
      puVar22[-0x45c] = 0;
      puVar22[-0x45b] = 0;
      puVar22[-0x45a] = 0;
      puVar22[-0x459] = 0;
      puVar22[-0x458] = 0;
      puVar22[-0x457] = 0;
      puVar22[-0x456] = 0;
      puVar22[-0x455] = 0;
      puVar22[-0x454] = 0;
      puVar22[-0x453] = 0;
      puVar22[-0x452] = 0;
      puVar22[-0x451] = 0;
      puVar22[-0x450] = 0;
      puVar22[-0x44f] = 0;
      puVar22[-0x44e] = 0;
      puVar22[-0x44d] = 0;
      puVar22[-0x44c] = 0;
      puVar22[-1099] = 0;
      puVar22[-0x44a] = 0;
      puVar22[-0x449] = 0;
      puVar22[-0x448] = 0;
      puVar22[-0x447] = 0;
      puVar22[-0x446] = 0;
      puVar22[-0x445] = 0;
      puVar22[-0x444] = 0;
      puVar22[-0x443] = 0;
      puVar22[-0x442] = 0;
      puVar22[-0x441] = 0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011d79c:
      lVar23 = *param_1;
      local_68[0x1b] = 0;
      (**(code **)(lVar23 + 0x2f0))(param_1,uVar17,pcVar32);
      *pcVar32 = '\0';
      puVar22[-0x47f] = 0;
      puVar22[-0x47e] = 0;
      puVar22[-0x47d] = 0;
      puVar22[-0x47c] = 0;
      puVar22[-0x47b] = 0;
      puVar22[-0x47a] = 0;
      puVar22[-0x479] = 0;
      puVar22[-0x478] = 0;
      puVar22[-0x477] = 0;
      puVar22[-0x476] = 0;
      puVar22[-0x475] = 0;
      puVar22[-0x474] = 0;
      puVar22[-0x473] = 0;
      puVar22[-0x472] = 0;
      puVar22[-0x471] = 0;
      puVar22[-0x470] = 0;
      puVar22[-0x46f] = 0;
      puVar22[-0x46e] = 0;
      puVar22[-0x46d] = 0;
      puVar22[-0x46c] = 0;
      puVar22[-0x46b] = 0;
      puVar22[-0x46a] = 0;
      puVar22[-0x469] = 0;
      puVar22[-0x468] = 0;
      puVar22[-0x467] = 0;
      puVar22[-0x466] = 0;
      puVar22[-0x465] = 0;
      puVar22[-0x464] = 0;
      puVar22[-0x463] = 0;
      puVar22[-0x462] = 0;
      puVar22[-0x461] = 0;
      puVar22[-0x460] = 0;
      puVar22[-0x45f] = 0;
      puVar22[-0x45e] = 0;
      puVar22[-0x45d] = 0;
      puVar22[-0x45c] = 0;
      puVar22[-0x45b] = 0;
      puVar22[-0x45a] = 0;
      puVar22[-0x459] = 0;
      puVar22[-0x458] = 0;
      puVar22[-0x457] = 0;
      puVar22[-0x456] = 0;
      puVar22[-0x455] = 0;
      puVar22[-0x454] = 0;
      puVar22[-0x453] = 0;
      puVar22[-0x452] = 0;
      puVar22[-0x451] = 0;
      puVar22[-0x450] = 0;
      puVar22[-0x44f] = 0;
      puVar22[-0x44e] = 0;
      puVar22[-0x44d] = 0;
      puVar22[-0x44c] = 0;
      puVar22[-1099] = 0;
      puVar22[-0x44a] = 0;
      puVar22[-0x449] = 0;
      puVar22[-0x448] = 0;
      puVar22[-0x447] = 0;
      puVar22[-0x446] = 0;
      puVar22[-0x445] = 0;
      puVar22[-0x444] = 0;
      puVar22[-0x443] = 0;
      puVar22[-0x442] = 0;
      puVar22[-0x441] = 0;
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  puVar30 = local_68;
  lVar23 = 0x80;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_00119e88;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_00119e64;
      while( true ) {
        *puVar30 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_00119e64:
        *puVar30 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_00119e88:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_00119ee8;
      while ((*puVar30 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar35)))
      {
LAB_00119ee8:
        *puVar30 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    puVar30 = puVar30 + 1;
    lVar23 = lVar26;
  } while (lVar26 != 0);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_00119f40;
  while ((uVar17 = (**(code **)(*param_1 + 0x2f8))(param_1,uVar16,uVar18), puVar29 = local_b0,
         puVar21 = local_c8, puVar30 = local_e8,
         (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar35))) {
LAB_00119f40:
    (**(code **)(*param_1 + 0x2f8))(param_1,uVar16,uVar18);
  }
  lVar23 = 0;
  do {
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar15 >> 0x10);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011a0a8;
    while( true ) {
      bVar6 = (&DAT_00101488)[lVar23];
      uVar5 = (int)lVar23 * 0x11 - 9;
      bVar7 = (bVar6 ^ 0x45) & (bVar6 ^ 0xff);
      bVar6 = (bVar6 ^ 0x45) & bVar6;
      uVar4 = (uVar5 ^ 0x45) & uVar5;
      bVar10 = (byte)uVar4;
      bVar8 = ~bVar10;
      bVar9 = (byte)uVar5 | 0xba;
      bVar6 = ((bVar7 ^ 0xff) & 0xf2 | bVar7 & 0xd) ^ ((bVar6 ^ 0xff) & 0xf2 | bVar6 & 0xd) |
              (~bVar7 | bVar6 ^ 0xff) ^ 0xff;
      bVar7 = bVar9 & 0xdf ^ (bVar8 & 0xc0 | bVar8 & 0x1f | (byte)((uVar4 >> 5 & 1) << 5)) |
              (bVar9 | bVar10 ^ 0xff) ^ 0xff;
      iVar14 = *(int *)puVar11;
      bVar7 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      bVar6 = bVar7 | bVar3 ^ 0xff;
      bVar7 = ((bVar3 ^ 0xff) & 0xa0 | bVar3 & 0x5f) ^ 0xa0 | bVar7 ^ 0xff;
      local_b0[lVar23] =
           (bVar6 & 0xc2 | (bVar6 ^ 0xff) & 0x3d) ^ (bVar7 & 0xc2 | (bVar7 ^ 0xff) & 0x3d) |
           (bVar6 | bVar7) ^ 0xff;
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a0a8:
      bVar6 = (&DAT_00101488)[lVar23];
      uVar5 = (int)lVar23 * 0x11 - 9;
      bVar7 = (bVar6 ^ 0x45) & (bVar6 ^ 0xff);
      bVar6 = (bVar6 ^ 0x45) & bVar6;
      uVar4 = (uVar5 ^ 0x45) & uVar5;
      bVar10 = (byte)uVar4;
      bVar8 = ~bVar10;
      bVar9 = (byte)uVar5 | 0xba;
      bVar6 = ((bVar7 ^ 0xff) & 0xf2 | bVar7 & 0xd) ^ ((bVar6 ^ 0xff) & 0xf2 | bVar6 & 0xd) |
              (~bVar7 | bVar6 ^ 0xff) ^ 0xff;
      bVar7 = bVar9 & 0xdf ^ (bVar8 & 0xc0 | bVar8 & 0x1f | (byte)((uVar4 >> 5 & 1) << 5)) |
              (bVar9 | bVar10 ^ 0xff) ^ 0xff;
      bVar7 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      bVar6 = bVar7 | bVar3 ^ 0xff;
      bVar7 = ((bVar3 ^ 0xff) & 0xa0 | bVar3 & 0x5f) ^ 0xa0 | bVar7 ^ 0xff;
      local_b0[lVar23] =
           (bVar6 & 0xc2 | (bVar6 ^ 0xff) & 0x3d) ^ (bVar7 & 0xc2 | (bVar7 ^ 0xff) & 0x3d) |
           (bVar6 | bVar7) ^ 0xff;
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0x13);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  local_78 = (char *)uVar17;
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011a240;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011a208;
    while( true ) {
      lVar23 = *param_1;
      puVar29[0x13] = 0;
      uVar16 = (**(code **)(lVar23 + 0x30))(param_1,puVar29);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a208:
      lVar23 = *param_1;
      puVar29[0x13] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar29);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a240:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011d8f4;
    while( true ) {
      lVar23 = *param_1;
      puVar29[0x13] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar29);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011d8f4:
      lVar23 = *param_1;
      puVar29[0x13] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar29);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  lVar23 = 0x80;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011a36c;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011a348;
      while( true ) {
        *puVar29 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a348:
        *puVar29 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a36c:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011a3cc;
      while ((*puVar29 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar35)))
      {
LAB_0011a3cc:
        *puVar29 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    lVar23 = lVar26;
    puVar29 = puVar29 + 1;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011a4c8;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
    goto code_r0x0011a484;
    while( true ) {
      uVar17 = FUN_0011e048(param_1,uVar16,&DAT_00101628,&DAT_001019c8);
      iVar14 = *(int *)puVar11;
      *local_90 = (int)DAT_00101410;
      puVar27 = local_90;
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
code_r0x0011a484:
      FUN_0011e048(param_1,uVar16,&DAT_00101628,&DAT_001019c8);
      *local_90 = (int)DAT_00101410;
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a4c8:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
    goto code_r0x0011d958;
    while( true ) {
      FUN_0011e048(param_1,uVar16,&DAT_00101628,&DAT_001019c8);
      iVar14 = *(int *)puVar11;
      *local_90 = (int)DAT_00101410;
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
code_r0x0011d958:
      FUN_0011e048(param_1,uVar16,&DAT_00101628,&DAT_001019c8);
      *local_90 = (int)DAT_00101410;
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  iVar14 = 0x5a3cf92d;
  lVar23 = 0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar14 >> 0x10);
    cVar13 = (char)lVar23;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011a764;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011a68c;
      while( true ) {
        bVar6 = cVar13 * -0x11 + 0x98;
        bVar6 = (bVar6 & 0x20 | cVar13 * '\x11' + 0x67U & 0x80 | 0x18) ^
                (bVar6 & 0x98 | 0x80 | (bVar6 ^ 0xff) & 0x47);
        bVar7 = (bVar3 ^ 0x3f) & (bVar3 ^ 0xff);
        bVar6 = ((&DAT_00101a90)[lVar23] ^ 0xa0) & (bVar6 ^ 0xff) |
                bVar6 & ((&DAT_00101a90)[lVar23] ^ 0x5f);
        iVar15 = *(int *)puVar11;
        bVar6 = (bVar6 ^ 0xff) & 0x3f | (bVar6 ^ 0x3f) & bVar6;
        bVar7 = ((bVar7 ^ 0xff) & 0x8d | bVar7 & 0x72) ^ ((~bVar3 | 0x3f) & 0x8d | bVar3 & 0x40) |
                (~bVar3 | 0x3f | bVar7 ^ 0xff) ^ 0xff;
        puVar30[lVar23] = (~bVar6 & 0xc1 | bVar6 & 0x3e) ^ (~bVar7 & 0xc1 | bVar7 & 0x3e);
        lVar26 = lVar23 + 1;
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a68c:
        bVar6 = cVar13 * -0x11 + 0x98;
        bVar6 = (bVar6 & 0x20 | cVar13 * '\x11' + 0x67U & 0x80 | 0x18) ^
                (bVar6 & 0x98 | 0x80 | (bVar6 ^ 0xff) & 0x47);
        bVar7 = (bVar3 ^ 0x3f) & (bVar3 ^ 0xff);
        bVar6 = ((&DAT_00101a90)[lVar23] ^ 0xa0) & (bVar6 ^ 0xff) |
                bVar6 & ((&DAT_00101a90)[lVar23] ^ 0x5f);
        bVar6 = (bVar6 ^ 0xff) & 0x3f | (bVar6 ^ 0x3f) & bVar6;
        bVar7 = ((bVar7 ^ 0xff) & 0x8d | bVar7 & 0x72) ^ ((~bVar3 | 0x3f) & 0x8d | bVar3 & 0x40) |
                (~bVar3 | 0x3f | bVar7 ^ 0xff) ^ 0xff;
        puVar30[lVar23] = (~bVar6 & 0xc1 | bVar6 & 0x3e) ^ (~bVar7 & 0xc1 | bVar7 & 0x3e);
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a764:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011a854;
      while( true ) {
        bVar6 = cVar13 * -0x11 + 0x98;
        bVar6 = (bVar6 & 0x20 | cVar13 * '\x11' + 0x67U & 0x80 | 0x18) ^
                (bVar6 & 0x98 | 0x80 | (bVar6 ^ 0xff) & 0x47);
        bVar7 = (bVar3 ^ 0x3f) & (bVar3 ^ 0xff);
        bVar6 = ((&DAT_00101a90)[lVar23] ^ 0xa0) & (bVar6 ^ 0xff) |
                bVar6 & ((&DAT_00101a90)[lVar23] ^ 0x5f);
        iVar15 = *(int *)puVar11;
        bVar6 = (bVar6 ^ 0xff) & 0x3f | (bVar6 ^ 0x3f) & bVar6;
        bVar7 = ((bVar7 ^ 0xff) & 0x8d | bVar7 & 0x72) ^ ((~bVar3 | 0x3f) & 0x8d | bVar3 & 0x40) |
                (~bVar3 | 0x3f | bVar7 ^ 0xff) ^ 0xff;
        puVar30[lVar23] = (~bVar6 & 0xc1 | bVar6 & 0x3e) ^ (~bVar7 & 0xc1 | bVar7 & 0x3e);
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a854:
        bVar6 = cVar13 * -0x11 + 0x98;
        bVar6 = (bVar6 & 0x20 | cVar13 * '\x11' + 0x67U & 0x80 | 0x18) ^
                (bVar6 & 0x98 | 0x80 | (bVar6 ^ 0xff) & 0x47);
        bVar7 = (bVar3 ^ 0x3f) & (bVar3 ^ 0xff);
        bVar6 = ((&DAT_00101a90)[lVar23] ^ 0xa0) & (bVar6 ^ 0xff) |
                bVar6 & ((&DAT_00101a90)[lVar23] ^ 0x5f);
        bVar6 = (bVar6 ^ 0xff) & 0x3f | (bVar6 ^ 0x3f) & bVar6;
        bVar7 = ((bVar7 ^ 0xff) & 0x8d | bVar7 & 0x72) ^ ((~bVar3 | 0x3f) & 0x8d | bVar3 & 0x40) |
                (~bVar3 | 0x3f | bVar7 ^ 0xff) ^ 0xff;
        puVar30[lVar23] = (~bVar6 & 0xc1 | bVar6 & 0x3e) ^ (~bVar7 & 0xc1 | bVar7 & 0x3e);
      }
    }
    lVar23 = lVar26;
  } while (lVar26 != 0x15);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011a9f4;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011a9b4;
    while( true ) {
      lVar23 = *param_1;
      puVar30[0x15] = 0;
      uVar18 = (**(code **)(lVar23 + 0x108))(param_1,uVar16,puVar27,puVar30);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a9b4:
      lVar23 = *param_1;
      puVar30[0x15] = 0;
      (**(code **)(lVar23 + 0x108))(param_1,uVar16,puVar27,puVar30);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011a9f4:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011d9bc;
    while( true ) {
      lVar23 = *param_1;
      puVar30[0x15] = 0;
      (**(code **)(lVar23 + 0x108))(param_1,uVar16,puVar27,puVar30);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011d9bc:
      lVar23 = *param_1;
      puVar30[0x15] = 0;
      (**(code **)(lVar23 + 0x108))(param_1,uVar16,puVar27,puVar30);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  lVar23 = 0x60;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011aaf0;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011aacc;
      while( true ) {
        *(undefined1 *)puVar27 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011aacc:
        *(undefined1 *)puVar27 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011aaf0:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011ab2c;
      while ((*(undefined1 *)puVar27 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *piVar35))) {
LAB_0011ab2c:
        *(undefined1 *)puVar27 = 0;
      }
    }
    lVar23 = lVar26;
    puVar27 = (undefined4 *)((long)puVar27 + 1);
  } while (lVar26 != 0);
  lVar23 = 0xa0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011ac3c;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011ac18;
      while( true ) {
        *puVar30 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011ac18:
        *puVar30 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011ac3c:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011ac9c;
      while ((*puVar30 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar35)))
      {
LAB_0011ac9c:
        *puVar30 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    lVar23 = lVar26;
    puVar30 = puVar30 + 1;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011adb4;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011ad5c;
    while( true ) {
      uVar19 = FUN_00124e5c(param_1,uVar16,uVar17);
      uVar20 = FUN_00124e5c(param_1,uVar16,uVar17);
      FUN_00125df0(param_1,uVar19,uVar18,local_98);
      puVar29 = local_c0;
      puVar30 = local_d0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011ad5c:
      uVar19 = FUN_00124e5c(param_1,uVar16,uVar17);
      FUN_00124e5c(param_1,uVar16,uVar17);
      FUN_00125df0(param_1,uVar19,uVar18,local_98);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011adb4:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011da34;
    while( true ) {
      uVar19 = FUN_00124e5c(param_1,uVar16,uVar17);
      FUN_00124e5c(param_1,uVar16,uVar17);
      FUN_00125df0(param_1,uVar19,uVar18,local_98);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011da34:
      uVar19 = FUN_00124e5c(param_1,uVar16,uVar17);
      FUN_00124e5c(param_1,uVar16,uVar17);
      FUN_00125df0(param_1,uVar19,uVar18,local_98);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  lVar23 = 0;
  iVar14 = 0x5a3c1703;
  do {
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar14 >> 0x10);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011af24;
    while( true ) {
      bVar6 = (&DAT_00101ab0)[lVar23];
      bVar7 = (char)lVar23 * '\x11' + 0x89;
      bVar6 = ((bVar6 ^ 0xff) & 2 | bVar6 & 1) ^ 1 | bVar6 & 0xfc;
      bVar7 = ((bVar7 ^ 0xff) & 2 | bVar7 & 1 | 0xec) ^ (~bVar7 & 0xed | 1 | bVar7 & 0x10);
      iVar15 = *(int *)puVar11;
      bVar7 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      bVar6 = (bVar7 ^ 0xff) & 0x12 | bVar7 & 0x28;
      bVar6 = ((bVar6 ^ 0xf7) & 0x5d | (bVar6 ^ 0x20) & 0xe7) ^
              (~bVar7 & 0x5d | 0x18 | bVar7 & 0x80);
      local_d0[lVar23] = (bVar3 ^ 0x3a) & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xc5);
      if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011af24:
      bVar6 = (&DAT_00101ab0)[lVar23];
      bVar7 = (char)lVar23 * '\x11' + 0x89;
      bVar6 = ((bVar6 ^ 0xff) & 2 | bVar6 & 1) ^ 1 | bVar6 & 0xfc;
      bVar7 = ((bVar7 ^ 0xff) & 2 | bVar7 & 1 | 0xec) ^ (~bVar7 & 0xed | 1 | bVar7 & 0x10);
      bVar7 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      bVar6 = (bVar7 ^ 0xff) & 0x12 | bVar7 & 0x28;
      bVar6 = ((bVar6 ^ 0xf7) & 0x5d | (bVar6 ^ 0x20) & 0xe7) ^
              (~bVar7 & 0x5d | 0x18 | bVar7 & 0x80);
      local_d0[lVar23] = (bVar3 ^ 0x3a) & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xc5);
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0x19);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011b0a0;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011b068;
    while( true ) {
      lVar23 = *param_1;
      puVar30[0x19] = 0;
      uVar16 = (**(code **)(lVar23 + 0x30))(param_1,puVar30);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b068:
      lVar23 = *param_1;
      puVar30[0x19] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b0a0:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011daa4;
    while( true ) {
      lVar23 = *param_1;
      puVar30[0x19] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011daa4:
      lVar23 = *param_1;
      puVar30[0x19] = 0;
      (**(code **)(lVar23 + 0x30))(param_1,puVar30);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  lVar23 = 0x80;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011b150;
    while( true ) {
      *puVar30 = 0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b150:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011b1b8;
      while ((*puVar30 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar35)))
      {
LAB_0011b1b8:
        *puVar30 = 0;
      }
    }
    lVar23 = lVar23 + -1;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    puVar30 = puVar30 + 1;
  } while (lVar23 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
LAB_0011b200:
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) {
      if (9 < *piVar35) goto LAB_0011b200;
    }
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
  } while( true );
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  lVar23 = 0;
  iVar14 = 0x5a3c35e1;
  do {
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar14 >> 0x10);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011b390;
    while( true ) {
      bVar6 = (&DAT_00101608)[lVar23];
      uVar4 = (int)lVar23 * 0x11 - 0x55;
      bVar7 = ~(byte)uVar4;
      bVar7 = bVar7 & 0xe0 | bVar7 & 1 | (byte)((uVar4 >> 1 & 0xf) << 1);
      iVar15 = *(int *)puVar11;
      bVar6 = (bVar6 & 0x23 | 2 | (bVar6 ^ 0xff) & 0xc0) ^ ((~bVar6 | 0xe1) & 0x23 | bVar6 & 0x1c);
      bVar7 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      bVar6 = bVar7 | bVar3 ^ 0xff;
      bVar7 = ((bVar3 ^ 0xff) & 0xcc | bVar3 & 0x33) ^ 0xcc | bVar7 ^ 0xff;
      puVar21[lVar23] =
           (bVar6 & 0xef | (bVar6 ^ 0xff) & 0x10) ^ (bVar7 & 0xef | (bVar7 ^ 0xff) & 0x10) |
           (bVar6 | bVar7) ^ 0xff;
      if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b390:
      bVar6 = (&DAT_00101608)[lVar23];
      uVar4 = (int)lVar23 * 0x11 - 0x55;
      bVar7 = ~(byte)uVar4;
      bVar7 = bVar7 & 0xe0 | bVar7 & 1 | (byte)((uVar4 >> 1 & 0xf) << 1);
      bVar6 = (bVar6 & 0x23 | 2 | (bVar6 ^ 0xff) & 0xc0) ^ ((~bVar6 | 0xe1) & 0x23 | bVar6 & 0x1c);
      bVar7 = bVar6 & (bVar7 ^ 0xff) | bVar7 & (bVar6 ^ 0xff);
      bVar6 = bVar7 | bVar3 ^ 0xff;
      bVar7 = ((bVar3 ^ 0xff) & 0xcc | bVar3 & 0x33) ^ 0xcc | bVar7 ^ 0xff;
      puVar21[lVar23] =
           (bVar6 & 0xef | (bVar6 ^ 0xff) & 0x10) ^ (bVar7 & 0xef | (bVar7 ^ 0xff) & 0x10) |
           (bVar6 | bVar7) ^ 0xff;
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0x10);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011b460;
  while ((iVar14 = *(int *)puVar11, puVar21[0x10] = 0, (iVar14 * (iVar14 + -1) & 1U) != 0 &&
         (9 < *piVar35))) {
LAB_0011b460:
    puVar21[0x10] = 0;
  }
  iVar14 = 0x5a3c53c7;
  lVar23 = 0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar14 >> 0x10);
    cVar13 = (char)lVar23;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011b658;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011b5b0;
      while( true ) {
        bVar6 = cVar13 * '\x11' - 0x33;
        bVar7 = ((&DAT_00101ad8)[lVar23] ^ cVar13 * -0x11 + 0x32U ^ 0xff) & bVar6 |
                (bVar6 | (&DAT_00101ad8)[lVar23] ^ 0xff) ^ 0xff;
        bVar6 = (bVar7 ^ 0xc) & bVar7;
        iVar15 = *(int *)puVar11;
        bVar6 = ((bVar7 | 0xf3) & 0x8a | (bVar7 ^ 0xff) & 4) ^
                ((bVar6 ^ 0xff) & 0x8a | bVar6 & 0x75) | (bVar7 | 0xf3 | bVar6 ^ 0xff) ^ 0xff;
        puVar29[lVar23] =
             (~bVar6 & 0x9f | bVar6 & 0x60) ^
             (~((bVar3 ^ 0xff) & 0xc | bVar3 & 0xf3) & 0x9f | bVar3 & 0x60);
        lVar26 = lVar23 + 1;
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b5b0:
        bVar6 = cVar13 * '\x11' - 0x33;
        bVar7 = ((&DAT_00101ad8)[lVar23] ^ cVar13 * -0x11 + 0x32U ^ 0xff) & bVar6 |
                (bVar6 | (&DAT_00101ad8)[lVar23] ^ 0xff) ^ 0xff;
        bVar6 = (bVar7 ^ 0xc) & bVar7;
        bVar6 = ((bVar7 | 0xf3) & 0x8a | (bVar7 ^ 0xff) & 4) ^
                ((bVar6 ^ 0xff) & 0x8a | bVar6 & 0x75) | (bVar7 | 0xf3 | bVar6 ^ 0xff) ^ 0xff;
        puVar29[lVar23] =
             (~bVar6 & 0x9f | bVar6 & 0x60) ^
             (~((bVar3 ^ 0xff) & 0xc | bVar3 & 0xf3) & 0x9f | bVar3 & 0x60);
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b658:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011b73c;
      while( true ) {
        bVar6 = cVar13 * '\x11' - 0x33;
        bVar7 = ((&DAT_00101ad8)[lVar23] ^ cVar13 * -0x11 + 0x32U ^ 0xff) & bVar6 |
                (bVar6 | (&DAT_00101ad8)[lVar23] ^ 0xff) ^ 0xff;
        bVar6 = (bVar7 ^ 0xc) & bVar7;
        iVar15 = *(int *)puVar11;
        bVar6 = ((bVar7 | 0xf3) & 0x8a | (bVar7 ^ 0xff) & 4) ^
                ((bVar6 ^ 0xff) & 0x8a | bVar6 & 0x75) | (bVar7 | 0xf3 | bVar6 ^ 0xff) ^ 0xff;
        puVar29[lVar23] =
             (~bVar6 & 0x9f | bVar6 & 0x60) ^
             (~((bVar3 ^ 0xff) & 0xc | bVar3 & 0xf3) & 0x9f | bVar3 & 0x60);
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b73c:
        bVar6 = cVar13 * '\x11' - 0x33;
        bVar7 = ((&DAT_00101ad8)[lVar23] ^ cVar13 * -0x11 + 0x32U ^ 0xff) & bVar6 |
                (bVar6 | (&DAT_00101ad8)[lVar23] ^ 0xff) ^ 0xff;
        bVar6 = (bVar7 ^ 0xc) & bVar7;
        bVar6 = ((bVar7 | 0xf3) & 0x8a | (bVar7 ^ 0xff) & 4) ^
                ((bVar6 ^ 0xff) & 0x8a | bVar6 & 0x75) | (bVar7 | 0xf3 | bVar6 ^ 0xff) ^ 0xff;
        puVar29[lVar23] =
             (~bVar6 & 0x9f | bVar6 & 0x60) ^
             (~((bVar3 ^ 0xff) & 0xc | bVar3 & 0xf3) & 0x9f | bVar3 & 0x60);
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    lVar23 = lVar26;
  } while (lVar26 != 0x54);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011b8a8;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011b868;
    while( true ) {
      lVar23 = *param_1;
      puVar29[0x54] = 0;
      uVar17 = (**(code **)(lVar23 + 0x388))(param_1,uVar16,puVar21,puVar29);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b868:
      lVar23 = *param_1;
      puVar29[0x54] = 0;
      (**(code **)(lVar23 + 0x388))(param_1,uVar16,puVar21,puVar29);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b8a8:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011dafc;
    while( true ) {
      lVar23 = *param_1;
      puVar29[0x54] = 0;
      (**(code **)(lVar23 + 0x388))(param_1,uVar16,puVar21,puVar29);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011dafc:
      lVar23 = *param_1;
      puVar29[0x54] = 0;
      (**(code **)(lVar23 + 0x388))(param_1,uVar16,puVar21,puVar29);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  lVar23 = 0x60;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011b9a4;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011b980;
      while( true ) {
        *puVar21 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b980:
        *puVar21 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011b9a4:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011ba04;
      while ((*puVar21 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar35)))
      {
LAB_0011ba04:
        *puVar21 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    lVar23 = lVar26;
    puVar21 = puVar21 + 1;
  } while (lVar26 != 0);
  lVar23 = 0xa0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011bacc;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011baa8;
      while( true ) {
        *puVar29 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011baa8:
        *puVar29 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011bacc:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011bb2c;
      while ((*puVar29 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar35)))
      {
LAB_0011bb2c:
        *puVar29 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    lVar23 = lVar26;
    puVar29 = puVar29 + 1;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011bc34;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011bbe8;
    while( true ) {
      puVar21 = (undefined1 *)FUN_00125634(param_1,uVar16,uVar17,uVar19,0,uVar20);
      puVar30 = local_a8;
      iVar14 = *(int *)puVar11;
      *(undefined8 *)pcVar31 = s_dexElemeDir_00101398._0_8_;
      *(int *)(puVar22 + -0xb8) = (int)ram0x00101420;
      local_70 = puVar21;
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011bbe8:
      FUN_00125634(param_1,uVar16,uVar17,uVar19,0,uVar20);
      *(undefined8 *)pcVar31 = s_dexElemeDir_00101398._0_8_;
      *(int *)(puVar22 + -0xb8) = (int)ram0x00101420;
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011bc34:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011db68;
    while( true ) {
      FUN_00125634(param_1,uVar16,uVar17,uVar19,0,uVar20);
      iVar14 = *(int *)puVar11;
      *(undefined8 *)pcVar31 = s_dexElemeDir_00101398._0_8_;
      *(int *)(puVar22 + -0xb8) = (int)ram0x00101420;
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011db68:
      FUN_00125634(param_1,uVar16,uVar17,uVar19,0,uVar20);
      *(undefined8 *)pcVar31 = s_dexElemeDir_00101398._0_8_;
      *(int *)(puVar22 + -0xb8) = (int)ram0x00101420;
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  lVar23 = 0;
  iVar14 = 0x5a3cba68;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    cVar13 = (char)lVar23;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011be80;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011bddc;
      while( true ) {
        bVar3 = (&DAT_00101b38)[lVar23];
        iVar25 = *(int *)puVar11;
        iVar15 = iVar14 * 0x41c64e6d + 0x3039;
        bVar6 = cVar13 * '\x11' + 0x24;
        bVar8 = (byte)((uint)iVar15 >> 0x10);
        bVar7 = bVar8 ^ 0xff | 0x89;
        bVar9 = (bVar8 ^ 0x89) & (bVar8 ^ 0xff);
        bVar3 = bVar3 & (bVar6 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = (bVar3 ^ 0xff) & 0x89 | bVar3 & 0x76;
        bVar3 = ((bVar9 ^ 0xff) & 0x90 | bVar9 & 0x6f) ^ (bVar7 & 0x90 | bVar8 & 0x66) |
                (bVar7 | bVar9 ^ 0xff) ^ 0xff;
        local_a8[lVar23] = bVar3 & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xff);
        lVar26 = lVar23 + 1;
        if (((iVar25 * (iVar25 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011bddc:
        bVar6 = cVar13 * '\x11' + 0x24;
        bVar3 = (&DAT_00101b38)[lVar23];
        bVar8 = (byte)((uint)(iVar14 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar9 = (bVar8 ^ 0x89) & (bVar8 ^ 0xff);
        bVar3 = bVar3 & (bVar6 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar6 ^ 0xff) ^ 0xff;
        bVar7 = bVar8 ^ 0xff | 0x89;
        bVar6 = (bVar3 ^ 0xff) & 0x89 | bVar3 & 0x76;
        bVar3 = ((bVar9 ^ 0xff) & 0x90 | bVar9 & 0x6f) ^ (bVar7 & 0x90 | bVar8 & 0x66) |
                (bVar7 | bVar9 ^ 0xff) ^ 0xff;
        local_a8[lVar23] = bVar3 & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xff);
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011be80:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011bf60;
      while( true ) {
        bVar3 = (&DAT_00101b38)[lVar23];
        bVar6 = cVar13 * '\x11' + 0x24;
        iVar15 = *(int *)puVar11;
        bVar8 = (byte)((uint)(iVar14 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar7 = bVar8 ^ 0xff | 0x89;
        bVar9 = (bVar8 ^ 0x89) & (bVar8 ^ 0xff);
        bVar3 = bVar3 & (bVar6 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = (bVar3 ^ 0xff) & 0x89 | bVar3 & 0x76;
        bVar3 = ((bVar9 ^ 0xff) & 0x90 | bVar9 & 0x6f) ^ (bVar7 & 0x90 | bVar8 & 0x66) |
                (bVar7 | bVar9 ^ 0xff) ^ 0xff;
        local_a8[lVar23] = bVar3 & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xff);
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011bf60:
        bVar6 = cVar13 * '\x11' + 0x24;
        bVar3 = (&DAT_00101b38)[lVar23];
        bVar8 = (byte)((uint)(iVar14 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar9 = (bVar8 ^ 0x89) & (bVar8 ^ 0xff);
        bVar3 = bVar3 & (bVar6 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar6 ^ 0xff) ^ 0xff;
        bVar7 = bVar8 ^ 0xff | 0x89;
        bVar6 = (bVar3 ^ 0xff) & 0x89 | bVar3 & 0x76;
        bVar3 = ((bVar9 ^ 0xff) & 0x90 | bVar9 & 0x6f) ^ (bVar7 & 0x90 | bVar8 & 0x66) |
                (bVar7 | bVar9 ^ 0xff) ^ 0xff;
        local_a8[lVar23] = bVar3 & (bVar6 ^ 0xff) | bVar6 & (bVar3 ^ 0xff);
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    lVar23 = lVar26;
    iVar14 = iVar15;
  } while (lVar26 != 0x24);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011c2cc;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011c18c;
    while( true ) {
      lVar23 = *param_1;
      puVar30[0x24] = 0;
      uVar17 = (**(code **)(lVar23 + 0x2f0))(param_1,uVar16,pcVar31,puVar30);
      pcVar28 = local_78;
      *pcVar31 = '\0';
      puVar22[-0xbf] = 0;
      puVar22[-0xbe] = 0;
      puVar22[-0xbd] = 0;
      puVar22[-0xbc] = 0;
      puVar22[-0xbb] = 0;
      puVar22[-0xba] = 0;
      puVar22[-0xb9] = 0;
      puVar22[-0xb8] = 0;
      puVar22[-0xb7] = 0;
      puVar22[-0xb6] = 0;
      puVar22[-0xb5] = 0;
      puVar22[-0xb4] = 0;
      puVar22[-0xb3] = 0;
      puVar22[-0xb2] = 0;
      puVar22[-0xb1] = 0;
      puVar22[-0xb0] = 0;
      puVar22[-0xaf] = 0;
      puVar22[-0xae] = 0;
      puVar22[-0xad] = 0;
      puVar22[-0xac] = 0;
      puVar22[-0xab] = 0;
      puVar22[-0xaa] = 0;
      puVar22[-0xa9] = 0;
      puVar22[-0xa8] = 0;
      puVar22[-0xa7] = 0;
      puVar22[-0xa6] = 0;
      puVar22[-0xa5] = 0;
      puVar22[-0xa4] = 0;
      puVar22[-0xa3] = 0;
      puVar22[-0xa2] = 0;
      puVar22[-0xa1] = 0;
      puVar22[-0xa0] = 0;
      puVar22[-0x9f] = 0;
      puVar22[-0x9e] = 0;
      puVar22[-0x9d] = 0;
      puVar22[-0x9c] = 0;
      puVar22[-0x9b] = 0;
      puVar22[-0x9a] = 0;
      puVar22[-0x99] = 0;
      puVar22[-0x98] = 0;
      puVar22[-0x97] = 0;
      puVar22[-0x96] = 0;
      puVar22[-0x95] = 0;
      puVar22[-0x94] = 0;
      puVar22[-0x93] = 0;
      puVar22[-0x92] = 0;
      puVar22[-0x91] = 0;
      puVar22[-0x90] = 0;
      puVar22[-0x8f] = 0;
      puVar22[-0x8e] = 0;
      puVar22[-0x8d] = 0;
      puVar22[-0x8c] = 0;
      puVar22[-0x8b] = 0;
      puVar22[-0x8a] = 0;
      puVar22[-0x89] = 0;
      puVar22[-0x88] = 0;
      puVar22[-0x87] = 0;
      puVar22[-0x86] = 0;
      puVar22[-0x85] = 0;
      puVar22[-0x84] = 0;
      puVar22[-0x83] = 0;
      puVar22[-0x82] = 0;
      puVar22[-0x81] = 0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011c18c:
      lVar23 = *param_1;
      puVar30[0x24] = 0;
      (**(code **)(lVar23 + 0x2f0))(param_1,uVar16,pcVar31,puVar30);
      *pcVar31 = '\0';
      puVar22[-0xbf] = 0;
      puVar22[-0xbe] = 0;
      puVar22[-0xbd] = 0;
      puVar22[-0xbc] = 0;
      puVar22[-0xbb] = 0;
      puVar22[-0xba] = 0;
      puVar22[-0xb9] = 0;
      puVar22[-0xb8] = 0;
      puVar22[-0xb7] = 0;
      puVar22[-0xb6] = 0;
      puVar22[-0xb5] = 0;
      puVar22[-0xb4] = 0;
      puVar22[-0xb3] = 0;
      puVar22[-0xb2] = 0;
      puVar22[-0xb1] = 0;
      puVar22[-0xb0] = 0;
      puVar22[-0xaf] = 0;
      puVar22[-0xae] = 0;
      puVar22[-0xad] = 0;
      puVar22[-0xac] = 0;
      puVar22[-0xab] = 0;
      puVar22[-0xaa] = 0;
      puVar22[-0xa9] = 0;
      puVar22[-0xa8] = 0;
      puVar22[-0xa7] = 0;
      puVar22[-0xa6] = 0;
      puVar22[-0xa5] = 0;
      puVar22[-0xa4] = 0;
      puVar22[-0xa3] = 0;
      puVar22[-0xa2] = 0;
      puVar22[-0xa1] = 0;
      puVar22[-0xa0] = 0;
      puVar22[-0x9f] = 0;
      puVar22[-0x9e] = 0;
      puVar22[-0x9d] = 0;
      puVar22[-0x9c] = 0;
      puVar22[-0x9b] = 0;
      puVar22[-0x9a] = 0;
      puVar22[-0x99] = 0;
      puVar22[-0x98] = 0;
      puVar22[-0x97] = 0;
      puVar22[-0x96] = 0;
      puVar22[-0x95] = 0;
      puVar22[-0x94] = 0;
      puVar22[-0x93] = 0;
      puVar22[-0x92] = 0;
      puVar22[-0x91] = 0;
      puVar22[-0x90] = 0;
      puVar22[-0x8f] = 0;
      puVar22[-0x8e] = 0;
      puVar22[-0x8d] = 0;
      puVar22[-0x8c] = 0;
      puVar22[-0x8b] = 0;
      puVar22[-0x8a] = 0;
      puVar22[-0x89] = 0;
      puVar22[-0x88] = 0;
      puVar22[-0x87] = 0;
      puVar22[-0x86] = 0;
      puVar22[-0x85] = 0;
      puVar22[-0x84] = 0;
      puVar22[-0x83] = 0;
      puVar22[-0x82] = 0;
      puVar22[-0x81] = 0;
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011c2cc:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011dcd4;
    while( true ) {
      lVar23 = *param_1;
      puVar30[0x24] = 0;
      (**(code **)(lVar23 + 0x2f0))(param_1,uVar16,pcVar31,puVar30);
      *pcVar31 = '\0';
      puVar22[-0xbf] = 0;
      puVar22[-0xbe] = 0;
      puVar22[-0xbd] = 0;
      puVar22[-0xbc] = 0;
      puVar22[-0xbb] = 0;
      puVar22[-0xba] = 0;
      puVar22[-0xb9] = 0;
      puVar22[-0xb8] = 0;
      puVar22[-0xb7] = 0;
      puVar22[-0xb6] = 0;
      puVar22[-0xb5] = 0;
      puVar22[-0xb4] = 0;
      puVar22[-0xb3] = 0;
      puVar22[-0xb2] = 0;
      puVar22[-0xb1] = 0;
      puVar22[-0xb0] = 0;
      puVar22[-0xaf] = 0;
      puVar22[-0xae] = 0;
      puVar22[-0xad] = 0;
      puVar22[-0xac] = 0;
      puVar22[-0xab] = 0;
      puVar22[-0xaa] = 0;
      puVar22[-0xa9] = 0;
      puVar22[-0xa8] = 0;
      puVar22[-0xa7] = 0;
      puVar22[-0xa6] = 0;
      puVar22[-0xa5] = 0;
      puVar22[-0xa4] = 0;
      puVar22[-0xa3] = 0;
      puVar22[-0xa2] = 0;
      puVar22[-0xa1] = 0;
      puVar22[-0xa0] = 0;
      puVar22[-0x9f] = 0;
      puVar22[-0x9e] = 0;
      puVar22[-0x9d] = 0;
      puVar22[-0x9c] = 0;
      puVar22[-0x9b] = 0;
      puVar22[-0x9a] = 0;
      puVar22[-0x99] = 0;
      puVar22[-0x98] = 0;
      puVar22[-0x97] = 0;
      puVar22[-0x96] = 0;
      puVar22[-0x95] = 0;
      puVar22[-0x94] = 0;
      puVar22[-0x93] = 0;
      puVar22[-0x92] = 0;
      puVar22[-0x91] = 0;
      puVar22[-0x90] = 0;
      puVar22[-0x8f] = 0;
      puVar22[-0x8e] = 0;
      puVar22[-0x8d] = 0;
      puVar22[-0x8c] = 0;
      puVar22[-0x8b] = 0;
      puVar22[-0x8a] = 0;
      puVar22[-0x89] = 0;
      puVar22[-0x88] = 0;
      puVar22[-0x87] = 0;
      puVar22[-0x86] = 0;
      puVar22[-0x85] = 0;
      puVar22[-0x84] = 0;
      puVar22[-0x83] = 0;
      puVar22[-0x82] = 0;
      puVar22[-0x81] = 0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011dcd4:
      lVar23 = *param_1;
      puVar30[0x24] = 0;
      (**(code **)(lVar23 + 0x2f0))(param_1,uVar16,pcVar31,puVar30);
      *pcVar31 = '\0';
      puVar22[-0xbf] = 0;
      puVar22[-0xbe] = 0;
      puVar22[-0xbd] = 0;
      puVar22[-0xbc] = 0;
      puVar22[-0xbb] = 0;
      puVar22[-0xba] = 0;
      puVar22[-0xb9] = 0;
      puVar22[-0xb8] = 0;
      puVar22[-0xb7] = 0;
      puVar22[-0xb6] = 0;
      puVar22[-0xb5] = 0;
      puVar22[-0xb4] = 0;
      puVar22[-0xb3] = 0;
      puVar22[-0xb2] = 0;
      puVar22[-0xb1] = 0;
      puVar22[-0xb0] = 0;
      puVar22[-0xaf] = 0;
      puVar22[-0xae] = 0;
      puVar22[-0xad] = 0;
      puVar22[-0xac] = 0;
      puVar22[-0xab] = 0;
      puVar22[-0xaa] = 0;
      puVar22[-0xa9] = 0;
      puVar22[-0xa8] = 0;
      puVar22[-0xa7] = 0;
      puVar22[-0xa6] = 0;
      puVar22[-0xa5] = 0;
      puVar22[-0xa4] = 0;
      puVar22[-0xa3] = 0;
      puVar22[-0xa2] = 0;
      puVar22[-0xa1] = 0;
      puVar22[-0xa0] = 0;
      puVar22[-0x9f] = 0;
      puVar22[-0x9e] = 0;
      puVar22[-0x9d] = 0;
      puVar22[-0x9c] = 0;
      puVar22[-0x9b] = 0;
      puVar22[-0x9a] = 0;
      puVar22[-0x99] = 0;
      puVar22[-0x98] = 0;
      puVar22[-0x97] = 0;
      puVar22[-0x96] = 0;
      puVar22[-0x95] = 0;
      puVar22[-0x94] = 0;
      puVar22[-0x93] = 0;
      puVar22[-0x92] = 0;
      puVar22[-0x91] = 0;
      puVar22[-0x90] = 0;
      puVar22[-0x8f] = 0;
      puVar22[-0x8e] = 0;
      puVar22[-0x8d] = 0;
      puVar22[-0x8c] = 0;
      puVar22[-0x8b] = 0;
      puVar22[-0x8a] = 0;
      puVar22[-0x89] = 0;
      puVar22[-0x88] = 0;
      puVar22[-0x87] = 0;
      puVar22[-0x86] = 0;
      puVar22[-0x85] = 0;
      puVar22[-0x84] = 0;
      puVar22[-0x83] = 0;
      puVar22[-0x82] = 0;
      puVar22[-0x81] = 0;
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  lVar23 = 0x80;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011c3c8;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011c3a4;
      while( true ) {
        *puVar30 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011c3a4:
        *puVar30 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011c3c8:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011c428;
      while ((*puVar30 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 && (9 < *piVar35)))
      {
LAB_0011c428:
        *puVar30 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    lVar23 = lVar26;
    puVar30 = puVar30 + 1;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011c564;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011c500;
    while( true ) {
      puVar22 = (undefined1 *)(**(code **)(*param_1 + 0x2f8))(param_1,pcVar28,uVar17);
      iVar14 = (**(code **)(*param_1 + 0x558))(param_1,puVar21);
      local_68 = puVar22;
      iVar15 = (**(code **)(*param_1 + 0x558))(param_1,puVar22);
      puVar12 = PTR_y_40_0012a6d0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011c500:
      uVar16 = (**(code **)(*param_1 + 0x2f8))(param_1,pcVar28,uVar17);
      (**(code **)(*param_1 + 0x558))(param_1,puVar21);
      (**(code **)(*param_1 + 0x558))(param_1,uVar16);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011c564:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011de58;
    while( true ) {
      uVar16 = (**(code **)(*param_1 + 0x2f8))(param_1,pcVar28,uVar17);
      (**(code **)(*param_1 + 0x558))(param_1,puVar21);
      (**(code **)(*param_1 + 0x558))(param_1,uVar16);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011de58:
      uVar16 = (**(code **)(*param_1 + 0x2f8))(param_1,pcVar28,uVar17);
      (**(code **)(*param_1 + 0x558))(param_1,puVar21);
      (**(code **)(*param_1 + 0x558))(param_1,uVar16);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *piVar35);
  iVar25 = 0x5a3cd84e;
  lVar23 = 0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *piVar35);
    iVar25 = iVar25 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar25 >> 0x10);
    cVar13 = (char)lVar23;
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35)) goto LAB_0011c7f8;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011c744;
      while( true ) {
        bVar6 = (&DAT_00101b68)[lVar23];
        bVar9 = cVar13 * '\x11' + 0x46;
        bVar7 = bVar6 | bVar9 ^ 0xff;
        bVar6 = bVar6 & (bVar9 ^ bVar6 ^ 0xff ^ 0xff);
        bVar7 = ((bVar6 ^ 0xff) & 0x7d | bVar6 & 0x82) ^ (bVar7 & 0x7d | (bVar7 ^ 0xff) & 0x82) |
                (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        iVar2 = *(int *)puVar11;
        bVar6 = ((bVar3 ^ 0xff) & 0x21 | bVar3 & 0xde) ^ 0x21 | bVar7 ^ 0xff;
        bVar7 = (bVar3 ^ ((bVar7 ^ 0xff) & 0xd8 | bVar7 & 0x27) ^ 0xff ^ 0x27) & bVar3;
        local_88[lVar23] =
             ((bVar7 ^ 0xff) & 10 | bVar7 & 0xf5) ^ (bVar6 & 10 | (bVar6 ^ 0xff) & 0xf5) |
             (bVar6 | bVar7 ^ 0xff) ^ 0xff;
        lVar26 = lVar23 + 1;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_0011c744:
        bVar6 = (&DAT_00101b68)[lVar23];
        bVar9 = cVar13 * '\x11' + 0x46;
        bVar7 = bVar6 | bVar9 ^ 0xff;
        bVar6 = bVar6 & (bVar9 ^ bVar6 ^ 0xff ^ 0xff);
        bVar6 = ((bVar6 ^ 0xff) & 0x7d | bVar6 & 0x82) ^ (bVar7 & 0x7d | (bVar7 ^ 0xff) & 0x82) |
                (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        bVar7 = (bVar3 ^ ((bVar6 ^ 0xff) & 0xd8 | bVar6 & 0x27) ^ 0xff ^ 0x27) & bVar3;
        bVar6 = ((bVar3 ^ 0xff) & 0x21 | bVar3 & 0xde) ^ 0x21 | bVar6 ^ 0xff;
        local_88[lVar23] =
             ((bVar7 ^ 0xff) & 10 | bVar7 & 0xf5) ^ (bVar6 & 10 | (bVar6 ^ 0xff) & 0xf5) |
             (bVar6 | bVar7 ^ 0xff) ^ 0xff;
      }
      piVar35 = (int *)PTR_y_40_0012a6d0;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)
         ) break;
LAB_0011c7f8:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *piVar35))
      goto LAB_0011c8e8;
      while( true ) {
        bVar6 = (&DAT_00101b68)[lVar23];
        bVar9 = cVar13 * '\x11' + 0x46;
        bVar7 = bVar6 | bVar9 ^ 0xff;
        bVar6 = bVar6 & (bVar9 ^ bVar6 ^ 0xff ^ 0xff);
        iVar2 = *(int *)puVar11;
        bVar6 = ((bVar6 ^ 0xff) & 0x7d | bVar6 & 0x82) ^ (bVar7 & 0x7d | (bVar7 ^ 0xff) & 0x82) |
                (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        bVar7 = (bVar3 ^ ((bVar6 ^ 0xff) & 0xd8 | bVar6 & 0x27) ^ 0xff ^ 0x27) & bVar3;
        bVar6 = ((bVar3 ^ 0xff) & 0x21 | bVar3 & 0xde) ^ 0x21 | bVar6 ^ 0xff;
        local_88[lVar23] =
             ((bVar7 ^ 0xff) & 10 | bVar7 & 0xf5) ^ (bVar6 & 10 | (bVar6 ^ 0xff) & 0xf5) |
             (bVar6 | bVar7 ^ 0xff) ^ 0xff;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*piVar35 < 10)) break;
LAB_0011c8e8:
        bVar6 = (&DAT_00101b68)[lVar23];
        bVar9 = cVar13 * '\x11' + 0x46;
        bVar7 = bVar6 | bVar9 ^ 0xff;
        bVar6 = bVar6 & (bVar9 ^ bVar6 ^ 0xff ^ 0xff);
        bVar6 = ((bVar6 ^ 0xff) & 0x7d | bVar6 & 0x82) ^ (bVar7 & 0x7d | (bVar7 ^ 0xff) & 0x82) |
                (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        bVar7 = (bVar3 ^ ((bVar6 ^ 0xff) & 0xd8 | bVar6 & 0x27) ^ 0xff ^ 0x27) & bVar3;
        bVar6 = ((bVar3 ^ 0xff) & 0x21 | bVar3 & 0xde) ^ 0x21 | bVar6 ^ 0xff;
        local_88[lVar23] =
             ((bVar7 ^ 0xff) & 10 | bVar7 & 0xf5) ^ (bVar6 & 10 | (bVar6 ^ 0xff) & 0xf5) |
             (bVar6 | bVar7 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_40_0012a6d0);
    lVar23 = lVar26;
  } while (lVar26 != 0x21);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
  goto LAB_0011ca50;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_0011ca18;
    while( true ) {
      lVar23 = *param_1;
      local_88[0x21] = 0;
      uVar16 = (**(code **)(lVar23 + 0x30))(param_1);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011ca18:
      lVar23 = *param_1;
      local_88[0x21] = 0;
      (**(code **)(lVar23 + 0x30))(param_1);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011ca50:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_0011ded4;
    while( true ) {
      lVar23 = *param_1;
      local_88[0x21] = 0;
      (**(code **)(lVar23 + 0x30))(param_1);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011ded4:
      lVar23 = *param_1;
      local_88[0x21] = 0;
      (**(code **)(lVar23 + 0x30))(param_1);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  puVar22 = local_88;
  lVar23 = 0x80;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_0011cb64;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_0011cb40;
      while( true ) {
        *puVar22 = 0;
        lVar26 = lVar23 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011cb40:
        *puVar22 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011cb64:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_0011cbc4;
      while ((*puVar22 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar12))) {
LAB_0011cbc4:
        *puVar22 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    puVar22 = puVar22 + 1;
    lVar23 = lVar26;
  } while (lVar26 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
  goto LAB_0011cd34;
  while( true ) {
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_0011ccc4;
    while( true ) {
      uVar18 = (**(code **)(*param_1 + 0x560))(param_1,iVar15 + iVar14,uVar16,0);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar16);
      pcVar28 = local_78;
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)
         ) break;
LAB_0011ccc4:
      (**(code **)(*param_1 + 0x560))(param_1,iVar15 + iVar14,uVar16,0);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar16);
    }
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10))
    break;
LAB_0011cd34:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_0011df5c;
    while( true ) {
      (**(code **)(*param_1 + 0x560))(param_1,iVar15 + iVar14,uVar16,0);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar16);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)
         ) break;
LAB_0011df5c:
      (**(code **)(*param_1 + 0x560))(param_1,iVar15 + iVar14,uVar16,0);
      (**(code **)(*param_1 + 0xb8))(param_1,uVar16);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  if (0 < iVar15) {
    iVar25 = 0;
    do {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
      goto LAB_0011ce3c;
      while( true ) {
        uVar16 = (**(code **)(*param_1 + 0x568))(param_1,local_68,iVar25);
        (**(code **)(*param_1 + 0x570))(param_1,uVar18,iVar25,uVar16);
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) ||
           (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_0011ce3c:
        uVar16 = (**(code **)(*param_1 + 0x568))(param_1,local_68,iVar25);
        (**(code **)(*param_1 + 0x570))(param_1,uVar18,iVar25,uVar16);
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 != iVar15);
  }
  puVar22 = local_70;
  uVar16 = local_b8;
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
  goto LAB_0011cf24;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_40_0012a6d0);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10))
    break;
LAB_0011cf24:
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_40_0012a6d0);
  } while( true );
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  if (0 < iVar14) {
    iVar25 = 0;
    do {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
      goto LAB_0011d014;
      while( true ) {
        uVar19 = (**(code **)(*param_1 + 0x568))(param_1,puVar22,iVar25);
        (**(code **)(*param_1 + 0x570))(param_1,uVar18,iVar25 + iVar15,uVar19);
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) ||
           (*(int *)PTR_y_40_0012a6d0 < 10)) break;
LAB_0011d014:
        uVar19 = (**(code **)(*param_1 + 0x568))(param_1,puVar22,iVar25);
        (**(code **)(*param_1 + 0x570))(param_1,uVar18,iVar25 + iVar15,uVar19);
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 != iVar14);
  }
  puVar22 = local_80;
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
  goto LAB_0011d104;
  while( true ) {
    (**(code **)(*param_1 + 0x340))(param_1,pcVar28,uVar17,uVar18);
    uVar19 = FUN_00125094(param_1,uVar16,puVar22);
    FUN_00107110(param_1,uVar16,uVar19);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10))
    break;
LAB_0011d104:
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_40_0012a6d0))
    goto LAB_0011e008;
    while( true ) {
      (**(code **)(*param_1 + 0x340))(param_1,pcVar28,uVar17,uVar18);
      uVar19 = FUN_00125094(param_1,uVar16,puVar22);
      FUN_00107110(param_1,uVar16,uVar19);
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_40_0012a6d0 < 10)
         ) break;
LAB_0011e008:
      (**(code **)(*param_1 + 0x340))(param_1,pcVar28,uVar17,uVar18);
      uVar19 = FUN_00125094(param_1,uVar16,puVar22);
      FUN_00107110(param_1,uVar16,uVar19);
    }
  }
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) {
      return;
    }
  } while (9 < *(int *)PTR_y_40_0012a6d0);
  return;
}


