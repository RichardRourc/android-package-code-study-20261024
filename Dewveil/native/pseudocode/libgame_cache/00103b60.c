// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00103b60; body: [[00103b60, 00104d9b]]

void FUN_00103b60(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  puVar13 = PTR_y_2_0012a5a0;
  puVar12 = PTR_x_1_0012a598;
  uVar1 = *(undefined4 *)PTR_x_1_0012a598;
  do {
    if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_2_0012a5a0);
  puVar16 = auStack_70;
  if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
     (puVar16 = auStack_70, puVar23 = auStack_70, 9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_00103c1c;
  while( true ) {
    puVar24 = puVar16 + -0x60;
    puVar23 = puVar16 + -0x100;
    uVar20 = *(ulong *)(param_3 + 8);
    bVar3 = *(byte *)(param_3 + 7);
    uVar22 = uVar20;
    if (0x5e < uVar20) {
      uVar22 = 0x5f;
    }
    if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_2_0012a5a0 < 10)) break;
LAB_00103c1c:
    puVar16 = puVar23;
    if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_00104d00;
    while ((puVar16 = puVar16 + -0x100,
           (*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_2_0012a5a0))) {
LAB_00104d00:
      puVar16 = puVar16 + -0x100;
    }
  }
  do {
    if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_2_0012a5a0);
  if (uVar20 != 0) {
    uVar1 = *(undefined4 *)PTR_x_1_0012a598;
    do {
      if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_2_0012a5a0);
    if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_00103ea8;
    do {
      uVar1 = *(undefined4 *)PTR_x_1_0012a598;
      do {
        uVar18 = (uint)bVar3 << 8;
        bVar4 = *(byte *)(param_3 + 6);
        uVar6 = uVar18 ^ 0xffffffff | 0x760b32e2;
        uVar7 = bVar4 | 0x89f4cd1d;
        uVar19 = (uVar18 ^ 0x760b32e2) & (uVar18 ^ 0xffffffff);
        uVar8 = bVar4 ^ 0xffffffff | 0x760b32e2;
        uVar19 = ((uVar19 ^ 0xffffffff) & 0x3b4fd52d | uVar19 & 0xc4b02ad2) ^
                 (uVar6 & 0x3b4fd52d | ~uVar6 & 0xc4b02ad2) |
                 (uVar6 | uVar19 ^ 0xffffffff) ^ 0xffffffff;
        uVar18 = (uVar18 & 0xe9c3e250 | ~uVar18 & 0x163c1daf) ^
                 (bVar4 & 0xe9c3e250 | ~(uint)bVar4 & 0x163c1daf) |
                 CONCAT11(bVar3,bVar4) ^ 0xffffffff;
        uVar6 = (uVar7 & 0x50e34b23 | ~uVar7 & 0xaf1cb4dc) ^
                (uVar8 & 0x50e34b23 | ~uVar8 & 0xaf1cb4dc) | (uVar7 | uVar8) ^ 0xffffffff;
        uVar18 = (uVar18 ^ 0xffffffff) & 0x1df3097 | uVar18 & 0xfe20cf68;
        uVar7 = (uVar19 ^ 0xffffffff) & 0x94ce4c5b | uVar19 & 0x6b31b3a4;
        uVar6 = (uVar6 ^ 0xffffffff) & 0x94ce4c5b | uVar6 & 0x6b31b3a4;
        uVar19 = uVar7 ^ uVar6;
        uVar19 = ((uVar19 ^ 0xffffffff) & 0xa5b007a2 | uVar19 & 0x5a4ff85d) ^
                 ((uVar18 ^ 0x1df3097) & 0xa5b007a2 | (uVar18 ^ 0xfe20cf68) & 0x5a4ff85d) |
                 (uVar7 ^ uVar6 ^ 0xffffffff | uVar18 ^ 0x1df3097) ^ 0xffffffff;
        uVar19 = (uVar19 ^ 0xb42ec35) & 0xb42ec35 | (uVar19 ^ 0xb42ec35) & uVar19;
        uVar19 = (uVar19 ^ 0xffffffff) & 0x517e724e | uVar19 & 0xae818db1;
        if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_2_0012a5a0);
      if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_2_0012a5a0 < 10)) goto LAB_00103ed4;
