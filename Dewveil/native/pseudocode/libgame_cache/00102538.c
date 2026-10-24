// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00102538; body: [[00102538, 00103b5f]]

void FUN_00102538(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  char *pcVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar9 = PTR_y_0012a590;
  puVar8 = PTR_x_0012a588;
  uVar1 = *(undefined4 *)PTR_x_0012a588;
  do {
    if ((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_0012a590);
  puVar15 = &local_70;
  if (((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) != 0) &&
     (puVar15 = &local_70, puVar22 = &local_70, 9 < *(int *)PTR_y_0012a590)) goto LAB_0010265c;
  while( true ) {
    if (((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) != 0) &&
       (puVar22 = puVar15, 9 < *(int *)PTR_y_0012a590)) goto LAB_00102614;
    while( true ) {
      pcVar19 = (char *)((long)puVar15 + -0x60);
      puVar18 = (undefined1 *)((long)puVar15 + -0x100);
      puVar21 = (undefined4 *)((long)puVar15 + -0x160);
      puVar20 = (undefined1 *)((long)puVar15 + -0x200);
      puVar22 = (undefined8 *)((long)puVar15 + -0x280);
      if (((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_0012a590 < 10)) break;
LAB_00102614:
      puVar15 = (undefined8 *)((long)puVar22 + -0x280);
    }
    if (((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_0012a590 < 10)) break;
LAB_0010265c:
    puVar15 = puVar22;
    if (((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_0012a590)) goto LAB_00103a44;
    while ((puVar15 = (undefined8 *)((long)puVar15 + -0x280),
           (*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_0012a590))) {
LAB_00103a44:
      puVar15 = (undefined8 *)((long)puVar15 + -0x280);
    }
  }
  do {
    if ((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_0012a590);
  iVar14 = 0x5a3c3c7a;
  lVar16 = 0;
  local_70 = param_2;
  local_68 = param_3;
  do {
    uVar1 = *(undefined4 *)PTR_x_0012a588;
    do {
      if ((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_0012a590);
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar14 >> 0x10);
    cVar6 = (char)lVar16;
    if (((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_0012a590)) goto LAB_001027d4;
    while( true ) {
      if (((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_0012a590)) goto LAB_00102780;
      while( true ) {
        bVar3 = (&DAT_001015e8)[lVar16];
        iVar2 = *(int *)PTR_x_0012a588;
        bVar5 = cVar6 * '\x11' + 0xa2;
        bVar3 = bVar3 & (bVar5 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar5 ^ 0xff) ^ 0xff;
        *(byte *)((long)puVar22 + lVar16) =
             bVar4 & (bVar3 ^ bVar4 ^ 0xff ^ 0xff) | (bVar4 | bVar3 ^ 0xff) ^ 0xff;
        lVar17 = lVar16 + 1;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_0012a590 < 10)) break;
LAB_00102780:
        bVar3 = (&DAT_001015e8)[lVar16];
        bVar5 = cVar6 * '\x11' + 0xa2;
        bVar3 = bVar3 & (bVar5 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar5 ^ 0xff) ^ 0xff;
        *(byte *)((long)puVar22 + lVar16) =
             bVar4 & (bVar3 ^ bVar4 ^ 0xff ^ 0xff) | (bVar4 | bVar3 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_0012a590 < 10)) break;
LAB_001027d4:
      bVar3 = (&DAT_001015e8)[lVar16];
      bVar5 = cVar6 * '\x11' + 0xa2;
      bVar3 = bVar3 & (bVar5 ^ bVar3 ^ 0xff ^ 0xff) | (bVar3 | bVar5 ^ 0xff) ^ 0xff;
      *(byte *)((long)puVar22 + lVar16) =
           bVar4 & (bVar3 ^ bVar4 ^ 0xff ^ 0xff) | (bVar4 | bVar3 ^ 0xff) ^ 0xff;
    }
    do {
      if ((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_0012a590);
    lVar16 = lVar17;
  } while (lVar17 != 0x16);
  uVar1 = *(undefined4 *)PTR_x_0012a588;
  do {
    if ((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_0012a590);
  if (((*(int *)PTR_x_0012a588 * (*(int *)PTR_x_0012a588 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_0012a590)) goto LAB_001028f8;
  while( true ) {
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_001028c0;
    while( true ) {
      lVar16 = *param_1;
      *(undefined1 *)((long)puVar15 + -0x26a) = 0;
      uVar10 = (**(code **)(lVar16 + 0x30))(param_1,puVar22);
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_001028c0:
      lVar16 = *param_1;
      *(undefined1 *)((long)puVar15 + -0x26a) = 0;
      (**(code **)(lVar16 + 0x30))(param_1,puVar22);
    }
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_001028f8:
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00103aa4;
    while( true ) {
      lVar16 = *param_1;
      *(undefined1 *)((long)puVar15 + -0x26a) = 0;
      (**(code **)(lVar16 + 0x30))(param_1,puVar22);
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103aa4:
      lVar16 = *param_1;
      *(undefined1 *)((long)puVar15 + -0x26a) = 0;
      (**(code **)(lVar16 + 0x30))(param_1,puVar22);
    }
  }
  do {
    if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar9);
  lVar16 = 0x80;
  do {
    uVar1 = *(undefined4 *)puVar8;
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_001029f4;
    while( true ) {
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_001029d0;
      while( true ) {
        *(undefined1 *)puVar22 = 0;
        lVar17 = lVar16 + -1;
        if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_001029d0:
        *(undefined1 *)puVar22 = 0;
      }
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_001029f4:
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_00102a30;
      while ((*(undefined1 *)puVar22 = 0, (*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar9))) {
LAB_00102a30:
        *(undefined1 *)puVar22 = 0;
      }
    }
    lVar16 = lVar17;
    puVar22 = (undefined8 *)((long)puVar22 + 1);
  } while (lVar17 != 0);
  if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
  goto code_r0x00102ac8;
  while( true ) {
    uVar11 = FUN_00103b60(param_1,uVar10,&DAT_00101628,&DAT_00101638);
    uVar11 = FUN_00124e5c(param_1,uVar10,uVar11,local_70);
    iVar14 = *(int *)puVar8;
    *(undefined1 *)((long)puVar15 + -0x15a) = 0;
    *puVar21 = (int)DAT_00101430;
    *(undefined2 *)((long)puVar15 + -0x15c) = 0x646e;
    if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
code_r0x00102ac8:
    uVar11 = FUN_00103b60(param_1,uVar10,&DAT_00101628,&DAT_00101638);
    FUN_00124e5c(param_1,uVar10,uVar11,local_70);
    *(undefined1 *)((long)puVar15 + -0x15a) = 0;
    *(undefined2 *)((long)puVar15 + -0x15c) = 0x646e;
    *puVar21 = (int)DAT_00101430;
  }
  iVar14 = 0x5a3c5a78;
  lVar16 = 0;
  do {
    uVar1 = *(undefined4 *)puVar8;
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar14 >> 0x10);
    cVar6 = (char)lVar16;
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00102cf4;
    while( true ) {
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_00102c5c;
      while( true ) {
        bVar3 = (&DAT_00101658)[lVar16];
        bVar7 = cVar6 * '\x11' - 0x3c;
        bVar5 = (bVar3 ^ ~bVar7 ^ 0xff) & bVar3;
        bVar3 = ((bVar3 ^ 0xff) & 0x5e | bVar3 & 0xa1) ^ 0x5e | bVar7 ^ 0xff;
        iVar2 = *(int *)puVar8;
        bVar3 = ((bVar5 ^ 0xff) & 0xe8 | bVar5 & 0x17) ^ (bVar3 & 0xe8 | (bVar3 ^ 0xff) & 0x17) |
                (bVar3 | bVar5 ^ 0xff) ^ 0xff;
        puVar20[lVar16] =
             (((bVar3 ^ 0xff) & 0x9b | bVar3 & 100) ^ bVar4 ^ 0x9b) & bVar4 |
             (bVar4 | bVar3 ^ 0xff) ^ 0xff;
        lVar17 = lVar16 + 1;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00102c5c:
        bVar3 = (&DAT_00101658)[lVar16];
        bVar7 = cVar6 * '\x11' - 0x3c;
        bVar5 = (bVar3 ^ ~bVar7 ^ 0xff) & bVar3;
        bVar3 = ((bVar3 ^ 0xff) & 0x5e | bVar3 & 0xa1) ^ 0x5e | bVar7 ^ 0xff;
        bVar3 = ((bVar5 ^ 0xff) & 0xe8 | bVar5 & 0x17) ^ (bVar3 & 0xe8 | (bVar3 ^ 0xff) & 0x17) |
                (bVar3 | bVar5 ^ 0xff) ^ 0xff;
        puVar20[lVar16] =
             (((bVar3 ^ 0xff) & 0x9b | bVar3 & 100) ^ bVar4 ^ 0x9b) & bVar4 |
             (bVar4 | bVar3 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00102cf4:
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_00102da4;
      while( true ) {
        bVar3 = (&DAT_00101658)[lVar16];
        bVar7 = cVar6 * '\x11' - 0x3c;
        bVar5 = (bVar3 ^ ~bVar7 ^ 0xff) & bVar3;
        bVar3 = ((bVar3 ^ 0xff) & 0x5e | bVar3 & 0xa1) ^ 0x5e | bVar7 ^ 0xff;
        iVar2 = *(int *)puVar8;
        bVar3 = ((bVar5 ^ 0xff) & 0xe8 | bVar5 & 0x17) ^ (bVar3 & 0xe8 | (bVar3 ^ 0xff) & 0x17) |
                (bVar3 | bVar5 ^ 0xff) ^ 0xff;
        puVar20[lVar16] =
             (((bVar3 ^ 0xff) & 0x9b | bVar3 & 100) ^ bVar4 ^ 0x9b) & bVar4 |
             (bVar4 | bVar3 ^ 0xff) ^ 0xff;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00102da4:
        bVar3 = (&DAT_00101658)[lVar16];
        bVar7 = cVar6 * '\x11' - 0x3c;
        bVar5 = (bVar3 ^ ~bVar7 ^ 0xff) & bVar3;
        bVar3 = ((bVar3 ^ 0xff) & 0x5e | bVar3 & 0xa1) ^ 0x5e | bVar7 ^ 0xff;
        bVar3 = ((bVar5 ^ 0xff) & 0xe8 | bVar5 & 0x17) ^ (bVar3 & 0xe8 | (bVar3 ^ 0xff) & 0x17) |
                (bVar3 | bVar5 ^ 0xff) ^ 0xff;
        puVar20[lVar16] =
             (((bVar3 ^ 0xff) & 0x9b | bVar3 & 100) ^ bVar4 ^ 0x9b) & bVar4 |
             (bVar4 | bVar3 ^ 0xff) ^ 0xff;
      }
    }
    lVar16 = lVar17;
  } while (lVar17 != 0x2c);
  uVar1 = *(undefined4 *)puVar8;
  do {
    if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar9);
  if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
  goto LAB_00102f00;
  while( true ) {
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00102ec0;
    while( true ) {
      lVar16 = *param_1;
      *(undefined1 *)((long)puVar15 + -0x1d4) = 0;
      uVar12 = (**(code **)(lVar16 + 0x108))(param_1,uVar10,puVar21,puVar20);
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00102ec0:
      lVar16 = *param_1;
      *(undefined1 *)((long)puVar15 + -0x1d4) = 0;
      (**(code **)(lVar16 + 0x108))(param_1,uVar10,puVar21,puVar20);
    }
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00102f00:
    lVar16 = *param_1;
    *(undefined1 *)((long)puVar15 + -0x1d4) = 0;
    (**(code **)(lVar16 + 0x108))(param_1,uVar10,puVar21,puVar20);
  }
  do {
    if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar9);
  lVar16 = 0x60;
  do {
    uVar1 = *(undefined4 *)puVar8;
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00103048;
    while( true ) {
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_00103024;
      while( true ) {
        *(undefined1 *)puVar21 = 0;
        lVar17 = lVar16 + -1;
        if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103024:
        *(undefined1 *)puVar21 = 0;
      }
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103048:
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_001030a8;
      while ((*(undefined1 *)puVar21 = 0, (*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar9))) {
LAB_001030a8:
        *(undefined1 *)puVar21 = 0;
      }
    }
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    lVar16 = lVar17;
    puVar21 = (undefined4 *)((long)puVar21 + 1);
  } while (lVar17 != 0);
  lVar16 = 0xa0;
  do {
    uVar1 = *(undefined4 *)puVar8;
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00103188;
    while( true ) {
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_00103164;
      while( true ) {
        *puVar20 = 0;
        lVar17 = lVar16 + -1;
        if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103164:
        *puVar20 = 0;
      }
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103188:
      *puVar20 = 0;
    }
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    lVar16 = lVar17;
    puVar20 = puVar20 + 1;
  } while (lVar17 != 0);
  uVar1 = *(undefined4 *)puVar8;
  do {
    if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar9);
  if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
  goto LAB_00103294;
  while( true ) {
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00103254;
    while( true ) {
      uVar13 = FUN_00125094(param_1,uVar11,uVar12,local_68);
      iVar14 = *(int *)puVar8;
      *(undefined1 *)((long)puVar15 + -0x58) = 0;
      *(undefined8 *)pcVar19 = s_toString___B_001013e8._0_8_;
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103254:
      FUN_00125094(param_1,uVar11,uVar12,local_68);
      *(undefined1 *)((long)puVar15 + -0x58) = 0;
      *(undefined8 *)pcVar19 = s_toString___B_001013e8._0_8_;
    }
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103294:
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00103afc;
    while( true ) {
      FUN_00125094(param_1,uVar11,uVar12,local_68);
      iVar14 = *(int *)puVar8;
      *(undefined1 *)((long)puVar15 + -0x58) = 0;
      *(undefined8 *)pcVar19 = s_toString___B_001013e8._0_8_;
      if (((iVar14 * (iVar14 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103afc:
      FUN_00125094(param_1,uVar11,uVar12,local_68);
      *(undefined1 *)((long)puVar15 + -0x58) = 0;
      *(undefined8 *)pcVar19 = s_toString___B_001013e8._0_8_;
    }
  }
  do {
    if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar9);
  lVar16 = 0;
  iVar14 = 0x5a3c787e;
  do {
    uVar1 = *(undefined4 *)puVar8;
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    iVar14 = iVar14 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar14 >> 0x10);
    cVar6 = (char)lVar16;
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00103420;
    while( true ) {
      bVar3 = (&DAT_001015a8)[lVar16];
      bVar5 = cVar6 * '\x11' - 0x1a;
      bVar5 = (bVar5 & 0x40 | ~bVar5 & 1) ^ ((~bVar5 | 0xc1) & 0x53 | bVar5 & 0xac);
      bVar3 = ((bVar3 & 0x40 | ~bVar3 & 1) ^ 0x40 | 0xaa) ^ ((bVar3 ^ 0xff) & 0xaa | bVar3 & 0x14);
      iVar2 = *(int *)puVar8;
      bVar3 = ((bVar5 ^ 0x88) & 0x9b | bVar5 & 100) ^ ((bVar3 ^ 0xff) & 0x9b | bVar3 & 100);
      puVar18[lVar16] =
           (((bVar3 ^ 0xff) & 0x8b | bVar3 & 0x74) ^ bVar4 ^ 0x8b) & bVar4 |
           (bVar4 | bVar3 ^ 0xff) ^ 0xff;
      if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103420:
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_00103518;
      while( true ) {
        bVar3 = (&DAT_001015a8)[lVar16];
        bVar5 = cVar6 * '\x11' - 0x1a;
        bVar5 = (bVar5 & 0x40 | ~bVar5 & 1) ^ ((~bVar5 | 0xc1) & 0x53 | bVar5 & 0xac);
        bVar3 = ((bVar3 & 0x40 | ~bVar3 & 1) ^ 0x40 | 0xaa) ^ ((bVar3 ^ 0xff) & 0xaa | bVar3 & 0x14)
        ;
        iVar2 = *(int *)puVar8;
        bVar3 = ((bVar5 ^ 0x88) & 0x9b | bVar5 & 100) ^ ((bVar3 ^ 0xff) & 0x9b | bVar3 & 100);
        puVar18[lVar16] =
             (((bVar3 ^ 0xff) & 0x8b | bVar3 & 0x74) ^ bVar4 ^ 0x8b) & bVar4 |
             (bVar4 | bVar3 ^ 0xff) ^ 0xff;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103518:
        bVar3 = (&DAT_001015a8)[lVar16];
        bVar5 = cVar6 * '\x11' - 0x1a;
        bVar5 = (bVar5 & 0x40 | ~bVar5 & 1) ^ ((~bVar5 | 0xc1) & 0x53 | bVar5 & 0xac);
        bVar3 = ((bVar3 & 0x40 | ~bVar3 & 1) ^ 0x40 | 0xaa) ^ ((bVar3 ^ 0xff) & 0xaa | bVar3 & 0x14)
        ;
        bVar3 = ((bVar5 ^ 0x88) & 0x9b | bVar5 & 100) ^ ((bVar3 ^ 0xff) & 0x9b | bVar3 & 100);
        puVar18[lVar16] =
             (((bVar3 ^ 0xff) & 0x8b | bVar3 & 0x74) ^ bVar4 ^ 0x8b) & bVar4 |
             (bVar4 | bVar3 ^ 0xff) ^ 0xff;
      }
    }
    lVar16 = lVar16 + 1;
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
  } while (lVar16 != 0x14);
  uVar1 = *(undefined4 *)puVar8;
  do {
    if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar9);
  if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
  goto LAB_00103694;
  while( true ) {
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00103654;
    while( true ) {
      lVar16 = *param_1;
      *(undefined1 *)((long)puVar15 + -0xec) = 0;
      uVar11 = (**(code **)(lVar16 + 0x108))(param_1,uVar10,pcVar19,puVar18);
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103654:
      lVar16 = *param_1;
      *(undefined1 *)((long)puVar15 + -0xec) = 0;
      (**(code **)(lVar16 + 0x108))(param_1,uVar10,pcVar19,puVar18);
    }
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103694:
    lVar16 = *param_1;
    *(undefined1 *)((long)puVar15 + -0xec) = 0;
    (**(code **)(lVar16 + 0x108))(param_1,uVar10,pcVar19,puVar18);
  }
  do {
    if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar9);
  lVar16 = 0x60;
  do {
    uVar1 = *(undefined4 *)puVar8;
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_001037ac;
    while( true ) {
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_00103788;
      while( true ) {
        *pcVar19 = '\0';
        lVar17 = lVar16 + -1;
        if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_00103788:
        *pcVar19 = '\0';
      }
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_001037ac:
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_0010380c;
      while ((*pcVar19 = '\0', (*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar9))) {
LAB_0010380c:
        *pcVar19 = '\0';
      }
    }
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    lVar16 = lVar17;
    pcVar19 = pcVar19 + 1;
  } while (lVar17 != 0);
  lVar16 = 0xa0;
  do {
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_001038dc;
    while( true ) {
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
      goto LAB_001038b8;
      while( true ) {
        *puVar18 = 0;
        lVar17 = lVar16 + -1;
        if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_001038b8:
        *puVar18 = 0;
      }
      if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_001038dc:
      *puVar18 = 0;
    }
    do {
      if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar9);
    lVar16 = lVar17;
    puVar18 = puVar18 + 1;
  } while (lVar17 != 0);
  uVar1 = *(undefined4 *)puVar8;
  do {
    if ((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar9);
  if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
  goto LAB_001039c0;
  while( true ) {
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00103990;
    while ((FUN_00125094(param_1,uVar13,uVar11), (*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0
           && (9 < *(int *)puVar9))) {
LAB_00103990:
      FUN_00125094(param_1,uVar13,uVar11);
    }
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) == 0) || (*(int *)puVar9 < 10)) break;
LAB_001039c0:
    if (((*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0) && (9 < *(int *)puVar9))
    goto LAB_00103b4c;
    while ((FUN_00125094(param_1,uVar13,uVar11), (*(int *)puVar8 * (*(int *)puVar8 + -1) & 1U) != 0
           && (9 < *(int *)puVar9))) {
LAB_00103b4c:
      FUN_00125094(param_1,uVar13,uVar11);
    }
  }
  return;
}


