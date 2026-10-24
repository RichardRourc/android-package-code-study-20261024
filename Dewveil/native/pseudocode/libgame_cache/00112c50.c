// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00112c50; body: [[00112c50, 001137eb]]

void FUN_00112c50(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  undefined1 *puVar22;
  ulong uVar23;
  
  puVar14 = PTR_y_18_0012a620;
  puVar13 = PTR_x_17_0012a618;
  puVar22 = &stack0xffffffffffffffa0;
  puVar17 = &stack0xffffffffffffffa0;
  if (((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) != 0) &&
     (puVar17 = &stack0xffffffffffffffa0, 9 < *(int *)PTR_y_18_0012a620)) goto LAB_00112cd4;
  while( true ) {
    puVar22 = puVar17 + -0x80;
    uVar20 = *(ulong *)(param_2 + 0x18);
    bVar5 = *(byte *)(param_2 + 0x14);
    uVar2 = uVar20;
    if (0x7e < uVar20) {
      uVar2 = 0x7f;
    }
    if (((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_18_0012a620 < 10)) break;
LAB_00112cd4:
    puVar17 = puVar22 + -0x80;
  }
  if (uVar20 != 0) {
    uVar3 = *(undefined4 *)PTR_x_17_0012a618;
    do {
      if ((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_18_0012a620);
    if (((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_18_0012a620)) goto LAB_00112eec;
    do {
      uVar3 = *(undefined4 *)PTR_x_17_0012a618;
      do {
        uVar16 = (uint)bVar5 << 8;
        bVar6 = *(byte *)(param_2 + 0x13);
        uVar8 = (uVar16 ^ 0xffffffff) & 0x11c0d412 | uVar16 & 0xee3f2bed;
        uVar19 = uVar8 ^ 0xee3f2bed;
        uVar7 = (bVar6 ^ 0xd88892f6) & (uint)bVar6 | (bVar6 | 0x27776d09) ^ 0xffffffff;
        uVar16 = (uVar8 ^ 0xc94846e4) & uVar19 | (~uVar16 | 0xd88892f6) ^ 0xffffffff;
        uVar19 = uVar19 | bVar6 ^ 0xffffffff;
        uVar16 = uVar7 & (uVar16 ^ 0xffffffff) | uVar16 & (uVar7 ^ 0xffffffff);
        uVar19 = ~uVar19 & (uVar19 ^ 0xffffffff);
        uVar7 = ((uVar16 ^ 0xffffffff) & 0x1de5654 | uVar16 & 0xfe21a9ab) ^
                ((uVar19 ^ 0xffffffff) & 0x1de5654 | uVar19 & 0xfe21a9ab) |
                (~uVar16 | uVar19 ^ 0xffffffff) ^ 0xffffffff;
        uVar16 = (uVar7 ^ 0x89411323) & 0x89411323;
        uVar19 = (uVar7 ^ 0x89411323) & uVar7;
        uVar19 = ((uVar16 ^ 0xffffffff) & 0xf1e5de45 | (uVar7 ^ 0x89411323) & 0x8000122) ^
                 ((uVar19 ^ 0xffffffff) & 0xf1e5de45 | uVar19 & 0xe1a21ba) |
                 (~uVar16 | uVar19 ^ 0xffffffff) ^ 0xffffffff;
        if ((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_18_0012a620);
      if (((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_18_0012a620 < 10)) goto LAB_00112f18;
LAB_00112eec:
      uVar3 = *(undefined4 *)PTR_x_17_0012a618;
      do {
        if ((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) break;
      } while (9 < *(int *)PTR_y_18_0012a620);
    } while( true );
  }
  goto LAB_001134a4;
LAB_00112f18:
  do {
    if ((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_18_0012a620);
  uVar20 = 0;
  uVar19 = (uVar19 ^ 0xffffffff) & 0xd37d8d58 | uVar19 & 0x2c8272a7;
  do {
    uVar3 = *(undefined4 *)PTR_x_17_0012a618;
    do {
      if ((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_18_0012a620);
    uVar16 = (uint)bVar5;
    iVar15 = (int)uVar20;
    if (((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_18_0012a620)) goto LAB_0011323c;
    while( true ) {
      if (((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_18_0012a620)) goto LAB_00113118;
      while( true ) {
        bVar6 = *(byte *)(param_2 + uVar20);
        uVar7 = iVar15 * 0x11 + (uint)bVar5;
        uVar9 = (bVar6 ^ 0xffffffff) & 0xffffff82 | bVar6 & 0x7d;
        uVar8 = (uVar7 ^ 0x6e) & uVar7;
        uVar9 = (uVar9 ^ 0xffffffec) & (uVar9 ^ 0x7d);
        uVar1 = (bVar6 ^ 0x6e) & (uint)bVar6;
        uVar7 = ((uVar7 | 0xffffff91) & 0xffffffc7 | (uVar7 ^ 0xffffffff) & 0x28) ^
                (~uVar8 & 0xffffffc0 | ~uVar8 & 7 | (uVar8 >> 3 & 7) << 3) |
                (uVar7 | 0xffffff91 | uVar8 ^ 0xffffffff) ^ 0xffffffff;
        uVar8 = ((uVar9 ^ 0xffffffff) & 0xffffff9a | uVar9 & 0x65) ^
                ((uVar1 ^ 0xffffffff) & 0xffffff9a | uVar1 & 0x65) |
                (~uVar9 | uVar1 ^ 0xffffffff) ^ 0xffffffff;
        bVar6 = ~(byte)uVar7;
        bVar12 = ~(byte)uVar8;
        bVar10 = bVar6 & 0xc0 | bVar6 & 0xf | (byte)((uVar7 >> 4 & 3) << 4);
        bVar11 = bVar12 & 0xc0 | bVar12 & 0xf | (byte)((uVar8 >> 4 & 3) << 4);
        iVar4 = *(int *)PTR_x_17_0012a618;
        uVar7 = uVar19 * 0x41c64e6d + 0x3039;
        bVar12 = bVar10 ^ bVar11;
        bVar6 = (byte)(uVar7 >> 0x10);
        uVar23 = 0x561603e7401bb8b1 - ~(uVar20 + 0xa9e9fc18bfe4474f);
        puVar22[uVar20] =
             (((bVar10 ^ bVar11 ^ 0xff) & 0xf7 | bVar12 & 8) ^ bVar6 ^ 0xf7) & bVar6 |
             (bVar6 | bVar12 ^ 0xff) ^ 0xff;
        if (((iVar4 * (iVar4 + -1) & 1U) == 0) || (*(int *)PTR_y_18_0012a620 < 10)) break;
LAB_00113118:
        bVar6 = *(byte *)(param_2 + uVar20);
        uVar7 = iVar15 * 0x11 + uVar16;
        uVar1 = (bVar6 ^ 0xffffffff) & 0xffffff82 | bVar6 & 0x7d;
        uVar8 = (uVar7 ^ 0x6e) & uVar7;
        uVar9 = (bVar6 ^ 0x6e) & (uint)bVar6;
        uVar1 = (uVar1 ^ 0xffffffec) & (uVar1 ^ 0x7d);
        uVar7 = ((uVar7 | 0xffffff91) & 0xffffffc7 | (uVar7 ^ 0xffffffff) & 0x28) ^
                (~uVar8 & 0xffffffc0 | ~uVar8 & 7 | (uVar8 >> 3 & 7) << 3) |
                (uVar7 | 0xffffff91 | uVar8 ^ 0xffffffff) ^ 0xffffffff;
        uVar8 = ((uVar1 ^ 0xffffffff) & 0xffffff9a | uVar1 & 0x65) ^
                ((uVar9 ^ 0xffffffff) & 0xffffff9a | uVar9 & 0x65) |
                (~uVar1 | uVar9 ^ 0xffffffff) ^ 0xffffffff;
        bVar6 = ~(byte)uVar7;
        bVar12 = ~(byte)uVar8;
        bVar10 = bVar6 & 0xc0 | bVar6 & 0xf | (byte)((uVar7 >> 4 & 3) << 4);
        bVar11 = bVar12 & 0xc0 | bVar12 & 0xf | (byte)((uVar8 >> 4 & 3) << 4);
        bVar12 = bVar10 ^ bVar11;
        bVar6 = (byte)(uVar19 * 0x41c64e6d + 0x3039 >> 0x10);
        puVar22[uVar20] =
             (((bVar10 ^ bVar11 ^ 0xff) & 0xf7 | bVar12 & 8) ^ bVar6 ^ 0xf7) & bVar6 |
             (bVar6 | bVar12 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_18_0012a620 < 10)) break;
LAB_0011323c:
      if (((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_18_0012a620)) goto LAB_0011339c;
      while( true ) {
        bVar6 = *(byte *)(param_2 + uVar20);
        uVar7 = iVar15 * 0x11 + uVar16;
        uVar1 = (bVar6 ^ 0xffffffff) & 0xffffff82 | bVar6 & 0x7d;
        uVar8 = (bVar6 ^ 0x6e) & (uint)bVar6;
        uVar9 = (uVar7 ^ 0x6e) & uVar7;
        uVar1 = (uVar1 ^ 0xffffffec) & (uVar1 ^ 0x7d);
        uVar7 = ((uVar7 | 0xffffff91) & 0xffffffc7 | (uVar7 ^ 0xffffffff) & 0x28) ^
                (~uVar9 & 0xffffffc0 | ~uVar9 & 7 | (uVar9 >> 3 & 7) << 3) |
                (uVar7 | 0xffffff91 | uVar9 ^ 0xffffffff) ^ 0xffffffff;
        uVar8 = ((uVar1 ^ 0xffffffff) & 0xffffff9a | uVar1 & 0x65) ^
                ((uVar8 ^ 0xffffffff) & 0xffffff9a | uVar8 & 0x65) |
                (~uVar1 | uVar8 ^ 0xffffffff) ^ 0xffffffff;
        bVar6 = ~(byte)uVar7;
        bVar12 = ~(byte)uVar8;
        bVar10 = bVar6 & 0xc0 | bVar6 & 0xf | (byte)((uVar7 >> 4 & 3) << 4);
        bVar11 = bVar12 & 0xc0 | bVar12 & 0xf | (byte)((uVar8 >> 4 & 3) << 4);
        bVar12 = bVar10 ^ bVar11;
        iVar4 = *(int *)PTR_x_17_0012a618;
        bVar6 = (byte)(uVar19 * 0x41c64e6d + 0x3039 >> 0x10);
        puVar22[uVar20] =
             (((bVar10 ^ bVar11 ^ 0xff) & 0xf7 | bVar12 & 8) ^ bVar6 ^ 0xf7) & bVar6 |
             (bVar6 | bVar12 ^ 0xff) ^ 0xff;
        if (((iVar4 * (iVar4 + -1) & 1U) == 0) || (*(int *)PTR_y_18_0012a620 < 10)) break;
LAB_0011339c:
        bVar6 = *(byte *)(param_2 + uVar20);
        uVar7 = iVar15 * 0x11 + uVar16;
        uVar1 = (bVar6 ^ 0xffffffff) & 0xffffff82 | bVar6 & 0x7d;
        uVar8 = (uVar7 ^ 0x6e) & uVar7;
        uVar9 = (bVar6 ^ 0x6e) & (uint)bVar6;
        uVar1 = (uVar1 ^ 0xffffffec) & (uVar1 ^ 0x7d);
        uVar7 = ((uVar7 | 0xffffff91) & 0xffffffc7 | (uVar7 ^ 0xffffffff) & 0x28) ^
                (~uVar8 & 0xffffffc0 | ~uVar8 & 7 | (uVar8 >> 3 & 7) << 3) |
                (uVar7 | 0xffffff91 | uVar8 ^ 0xffffffff) ^ 0xffffffff;
        uVar8 = ((uVar1 ^ 0xffffffff) & 0xffffff9a | uVar1 & 0x65) ^
                ((uVar9 ^ 0xffffffff) & 0xffffff9a | uVar9 & 0x65) |
                (~uVar1 | uVar9 ^ 0xffffffff) ^ 0xffffffff;
        bVar6 = ~(byte)uVar7;
        bVar12 = ~(byte)uVar8;
        bVar10 = bVar6 & 0xc0 | bVar6 & 0xf | (byte)((uVar7 >> 4 & 3) << 4);
        bVar11 = bVar12 & 0xc0 | bVar12 & 0xf | (byte)((uVar8 >> 4 & 3) << 4);
        bVar12 = bVar10 ^ bVar11;
        bVar6 = (byte)(uVar19 * 0x41c64e6d + 0x3039 >> 0x10);
        puVar22[uVar20] =
             (((bVar10 ^ bVar11 ^ 0xff) & 0xf7 | bVar12 & 8) ^ bVar6 ^ 0xf7) & bVar6 |
             (bVar6 | bVar12 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_18_0012a620);
    uVar20 = uVar23;
    uVar19 = uVar7;
  } while (uVar23 != uVar2);
LAB_001134a4:
  uVar3 = *(undefined4 *)PTR_x_17_0012a618;
  do {
    if ((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_18_0012a620);
  if (((*(int *)PTR_x_17_0012a618 * (*(int *)PTR_x_17_0012a618 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_18_0012a620)) goto LAB_00113570;
  while( true ) {
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_00113538;
    while( true ) {
      lVar18 = *param_1;
      puVar22[uVar2] = 0;
      (**(code **)(lVar18 + 0x30))(param_1,puVar22);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00113538:
      lVar18 = *param_1;
      puVar22[uVar2] = 0;
      (**(code **)(lVar18 + 0x30))(param_1,puVar22);
    }
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00113570:
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_001137d0;
    while( true ) {
      lVar18 = *param_1;
      puVar22[uVar2] = 0;
      (**(code **)(lVar18 + 0x30))(param_1,puVar22);
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_001137d0:
      lVar18 = *param_1;
      puVar22[uVar2] = 0;
      (**(code **)(lVar18 + 0x30))(param_1,puVar22);
    }
  }
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
  lVar18 = 0x80;
  do {
    uVar3 = *(undefined4 *)puVar13;
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
    goto LAB_0011366c;
    while( true ) {
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_00113648;
      while( true ) {
        *puVar22 = 0;
        lVar21 = lVar18 + -1;
        if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_00113648:
        *puVar22 = 0;
      }
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) || (*(int *)puVar14 < 10)) break;
LAB_0011366c:
      if (((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) && (9 < *(int *)puVar14))
      goto LAB_001136cc;
      while ((*puVar22 = 0, (*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar14))) {
LAB_001136cc:
        *puVar22 = 0;
      }
    }
    do {
      if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar14);
    lVar18 = lVar21;
    puVar22 = puVar22 + 1;
  } while (lVar21 != 0);
  uVar3 = *(undefined4 *)puVar13;
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar14);
LAB_0011370c:
  do {
    if ((*(int *)puVar13 * (*(int *)puVar13 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar14) goto LAB_0011370c;
    }
    uVar3 = *(undefined4 *)puVar13;
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