LAB_00103ea8:
      uVar1 = *(undefined4 *)PTR_x_1_0012a598;
      do {
        if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_2_0012a5a0);
    } while( true );
  }
  goto LAB_00104284;
LAB_00103ed4:
  do {
    if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_2_0012a5a0);
  uVar20 = 0;
  local_68 = param_2;
  do {
    uVar1 = *(undefined4 *)PTR_x_1_0012a598;
    do {
      if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_2_0012a5a0);
    uVar19 = uVar19 * 0x41c64e6d + 0x3039;
    uVar18 = (uint)bVar3;
    iVar14 = (int)uVar20;
    bVar4 = (byte)(uVar19 >> 0x10);
    if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_0010411c;
    while( true ) {
      if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_00104078;
      while( true ) {
        bVar5 = *(byte *)(param_3 + uVar20);
        uVar6 = uVar18 + iVar14 * 0x11;
        uVar7 = (bVar5 ^ 0xffffffaa) & (bVar5 ^ 0xffffffff);
        uVar8 = ((uVar6 ^ 0xffffffff) & 0xffffffa8 | uVar6 & 2) ^ 2;
        uVar9 = uVar7 | bVar5 & 0x55555555;
        iVar2 = *(int *)PTR_x_1_0012a598;
        uVar6 = uVar8 | uVar6 & 0x55;
        bVar10 = ((byte)uVar8 & 0x80 | (byte)uVar6 & 0xf | (byte)((~uVar6 >> 4 & 7) << 4)) ^
                 ((byte)uVar7 & 0x80 | (byte)uVar9 & 0xf | (byte)((~uVar9 >> 4 & 7) << 4));
        bVar5 = bVar10 | bVar4 ^ 0xff;
        bVar10 = bVar4 | bVar10 ^ 0xff;
        uVar21 = uVar20 + 1;
        puVar24[uVar20] =
             (bVar5 & 0xd4 | (bVar5 ^ 0xff) & 0x2b) ^ (bVar10 & 0xd4 | (bVar10 ^ 0xff) & 0x2b) |
             (bVar5 | bVar10) ^ 0xff;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_2_0012a5a0 < 10)) break;
LAB_00104078:
        bVar5 = *(byte *)(param_3 + uVar20);
        uVar6 = uVar18 + iVar14 * 0x11;
        uVar7 = (bVar5 ^ 0xffffffaa) & (bVar5 ^ 0xffffffff);
        uVar8 = ((uVar6 ^ 0xffffffff) & 0xffffffa8 | uVar6 & 2) ^ 2;
        uVar9 = uVar7 | bVar5 & 0x55555555;
        uVar6 = uVar8 | uVar6 & 0x55;
        bVar10 = ((byte)uVar8 & 0x80 | (byte)uVar6 & 0xf | (byte)((~uVar6 >> 4 & 7) << 4)) ^
                 ((byte)uVar7 & 0x80 | (byte)uVar9 & 0xf | (byte)((~uVar9 >> 4 & 7) << 4));
        bVar5 = bVar10 | bVar4 ^ 0xff;
        bVar10 = bVar4 | bVar10 ^ 0xff;
        puVar24[uVar20] =
             (bVar5 & 0xd4 | (bVar5 ^ 0xff) & 0x2b) ^ (bVar10 & 0xd4 | (bVar10 ^ 0xff) & 0x2b) |
             (bVar5 | bVar10) ^ 0xff;
      }
      if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_2_0012a5a0 < 10)) break;
