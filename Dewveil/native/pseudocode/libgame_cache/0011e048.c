// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 0011e048; body: [[0011e048, 0011ef7b]]

void FUN_0011e048(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  
  puVar12 = PTR_y_42_0012a6e0;
  puVar11 = PTR_x_41_0012a6d8;
  uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
  do {
    if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_42_0012a6e0);
  puVar20 = &stack0xffffffffffffffa0;
  if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
     (puVar20 = &stack0xffffffffffffffa0, puVar13 = &stack0xffffffffffffffa0,
     9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e14c;
  while( true ) {
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e11c;
    while( true ) {
      puVar21 = puVar20 + -0x60;
      puVar20 = puVar20 + -0x100;
      uVar18 = *(ulong *)(param_3 + 8);
      cVar3 = *(char *)(param_3 + 7);
      uVar15 = uVar18;
      if (0x5e < uVar18) {
        uVar15 = 0x5f;
      }
      if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_42_0012a6e0 < 10)) break;
LAB_0011e11c:
      puVar20 = puVar20 + -0x100;
    }
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) ||
       (puVar13 = puVar20, *(int *)PTR_y_42_0012a6e0 < 10)) break;
LAB_0011e14c:
    puVar20 = puVar13;
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011ef40;
    while ((puVar20 = puVar20 + -0x100,
           (*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_42_0012a6e0))) {
LAB_0011ef40:
      puVar20 = puVar20 + -0x100;
    }
  }
  do {
    if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_42_0012a6e0);
  if (uVar18 != 0) {
    uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
    do {
      if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_42_0012a6e0);
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e29c;
    do {
      uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
      do {
        uVar6 = (uint)CONCAT11(cVar3,*(undefined1 *)(param_3 + 6));
        uVar17 = (uVar6 ^ 0x5a3c9e7b) & uVar6;
        uVar6 = ((uVar6 ^ 0xffffffff) & 0x453eb30a | uVar6 & 0xbac14cf5) ^ 0x453eb30a | 0xa5c36184;
        uVar17 = (uVar6 & 0xb05626da | ~uVar6 & 0x4fa9d925) ^
                 ((uVar17 ^ 0xffffffff) & 0xb05626da | uVar17 & 0x4fa9d925) |
                 (uVar6 | uVar17 ^ 0xffffffff) ^ 0xffffffff;
        if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_42_0012a6e0);
      if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_42_0012a6e0 < 10)) goto LAB_0011e2c8;
LAB_0011e29c:
      uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
      do {
        if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_42_0012a6e0);
    } while( true );
  }
  goto LAB_0011e620;
LAB_0011e2c8:
  do {
    if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_42_0012a6e0);
  uVar18 = 0;
  do {
    uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
    do {
      if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_42_0012a6e0);
    uVar17 = uVar17 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)(uVar17 >> 0x10);
    cVar10 = (char)uVar18;
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e4d8;
    while( true ) {
      if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e444;
      while( true ) {
        bVar5 = *(byte *)(param_3 + uVar18);
        bVar8 = cVar10 * '\x11' + cVar3;
        iVar2 = *(int *)PTR_x_41_0012a6d8;
        bVar5 = (((bVar8 ^ 0xff) & 0xbb | bVar8 & 0x44) ^ bVar5 ^ 0xbb) & bVar5 |
                bVar8 & (bVar8 ^ bVar5 ^ 0xff ^ 0xff);
        bVar8 = (bVar4 ^ 0xff) & 0xdc | (bVar4 ^ 0xdc) & bVar4;
        bVar5 = (bVar5 ^ 0xff) & 0xdc | (bVar5 ^ 0xdc) & bVar5;
        puVar21[uVar18] =
             ((bVar5 ^ 0xff) & 0x91 | bVar5 & 0x6e) ^ ((bVar8 ^ 0xff) & 0x91 | bVar8 & 0x6e);
        uVar19 = uVar18 + 1;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_42_0012a6e0 < 10)) break;
LAB_0011e444:
        bVar5 = *(byte *)(param_3 + uVar18);
        bVar8 = cVar10 * '\x11' + cVar3;
        bVar5 = (((bVar8 ^ 0xff) & 0xbb | bVar8 & 0x44) ^ bVar5 ^ 0xbb) & bVar5 |
                bVar8 & (bVar8 ^ bVar5 ^ 0xff ^ 0xff);
        bVar5 = (bVar5 ^ 0xff) & 0xdc | (bVar5 ^ 0xdc) & bVar5;
        bVar8 = (bVar4 ^ 0xff) & 0xdc | (bVar4 ^ 0xdc) & bVar4;
        puVar21[uVar18] =
             ((bVar5 ^ 0xff) & 0x91 | bVar5 & 0x6e) ^ ((bVar8 ^ 0xff) & 0x91 | bVar8 & 0x6e);
      }
      if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_42_0012a6e0 < 10)) break;
