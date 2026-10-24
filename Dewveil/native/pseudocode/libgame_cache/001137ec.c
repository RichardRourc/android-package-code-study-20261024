// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 001137ec; body: [[001137ec, 00113f17]]

void FUN_001137ec(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined1 *puVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined1 *puVar14;
  
  puVar8 = PTR_y_24_0012a650;
  puVar7 = PTR_x_23_0012a648;
  uVar2 = *(undefined4 *)PTR_x_23_0012a648;
  do {
    if ((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_24_0012a650);
  puVar10 = &stack0xffffffffffffffd0;
  if (((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) != 0) &&
     (puVar10 = &stack0xffffffffffffffd0, puVar14 = &stack0xffffffffffffffd0,
     9 < *(int *)PTR_y_24_0012a650)) goto LAB_001138bc;
  while( true ) {
    if (((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) != 0) &&
       (puVar14 = puVar10, 9 < *(int *)PTR_y_24_0012a650)) goto LAB_00113894;
    while ((puVar14 = puVar10 + -0x80,
           (*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_24_0012a650))) {
LAB_00113894:
      puVar10 = puVar14 + -0x80;
    }
    if (((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_24_0012a650 < 10)) break;
LAB_001138bc:
    puVar10 = puVar14;
    if (((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_24_0012a650)) goto LAB_00113ebc;
    while ((puVar10 = puVar10 + -0x80,
           (*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_24_0012a650))) {
LAB_00113ebc:
      puVar10 = puVar10 + -0x80;
    }
  }
  do {
    if ((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_24_0012a650);
  iVar12 = 0x5a3cd145;
  lVar11 = 0;
  do {
    uVar2 = *(undefined4 *)PTR_x_23_0012a648;
    do {
      if ((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_24_0012a650);
    iVar12 = iVar12 * 0x41c64e6d + 0x3039;
    iVar9 = (int)lVar11;
    bVar4 = (byte)((uint)iVar12 >> 0x10);
    if (((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_24_0012a650)) goto LAB_00113aec;
    while( true ) {
      if (((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_24_0012a650)) goto LAB_00113a48;
      while( true ) {
        uVar1 = iVar9 * 0x11 + 0x4f;
        bVar5 = (byte)uVar1;
        bVar6 = ~bVar5;
        bVar5 = (&DAT_00101920)[lVar11] | bVar5 ^ 0xff;
        bVar6 = (bVar6 & 0xf8 | bVar6 & 1 | (byte)((uVar1 >> 1 & 3) << 1)) ^ 0xf9 |
                (&DAT_00101920)[lVar11] ^ 0xff;
        bVar6 = (bVar6 & 0xdd | (bVar6 ^ 0xff) & 0x22) ^ (bVar5 & 0xdd | (bVar5 ^ 0xff) & 0x22) |
                (bVar6 | bVar5) ^ 0xff;
        iVar3 = *(int *)PTR_x_23_0012a648;
        puVar14[lVar11] =
             (bVar4 ^ ((bVar6 ^ 0xff) & 0x48 | bVar6 & 0xb7) ^ 0xff ^ 0xb7) & bVar4 |
             (bVar6 ^ ((bVar4 ^ 0xff) & 0x92 | bVar4 & 0x6d) ^ 0xff ^ 0x6d) & bVar6;
        lVar13 = lVar11 + 1;
        if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)PTR_y_24_0012a650 < 10)) break;
LAB_00113a48:
        uVar1 = iVar9 * 0x11 + 0x4f;
        bVar5 = (byte)uVar1;
        bVar6 = ~bVar5;
        bVar5 = (&DAT_00101920)[lVar11] | bVar5 ^ 0xff;
        bVar6 = (bVar6 & 0xf8 | bVar6 & 1 | (byte)((uVar1 >> 1 & 3) << 1)) ^ 0xf9 |
                (&DAT_00101920)[lVar11] ^ 0xff;
        bVar6 = (bVar6 & 0xdd | (bVar6 ^ 0xff) & 0x22) ^ (bVar5 & 0xdd | (bVar5 ^ 0xff) & 0x22) |
                (bVar6 | bVar5) ^ 0xff;
        puVar14[lVar11] =
             (bVar4 ^ ((bVar6 ^ 0xff) & 0x48 | bVar6 & 0xb7) ^ 0xff ^ 0xb7) & bVar4 |
             (bVar6 ^ ((bVar4 ^ 0xff) & 0x92 | bVar4 & 0x6d) ^ 0xff ^ 0x6d) & bVar6;
      }
      if (((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_24_0012a650 < 10)) break;
LAB_00113aec:
      if (((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_24_0012a650)) goto LAB_00113bcc;
      while( true ) {
        uVar1 = iVar9 * 0x11 + 0x4f;
        bVar5 = (byte)uVar1;
        bVar6 = ~bVar5;
        bVar5 = (&DAT_00101920)[lVar11] | bVar5 ^ 0xff;
        bVar6 = (bVar6 & 0xf8 | bVar6 & 1 | (byte)((uVar1 >> 1 & 3) << 1)) ^ 0xf9 |
                (&DAT_00101920)[lVar11] ^ 0xff;
        bVar6 = (bVar6 & 0xdd | (bVar6 ^ 0xff) & 0x22) ^ (bVar5 & 0xdd | (bVar5 ^ 0xff) & 0x22) |
                (bVar6 | bVar5) ^ 0xff;
        iVar3 = *(int *)PTR_x_23_0012a648;
        puVar14[lVar11] =
             (bVar4 ^ ((bVar6 ^ 0xff) & 0x48 | bVar6 & 0xb7) ^ 0xff ^ 0xb7) & bVar4 |
             (bVar6 ^ ((bVar4 ^ 0xff) & 0x92 | bVar4 & 0x6d) ^ 0xff ^ 0x6d) & bVar6;
        if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*(int *)PTR_y_24_0012a650 < 10)) break;
LAB_00113bcc:
        uVar1 = iVar9 * 0x11 + 0x4f;
        bVar5 = (byte)uVar1;
        bVar6 = ~bVar5;
        bVar5 = (&DAT_00101920)[lVar11] | bVar5 ^ 0xff;
        bVar6 = (bVar6 & 0xf8 | bVar6 & 1 | (byte)((uVar1 >> 1 & 3) << 1)) ^ 0xf9 |
                (&DAT_00101920)[lVar11] ^ 0xff;
        bVar6 = (bVar6 & 0xdd | (bVar6 ^ 0xff) & 0x22) ^ (bVar5 & 0xdd | (bVar5 ^ 0xff) & 0x22) |
                (bVar6 | bVar5) ^ 0xff;
        puVar14[lVar11] =
             (bVar4 ^ ((bVar6 ^ 0xff) & 0x48 | bVar6 & 0xb7) ^ 0xff ^ 0xb7) & bVar4 |
             (bVar6 ^ ((bVar4 ^ 0xff) & 0x92 | bVar4 & 0x6d) ^ 0xff ^ 0x6d) & bVar6;
      }
    }
    do {
      if ((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_24_0012a650);
    lVar11 = lVar13;
  } while (lVar13 != 0x1e);
  uVar2 = *(undefined4 *)PTR_x_23_0012a648;
  do {
    if ((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_24_0012a650);
  if (((*(int *)PTR_x_23_0012a648 * (*(int *)PTR_x_23_0012a648 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_24_0012a650)) goto LAB_00113d20;
  while( true ) {
    if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
    goto LAB_00113ce8;
    while( true ) {
      lVar11 = *param_1;
      puVar10[-0x62] = 0;
      (**(code **)(lVar11 + 0x30))(param_1,puVar14);
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_00113ce8:
      lVar11 = *param_1;
      puVar10[-0x62] = 0;
      (**(code **)(lVar11 + 0x30))(param_1,puVar14);
    }
    if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_00113d20:
    if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
    goto LAB_00113efc;
    while( true ) {
      lVar11 = *param_1;
      puVar10[-0x62] = 0;
      (**(code **)(lVar11 + 0x30))(param_1,puVar14);
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_00113efc:
      lVar11 = *param_1;
      puVar10[-0x62] = 0;
      (**(code **)(lVar11 + 0x30))(param_1,puVar14);
    }
  }
  lVar11 = 0x80;
  do {
    uVar2 = *(undefined4 *)puVar7;
    do {
      if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar8);
    if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
    goto LAB_00113e00;
    while( true ) {
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
      goto LAB_00113ddc;
      while( true ) {
        *puVar14 = 0;
        lVar13 = lVar11 + -1;
        if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_00113ddc:
        *puVar14 = 0;
      }
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) || (*(int *)puVar8 < 10)) break;
LAB_00113e00:
      if (((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0) && (9 < *(int *)puVar8))
      goto LAB_00113e60;
      while ((*puVar14 = 0, (*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar8))) {
LAB_00113e60:
        *puVar14 = 0;
      }
    }
    do {
      if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar8);
    lVar11 = lVar13;
    puVar14 = puVar14 + 1;
    if (lVar13 == 0) {
      do {
        if ((*(int *)puVar7 * (*(int *)puVar7 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *(int *)puVar8);
      return;
    }
  } while( true );
}