LAB_0010411c:
      if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_001041fc;
      while( true ) {
        bVar5 = *(byte *)(param_3 + uVar20);
        uVar6 = uVar18 + iVar14 * 0x11;
        uVar7 = (bVar5 ^ 0xffffffaa) & (bVar5 ^ 0xffffffff);
        uVar8 = ((uVar6 ^ 0xffffffff) & 0xffffffa8 | uVar6 & 2) ^ 2;
        uVar9 = uVar7 | bVar5 & 0x55555555;
        uVar6 = uVar8 | uVar6 & 0x55;
        iVar2 = *(int *)PTR_x_1_0012a598;
        bVar10 = ((byte)uVar8 & 0x80 | (byte)uVar6 & 0xf | (byte)((~uVar6 >> 4 & 7) << 4)) ^
                 ((byte)uVar7 & 0x80 | (byte)uVar9 & 0xf | (byte)((~uVar9 >> 4 & 7) << 4));
        bVar5 = bVar10 | bVar4 ^ 0xff;
        bVar10 = bVar4 | bVar10 ^ 0xff;
        puVar24[uVar20] =
             (bVar5 & 0xd4 | (bVar5 ^ 0xff) & 0x2b) ^ (bVar10 & 0xd4 | (bVar10 ^ 0xff) & 0x2b) |
             (bVar5 | bVar10) ^ 0xff;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_2_0012a5a0 < 10)) break;
LAB_001041fc:
        bVar5 = *(byte *)(param_3 + uVar20);
        uVar6 = uVar18 + iVar14 * 0x11;
        uVar7 = (bVar5 ^ 0xffffffaa) & (bVar5 ^ 0xffffffff);
        uVar8 = ((uVar6 ^ 0xffffffff) & 0xffffffa8 | uVar6 & 2) ^ 2;
        uVar9 = uVar7 | bVar5 & 0x55555555;
        uVar6 = uVar8 | uVar6 & 0x55;
        bVar10 = ((byte)uVar8 & 0x80 | (byte)uVar6 & 0xf | (byte)((~uVar6 >> 4 & 7) << 4)) ^
                 ((byte)uVar7 & 0x80 | (byte)uVar9 & 0xf | (byte)((~uVar9 >> 4 & 7) << 4));
        bVar5 = bVar10 | bVar4 ^ 0xff;
        bVar10 = bVar4 | bVar10 ^ 0xff;
        puVar24[uVar20] =
             (bVar5 & 0xd4 | (bVar5 ^ 0xff) & 0x2b) ^ (bVar10 & 0xd4 | (bVar10 ^ 0xff) & 0x2b) |
             (bVar5 | bVar10) ^ 0xff;
      }
    }
    do {
      if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_2_0012a5a0);
    uVar20 = uVar21;
    param_2 = local_68;
  } while (uVar21 != uVar22);
LAB_00104284:
  uVar1 = *(undefined4 *)PTR_x_1_0012a598;
  do {
    if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_2_0012a5a0);
  if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_0010433c;
  while( true ) {
    if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_00104318;
    while( true ) {
      iVar14 = *(int *)PTR_x_1_0012a598;
      uVar21 = *(ulong *)(param_4 + 0x18);
      bVar3 = *(byte *)(param_4 + 0x16);
      puVar24[uVar22] = 0;
      uVar20 = uVar21;
      if (0x9e < uVar21) {
        uVar20 = 0x9f;
      }
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*(int *)PTR_y_2_0012a5a0 < 10)) break;
LAB_00104318:
      puVar24[uVar22] = 0;
    }
    if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_2_0012a5a0 < 10)) break;
