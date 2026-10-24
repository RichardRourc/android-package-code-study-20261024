// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00113f18; body: [[00113f18, 001147db]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00113f18(long *param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  
  puVar7 = PTR_y_26_0012a660;
  puVar6 = PTR_x_25_0012a658;
  puVar12 = &stack0xffffffffffffffc0;
  uVar14 = *(undefined4 *)PTR_x_25_0012a658;
  do {
    if ((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_26_0012a660);
  uVar14 = (undefined4)ram0x001013c0;
  puVar9 = &stack0xffffffffffffffc0;
  if (((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) != 0) &&
     (puVar9 = &stack0xffffffffffffffc0, 9 < *(int *)PTR_y_26_0012a660)) goto LAB_00114034;
  while( true ) {
    if (((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) != 0) &&
       (puVar12 = puVar9, 9 < *(int *)PTR_y_26_0012a660)) goto LAB_00113fec;
    while( true ) {
      puVar13 = puVar9 + -0x60;
      puVar12 = puVar9 + -0x100;
      iVar11 = *(int *)PTR_x_25_0012a658;
      puVar9[-0x5a] = 0;
      *(undefined4 *)(puVar9 + -0x60) = uVar14;
      *(undefined2 *)(puVar9 + -0x5c) = 0x3e74;
      if (((iVar11 * (iVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_26_0012a660 < 10)) break;
LAB_00113fec:
      puVar9 = puVar12 + -0x100;
      puVar12[-0x5a] = 0;
      *(undefined2 *)(puVar12 + -0x5c) = 0x3e74;
      *(undefined4 *)(puVar12 + -0x60) = uVar14;
    }
    if (((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_26_0012a660 < 10)) break;
LAB_00114034:
    if (((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) != 0) &&
       (puVar9 = puVar12, 9 < *(int *)PTR_y_26_0012a660)) goto LAB_00114750;
    while( true ) {
      puVar9 = puVar12 + -0x100;
      iVar11 = *(int *)PTR_x_25_0012a658;
      puVar12[-0x5a] = 0;
      *(undefined4 *)(puVar12 + -0x60) = uVar14;
      *(undefined2 *)(puVar12 + -0x5c) = 0x3e74;
      if (((iVar11 * (iVar11 + -1) & 1U) == 0) || (*(int *)PTR_y_26_0012a660 < 10)) break;
LAB_00114750:
      puVar12 = puVar9 + -0x100;
      puVar9[-0x5a] = 0;
      *(undefined2 *)(puVar9 + -0x5c) = 0x3e74;
      *(undefined4 *)(puVar9 + -0x60) = uVar14;
    }
  }
  do {
    if ((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_26_0012a660);
  iVar11 = 0x5a3cff2b;
  lVar8 = 0;
  do {
    uVar14 = *(undefined4 *)PTR_x_25_0012a658;
    do {
      if ((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_26_0012a660);
    iVar11 = iVar11 * 0x41c64e6d + 0x3039;
    bVar3 = (byte)((uint)iVar11 >> 0x10);
    cVar5 = (char)lVar8;
    if (((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_26_0012a660)) goto LAB_00114250;
    while( true ) {
      if (((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_26_0012a660)) goto LAB_001141c8;
      while( true ) {
        iVar1 = *(int *)PTR_x_25_0012a658;
        bVar4 = cVar5 * '\x11' + 0x61;
        bVar2 = bVar4 & ((&DAT_00101948)[lVar8] ^ bVar4 ^ 0xff ^ 0xff) |
                (bVar4 | (&DAT_00101948)[lVar8] ^ 0xff) ^ 0xff;
        bVar4 = ((bVar2 ^ 0xff) & 0x66 | bVar2 & 0x99) ^ 0x66 | bVar3 ^ 0xff;
        bVar2 = (~bVar2 ^ bVar3 ^ 0xff) & bVar2;
        puVar12[lVar8] =
             (bVar4 & 0x8f | (bVar4 ^ 0xff) & 0x70) ^ (~bVar2 & 0x8f | bVar2 & 0x70) |
             (bVar4 | bVar2 ^ 0xff) ^ 0xff;
        lVar10 = lVar8 + 1;
        if (((iVar1 * (iVar1 + -1) & 1U) == 0) || (*(int *)PTR_y_26_0012a660 < 10)) break;
LAB_001141c8:
        bVar4 = cVar5 * '\x11' + 0x61;
        bVar2 = bVar4 & ((&DAT_00101948)[lVar8] ^ bVar4 ^ 0xff ^ 0xff) |
                (bVar4 | (&DAT_00101948)[lVar8] ^ 0xff) ^ 0xff;
        bVar4 = ((bVar2 ^ 0xff) & 0x66 | bVar2 & 0x99) ^ 0x66 | bVar3 ^ 0xff;
        bVar2 = (~bVar2 ^ bVar3 ^ 0xff) & bVar2;
        puVar12[lVar8] =
             (bVar4 & 0x8f | (bVar4 ^ 0xff) & 0x70) ^ (~bVar2 & 0x8f | bVar2 & 0x70) |
             (bVar4 | bVar2 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_26_0012a660 < 10)) break;
LAB_00114250:
      if (((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_26_0012a660)) goto LAB_00114314;
      while( true ) {
        bVar4 = cVar5 * '\x11' + 0x61;
        bVar2 = bVar4 & ((&DAT_00101948)[lVar8] ^ bVar4 ^ 0xff ^ 0xff) |
                (bVar4 | (&DAT_00101948)[lVar8] ^ 0xff) ^ 0xff;
        iVar1 = *(int *)PTR_x_25_0012a658;
        bVar4 = ((bVar2 ^ 0xff) & 0x66 | bVar2 & 0x99) ^ 0x66 | bVar3 ^ 0xff;
        bVar2 = (~bVar2 ^ bVar3 ^ 0xff) & bVar2;
        puVar12[lVar8] =
             (bVar4 & 0x8f | (bVar4 ^ 0xff) & 0x70) ^ (~bVar2 & 0x8f | bVar2 & 0x70) |
             (bVar4 | bVar2 ^ 0xff) ^ 0xff;
        if (((iVar1 * (iVar1 + -1) & 1U) == 0) || (*(int *)PTR_y_26_0012a660 < 10)) break;
LAB_00114314:
        bVar4 = cVar5 * '\x11' + 0x61;
        bVar2 = bVar4 & ((&DAT_00101948)[lVar8] ^ bVar4 ^ 0xff ^ 0xff) |
                (bVar4 | (&DAT_00101948)[lVar8] ^ 0xff) ^ 0xff;
        bVar4 = ((bVar2 ^ 0xff) & 0x66 | bVar2 & 0x99) ^ 0x66 | bVar3 ^ 0xff;
        bVar2 = (~bVar2 ^ bVar3 ^ 0xff) & bVar2;
        puVar12[lVar8] =
             (bVar4 & 0x8f | (bVar4 ^ 0xff) & 0x70) ^ (~bVar2 & 0x8f | bVar2 & 0x70) |
             (bVar4 | bVar2 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_26_0012a660);
    lVar8 = lVar10;
  } while (lVar10 != 0x2d);
  uVar14 = *(undefined4 *)PTR_x_25_0012a658;
  do {
    if ((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_26_0012a660);
  if (((*(int *)PTR_x_25_0012a658 * (*(int *)PTR_x_25_0012a658 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_26_0012a660)) goto LAB_00114400;
  while( true ) {
    lVar8 = *param_1;
    puVar9[-0xd3] = 0;
    (**(code **)(lVar8 + 0x108))(param_1,param_2,puVar13,puVar12);
    if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) || (*(int *)puVar7 < 10)) break;
LAB_00114400:
    if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) != 0) && (9 < *(int *)puVar7))
    goto LAB_001147b8;
    while( true ) {
      lVar8 = *param_1;
      puVar9[-0xd3] = 0;
      (**(code **)(lVar8 + 0x108))(param_1,param_2,puVar13,puVar12);
      if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) || (*(int *)puVar7 < 10)) break;
LAB_001147b8:
      lVar8 = *param_1;
      puVar9[-0xd3] = 0;
      (**(code **)(lVar8 + 0x108))(param_1,param_2,puVar13,puVar12);
    }
  }
  do {
    if ((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar7);
  lVar8 = 0x60;
  do {
    uVar14 = *(undefined4 *)puVar6;
    do {
      if ((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar7);
    if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) != 0) && (9 < *(int *)puVar7))
    goto LAB_001144fc;
    while( true ) {
      if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) != 0) && (9 < *(int *)puVar7))
      goto LAB_001144d8;
      while( true ) {
        *puVar13 = 0;
        lVar10 = lVar8 + -1;
        if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) || (*(int *)puVar7 < 10)) break;
LAB_001144d8:
        *puVar13 = 0;
      }
      if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) || (*(int *)puVar7 < 10)) break;
LAB_001144fc:
      *puVar13 = 0;
    }
    do {
      if ((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar7);
    lVar8 = lVar10;
    puVar13 = puVar13 + 1;
  } while (lVar10 != 0);
  lVar8 = 0xa0;
  do {
    uVar14 = *(undefined4 *)puVar6;
    do {
      if ((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar7);
    if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) != 0) && (9 < *(int *)puVar7))
    goto LAB_001145e4;
    while( true ) {
      if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) != 0) && (9 < *(int *)puVar7))
      goto LAB_001145c0;
      while( true ) {
        *puVar12 = 0;
        lVar10 = lVar8 + -1;
        if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) || (*(int *)puVar7 < 10)) break;
LAB_001145c0:
        *puVar12 = 0;
      }
      if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) || (*(int *)puVar7 < 10)) break;
LAB_001145e4:
      if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) != 0) && (9 < *(int *)puVar7))
      goto LAB_00114644;
      while ((*puVar12 = 0, (*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar7))) {
LAB_00114644:
        *puVar12 = 0;
      }
    }
    do {
      if ((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar7);
    lVar8 = lVar10;
    puVar12 = puVar12 + 1;
  } while (lVar10 != 0);
  uVar14 = *(undefined4 *)puVar6;
  do {
    if ((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar7);
LAB_00114684:
  do {
    if ((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar7) goto LAB_00114684;
    }
    uVar14 = *(undefined4 *)puVar6;
    do {
      if ((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar7);
    if (((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) || (*(int *)puVar7 < 10)) {
      do {
        if ((*(int *)puVar6 * (*(int *)puVar6 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *(int *)puVar7);
      return;
    }
  } while( true );
}