LAB_0011e4d8:
      if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e5a8;
      while( true ) {
        bVar5 = *(byte *)(param_3 + uVar18);
        bVar8 = cVar10 * '\x11' + cVar3;
        bVar5 = (((bVar8 ^ 0xff) & 0xbb | bVar8 & 0x44) ^ bVar5 ^ 0xbb) & bVar5 |
                bVar8 & (bVar8 ^ bVar5 ^ 0xff ^ 0xff);
        iVar2 = *(int *)PTR_x_41_0012a6d8;
        bVar8 = (bVar4 ^ 0xff) & 0xdc | (bVar4 ^ 0xdc) & bVar4;
        bVar5 = (bVar5 ^ 0xff) & 0xdc | (bVar5 ^ 0xdc) & bVar5;
        puVar21[uVar18] =
             ((bVar5 ^ 0xff) & 0x91 | bVar5 & 0x6e) ^ ((bVar8 ^ 0xff) & 0x91 | bVar8 & 0x6e);
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_42_0012a6e0 < 10)) break;
LAB_0011e5a8:
        bVar5 = *(byte *)(param_3 + uVar18);
        bVar8 = cVar10 * '\x11' + cVar3;
        bVar5 = (((bVar8 ^ 0xff) & 0xbb | bVar8 & 0x44) ^ bVar5 ^ 0xbb) & bVar5 |
                bVar8 & (bVar8 ^ bVar5 ^ 0xff ^ 0xff);
        bVar5 = (bVar5 ^ 0xff) & 0xdc | (bVar5 ^ 0xdc) & bVar5;
        bVar8 = (bVar4 ^ 0xff) & 0xdc | (bVar4 ^ 0xdc) & bVar4;
        puVar21[uVar18] =
             ((bVar5 ^ 0xff) & 0x91 | bVar5 & 0x6e) ^ ((bVar8 ^ 0xff) & 0x91 | bVar8 & 0x6e);
      }
    }
    do {
      if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_42_0012a6e0);
    uVar18 = uVar19;
  } while (uVar19 != uVar15);
LAB_0011e620:
  uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
  do {
    if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_42_0012a6e0);
  if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e6d8;
  while( true ) {
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e6b4;
    while( true ) {
      iVar2 = *(int *)PTR_x_41_0012a6d8;
      uVar19 = *(ulong *)(param_4 + 8);
      puVar21[uVar15] = 0;
      bVar4 = *(byte *)(param_4 + 4);
      uVar18 = uVar19;
      if (0x9e < uVar19) {
        uVar18 = 0x9f;
      }
      if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_42_0012a6e0 < 10)) break;
LAB_0011e6b4:
      puVar21[uVar15] = 0;
    }
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_42_0012a6e0 < 10)) break;
LAB_0011e6d8:
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011ef74;
    while ((iVar2 = *(int *)PTR_x_41_0012a6d8, puVar21[uVar15] = 0, (iVar2 * (iVar2 + -1) & 1U) != 0
           && (9 < *(int *)PTR_y_42_0012a6e0))) {
LAB_0011ef74:
      puVar21[uVar15] = 0;
    }
  }
  do {
    if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_42_0012a6e0);
  if (uVar19 != 0) {
    uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
    do {
      if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_42_0012a6e0);
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e8a4;
    do {
      uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
      do {
        uVar17 = (((uint)bVar4 << 8 ^ 0xffffffff) & 0xcc7bea17 | (uint)bVar4 << 8 & 0x338415e8) ^
                 ((*(byte *)(param_4 + 3) ^ 0xffffffff) & 0xcc7bea17 |
                 *(byte *)(param_4 + 3) & 0x338415e8) ^ 0xffffffff;
        uVar6 = uVar17 | 0x9faa7a59;
        uVar17 = ((uVar17 & 0x9faa7a59 ^ 0xffffffff) & 0x6df2490f | uVar17 & 0x92083250) ^
                 (uVar6 & 0x6df2490f | ~uVar6 & 0x920db6f0) |
                 (uVar6 | uVar17 & 0x9faa7a59 ^ 0xffffffff) ^ 0xffffffff;
        uVar17 = ((uVar17 ^ 0xffffffff) & 0x2426c936 | uVar17 & 0xdbd936c9) ^ 0xe1b02d14;
        if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_42_0012a6e0);
      if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_42_0012a6e0 < 10)) goto LAB_0011e8d0;
LAB_0011e8a4:
      uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
      do {
        if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_42_0012a6e0);
    } while( true );
  }