LAB_0010433c:
    if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_00104d34;
    while ((iVar14 = *(int *)PTR_x_1_0012a598, puVar24[uVar22] = 0,
           (iVar14 * (iVar14 + -1) & 1U) != 0 && (9 < *(int *)PTR_y_2_0012a5a0))) {
LAB_00104d34:
      puVar24[uVar22] = 0;
    }
  }
  do {
    if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_2_0012a5a0);
  if (uVar21 != 0) {
    uVar1 = *(undefined4 *)PTR_x_1_0012a598;
    do {
      if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_2_0012a5a0);
    uVar1 = *(undefined4 *)PTR_x_1_0012a598;
    do {
      uVar1 = *(undefined4 *)PTR_x_1_0012a598;
      do {
        if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_2_0012a5a0);
    } while (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
            (9 < *(int *)PTR_y_2_0012a5a0));
    uVar19 = (uint)bVar3 << 8;
    uVar19 = ((uVar19 ^ 0xffffffff) & 0xf15fe0d6 | uVar19 & 0xea01f29) ^
             ((*(byte *)(param_4 + 0x15) ^ 0xffffffff) & 0xf15fe0d6 |
             *(byte *)(param_4 + 0x15) & 0xea01f29);
    uVar19 = (uVar19 ^ 0xffffffff) & 0xa7645534 | uVar19 & 0x589baacb;
    uVar6 = uVar19 ^ 0x589baacb | 0x7c2ca734;
    uVar18 = ((uVar19 ^ 0x589baacb) & 0xb3038d33 | (uVar19 ^ 0xa7645534) & 0x4cfc72cc) ^ 0xcf2f2a07;
    uVar19 = uVar18 & 0x7c2ca734;
    uVar19 = ((uVar19 ^ 0xffffffff) & 0xd6f85b33 | uVar18 & 0x2804a404) ^
             (uVar6 & 0xd6f85b33 | ~uVar6 & 0x2907a4cc) | (uVar6 | uVar19 ^ 0xffffffff) ^ 0xffffffff
    ;
    uVar19 = (uVar19 ^ 0xffffffff) & 0x2610394f | uVar19 & 0xd9efc6b0;
    do {
      if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_2_0012a5a0);
    uVar22 = 0;
    do {
      uVar1 = *(undefined4 *)PTR_x_1_0012a598;
      do {
        if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_2_0012a5a0);
      uVar19 = uVar19 * 0x41c64e6d + 0x3039;
      uVar18 = (uint)bVar3;
      iVar14 = (int)uVar22;
      bVar4 = (byte)(uVar19 >> 0x10);
      if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_00104738;
      while( true ) {
        if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
           (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_00104670;
        while( true ) {
          bVar5 = *(byte *)(param_4 + uVar22);
          uVar6 = iVar14 * 0x11 + (uint)bVar3;
          uVar7 = ((bVar5 ^ 0xffffffff) & 0xffffffb8 | bVar5 & 0x47) ^ 0xffffffb8 |
                  uVar6 ^ 0xffffffff;
          uVar6 = ((uint)bVar5 ^ ~uVar6 ^ 0xffffffff) & (uint)bVar5;
          bVar11 = (byte)uVar6;
          bVar10 = ~bVar11;
          bVar5 = (byte)uVar7;
          bVar10 = (bVar10 & 0x80 | bVar10 & 0x3f | (byte)((uVar6 >> 6 & 1) << 6)) ^
                   (bVar5 & 0x80 | bVar5 & 0x3f | (byte)((~uVar7 >> 6 & 1) << 6)) |
                   (bVar5 | bVar11 ^ 0xff) ^ 0xff;
          iVar2 = *(int *)PTR_x_1_0012a598;
          bVar11 = (bVar4 ^ ~bVar10 ^ 0xff) & bVar4;
          bVar10 = (bVar10 ^ ((bVar4 ^ 0xff) & 200 | bVar4 & 0x37) ^ 0xff ^ 0x37) & bVar10;
          bVar5 = ~bVar11;
          uVar21 = uVar22 + 1;
          puVar23[uVar22] =
               (bVar5 & 0xf1 | bVar11 & 0xe) ^ (~bVar10 & 0xf1 | bVar10 & 0xe) |
               (bVar5 | bVar10 ^ 0xff) ^ 0xff;
          if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_2_0012a5a0 < 10)) break;
LAB_00104670:
          bVar5 = *(byte *)(param_4 + uVar22);
          uVar6 = iVar14 * 0x11 + uVar18;
          uVar7 = ((bVar5 ^ 0xffffffff) & 0xffffffb8 | bVar5 & 0x47) ^ 0xffffffb8 |
                  uVar6 ^ 0xffffffff;
          uVar6 = ((uint)bVar5 ^ ~uVar6 ^ 0xffffffff) & (uint)bVar5;
          bVar11 = (byte)uVar6;
          bVar10 = ~bVar11;
          bVar5 = (byte)uVar7;
          bVar10 = (bVar10 & 0x80 | bVar10 & 0x3f | (byte)((uVar6 >> 6 & 1) << 6)) ^
                   (bVar5 & 0x80 | bVar5 & 0x3f | (byte)((~uVar7 >> 6 & 1) << 6)) |
                   (bVar5 | bVar11 ^ 0xff) ^ 0xff;
          bVar11 = (bVar4 ^ ~bVar10 ^ 0xff) & bVar4;
          bVar10 = (bVar10 ^ ((bVar4 ^ 0xff) & 200 | bVar4 & 0x37) ^ 0xff ^ 0x37) & bVar10;
          bVar5 = ~bVar11;
          puVar23[uVar22] =
               (bVar5 & 0xf1 | bVar11 & 0xe) ^ (~bVar10 & 0xf1 | bVar10 & 0xe) |
               (bVar5 | bVar10 ^ 0xff) ^ 0xff;
        }
        if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) ||
           (*(int *)PTR_y_2_0012a5a0 < 10)) break;
