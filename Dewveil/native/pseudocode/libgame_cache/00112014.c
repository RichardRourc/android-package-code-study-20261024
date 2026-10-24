// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00112014; body: [[00112014, 00112c4f]]

void FUN_00112014(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  
  puVar8 = PTR_y_16_0012a610;
  puVar7 = PTR_x_15_0012a608;
  puVar14 = &stack0xffffffffffffffc0;
  uVar1 = *(undefined4 *)PTR_x_15_0012a608;
  do {
    if ((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_16_0012a610);
  puVar11 = &stack0xffffffffffffffc0;
  if (((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) != 0) &&
     (puVar11 = &stack0xffffffffffffffc0, 9 < *(int *)PTR_y_16_0012a610)) goto LAB_00112130;
  while( true ) {
    if (((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) != 0) &&
       (puVar14 = puVar11, 9 < *(int *)PTR_y_16_0012a610)) goto LAB_001120e8;
    while( true ) {
      puVar15 = puVar11 + -0x40;
      puVar14 = puVar11 + -0xa0;
      iVar9 = *(int *)PTR_x_15_0012a608;
      puVar11[-0x36] = 0;
      *(undefined8 *)(puVar11 + -0x40) = s_m_activible_001013d0._0_8_;
      *(undefined2 *)(puVar11 + -0x38) = 0x7974;
      if (((iVar9 * (iVar9 + -1) & 1U) == 0) || (*(int *)PTR_y_16_0012a610 < 10)) break;
LAB_001120e8:
      puVar11 = puVar14 + -0xa0;
      puVar14[-0x36] = 0;
      *(undefined2 *)(puVar14 + -0x38) = 0x7974;
      *(undefined8 *)(puVar14 + -0x40) = s_m_activible_001013d0._0_8_;
    }
    if (((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_16_0012a610 < 10)) break;
LAB_00112130:
    if (((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) != 0) &&
       (puVar11 = puVar14, 9 < *(int *)PTR_y_16_0012a610)) goto LAB_001129c4;
    while( true ) {
      puVar11 = puVar14 + -0xa0;
      iVar9 = *(int *)PTR_x_15_0012a608;
      puVar14[-0x36] = 0;
      *(undefined8 *)(puVar14 + -0x40) = s_m_activible_001013d0._0_8_;
      *(undefined2 *)(puVar14 + -0x38) = 0x7974;
      if (((iVar9 * (iVar9 + -1) & 1U) == 0) || (*(int *)PTR_y_16_0012a610 < 10)) break;
LAB_001129c4:
      puVar14 = puVar11 + -0xa0;
      puVar11[-0x36] = 0;
      *(undefined2 *)(puVar11 + -0x38) = 0x7974;
      *(undefined8 *)(puVar11 + -0x40) = s_m_activible_001013d0._0_8_;
    }
  }
  do {
    if ((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_16_0012a610);
  iVar9 = 0x5a3c3f35;
  lVar10 = 0;
  do {
    uVar1 = *(undefined4 *)PTR_x_15_0012a608;
    do {
      if ((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_16_0012a610);
    iVar9 = iVar9 * 0x41c64e6d + 0x3039;
    iVar13 = (int)lVar10;
    bVar6 = (byte)((uint)iVar9 >> 0x10);
    if (((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_16_0012a610)) goto LAB_00112338;
    while( true ) {
      if (((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_16_0012a610)) goto LAB_001122a4;
      while( true ) {
        bVar3 = (&DAT_00101770)[lVar10];
        uVar4 = iVar13 * 0x11 - 0x5f;
        iVar2 = *(int *)PTR_x_15_0012a608;
        uVar4 = (((uVar4 ^ 0xffffffff) & 0xffffffa0 | uVar4 & 0x5f) ^ bVar3 ^ 0xffffffa0) &
                (uint)bVar3 | ((uint)bVar3 | uVar4 ^ 0xffffffff) ^ 0xffffffff;
        bVar3 = (byte)uVar4;
        bVar5 = bVar6 | bVar3 ^ 0xff;
        bVar3 = (bVar3 & 0x80 | bVar3 & 0x3f | (byte)((~uVar4 >> 6 & 1) << 6)) ^ 0x40 | bVar6 ^ 0xff
        ;
        puVar14[lVar10] =
             (bVar3 & 0xb5 | (bVar3 ^ 0xff) & 0x4a) ^ (bVar5 & 0xb5 | (bVar5 ^ 0xff) & 0x4a) |
             (bVar3 | bVar5) ^ 0xff;
        lVar12 = lVar10 + 1;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_16_0012a610 < 10)) break;
LAB_001122a4:
        bVar3 = (&DAT_00101770)[lVar10];
        uVar4 = iVar13 * 0x11 - 0x5f;
        uVar4 = (((uVar4 ^ 0xffffffff) & 0xffffffa0 | uVar4 & 0x5f) ^ bVar3 ^ 0xffffffa0) &
                (uint)bVar3 | ((uint)bVar3 | uVar4 ^ 0xffffffff) ^ 0xffffffff;
        bVar3 = (byte)uVar4;
        bVar5 = bVar6 | bVar3 ^ 0xff;
        bVar3 = (bVar3 & 0x80 | bVar3 & 0x3f | (byte)((~uVar4 >> 6 & 1) << 6)) ^ 0x40 | bVar6 ^ 0xff
        ;
        puVar14[lVar10] =
             (bVar3 & 0xb5 | (bVar3 ^ 0xff) & 0x4a) ^ (bVar5 & 0xb5 | (bVar5 ^ 0xff) & 0x4a) |
             (bVar3 | bVar5) ^ 0xff;
      }
      if (((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_16_0012a610 < 10)) break;
LAB_00112338:
      if (((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_16_0012a610)) goto LAB_00112408;
      while( true ) {
        bVar3 = (&DAT_00101770)[lVar10];
        uVar4 = iVar13 * 0x11 - 0x5f;
        iVar2 = *(int *)PTR_x_15_0012a608;
        uVar4 = (((uVar4 ^ 0xffffffff) & 0xffffffa0 | uVar4 & 0x5f) ^ bVar3 ^ 0xffffffa0) &
                (uint)bVar3 | ((uint)bVar3 | uVar4 ^ 0xffffffff) ^ 0xffffffff;
        bVar3 = (byte)uVar4;
        bVar5 = bVar6 | bVar3 ^ 0xff;
        bVar3 = (bVar3 & 0x80 | bVar3 & 0x3f | (byte)((~uVar4 >> 6 & 1) << 6)) ^ 0x40 | bVar6 ^ 0xff
        ;
        puVar14[lVar10] =
             (bVar3 & 0xb5 | (bVar3 ^ 0xff) & 0x4a) ^ (bVar5 & 0xb5 | (bVar5 ^ 0xff) & 0x4a) |
             (bVar3 | bVar5) ^ 0xff;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_16_0012a610 < 10)) break;
LAB_00112408:
        bVar3 = (&DAT_00101770)[lVar10];
        uVar4 = iVar13 * 0x11 - 0x5f;
        uVar4 = (((uVar4 ^ 0xffffffff) & 0xffffffa0 | uVar4 & 0x5f) ^ bVar3 ^ 0xffffffa0) &
                (uint)bVar3 | ((uint)bVar3 | uVar4 ^ 0xffffffff) ^ 0xffffffff;
        bVar3 = (byte)uVar4;
        bVar5 = bVar6 | bVar3 ^ 0xff;
        bVar3 = (bVar3 & 0x80 | bVar3 & 0x3f | (byte)((~uVar4 >> 6 & 1) << 6)) ^ 0x40 | bVar6 ^ 0xff
        ;
        puVar14[lVar10] =
             (bVar3 & 0xb5 | (bVar3 ^ 0xff) & 0x4a) ^ (bVar5 & 0xb5 | (bVar5 ^ 0xff) & 0x4a) |
             (bVar3 | bVar5) ^ 0xff;
      }
    }
    do {
      if ((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_16_0012a610);
    lVar10 = lVar12;
  } while (lVar12 != 0x1f);
  uVar1 = *(undefined4 *)PTR_x_15_0012a608;
  do {
    if ((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_16_0012a610);
  if (((*(int *)PTR_x_15_0012a608 * (*(int *)PTR_x_15_0012a608 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_16_0012a610)) goto LAB_0011275c;
  while( true ) {
    if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
    goto LAB_0011261c;
    while( true ) {
      lVar10 = *param_1;
      puVar11[-0x81] = 0;
      (**(code **)(lVar10 + 0x480))(param_1,param_2,puVar15,puVar14);
      *puVar15 = 0;
      puVar11[-0x3f] = 0;
      puVar11[-0x3e] = 0;
      puVar11[-0x3d] = 0;
      puVar11[-0x3c] = 0;
      puVar11[-0x3b] = 0;
      puVar11[-0x3a] = 0;
      puVar11[-0x39] = 0;
      puVar11[-0x38] = 0;
      puVar11[-0x37] = 0;
      puVar11[-0x36] = 0;
      puVar11[-0x35] = 0;
      puVar11[-0x34] = 0;
      puVar11[-0x33] = 0;
      puVar11[-0x32] = 0;
      puVar11[-0x31] = 0;
      puVar11[-0x30] = 0;
      puVar11[-0x2f] = 0;
      puVar11[-0x2e] = 0;
      puVar11[-0x2d] = 0;
      puVar11[-0x2c] = 0;
      puVar11[-0x2b] = 0;
      puVar11[-0x2a] = 0;
      puVar11[-0x29] = 0;
      puVar11[-0x28] = 0;
      puVar11[-0x27] = 0;
      puVar11[-0x26] = 0;
      puVar11[-0x25] = 0;
      puVar11[-0x24] = 0;
      puVar11[-0x23] = 0;
      puVar11[-0x22] = 0;
      puVar11[-0x21] = 0;
      puVar11[-0x20] = 0;
      puVar11[-0x1f] = 0;
      puVar11[-0x1e] = 0;
      puVar11[-0x1d] = 0;
      puVar11[-0x1c] = 0;
      puVar11[-0x1b] = 0;
      puVar11[-0x1a] = 0;
      puVar11[-0x19] = 0;
      puVar11[-0x18] = 0;
      puVar11[-0x17] = 0;
      puVar11[-0x16] = 0;
      puVar11[-0x15] = 0;
      puVar11[-0x14] = 0;
      puVar11[-0x13] = 0;
      puVar11[-0x12] = 0;
      puVar11[-0x11] = 0;
      puVar11[-0x10] = 0;
      puVar11[-0xf] = 0;
      puVar11[-0xe] = 0;
      puVar11[-0xd] = 0;
      puVar11[-0xc] = 0;
      puVar11[-0xb] = 0;
      puVar11[-10] = 0;
      puVar11[-9] = 0;
      puVar11[-8] = 0;
      puVar11[-7] = 0;
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      puVar11[-4] = 0;
      puVar11[-3] = 0;
      puVar11[-2] = 0;
      puVar11[-1] = 0;
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_0011261c:
      lVar10 = *param_1;
      puVar11[-0x81] = 0;
      (**(code **)(lVar10 + 0x480))(param_1,param_2,puVar15,puVar14);
      *puVar15 = 0;
      puVar11[-0x3f] = 0;
      puVar11[-0x3e] = 0;
      puVar11[-0x3d] = 0;
      puVar11[-0x3c] = 0;
      puVar11[-0x3b] = 0;
      puVar11[-0x3a] = 0;
      puVar11[-0x39] = 0;
      puVar11[-0x38] = 0;
      puVar11[-0x37] = 0;
      puVar11[-0x36] = 0;
      puVar11[-0x35] = 0;
      puVar11[-0x34] = 0;
      puVar11[-0x33] = 0;
      puVar11[-0x32] = 0;
      puVar11[-0x31] = 0;
      puVar11[-0x30] = 0;
      puVar11[-0x2f] = 0;
      puVar11[-0x2e] = 0;
      puVar11[-0x2d] = 0;
      puVar11[-0x2c] = 0;
      puVar11[-0x2b] = 0;
      puVar11[-0x2a] = 0;
      puVar11[-0x29] = 0;
      puVar11[-0x28] = 0;
      puVar11[-0x27] = 0;
      puVar11[-0x26] = 0;
      puVar11[-0x25] = 0;
      puVar11[-0x24] = 0;
      puVar11[-0x23] = 0;
      puVar11[-0x22] = 0;
      puVar11[-0x21] = 0;
      puVar11[-0x20] = 0;
      puVar11[-0x1f] = 0;
      puVar11[-0x1e] = 0;
      puVar11[-0x1d] = 0;
      puVar11[-0x1c] = 0;
      puVar11[-0x1b] = 0;
      puVar11[-0x1a] = 0;
      puVar11[-0x19] = 0;
      puVar11[-0x18] = 0;
      puVar11[-0x17] = 0;
      puVar11[-0x16] = 0;
      puVar11[-0x15] = 0;
      puVar11[-0x14] = 0;
      puVar11[-0x13] = 0;
      puVar11[-0x12] = 0;
      puVar11[-0x11] = 0;
      puVar11[-0x10] = 0;
      puVar11[-0xf] = 0;
      puVar11[-0xe] = 0;
      puVar11[-0xd] = 0;
      puVar11[-0xc] = 0;
      puVar11[-0xb] = 0;
      puVar11[-10] = 0;
      puVar11[-9] = 0;
      puVar11[-8] = 0;
      puVar11[-7] = 0;
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      puVar11[-4] = 0;
      puVar11[-3] = 0;
      puVar11[-2] = 0;
      puVar11[-1] = 0;
    }
    if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_0011275c:
    if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
    goto LAB_00112b2c;
    while( true ) {
      lVar10 = *param_1;
      puVar11[-0x81] = 0;
      (**(code **)(lVar10 + 0x480))(param_1,param_2,puVar15,puVar14);
      *puVar15 = 0;
      puVar11[-0x3f] = 0;
      puVar11[-0x3e] = 0;
      puVar11[-0x3d] = 0;
      puVar11[-0x3c] = 0;
      puVar11[-0x3b] = 0;
      puVar11[-0x3a] = 0;
      puVar11[-0x39] = 0;
      puVar11[-0x38] = 0;
      puVar11[-0x37] = 0;
      puVar11[-0x36] = 0;
      puVar11[-0x35] = 0;
      puVar11[-0x34] = 0;
      puVar11[-0x33] = 0;
      puVar11[-0x32] = 0;
      puVar11[-0x31] = 0;
      puVar11[-0x30] = 0;
      puVar11[-0x2f] = 0;
      puVar11[-0x2e] = 0;
      puVar11[-0x2d] = 0;
      puVar11[-0x2c] = 0;
      puVar11[-0x2b] = 0;
      puVar11[-0x2a] = 0;
      puVar11[-0x29] = 0;
      puVar11[-0x28] = 0;
      puVar11[-0x27] = 0;
      puVar11[-0x26] = 0;
      puVar11[-0x25] = 0;
      puVar11[-0x24] = 0;
      puVar11[-0x23] = 0;
      puVar11[-0x22] = 0;
      puVar11[-0x21] = 0;
      puVar11[-0x20] = 0;
      puVar11[-0x1f] = 0;
      puVar11[-0x1e] = 0;
      puVar11[-0x1d] = 0;
      puVar11[-0x1c] = 0;
      puVar11[-0x1b] = 0;
      puVar11[-0x1a] = 0;
      puVar11[-0x19] = 0;
      puVar11[-0x18] = 0;
      puVar11[-0x17] = 0;
      puVar11[-0x16] = 0;
      puVar11[-0x15] = 0;
      puVar11[-0x14] = 0;
      puVar11[-0x13] = 0;
      puVar11[-0x12] = 0;
      puVar11[-0x11] = 0;
      puVar11[-0x10] = 0;
      puVar11[-0xf] = 0;
      puVar11[-0xe] = 0;
      puVar11[-0xd] = 0;
      puVar11[-0xc] = 0;
      puVar11[-0xb] = 0;
      puVar11[-10] = 0;
      puVar11[-9] = 0;
      puVar11[-8] = 0;
      puVar11[-7] = 0;
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      puVar11[-4] = 0;
      puVar11[-3] = 0;
      puVar11[-2] = 0;
      puVar11[-1] = 0;
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_00112b2c:
      lVar10 = *param_1;
      puVar11[-0x81] = 0;
      (**(code **)(lVar10 + 0x480))(param_1,param_2,puVar15,puVar14);
      *puVar15 = 0;
      puVar11[-0x3f] = 0;
      puVar11[-0x3e] = 0;
      puVar11[-0x3d] = 0;
      puVar11[-0x3c] = 0;
      puVar11[-0x3b] = 0;
      puVar11[-0x3a] = 0;
      puVar11[-0x39] = 0;
      puVar11[-0x38] = 0;
      puVar11[-0x37] = 0;
      puVar11[-0x36] = 0;
      puVar11[-0x35] = 0;
      puVar11[-0x34] = 0;
      puVar11[-0x33] = 0;
      puVar11[-0x32] = 0;
      puVar11[-0x31] = 0;
      puVar11[-0x30] = 0;
      puVar11[-0x2f] = 0;
      puVar11[-0x2e] = 0;
      puVar11[-0x2d] = 0;
      puVar11[-0x2c] = 0;
      puVar11[-0x2b] = 0;
      puVar11[-0x2a] = 0;
      puVar11[-0x29] = 0;
      puVar11[-0x28] = 0;
      puVar11[-0x27] = 0;
      puVar11[-0x26] = 0;
      puVar11[-0x25] = 0;
      puVar11[-0x24] = 0;
      puVar11[-0x23] = 0;
      puVar11[-0x22] = 0;
      puVar11[-0x21] = 0;
      puVar11[-0x20] = 0;
      puVar11[-0x1f] = 0;
      puVar11[-0x1e] = 0;
      puVar11[-0x1d] = 0;
      puVar11[-0x1c] = 0;
      puVar11[-0x1b] = 0;
      puVar11[-0x1a] = 0;
      puVar11[-0x19] = 0;
      puVar11[-0x18] = 0;
      puVar11[-0x17] = 0;
      puVar11[-0x16] = 0;
      puVar11[-0x15] = 0;
      puVar11[-0x14] = 0;
      puVar11[-0x13] = 0;
      puVar11[-0x12] = 0;
      puVar11[-0x11] = 0;
      puVar11[-0x10] = 0;
      puVar11[-0xf] = 0;
      puVar11[-0xe] = 0;
      puVar11[-0xd] = 0;
      puVar11[-0xc] = 0;
      puVar11[-0xb] = 0;
      puVar11[-10] = 0;
      puVar11[-9] = 0;
      puVar11[-8] = 0;
      puVar11[-7] = 0;
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      puVar11[-4] = 0;
      puVar11[-3] = 0;
      puVar11[-2] = 0;
      puVar11[-1] = 0;
    }
  }
  do {
    if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar8);
  lVar10 = 0x60;
  do {
    uVar1 = *(undefined4 *)puVar7;
    do {
      if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar8);
    if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
    goto LAB_00112858;
    while( true ) {
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
      goto LAB_00112834;
      while( true ) {
        *puVar14 = 0;
        lVar12 = lVar10 + -1;
        if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_00112834:
        *puVar14 = 0;
      }
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_00112858:
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
      goto LAB_001128b8;
      while ((*puVar14 = 0, (*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar8))) {
LAB_001128b8:
        *puVar14 = 0;
      }
    }
    do {
      if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar8);
    lVar10 = lVar12;
    puVar14 = puVar14 + 1;
  } while (lVar12 != 0);
  uVar1 = *(undefined4 *)puVar7;
  do {
    if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar8);
LAB_001128f8:
  do {
    if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar8) goto LAB_001128f8;
    }
    uVar1 = *(undefined4 *)puVar7;
    do {
      if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar8);
    if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) {
      do {
        if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *(int *)puVar8);
      return;
    }
  } while( true );
}