LAB_0011eb80:
  if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011ebd8;
  while( true ) {
    lVar14 = *param_1;
    puVar20[uVar18] = 0;
    (**(code **)(lVar14 + 0x108))(param_1,param_2,puVar21,puVar20);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011ebd8:
    lVar14 = *param_1;
    puVar20[uVar18] = 0;
    (**(code **)(lVar14 + 0x108))(param_1,param_2,puVar21,puVar20);
  }
  lVar14 = 0x60;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_0011ecbc;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_0011ec98;
      while( true ) {
        *puVar21 = 0;
        lVar16 = lVar14 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011ec98:
        *puVar21 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011ecbc:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_0011ed1c;
      while ((*puVar21 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar12))) {
LAB_0011ed1c:
        *puVar21 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    lVar14 = lVar16;
    puVar21 = puVar21 + 1;
  } while (lVar16 != 0);
  lVar14 = 0xa0;
  do {
    uVar1 = *(undefined4 *)puVar11;
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
    goto LAB_0011ede4;
    while( true ) {
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_0011edc0;
      while( true ) {
        *puVar20 = 0;
        lVar16 = lVar14 + -1;
        if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011edc0:
        *puVar20 = 0;
      }
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) || (*(int *)puVar12 < 10)) break;
LAB_0011ede4:
      if (((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) && (9 < *(int *)puVar12))
      goto LAB_0011ee44;
      while ((*puVar20 = 0, (*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar12))) {
LAB_0011ee44:
        *puVar20 = 0;
      }
    }
    do {
      if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar12);
    lVar14 = lVar16;
    puVar20 = puVar20 + 1;
  } while (lVar16 != 0);
  uVar1 = *(undefined4 *)puVar11;
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar12);
LAB_0011ee84:
  do {
    if ((*(int *)puVar11 * (*(int *)puVar11 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar12) goto LAB_0011ee84;
    }
    uVar1 = *(undefined4 *)puVar11;
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
LAB_0011e8d0:
  uVar15 = 0;
  do {
    uVar1 = *(undefined4 *)PTR_x_41_0012a6d8;
    do {
      if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_42_0012a6e0);
    uVar17 = uVar17 * 0x41c64e6d + 0x3039;
    bVar5 = (byte)(uVar17 >> 0x10);
    cVar3 = (char)uVar15;
    if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011e9f4;
    while( true ) {
      bVar8 = *(byte *)(param_4 + uVar15);
      bVar9 = cVar3 * '\x11' + bVar4;
      bVar7 = bVar8 | bVar9 ^ 0xff;
      bVar8 = bVar8 & (bVar9 ^ bVar8 ^ 0xff ^ 0xff);
      iVar2 = *(int *)PTR_x_41_0012a6d8;
      bVar8 = ((bVar8 ^ 0xff) & 0xa2 | bVar8 & 0x5d) ^ (bVar7 & 0xa2 | (bVar7 ^ 0xff) & 0x5d) |
              (bVar7 | bVar8 ^ 0xff) ^ 0xff;
      bVar7 = (bVar5 ^ 0xff) & 0x54 | bVar5 & 0x81;
      puVar20[uVar15] =
           (bVar8 & 0xaa | ~bVar8 & 0x55) + 0x80 ^
           ((bVar7 ^ 0xfe) & 0x6f | (bVar7 ^ 0x80) & 0x90) ^ (~bVar5 | 0x55) & 0x6f;
      if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_42_0012a6e0 < 10)) break;
LAB_0011e9f4:
      if (((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_42_0012a6e0)) goto LAB_0011eae8;
      while( true ) {
        bVar8 = *(byte *)(param_4 + uVar15);
        bVar9 = cVar3 * '\x11' + bVar4;
        bVar7 = bVar8 | bVar9 ^ 0xff;
        bVar8 = bVar8 & (bVar9 ^ bVar8 ^ 0xff ^ 0xff);
        iVar2 = *(int *)PTR_x_41_0012a6d8;
        bVar8 = ((bVar8 ^ 0xff) & 0xa2 | bVar8 & 0x5d) ^ (bVar7 & 0xa2 | (bVar7 ^ 0xff) & 0x5d) |
                (bVar7 | bVar8 ^ 0xff) ^ 0xff;
        bVar7 = (bVar5 ^ 0xff) & 0x54 | bVar5 & 0x81;
        puVar20[uVar15] =
             (bVar8 & 0xaa | ~bVar8 & 0x55) + 0x80 ^
             ((bVar7 ^ 0xfe) & 0x6f | (bVar7 ^ 0x80) & 0x90) ^ (~bVar5 | 0x55) & 0x6f;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_42_0012a6e0 < 10)) break;
LAB_0011eae8:
        bVar8 = *(byte *)(param_4 + uVar15);
        bVar7 = cVar3 * '\x11' + bVar4;
        bVar9 = bVar8 | bVar7 ^ 0xff;
        bVar8 = bVar8 & (bVar7 ^ bVar8 ^ 0xff ^ 0xff);
        bVar7 = (bVar5 ^ 0xff) & 0x54 | bVar5 & 0x81;
        bVar8 = ((bVar8 ^ 0xff) & 0xa2 | bVar8 & 0x5d) ^ (bVar9 & 0xa2 | (bVar9 ^ 0xff) & 0x5d) |
                (bVar9 | bVar8 ^ 0xff) ^ 0xff;
        puVar20[uVar15] =
             (bVar8 & 0xaa | ~bVar8 & 0x55) + 0x80 ^
             ((bVar7 ^ 0xfe) & 0x6f | (bVar7 ^ 0x80) & 0x90) ^ (~bVar5 | 0x55) & 0x6f;
      }
    }
    uVar15 = uVar15 + 1;
    do {
      if ((*(int *)PTR_x_41_0012a6d8 * (*(int *)PTR_x_41_0012a6d8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_42_0012a6e0);
  } while (uVar15 != uVar18);
  goto LAB_0011eb80;
}