LAB_00104738:
        if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
           (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_0010483c;
        while( true ) {
          bVar5 = *(byte *)(param_4 + uVar22);
          uVar6 = iVar14 * 0x11 + uVar18;
          uVar7 = ((bVar5 ^ 0xffffffff) & 0xffffffb8 | bVar5 & 0x47) ^ 0xffffffb8 |
                  uVar6 ^ 0xffffffff;
          uVar6 = ((uint)bVar5 ^ ~uVar6 ^ 0xffffffff) & (uint)bVar5;
          bVar11 = (byte)uVar6;
          bVar10 = ~bVar11;
          bVar5 = (byte)uVar7;
          bVar10 = (bVar10 & 0x80 | bVar10 & 0x3f | (byte)((uVar6 >> 6 & 1) << 6)) ^
                   (bVar5 & 0x80 | bVar5 & 0x3f | (byte)((~uVar7 >> 6 & 1) << 6)) |
                   (bVar5 | bVar11 ^ 0xff) ^ 0xff;
          iVar2 = *(int *)PTR_x_1_0012a598;
          bVar11 = (bVar4 ^ ~bVar10 ^ 0xff) & bVar4;
          bVar10 = (bVar10 ^ ((bVar4 ^ 0xff) & 200 | bVar4 & 0x37) ^ 0xff ^ 0x37) & bVar10;
          bVar5 = ~bVar11;
          puVar23[uVar22] =
               (bVar5 & 0xf1 | bVar11 & 0xe) ^ (~bVar10 & 0xf1 | bVar10 & 0xe) |
               (bVar5 | bVar10 ^ 0xff) ^ 0xff;
          if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_2_0012a5a0 < 10)) break;
