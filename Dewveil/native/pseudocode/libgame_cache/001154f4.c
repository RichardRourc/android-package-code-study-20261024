// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 001154f4; body: [[001154f4, 00115cb7]]

void FUN_001154f4(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  int iVar12;
  long lVar13;
  undefined1 *puVar14;
  
  puVar10 = PTR_y_32_0012a690;
  puVar9 = PTR_x_31_0012a688;
  uVar2 = *(undefined4 *)PTR_x_31_0012a688;
  do {
    if ((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_32_0012a690);
  puVar11 = &stack0xffffffffffffffb0;
  if (((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) != 0) &&
     (puVar11 = &stack0xffffffffffffffb0, puVar14 = &stack0xffffffffffffffb0,
     9 < *(int *)PTR_y_32_0012a690)) goto LAB_001155cc;
  while( true ) {
    if (((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) != 0) &&
       (puVar14 = puVar11, 9 < *(int *)PTR_y_32_0012a690)) goto LAB_001155a4;
    while ((puVar14 = puVar11 + -0x80,
           (*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_32_0012a690))) {
LAB_001155a4:
      puVar11 = puVar14 + -0x80;
    }
    if (((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_32_0012a690 < 10)) break;
LAB_001155cc:
    puVar11 = puVar14;
    if (((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_32_0012a690)) goto LAB_00115c5c;
    while ((puVar11 = puVar11 + -0x80,
           (*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_32_0012a690))) {
LAB_00115c5c:
      puVar11 = puVar11 + -0x80;
    }
  }
  do {
    if ((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_32_0012a690);
  lVar13 = 0;
  iVar12 = 0x5a3c25d1;
  do {
    uVar2 = *(undefined4 *)PTR_x_31_0012a688;
    do {
      if ((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_32_0012a690);
    iVar12 = iVar12 * 0x41c64e6d + 0x3039;
    bVar5 = (byte)((uint)iVar12 >> 0x10);
    cVar8 = (char)lVar13;
    if (((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_32_0012a690)) goto LAB_00115778;
    while( true ) {
      bVar4 = (&DAT_001015c8)[lVar13];
      bVar7 = cVar8 * '\x11' + 0xbb;
      bVar6 = (bVar4 ^ ~bVar7 ^ 0xff) & bVar4;
      bVar7 = (bVar7 ^ ((bVar4 ^ 0xff) & 0x99 | bVar4 & 0x66) ^ 0xff ^ 0x66) & bVar7;
      iVar3 = *(int *)PTR_x_31_0012a688;
      bVar6 = ((bVar6 ^ 0xff) & 0x8c | bVar6 & 0x73) ^ ((bVar7 ^ 0xff) & 0x8c | bVar7 & 0x73) |
              (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
      bVar4 = bVar5 | bVar6 ^ 0xff;
      bVar6 = (((bVar6 ^ 0xff) & 0x4b | bVar6 & 0xb4) ^ bVar5 ^ 0x4b) & bVar5;
      puVar14[lVar13] =
           ((bVar6 ^ 0xff) & 0xe4 | bVar6 & 0x1b) ^ (bVar4 & 0xe4 | (bVar4 ^ 0xff) & 0x1b) |
           (bVar4 | bVar6 ^ 0xff) ^ 0xff;
      if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)PTR_y_32_0012a690 < 10)) break;
LAB_00115778:
      if (((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_32_0012a690)) goto LAB_0011588c;
      while( true ) {
        bVar4 = (&DAT_001015c8)[lVar13];
        bVar7 = cVar8 * '\x11' + 0xbb;
        bVar6 = (bVar4 ^ ~bVar7 ^ 0xff) & bVar4;
        bVar7 = (bVar7 ^ ((bVar4 ^ 0xff) & 0x99 | bVar4 & 0x66) ^ 0xff ^ 0x66) & bVar7;
        iVar3 = *(int *)PTR_x_31_0012a688;
        bVar6 = ((bVar6 ^ 0xff) & 0x8c | bVar6 & 0x73) ^ ((bVar7 ^ 0xff) & 0x8c | bVar7 & 0x73) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        bVar4 = bVar5 | bVar6 ^ 0xff;
        bVar6 = (((bVar6 ^ 0xff) & 0x4b | bVar6 & 0xb4) ^ bVar5 ^ 0x4b) & bVar5;
        puVar14[lVar13] =
             ((bVar6 ^ 0xff) & 0xe4 | bVar6 & 0x1b) ^ (bVar4 & 0xe4 | (bVar4 ^ 0xff) & 0x1b) |
             (bVar4 | bVar6 ^ 0xff) ^ 0xff;
        if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)PTR_y_32_0012a690 < 10)) break;
LAB_0011588c:
        bVar4 = (&DAT_001015c8)[lVar13];
        bVar7 = cVar8 * '\x11' + 0xbb;
        bVar6 = (bVar4 ^ ~bVar7 ^ 0xff) & bVar4;
        bVar7 = (bVar7 ^ ((bVar4 ^ 0xff) & 0x99 | bVar4 & 0x66) ^ 0xff ^ 0x66) & bVar7;
        bVar6 = ((bVar6 ^ 0xff) & 0x8c | bVar6 & 0x73) ^ ((bVar7 ^ 0xff) & 0x8c | bVar7 & 0x73) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        bVar4 = bVar5 | bVar6 ^ 0xff;
        bVar6 = (((bVar6 ^ 0xff) & 0x4b | bVar6 & 0xb4) ^ bVar5 ^ 0x4b) & bVar5;
        puVar14[lVar13] =
             ((bVar6 ^ 0xff) & 0xe4 | bVar6 & 0x1b) ^ (bVar4 & 0xe4 | (bVar4 ^ 0xff) & 0x1b) |
             (bVar4 | bVar6 ^ 0xff) ^ 0xff;
      }
    }
    lVar13 = -(-1 - lVar13);
    do {
      if ((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_32_0012a690);
  } while (lVar13 != 0x14);
  uVar2 = *(undefined4 *)PTR_x_31_0012a688;
  do {
    if ((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_32_0012a690);
  if (((*(int *)PTR_x_31_0012a688 * (*(int *)PTR_x_31_0012a688 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_32_0012a690)) goto LAB_001159fc;
  while( true ) {
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_001159c4;
    while( true ) {
      lVar13 = *param_1;
      puVar11[-0x6c] = 0;
      (**(code **)(lVar13 + 0x30))(param_1,puVar14);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001159c4:
      lVar13 = *param_1;
      puVar11[-0x6c] = 0;
      (**(code **)(lVar13 + 0x30))(param_1,puVar14);
    }
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_001159fc:
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_00115c9c;
    while( true ) {
      lVar13 = *param_1;
      puVar11[-0x6c] = 0;
      (**(code **)(lVar13 + 0x30))(param_1,puVar14);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00115c9c:
      lVar13 = *param_1;
      puVar11[-0x6c] = 0;
      (**(code **)(lVar13 + 0x30))(param_1,puVar14);
    }
  }
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar10);
  lVar13 = 0x80;
  do {
    uVar2 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_00115b28;
    while( true ) {
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00115b04;
      while( true ) {
        *puVar14 = 0;
        lVar1 = ~(0xc35fcaacce960db7U - lVar13) + 0xc35fcaacce960db7;
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00115b04:
        *puVar14 = 0;
      }
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00115b28:
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00115b88;
      while ((*puVar14 = 0, (*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar10))) {
LAB_00115b88:
        *puVar14 = 0;
      }
    }
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    lVar13 = lVar1;
    puVar14 = puVar14 + 1;
  } while (lVar1 != 0);
  uVar2 = *(undefined4 *)puVar9;
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar10);
LAB_00115bc8:
  do {
    if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar10) goto LAB_00115bc8;
    }
    uVar2 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) {
      return;
    }
  } while( true );
}