LAB_0010483c:
          bVar5 = *(byte *)(param_4 + uVar22);
          uVar6 = iVar14 * 0x11 + uVar18;
          uVar7 = ((bVar5 ^ 0xffffffff) & 0xffffffb8 | bVar5 & 0x47) ^ 0xffffffb8 |
                  uVar6 ^ 0xffffffff;
          uVar6 = ((uint)bVar5 ^ ~uVar6 ^ 0xffffffff) & (uint)bVar5;
          bVar11 = (byte)uVar6;
          bVar10 = ~bVar11;
          bVar5 = (byte)uVar7;
          bVar10 = (bVar10 & 0x80 | bVar10 & 0x3f | (byte)((uVar6 >> 6 & 1) << 6)) ^
                   (bVar5 & 0x80 | bVar5 & 0x3f | (byte)((~uVar7 >> 6 & 1) << 6)) |
                   (bVar5 | bVar11 ^ 0xff) ^ 0xff;
          bVar11 = (bVar4 ^ ~bVar10 ^ 0xff) & bVar4;
          bVar10 = (bVar10 ^ ((bVar4 ^ 0xff) & 200 | bVar4 & 0x37) ^ 0xff ^ 0x37) & bVar10;
          bVar5 = ~bVar11;
          puVar23[uVar22] =
               (bVar5 & 0xf1 | bVar11 & 0xe) ^ (~bVar10 & 0xf1 | bVar10 & 0xe) |
               (bVar5 | bVar10 ^ 0xff) ^ 0xff;
        }
      }
      do {
        if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_2_0012a5a0);
      uVar22 = uVar21;
    } while (uVar21 != uVar20);
  }
  uVar1 = *(undefined4 *)PTR_x_1_0012a598;
  do {
    if ((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_2_0012a5a0);
  if (((*(int *)PTR_x_1_0012a598 * (*(int *)PTR_x_1_0012a598 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_2_0012a5a0)) goto LAB_001049c4;
  while( true ) {
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00104984;
    while( true ) {
      lVar15 = *param_1;
      puVar23[uVar20] = 0;
      (**(code **)(lVar15 + 0x108))(param_1,param_2,puVar24,puVar23);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00104984:
      lVar15 = *param_1;
      puVar23[uVar20] = 0;
      (**(code **)(lVar15 + 0x108))(param_1,param_2,puVar24,puVar23);
    }
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_001049c4:
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00104d78;
    while( true ) {
      lVar15 = *param_1;
      puVar23[uVar20] = 0;
      (**(code **)(lVar15 + 0x108))(param_1,param_2,puVar24,puVar23);
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00104d78:
      lVar15 = *param_1;
      puVar23[uVar20] = 0;
      (**(code **)(lVar15 + 0x108))(param_1,param_2,puVar24,puVar23);
    }
  }
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
  lVar15 = 0x60;
  do {
    uVar1 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00104ac0;
    while( true ) {
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00104a9c;
      while( true ) {
        *puVar24 = 0;
        lVar17 = lVar15 + -1;
        if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00104a9c:
        *puVar24 = 0;
      }
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00104ac0:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00104b20;
      while ((*puVar24 = 0, (*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar13))) {
LAB_00104b20:
        *puVar24 = 0;
      }
    }
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    lVar15 = lVar17;
    puVar24 = puVar24 + 1;
  } while (lVar17 != 0);
  lVar15 = 0xa0;
  do {
    uVar1 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
    goto LAB_00104b9c;
    while( true ) {
      *puVar23 = 0;
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) break;
LAB_00104b9c:
      if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) && (9 < *(int *)puVar13))
      goto LAB_00104c04;
      while ((*puVar23 = 0, (*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar13))) {
LAB_00104c04:
        *puVar23 = 0;
      }
    }
    lVar15 = lVar15 + -1;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    puVar23 = puVar23 + 1;
  } while (lVar15 != 0);
  uVar1 = *(undefined4 *)puVar12;
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar13);
LAB_00104c44:
  do {
    if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar13) goto LAB_00104c44;
    }
    uVar1 = *(undefined4 *)puVar12;
    do {
      if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar13);
    if (((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) || (*(int *)puVar13 < 10)) {
      do {
        if ((*(int *)puVar12 * (*(int *)puVar12 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *(int *)puVar13);
      return;
    }
  } while( true );
}


