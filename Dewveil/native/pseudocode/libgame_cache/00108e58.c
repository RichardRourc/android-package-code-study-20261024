// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00108e58; body: [[00108e58, 00112013]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108e58(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulong uVar23;
  char *pcVar24;
  undefined1 **ppuVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined4 *puVar31;
  int iVar32;
  ulong uVar33;
  undefined1 *puVar34;
  undefined1 **ppuVar35;
  int *piVar36;
  int *piVar37;
  char *pcVar38;
  undefined4 *puVar39;
  undefined4 uVar40;
  undefined1 *local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  char *local_100;
  undefined1 *local_f8;
  undefined4 *local_f0;
  char *local_e8;
  undefined4 *puStack_e0;
  undefined4 *local_d8;
  long *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  char *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 *local_88;
  undefined1 *local_80;
  long local_78;
  undefined1 *local_70;
  
  piVar37 = (int *)PTR_y_14_0012a600;
  puVar10 = PTR_x_13_0012a5f8;
  uVar40 = *(undefined4 *)PTR_x_13_0012a5f8;
  do {
    if ((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_14_0012a600);
  ppuVar25 = &local_120;
  if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) != 0) &&
     (ppuVar25 = &local_120, ppuVar35 = &local_120, 9 < *(int *)PTR_y_14_0012a600))
  goto LAB_00109090;
  while( true ) {
    if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) != 0) &&
       (ppuVar35 = ppuVar25, 9 < *(int *)PTR_y_14_0012a600)) goto LAB_00108fc0;
    while( true ) {
      local_f0 = (undefined4 *)((long)ppuVar25 + -0x60);
      local_f8 = (undefined1 *)((long)ppuVar25 + -0x100);
      local_118 = (undefined4 *)((long)ppuVar25 + -0x180);
      local_d8 = (undefined4 *)((long)ppuVar25 + -0x1e0);
      local_b8 = (undefined1 *)((long)ppuVar25 + -0x280);
      local_a0 = (undefined1 *)((long)ppuVar25 + -0x300);
      local_e8 = (char *)((long)ppuVar25 + -0x360);
      puStack_e0 = (undefined4 *)((long)ppuVar25 + -0x400);
      local_120 = (undefined1 *)((long)ppuVar25 + -0x480);
      local_c0 = (undefined1 *)((long)ppuVar25 + -0x4c0);
      local_108 = (undefined1 *)((long)ppuVar25 + -0x540);
      local_100 = (char *)((long)ppuVar25 + -0x5a0);
      local_90 = (undefined1 *)((long)ppuVar25 + -0x640);
      local_98 = (undefined1 *)((long)ppuVar25 + -0x6c0);
      local_70 = (undefined1 *)((long)ppuVar25 + -0x740);
      local_88 = (undefined4 *)((long)ppuVar25 + -0x7a0);
      local_c8 = (undefined1 *)((long)ppuVar25 + -0x840);
      local_80 = (undefined1 *)((long)ppuVar25 + -0x8c0);
      local_b0 = (char *)((long)ppuVar25 + -0x920);
      puStack_a8 = (undefined1 *)((long)ppuVar25 + -0x9c0);
      puVar34 = (undefined1 *)((long)ppuVar25 + -0xa40);
      ppuVar35 = (undefined1 **)((long)ppuVar25 + -0xac0);
      if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_00108fc0:
      ppuVar25 = (undefined1 **)((long)ppuVar35 + -0xac0);
    }
    if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_00109090:
    ppuVar25 = ppuVar35;
    if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_14_0012a600)) goto LAB_001096ac;
    while ((ppuVar25 = (undefined1 **)((long)ppuVar25 + -0xac0),
           (*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_14_0012a600))) {
LAB_001096ac:
      ppuVar25 = (undefined1 **)((long)ppuVar25 + -0xac0);
    }
  }
  do {
    if ((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_14_0012a600);
  iVar15 = 0x5a3c5942;
  local_78 = CONCAT44(local_78._4_4_,0xe648939);
  lVar26 = 0;
  local_110 = param_2;
  local_d0 = param_1;
  do {
    uVar40 = *(undefined4 *)PTR_x_13_0012a5f8;
    do {
      if ((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_14_0012a600);
    iVar32 = iVar15 * 0x41c64e6d;
    cVar14 = (char)lVar26;
    if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_14_0012a600)) goto LAB_001093ac;
    while( true ) {
      if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_14_0012a600)) goto LAB_001092cc;
      while( true ) {
        bVar4 = (&DAT_00101748)[lVar26];
        bVar8 = cVar14 * '\x11' - 0x39;
        bVar4 = (((bVar4 ^ 0xff) & 0x41 | bVar4 & 0x20) ^ 0x53 | (bVar4 ^ 0xff) & 0x84) ^
                ((~bVar4 | 0xe1) & 0x73 | bVar4 & 8);
        bVar8 = (bVar8 ^ 0xff) & 0xe5 | bVar8 & 0x1a;
        iVar15 = iVar32 + -0xe645900 + (int)local_78;
        bVar8 = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
        iVar2 = *(int *)PTR_x_13_0012a5f8;
        bVar6 = (byte)((uint)iVar15 >> 0x10);
        bVar4 = ((bVar8 ^ 0xff) & 0x86 | bVar8 & 0x79) ^ 0x86 | bVar6 ^ 0xff;
        bVar8 = ((bVar6 ^ 0xff) & 0xd9 | bVar6 & 0x26) ^ 0xd9 | bVar8 ^ 0xff;
        lVar28 = lVar26 + 1;
        *(byte *)((long)ppuVar35 + lVar26) =
             (bVar4 & 0x46 | (bVar4 ^ 0xff) & 0xb9) ^ (bVar8 & 0x46 | (bVar8 ^ 0xff) & 0xb9) |
             (bVar4 | bVar8) ^ 0xff;
        puVar22 = puStack_a8;
        pcVar24 = local_b0;
        plVar12 = local_d0;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_001092cc:
        bVar4 = (&DAT_00101748)[lVar26];
        bVar8 = cVar14 * '\x11' - 0x39;
        bVar8 = (bVar8 ^ 0xff) & 0xe5 | bVar8 & 0x1a;
        bVar4 = (((bVar4 ^ 0xff) & 0x41 | bVar4 & 0x20) ^ 0x53 | (bVar4 ^ 0xff) & 0x84) ^
                ((~bVar4 | 0xe1) & 0x73 | bVar4 & 8);
        bVar8 = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
        bVar6 = (byte)((uint)(iVar32 + 0x3039) >> 0x10);
        bVar4 = ((bVar8 ^ 0xff) & 0x86 | bVar8 & 0x79) ^ 0x86 | bVar6 ^ 0xff;
        bVar8 = ((bVar6 ^ 0xff) & 0xd9 | bVar6 & 0x26) ^ 0xd9 | bVar8 ^ 0xff;
        *(byte *)((long)ppuVar35 + lVar26) =
             (bVar4 & 0x46 | (bVar4 ^ 0xff) & 0xb9) ^ (bVar8 & 0x46 | (bVar8 ^ 0xff) & 0xb9) |
             (bVar4 | bVar8) ^ 0xff;
      }
      if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_001093ac:
      if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_14_0012a600)) goto LAB_001094d8;
      while( true ) {
        bVar4 = (&DAT_00101748)[lVar26];
        bVar8 = cVar14 * '\x11' - 0x39;
        bVar8 = (bVar8 ^ 0xff) & 0xe5 | bVar8 & 0x1a;
        bVar4 = (((bVar4 ^ 0xff) & 0x41 | bVar4 & 0x20) ^ 0x53 | (bVar4 ^ 0xff) & 0x84) ^
                ((~bVar4 | 0xe1) & 0x73 | bVar4 & 8);
        iVar15 = *(int *)PTR_x_13_0012a5f8;
        bVar8 = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
        bVar6 = (byte)((uint)(iVar32 + 0x3039) >> 0x10);
        bVar4 = ((bVar8 ^ 0xff) & 0x86 | bVar8 & 0x79) ^ 0x86 | bVar6 ^ 0xff;
        bVar8 = ((bVar6 ^ 0xff) & 0xd9 | bVar6 & 0x26) ^ 0xd9 | bVar8 ^ 0xff;
        *(byte *)((long)ppuVar35 + lVar26) =
             (bVar4 & 0x46 | (bVar4 ^ 0xff) & 0xb9) ^ (bVar8 & 0x46 | (bVar8 ^ 0xff) & 0xb9) |
             (bVar4 | bVar8) ^ 0xff;
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_001094d8:
        bVar4 = (&DAT_00101748)[lVar26];
        bVar8 = cVar14 * '\x11' - 0x39;
        bVar8 = (bVar8 ^ 0xff) & 0xe5 | bVar8 & 0x1a;
        bVar4 = (((bVar4 ^ 0xff) & 0x41 | bVar4 & 0x20) ^ 0x53 | (bVar4 ^ 0xff) & 0x84) ^
                ((~bVar4 | 0xe1) & 0x73 | bVar4 & 8);
        bVar8 = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
        bVar6 = (byte)((uint)(iVar32 + 0x3039) >> 0x10);
        bVar4 = ((bVar8 ^ 0xff) & 0x86 | bVar8 & 0x79) ^ 0x86 | bVar6 ^ 0xff;
        bVar8 = ((bVar6 ^ 0xff) & 0xd9 | bVar6 & 0x26) ^ 0xd9 | bVar8 ^ 0xff;
        *(byte *)((long)ppuVar35 + lVar26) =
             (bVar4 & 0x46 | (bVar4 ^ 0xff) & 0xb9) ^ (bVar8 & 0x46 | (bVar8 ^ 0xff) & 0xb9) |
             (bVar4 | bVar8) ^ 0xff;
      }
    }
    do {
      if ((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_14_0012a600);
    lVar26 = lVar28;
  } while (lVar28 != 0x1d);
  uVar40 = *(undefined4 *)PTR_x_13_0012a5f8;
  do {
    if ((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_14_0012a600);
  if (((*(int *)PTR_x_13_0012a5f8 * (*(int *)PTR_x_13_0012a5f8 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_14_0012a600)) goto LAB_001097ec;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_001097b4;
    while( true ) {
      lVar26 = *plVar12;
      *(undefined1 *)((long)ppuVar25 + -0xaa3) = 0;
      uVar16 = (**(code **)(lVar26 + 0x30))(plVar12,ppuVar35);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001097b4:
      lVar26 = *plVar12;
      *(undefined1 *)((long)ppuVar25 + -0xaa3) = 0;
      (**(code **)(lVar26 + 0x30))(plVar12,ppuVar35);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001097ec:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_001099cc;
    while( true ) {
      lVar26 = *plVar12;
      *(undefined1 *)((long)ppuVar25 + -0xaa3) = 0;
      (**(code **)(lVar26 + 0x30))(plVar12,ppuVar35);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001099cc:
      lVar26 = *plVar12;
      *(undefined1 *)((long)ppuVar25 + -0xaa3) = 0;
      (**(code **)(lVar26 + 0x30))(plVar12,ppuVar35);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  lVar26 = 0x80;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_001098e8;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_001098c4;
      while( true ) {
        *(undefined1 *)ppuVar35 = 0;
        lVar28 = lVar26 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001098c4:
        *(undefined1 *)ppuVar35 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001098e8:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_00109948;
      while ((*(undefined1 *)ppuVar35 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
             (9 < *piVar37))) {
LAB_00109948:
        *(undefined1 *)ppuVar35 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar26 = lVar28;
    ppuVar35 = (undefined1 **)((long)ppuVar35 + 1);
  } while (lVar28 != 0);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_00109a8c;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_00109a48;
    while( true ) {
      uVar17 = FUN_00112014(plVar12,uVar16);
      lVar26 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar17);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00109a48:
      uVar17 = FUN_00112014(plVar12,uVar16);
      (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar17);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00109a8c:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_00109f4c;
    while( true ) {
      uVar17 = FUN_00112014(plVar12,uVar16);
      (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar17);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00109f4c:
      uVar17 = FUN_00112014(plVar12,uVar16);
      (**(code **)(*plVar12 + 0x488))(plVar12,uVar16,uVar17);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  piVar36 = piVar37;
  if (lVar26 != 0) {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
LAB_00109b0c:
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) {
        if (9 < *piVar37) goto LAB_00109b0c;
      }
      uVar40 = *(undefined4 *)puVar10;
      do {
        if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
      } while (9 < *piVar37);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10))
      goto LAB_00109b60;
    } while( true );
  }
  goto LAB_0010c784;
LAB_00109b60:
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  iVar15 = 0x5a3cb46a;
  lVar28 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar15 >> 0x10);
    cVar14 = (char)lVar28;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_00109d64;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_00109cc4;
      while( true ) {
        bVar8 = (&DAT_00101690)[lVar28];
        bVar7 = cVar14 * '\x11' + 0x2a;
        bVar6 = (bVar8 ^ ~bVar7 ^ 0xff) & bVar8;
        bVar7 = (bVar7 ^ ((bVar8 ^ 0xff) & 0xde | bVar8 & 0x21) ^ 0xff ^ 0x21) & bVar7;
        iVar32 = *(int *)puVar10;
        bVar8 = ((bVar6 ^ 0xff) & 0x57 | bVar6 & 0xa8) ^ ((bVar7 ^ 0xff) & 0x57 | bVar7 & 0xa8) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar34[lVar28] =
             ~(bVar8 | bVar4 ^ 0xff) |
             (((bVar4 ^ 0xff) & 0x1b | bVar4 & 0xe4) ^ 0x1b | bVar8 ^ 0xff) ^ 0xff;
        lVar29 = lVar28 + 1;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00109cc4:
        bVar8 = (&DAT_00101690)[lVar28];
        bVar7 = cVar14 * '\x11' + 0x2a;
        bVar6 = (bVar8 ^ ~bVar7 ^ 0xff) & bVar8;
        bVar7 = (bVar7 ^ ((bVar8 ^ 0xff) & 0xde | bVar8 & 0x21) ^ 0xff ^ 0x21) & bVar7;
        bVar8 = ((bVar6 ^ 0xff) & 0x57 | bVar6 & 0xa8) ^ ((bVar7 ^ 0xff) & 0x57 | bVar7 & 0xa8) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar34[lVar28] =
             ~(bVar8 | bVar4 ^ 0xff) |
             (((bVar4 ^ 0xff) & 0x1b | bVar4 & 0xe4) ^ 0x1b | bVar8 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00109d64:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_00109e40;
      while( true ) {
        bVar8 = (&DAT_00101690)[lVar28];
        bVar7 = cVar14 * '\x11' + 0x2a;
        bVar6 = (bVar8 ^ ~bVar7 ^ 0xff) & bVar8;
        bVar7 = (bVar7 ^ ((bVar8 ^ 0xff) & 0xde | bVar8 & 0x21) ^ 0xff ^ 0x21) & bVar7;
        iVar32 = *(int *)puVar10;
        bVar8 = ((bVar6 ^ 0xff) & 0x57 | bVar6 & 0xa8) ^ ((bVar7 ^ 0xff) & 0x57 | bVar7 & 0xa8) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar34[lVar28] =
             ~(bVar8 | bVar4 ^ 0xff) |
             (((bVar4 ^ 0xff) & 0x1b | bVar4 & 0xe4) ^ 0x1b | bVar8 ^ 0xff) ^ 0xff;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00109e40:
        bVar8 = (&DAT_00101690)[lVar28];
        bVar7 = cVar14 * '\x11' + 0x2a;
        bVar6 = (bVar8 ^ ~bVar7 ^ 0xff) & bVar8;
        bVar7 = (bVar7 ^ ((bVar8 ^ 0xff) & 0xde | bVar8 & 0x21) ^ 0xff ^ 0x21) & bVar7;
        bVar8 = ((bVar6 ^ 0xff) & 0x57 | bVar6 & 0xa8) ^ ((bVar7 ^ 0xff) & 0x57 | bVar7 & 0xa8) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar34[lVar28] =
             ~(bVar8 | bVar4 ^ 0xff) |
             (((bVar4 ^ 0xff) & 0x1b | bVar4 & 0xe4) ^ 0x1b | bVar8 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
  } while (lVar29 != 0x17);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a000;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_00109fc8;
    while( true ) {
      lVar28 = *plVar12;
      *(undefined1 *)((long)ppuVar25 + -0xa29) = 0;
      uVar16 = (**(code **)(lVar28 + 0x30))(plVar12,puVar34);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00109fc8:
      lVar28 = *plVar12;
      *(undefined1 *)((long)ppuVar25 + -0xa29) = 0;
      (**(code **)(lVar28 + 0x30))(plVar12,puVar34);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a000:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a1f4;
    while( true ) {
      lVar28 = *plVar12;
      *(undefined1 *)((long)ppuVar25 + -0xa29) = 0;
      (**(code **)(lVar28 + 0x30))(plVar12,puVar34);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a1f4:
      lVar28 = *plVar12;
      *(undefined1 *)((long)ppuVar25 + -0xa29) = 0;
      (**(code **)(lVar28 + 0x30))(plVar12,puVar34);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  lVar28 = 0x80;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a134;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010a110;
      while( true ) {
        *puVar34 = 0;
        lVar29 = lVar28 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a110:
        *puVar34 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a134:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010a194;
      while ((*puVar34 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37)))
      {
LAB_0010a194:
        *puVar34 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
    puVar34 = puVar34 + 1;
  } while (lVar29 != 0);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a23c;
  while( true ) {
    iVar15 = *(int *)puVar10;
    *(undefined8 *)pcVar24 = s_getAssetsetWrita<ini_001013b0._0_8_;
    pcVar24[8] = 's';
    pcVar24[9] = '\0';
    if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a23c:
    pcVar24[8] = 's';
    pcVar24[9] = '\0';
    *(undefined8 *)pcVar24 = s_getAssetsetWrita<ini_001013b0._0_8_;
  }
  iVar15 = 0x5a3cf723;
  lVar28 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar15 >> 0x10);
    cVar14 = (char)lVar28;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a440;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010a394;
      while( true ) {
        bVar8 = (&DAT_001017a0)[lVar28];
        bVar6 = cVar14 * '\x11' + 0x69;
        bVar7 = (bVar8 ^ ~bVar6 ^ 0xff) & bVar8;
        bVar6 = (bVar6 ^ ((bVar8 ^ 0xff) & 0x6f | bVar8 & 0x90) ^ 0xff ^ 0x90) & bVar6;
        bVar8 = ~bVar7;
        iVar32 = *(int *)puVar10;
        bVar8 = (bVar8 & 0xf0 | bVar7 & 0xf) ^ (~bVar6 & 0xf0 | bVar6 & 0xf) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = bVar4 | bVar8 ^ 0xff;
        bVar8 = bVar4 & (bVar8 ^ bVar4 ^ 0xff ^ 0xff);
        puVar22[lVar28] =
             ((bVar8 ^ 0xff) & 0x38 | bVar8 & 199) ^ (bVar6 & 0x38 | ~bVar6 & 199) |
             (bVar6 | bVar8 ^ 0xff) ^ 0xff;
        lVar29 = lVar28 + 1;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a394:
        bVar8 = (&DAT_001017a0)[lVar28];
        bVar6 = cVar14 * '\x11' + 0x69;
        bVar7 = (bVar8 ^ ~bVar6 ^ 0xff) & bVar8;
        bVar6 = (bVar6 ^ ((bVar8 ^ 0xff) & 0x6f | bVar8 & 0x90) ^ 0xff ^ 0x90) & bVar6;
        bVar8 = ~bVar7;
        bVar8 = (bVar8 & 0xf0 | bVar7 & 0xf) ^ (~bVar6 & 0xf0 | bVar6 & 0xf) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = bVar4 | bVar8 ^ 0xff;
        bVar8 = bVar4 & (bVar8 ^ bVar4 ^ 0xff ^ 0xff);
        puVar22[lVar28] =
             ((bVar8 ^ 0xff) & 0x38 | bVar8 & 199) ^ (bVar6 & 0x38 | ~bVar6 & 199) |
             (bVar6 | bVar8 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a440:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010a528;
      while( true ) {
        bVar8 = (&DAT_001017a0)[lVar28];
        bVar6 = cVar14 * '\x11' + 0x69;
        bVar7 = (bVar8 ^ ~bVar6 ^ 0xff) & bVar8;
        bVar6 = (bVar6 ^ ((bVar8 ^ 0xff) & 0x6f | bVar8 & 0x90) ^ 0xff ^ 0x90) & bVar6;
        bVar8 = ~bVar7;
        iVar32 = *(int *)puVar10;
        bVar8 = (bVar8 & 0xf0 | bVar7 & 0xf) ^ (~bVar6 & 0xf0 | bVar6 & 0xf) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = bVar4 | bVar8 ^ 0xff;
        bVar8 = bVar4 & (bVar8 ^ bVar4 ^ 0xff ^ 0xff);
        puVar22[lVar28] =
             ((bVar8 ^ 0xff) & 0x38 | bVar8 & 199) ^ (bVar6 & 0x38 | ~bVar6 & 199) |
             (bVar6 | bVar8 ^ 0xff) ^ 0xff;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a528:
        bVar8 = (&DAT_001017a0)[lVar28];
        bVar6 = cVar14 * '\x11' + 0x69;
        bVar7 = (bVar8 ^ ~bVar6 ^ 0xff) & bVar8;
        bVar6 = (bVar6 ^ ((bVar8 ^ 0xff) & 0x6f | bVar8 & 0x90) ^ 0xff ^ 0x90) & bVar6;
        bVar8 = ~bVar7;
        bVar8 = (bVar8 & 0xf0 | bVar7 & 0xf) ^ (~bVar6 & 0xf0 | bVar6 & 0xf) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = bVar4 | bVar8 ^ 0xff;
        bVar8 = bVar4 & (bVar8 ^ bVar4 ^ 0xff ^ 0xff);
        puVar22[lVar28] =
             ((bVar8 ^ 0xff) & 0x38 | bVar8 & 199) ^ (bVar6 & 0x38 | ~bVar6 & 199) |
             (bVar6 | bVar8 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
  } while (lVar29 != 0x24);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a698;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a658;
    while( true ) {
      lVar28 = *plVar12;
      puVar22[0x24] = 0;
      uVar17 = (**(code **)(lVar28 + 0x108))(plVar12,uVar16,pcVar24,puVar22);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a658:
      lVar28 = *plVar12;
      puVar22[0x24] = 0;
      (**(code **)(lVar28 + 0x108))(plVar12,uVar16,pcVar24,puVar22);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a698:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a964;
    while( true ) {
      lVar28 = *plVar12;
      puVar22[0x24] = 0;
      (**(code **)(lVar28 + 0x108))(plVar12,uVar16,pcVar24,puVar22);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a964:
      lVar28 = *plVar12;
      puVar22[0x24] = 0;
      (**(code **)(lVar28 + 0x108))(plVar12,uVar16,pcVar24,puVar22);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  lVar28 = 0x60;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a794;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010a770;
      while( true ) {
        *pcVar24 = '\0';
        lVar29 = lVar28 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a770:
        *pcVar24 = '\0';
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a794:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010a7f4;
      while ((*pcVar24 = '\0', (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
             (9 < *piVar37))) {
LAB_0010a7f4:
        *pcVar24 = '\0';
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
    pcVar24 = pcVar24 + 1;
  } while (lVar29 != 0);
  lVar28 = 0xa0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a870;
    while( true ) {
      *puVar22 = 0;
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010a870:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010a8d8;
      while ((*puVar22 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37)))
      {
LAB_0010a8d8:
        *puVar22 = 0;
      }
    }
    lVar28 = lVar28 + -1;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    puVar22 = puVar22 + 1;
  } while (lVar28 != 0);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010aa04;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010a9d4;
    while ((uVar16 = FUN_00125094(plVar12,lVar26,uVar17), puVar22 = local_70, puVar31 = local_88,
           puVar34 = local_c8, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
           (9 < *piVar37))) {
LAB_0010a9d4:
      FUN_00125094(plVar12,lVar26,uVar17);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010aa04:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010adb0;
    while ((FUN_00125094(plVar12,lVar26,uVar17),
           (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37))) {
LAB_0010adb0:
      FUN_00125094(plVar12,lVar26,uVar17);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  iVar15 = 0x5a3ce412;
  lVar26 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar15 >> 0x10);
    cVar14 = (char)lVar26;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010ac7c;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010abc0;
      while( true ) {
        bVar8 = (&DAT_001017d0)[lVar26];
        bVar9 = cVar14 * '\x11' + 0x7a;
        bVar7 = (bVar9 ^ 0xff) & 0x51 | bVar9 & 0xe;
        bVar9 = (bVar9 ^ 0x5f) & bVar9;
        bVar6 = bVar7 ^ 0xf1;
        bVar6 = (bVar6 & 0xe2 | (bVar7 ^ 0xc) & 0x1d) ^ ((bVar9 ^ 0xff) & 0xe2 | bVar9 & 0x1d) |
                (bVar6 | bVar9 ^ 0xff) ^ 0xff;
        bVar8 = (bVar8 & 0xd | (bVar8 ^ 0xff) & 0x52) ^ (bVar8 | 0x1f) & 0xad;
        iVar32 = *(int *)puVar10;
        bVar8 = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
        local_80[lVar26] =
             (((bVar8 ^ 0xff) & 0xe9 | bVar8 & 0x16) ^ bVar4 ^ 0xe9) & bVar4 |
             bVar8 & (bVar8 ^ bVar4 ^ 0xff ^ 0xff);
        lVar28 = lVar26 + 1;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010abc0:
        bVar8 = (&DAT_001017d0)[lVar26];
        bVar9 = cVar14 * '\x11' + 0x7a;
        bVar7 = (bVar9 ^ 0xff) & 0x51 | bVar9 & 0xe;
        bVar9 = (bVar9 ^ 0x5f) & bVar9;
        bVar6 = bVar7 ^ 0xf1;
        bVar6 = (bVar6 & 0xe2 | (bVar7 ^ 0xc) & 0x1d) ^ ((bVar9 ^ 0xff) & 0xe2 | bVar9 & 0x1d) |
                (bVar6 | bVar9 ^ 0xff) ^ 0xff;
        bVar8 = (bVar8 & 0xd | (bVar8 ^ 0xff) & 0x52) ^ (bVar8 | 0x1f) & 0xad;
        bVar8 = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
        local_80[lVar26] =
             (((bVar8 ^ 0xff) & 0xe9 | bVar8 & 0x16) ^ bVar4 ^ 0xe9) & bVar4 |
             bVar8 & (bVar8 ^ bVar4 ^ 0xff ^ 0xff);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010ac7c:
      bVar8 = (&DAT_001017d0)[lVar26];
      bVar9 = cVar14 * '\x11' + 0x7a;
      bVar7 = (bVar9 ^ 0xff) & 0x51 | bVar9 & 0xe;
      bVar9 = (bVar9 ^ 0x5f) & bVar9;
      bVar6 = bVar7 ^ 0xf1;
      bVar6 = (bVar6 & 0xe2 | (bVar7 ^ 0xc) & 0x1d) ^ ((bVar9 ^ 0xff) & 0xe2 | bVar9 & 0x1d) |
              (bVar6 | bVar9 ^ 0xff) ^ 0xff;
      bVar8 = (bVar8 & 0xd | (bVar8 ^ 0xff) & 0x52) ^ (bVar8 | 0x1f) & 0xad;
      bVar8 = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
      local_80[lVar26] =
           (((bVar8 ^ 0xff) & 0xe9 | bVar8 & 0x16) ^ bVar4 ^ 0xe9) & bVar4 |
           bVar8 & (bVar8 ^ bVar4 ^ 0xff ^ 0xff);
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar26 = lVar28;
  } while (lVar28 != 0x20);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010ae50;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010ae18;
    while( true ) {
      lVar26 = *plVar12;
      local_80[0x20] = 0;
      uVar17 = (**(code **)(lVar26 + 0x30))(plVar12);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010ae18:
      lVar26 = *plVar12;
      local_80[0x20] = 0;
      (**(code **)(lVar26 + 0x30))(plVar12);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010ae50:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010b03c;
    while( true ) {
      lVar26 = *plVar12;
      local_80[0x20] = 0;
      (**(code **)(lVar26 + 0x30))(plVar12);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b03c:
      lVar26 = *plVar12;
      local_80[0x20] = 0;
      (**(code **)(lVar26 + 0x30))(plVar12);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  puVar21 = local_80;
  lVar26 = 0x80;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010af4c;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010af28;
      while( true ) {
        *puVar21 = 0;
        lVar28 = lVar26 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010af28:
        *puVar21 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010af4c:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010afac;
      while ((*puVar21 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37)))
      {
LAB_0010afac:
        *puVar21 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    puVar21 = puVar21 + 1;
    lVar26 = lVar28;
  } while (lVar28 != 0);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  uVar40 = (undefined4)DAT_00101440;
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010b0c8;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010b09c;
    while( true ) {
      iVar15 = *(int *)puVar10;
      *(undefined1 *)(puVar31 + 1) = 0;
      *puVar31 = uVar40;
      if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b09c:
      *(undefined1 *)(puVar31 + 1) = 0;
      *puVar31 = uVar40;
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b0c8:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010b424;
    while( true ) {
      iVar15 = *(int *)puVar10;
      *(undefined1 *)(puVar31 + 1) = 0;
      *puVar31 = uVar40;
      if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b424:
      *(undefined1 *)(puVar31 + 1) = 0;
      *puVar31 = uVar40;
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  iVar15 = 0x5a3c02f0;
  lVar26 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar15 >> 0x10);
    cVar14 = (char)lVar26;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010b29c;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010b220;
      while( true ) {
        bVar8 = (&DAT_00101800)[lVar26];
        bVar6 = cVar14 * '\x11' + 0x9c;
        iVar32 = *(int *)puVar10;
        bVar8 = (((bVar6 ^ 0xff) & 0xdd | bVar6 & 0x22) ^ bVar8 ^ 0xdd) & bVar8 |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = (bVar8 ^ 0xff) & 4 | (bVar8 ^ 4) & bVar8;
        bVar8 = (bVar4 ^ 0xff) & 4 | bVar4 & 0xfb;
        puVar34[lVar26] = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
        lVar28 = lVar26 + 1;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b220:
        bVar8 = (&DAT_00101800)[lVar26];
        bVar6 = cVar14 * '\x11' + 0x9c;
        bVar8 = (((bVar6 ^ 0xff) & 0xdd | bVar6 & 0x22) ^ bVar8 ^ 0xdd) & bVar8 |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = (bVar8 ^ 0xff) & 4 | (bVar8 ^ 4) & bVar8;
        bVar8 = (bVar4 ^ 0xff) & 4 | bVar4 & 0xfb;
        puVar34[lVar26] = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b29c:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010b354;
      while( true ) {
        bVar8 = (&DAT_00101800)[lVar26];
        bVar6 = cVar14 * '\x11' + 0x9c;
        iVar32 = *(int *)puVar10;
        bVar8 = (((bVar6 ^ 0xff) & 0xdd | bVar6 & 0x22) ^ bVar8 ^ 0xdd) & bVar8 |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = (bVar8 ^ 0xff) & 4 | (bVar8 ^ 4) & bVar8;
        bVar8 = (bVar4 ^ 0xff) & 4 | bVar4 & 0xfb;
        puVar34[lVar26] = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b354:
        bVar8 = (&DAT_00101800)[lVar26];
        bVar6 = cVar14 * '\x11' + 0x9c;
        bVar8 = (((bVar6 ^ 0xff) & 0xdd | bVar6 & 0x22) ^ bVar8 ^ 0xdd) & bVar8 |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = (bVar8 ^ 0xff) & 4 | (bVar8 ^ 4) & bVar8;
        bVar8 = (bVar4 ^ 0xff) & 4 | bVar4 & 0xfb;
        puVar34[lVar26] = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar26 = lVar28;
  } while (lVar28 != 0x29);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010b4d0;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010b490;
    while( true ) {
      lVar26 = *plVar12;
      puVar34[0x29] = 0;
      uVar18 = (**(code **)(lVar26 + 0x108))(plVar12,uVar17,puVar31,puVar34);
      puVar21 = local_70;
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b490:
      lVar26 = *plVar12;
      puVar34[0x29] = 0;
      (**(code **)(lVar26 + 0x108))(plVar12,uVar17,puVar31,puVar34);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b4d0:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010bce4;
    while( true ) {
      lVar26 = *plVar12;
      puVar34[0x29] = 0;
      (**(code **)(lVar26 + 0x108))(plVar12,uVar17,puVar31,puVar34);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010bce4:
      lVar26 = *plVar12;
      puVar34[0x29] = 0;
      (**(code **)(lVar26 + 0x108))(plVar12,uVar17,puVar31,puVar34);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  lVar26 = 0x60;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010b5e4;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010b5c0;
      while( true ) {
        *(undefined1 *)puVar31 = 0;
        lVar28 = ~(0x42388e96738b1bebU - lVar26) + 0x42388e96738b1beb;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b5c0:
        *(undefined1 *)puVar31 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b5e4:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010b644;
      while ((*(undefined1 *)puVar31 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
             (9 < *piVar37))) {
LAB_0010b644:
        *(undefined1 *)puVar31 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar26 = lVar28;
    puVar31 = (undefined4 *)((long)puVar31 + 1);
  } while (lVar28 != 0);
  lVar26 = 0;
  lVar28 = 0xa0;
  do {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010b734;
    while ((puVar34[lVar26] = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
           (9 < *piVar37))) {
LAB_0010b734:
      puVar34[lVar26] = 0;
    }
    lVar28 = lVar28 + -1;
    lVar26 = lVar26 + 1;
  } while (lVar28 != 0);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
LAB_0010b774:
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) {
      if (9 < *piVar37) goto LAB_0010b774;
    }
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
  } while( true );
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  lVar26 = 0;
  iVar15 = 0x5a3c0f27;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    iVar32 = (int)lVar26;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010ba70;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010b988;
      while( true ) {
        uVar5 = iVar32 * 0x11 - 0x6f;
        uVar1 = (uVar5 ^ 0x3f) & uVar5;
        bVar4 = (((byte)uVar5 ^ 0xff) & 0xe | (byte)uVar5 & 0x31) ^ 0xce;
        bVar6 = (byte)uVar1;
        bVar8 = ~bVar6;
        bVar4 = (bVar4 & 0xc0 | bVar4 & 0xf | (byte)((~uVar5 >> 4 & 3) << 4)) ^
                (bVar8 & 0xc0 | bVar8 & 0xf | (byte)((uVar1 >> 4 & 3) << 4)) |
                (bVar4 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar4 ^ 0xff) & 0xee | bVar4 & 0x11) ^
                (((&DAT_00101548)[lVar26] ^ 0xc0) & 0xee | ((&DAT_00101548)[lVar26] ^ 0xff) & 0x11);
        iVar3 = *(int *)puVar10;
        iVar2 = iVar15 * 0x41c64e6d + 0x3039;
        bVar8 = (byte)((uint)iVar2 >> 0x10);
        bVar4 = ((bVar6 ^ 0xff) & 0x57 | bVar6 & 0xa8) ^ 0x57 | bVar8 ^ 0xff;
        bVar8 = bVar8 | bVar6 ^ 0xff;
        local_70[lVar26] =
             (bVar4 & 0xbf | (bVar4 ^ 0xff) & 0x40) ^ (bVar8 & 0xbf | (bVar8 ^ 0xff) & 0x40) |
             (bVar4 | bVar8) ^ 0xff;
        lVar28 = lVar26 + 1;
        puVar22 = local_70;
        if (((iVar3 * (iVar3 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010b988:
        uVar5 = iVar32 * 0x11 - 0x6f;
        uVar1 = (uVar5 ^ 0x3f) & uVar5;
        bVar4 = (((byte)uVar5 ^ 0xff) & 0xe | (byte)uVar5 & 0x31) ^ 0xce;
        bVar6 = (byte)uVar1;
        bVar8 = ~bVar6;
        bVar4 = (bVar4 & 0xc0 | bVar4 & 0xf | (byte)((~uVar5 >> 4 & 3) << 4)) ^
                (bVar8 & 0xc0 | bVar8 & 0xf | (byte)((uVar1 >> 4 & 3) << 4)) |
                (bVar4 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar4 ^ 0xff) & 0xee | bVar4 & 0x11) ^
                (((&DAT_00101548)[lVar26] ^ 0xc0) & 0xee | ((&DAT_00101548)[lVar26] ^ 0xff) & 0x11);
        bVar8 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar4 = ((bVar6 ^ 0xff) & 0x57 | bVar6 & 0xa8) ^ 0x57 | bVar8 ^ 0xff;
        bVar8 = bVar8 | bVar6 ^ 0xff;
        puVar22[lVar26] =
             (bVar4 & 0xbf | (bVar4 ^ 0xff) & 0x40) ^ (bVar8 & 0xbf | (bVar8 ^ 0xff) & 0x40) |
             (bVar4 | bVar8) ^ 0xff;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010ba70:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010bb94;
      while( true ) {
        uVar5 = iVar32 * 0x11 - 0x6f;
        uVar1 = (uVar5 ^ 0x3f) & uVar5;
        bVar4 = (((byte)uVar5 ^ 0xff) & 0xe | (byte)uVar5 & 0x31) ^ 0xce;
        bVar6 = (byte)uVar1;
        bVar8 = ~bVar6;
        bVar4 = (bVar4 & 0xc0 | bVar4 & 0xf | (byte)((~uVar5 >> 4 & 3) << 4)) ^
                (bVar8 & 0xc0 | bVar8 & 0xf | (byte)((uVar1 >> 4 & 3) << 4)) |
                (bVar4 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar4 ^ 0xff) & 0xee | bVar4 & 0x11) ^
                (((&DAT_00101548)[lVar26] ^ 0xc0) & 0xee | ((&DAT_00101548)[lVar26] ^ 0xff) & 0x11);
        iVar2 = *(int *)puVar10;
        bVar8 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar4 = ((bVar6 ^ 0xff) & 0x57 | bVar6 & 0xa8) ^ 0x57 | bVar8 ^ 0xff;
        bVar8 = bVar8 | bVar6 ^ 0xff;
        puVar22[lVar26] =
             (bVar4 & 0xbf | (bVar4 ^ 0xff) & 0x40) ^ (bVar8 & 0xbf | (bVar8 ^ 0xff) & 0x40) |
             (bVar4 | bVar8) ^ 0xff;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010bb94:
        uVar5 = iVar32 * 0x11 - 0x6f;
        uVar1 = (uVar5 ^ 0x3f) & uVar5;
        bVar4 = (((byte)uVar5 ^ 0xff) & 0xe | (byte)uVar5 & 0x31) ^ 0xce;
        bVar6 = (byte)uVar1;
        bVar8 = ~bVar6;
        bVar4 = (bVar4 & 0xc0 | bVar4 & 0xf | (byte)((~uVar5 >> 4 & 3) << 4)) ^
                (bVar8 & 0xc0 | bVar8 & 0xf | (byte)((uVar1 >> 4 & 3) << 4)) |
                (bVar4 | bVar6 ^ 0xff) ^ 0xff;
        bVar6 = ((bVar4 ^ 0xff) & 0xee | bVar4 & 0x11) ^
                (((&DAT_00101548)[lVar26] ^ 0xc0) & 0xee | ((&DAT_00101548)[lVar26] ^ 0xff) & 0x11);
        bVar8 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar4 = ((bVar6 ^ 0xff) & 0x57 | bVar6 & 0xa8) ^ 0x57 | bVar8 ^ 0xff;
        bVar8 = bVar8 | bVar6 ^ 0xff;
        puVar22[lVar26] =
             (bVar4 & 0xbf | (bVar4 ^ 0xff) & 0x40) ^ (bVar8 & 0xbf | (bVar8 ^ 0xff) & 0x40) |
             (bVar4 | bVar8) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar26 = lVar28;
    iVar15 = iVar2;
  } while (lVar28 != 0x12);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010bd94;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010bd5c;
    while( true ) {
      lVar26 = *plVar12;
      puVar21[0x12] = 0;
      uVar17 = (**(code **)(lVar26 + 0x538))(plVar12,puVar21);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010bd5c:
      lVar26 = *plVar12;
      puVar21[0x12] = 0;
      (**(code **)(lVar26 + 0x538))(plVar12,puVar21);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010bd94:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010bf7c;
    while( true ) {
      lVar26 = *plVar12;
      puVar21[0x12] = 0;
      (**(code **)(lVar26 + 0x538))(plVar12,puVar21);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010bf7c:
      lVar26 = *plVar12;
      puVar21[0x12] = 0;
      (**(code **)(lVar26 + 0x538))(plVar12,puVar21);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  lVar26 = 0x80;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010bec0;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010be9c;
      while( true ) {
        *puVar21 = 0;
        lVar28 = lVar26 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010be9c:
        *puVar21 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010bec0:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010bf20;
      while ((*puVar21 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37)))
      {
LAB_0010bf20:
        *puVar21 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar26 = lVar28;
    puVar21 = puVar21 + 1;
  } while (lVar28 != 0);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010bfe0;
  while( true ) {
    lVar26 = FUN_00125094(plVar12,uVar16,uVar18,uVar17);
    (**(code **)(*plVar12 + 0xb8))(plVar12,uVar17);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010bfe0:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010c0ac;
    while( true ) {
      FUN_00125094(plVar12,uVar16,uVar18,uVar17);
      (**(code **)(*plVar12 + 0xb8))(plVar12,uVar17);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c0ac:
      FUN_00125094(plVar12,uVar16,uVar18,uVar17);
      (**(code **)(*plVar12 + 0xb8))(plVar12,uVar17);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (lVar26 != 0) {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010c150;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010c120;
      while ((cVar14 = (**(code **)(*plVar12 + 0x720))(plVar12),
             (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37))) {
LAB_0010c120:
        (**(code **)(*plVar12 + 0x720))(plVar12);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c150:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010c6bc;
      while (((**(code **)(*plVar12 + 0x720))(plVar12),
             (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37))) {
LAB_0010c6bc:
        (**(code **)(*plVar12 + 0x720))(plVar12);
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (cVar14 == '\0') {
      uVar40 = *(undefined4 *)puVar10;
      do {
        if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
      } while (9 < *piVar37);
LAB_0010c220:
      do {
        if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) {
          if (9 < *piVar37) goto LAB_0010c220;
        }
        uVar40 = *(undefined4 *)puVar10;
        do {
          if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
        } while (9 < *piVar37);
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10))
        goto LAB_0010c274;
      } while( true );
    }
  }
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010c748;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010c718;
    while (((**(code **)(*plVar12 + 0x88))(plVar12),
           (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37))) {
LAB_0010c718:
      (**(code **)(*plVar12 + 0x88))(plVar12);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c748:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010ca98;
    while (((**(code **)(*plVar12 + 0x88))(plVar12),
           (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37))) {
LAB_0010ca98:
      (**(code **)(*plVar12 + 0x88))(plVar12);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
LAB_0010c784:
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
LAB_0010c7bc:
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) {
      if (9 < *piVar36) goto LAB_0010c7bc;
    }
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) {
      do {
        if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *piVar36);
      return;
    }
  } while( true );
LAB_0010c274:
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  lVar28 = 0;
  iVar15 = 0x5a3c33e7;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    cVar14 = (char)lVar28;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010c4b8;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010c400;
      while( true ) {
        bVar4 = (&DAT_00101468)[lVar28];
        bVar8 = cVar14 * '\x11' + 0xad;
        iVar32 = iVar15 * 0x41c64e6d + 0x3039;
        iVar2 = *(int *)puVar10;
        bVar8 = (((bVar8 ^ 0xff) & 0x45 | bVar8 & 0xba) ^ bVar4 ^ 0x45) & bVar4 |
                (bVar4 | bVar8 ^ 0xff) ^ 0xff;
        bVar6 = (byte)((uint)iVar32 >> 0x10);
        bVar4 = (bVar6 ^ 0xff) & 0x94 | bVar6 & 0x6b;
        bVar4 = (bVar4 ^ 0x8c) & (bVar4 ^ 0x6b) | bVar6 & 0xe7;
        bVar8 = (bVar8 | 199) & 0x5f ^ (~bVar8 & 0x5f | 0x18 | bVar8 & 0xa0);
        local_98[lVar28] = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
        lVar29 = lVar28 + 1;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c400:
        bVar4 = (&DAT_00101468)[lVar28];
        bVar8 = cVar14 * '\x11' + 0xad;
        bVar8 = (((bVar8 ^ 0xff) & 0x45 | bVar8 & 0xba) ^ bVar4 ^ 0x45) & bVar4 |
                (bVar4 | bVar8 ^ 0xff) ^ 0xff;
        bVar6 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar4 = (bVar6 ^ 0xff) & 0x94 | bVar6 & 0x6b;
        bVar8 = (bVar8 | 199) & 0x5f ^ (~bVar8 & 0x5f | 0x18 | bVar8 & 0xa0);
        bVar4 = (bVar4 ^ 0x8c) & (bVar4 ^ 0x6b) | bVar6 & 0xe7;
        local_98[lVar28] = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c4b8:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010c5ac;
      while( true ) {
        bVar4 = (&DAT_00101468)[lVar28];
        bVar8 = cVar14 * '\x11' + 0xad;
        iVar32 = *(int *)puVar10;
        bVar8 = (((bVar8 ^ 0xff) & 0x45 | bVar8 & 0xba) ^ bVar4 ^ 0x45) & bVar4 |
                (bVar4 | bVar8 ^ 0xff) ^ 0xff;
        bVar6 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar4 = (bVar6 ^ 0xff) & 0x94 | bVar6 & 0x6b;
        bVar4 = (bVar4 ^ 0x8c) & (bVar4 ^ 0x6b) | bVar6 & 0xe7;
        bVar8 = (bVar8 | 199) & 0x5f ^ (~bVar8 & 0x5f | 0x18 | bVar8 & 0xa0);
        local_98[lVar28] = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c5ac:
        bVar4 = (&DAT_00101468)[lVar28];
        bVar8 = cVar14 * '\x11' + 0xad;
        bVar8 = (((bVar8 ^ 0xff) & 0x45 | bVar8 & 0xba) ^ bVar4 ^ 0x45) & bVar4 |
                (bVar4 | bVar8 ^ 0xff) ^ 0xff;
        bVar6 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar4 = (bVar6 ^ 0xff) & 0x94 | bVar6 & 0x6b;
        bVar8 = (bVar8 | 199) & 0x5f ^ (~bVar8 & 0x5f | 0x18 | bVar8 & 0xa0);
        bVar4 = (bVar4 ^ 0x8c) & (bVar4 ^ 0x6b) | bVar6 & 0xe7;
        local_98[lVar28] = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
    iVar15 = iVar32;
  } while (lVar29 != 0x13);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010c8d8;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010c8a0;
    while( true ) {
      lVar28 = *plVar12;
      local_98[0x13] = 0;
      uVar16 = (**(code **)(lVar28 + 0x30))(plVar12);
      puVar34 = local_90;
      pcVar24 = local_100;
      piVar36 = (int *)PTR_y_14_0012a600;
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c8a0:
      lVar28 = *plVar12;
      local_98[0x13] = 0;
      (**(code **)(lVar28 + 0x30))(plVar12);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c8d8:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010cae0;
    while( true ) {
      lVar28 = *plVar12;
      local_98[0x13] = 0;
      (**(code **)(lVar28 + 0x30))(plVar12);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010cae0:
      lVar28 = *plVar12;
      local_98[0x13] = 0;
      (**(code **)(lVar28 + 0x30))(plVar12);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  puVar22 = local_98;
  lVar28 = 0x80;
  do {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010c9dc;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010c9b8;
      while( true ) {
        *puVar22 = 0;
        lVar29 = lVar28 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c9b8:
        *puVar22 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010c9dc:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010ca3c;
      while ((*puVar22 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37)))
      {
LAB_0010ca3c:
        *puVar22 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    puVar22 = puVar22 + 1;
    lVar28 = lVar29;
  } while (lVar29 != 0);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010cb28;
  while( true ) {
    iVar15 = *(int *)puVar10;
    *(undefined8 *)pcVar24 = s_getInstaclos_001013f8._0_8_;
    *(int *)(pcVar24 + 8) = (int)ram0x00101388;
    puVar21 = local_c0;
    plVar12 = local_d0;
    pcVar38 = local_100;
    puVar22 = local_108;
    if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010cb28:
    *(undefined8 *)pcVar24 = s_getInstaclos_001013f8._0_8_;
    *(int *)(pcVar24 + 8) = (int)ram0x00101388;
  }
  iVar15 = 0x5a3c51c5;
  lVar28 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    iVar32 = iVar15 * 0x41c64e6d;
    cVar14 = (char)lVar28;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
    goto LAB_0010ce08;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
      goto LAB_0010cd34;
      while( true ) {
        bVar8 = (&DAT_00101838)[lVar28];
        iVar15 = iVar32 + 0x3039;
        bVar6 = bVar8 ^ 0xff | 0xe4;
        bVar7 = cVar14 * '\x11' - 0x31;
        bVar4 = (bVar8 ^ 0xe4) & (bVar8 ^ 0xff);
        bVar7 = ((bVar7 ^ 0xff) & 0xa4 | bVar7 & 0x40) ^ 0x40 | bVar7 & 0x1b;
        bVar4 = ((bVar4 ^ 0xff) & 0x95 | bVar4 & 0x6a) ^ (bVar6 & 0x95 | bVar8 & 10) |
                (bVar6 | bVar4 ^ 0xff) ^ 0xff;
        bVar8 = (bVar7 ^ 0xff) & 0x91 | bVar7 & 0x6e;
        iVar2 = *(int *)puVar10;
        bVar6 = (byte)((uint)iVar15 >> 0x10);
        bVar4 = (bVar4 ^ 0xff) & 0x91 | bVar4 & 0x6e;
        lVar29 = lVar28 + 1;
        local_90[lVar28] =
             (bVar6 ^ bVar8 ^ 0xff ^ bVar4 ^ 0xff) & bVar6 |
             (((bVar6 ^ 0xff) & 0x48 | bVar6 & 0xb7) ^ 0x48 | bVar8 ^ bVar4 ^ 0xff) ^ 0xff;
        puVar34 = local_90;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_0010cd34:
        bVar8 = (&DAT_00101838)[lVar28];
        bVar7 = cVar14 * '\x11' - 0x31;
        bVar4 = (bVar8 ^ 0xe4) & (bVar8 ^ 0xff);
        bVar6 = bVar8 ^ 0xff | 0xe4;
        bVar7 = ((bVar7 ^ 0xff) & 0xa4 | bVar7 & 0x40) ^ 0x40 | bVar7 & 0x1b;
        bVar4 = ((bVar4 ^ 0xff) & 0x95 | bVar4 & 0x6a) ^ (bVar6 & 0x95 | bVar8 & 10) |
                (bVar6 | bVar4 ^ 0xff) ^ 0xff;
        bVar8 = (bVar7 ^ 0xff) & 0x91 | bVar7 & 0x6e;
        bVar6 = (byte)((uint)(iVar32 + 0x3039) >> 0x10);
        bVar4 = (bVar4 ^ 0xff) & 0x91 | bVar4 & 0x6e;
        puVar34[lVar28] =
             (bVar6 ^ bVar8 ^ 0xff ^ bVar4 ^ 0xff) & bVar6 |
             (((bVar6 ^ 0xff) & 0x48 | bVar6 & 0xb7) ^ 0x48 | bVar8 ^ bVar4 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)
         ) break;
LAB_0010ce08:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
      goto LAB_0010cf28;
      while( true ) {
        bVar8 = (&DAT_00101838)[lVar28];
        bVar7 = cVar14 * '\x11' - 0x31;
        bVar4 = (bVar8 ^ 0xe4) & (bVar8 ^ 0xff);
        bVar6 = bVar8 ^ 0xff | 0xe4;
        bVar7 = ((bVar7 ^ 0xff) & 0xa4 | bVar7 & 0x40) ^ 0x40 | bVar7 & 0x1b;
        bVar4 = ((bVar4 ^ 0xff) & 0x95 | bVar4 & 0x6a) ^ (bVar6 & 0x95 | bVar8 & 10) |
                (bVar6 | bVar4 ^ 0xff) ^ 0xff;
        iVar15 = *(int *)puVar10;
        bVar8 = (bVar7 ^ 0xff) & 0x91 | bVar7 & 0x6e;
        bVar4 = (bVar4 ^ 0xff) & 0x91 | bVar4 & 0x6e;
        bVar6 = (byte)((uint)(iVar32 + 0x3039) >> 0x10);
        puVar34[lVar28] =
             (bVar6 ^ bVar8 ^ 0xff ^ bVar4 ^ 0xff) & bVar6 |
             (((bVar6 ^ 0xff) & 0x48 | bVar6 & 0xb7) ^ 0x48 | bVar8 ^ bVar4 ^ 0xff) ^ 0xff;
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_0010cf28:
        bVar8 = (&DAT_00101838)[lVar28];
        bVar7 = cVar14 * '\x11' - 0x31;
        bVar4 = (bVar8 ^ 0xe4) & (bVar8 ^ 0xff);
        bVar6 = bVar8 ^ 0xff | 0xe4;
        bVar7 = ((bVar7 ^ 0xff) & 0xa4 | bVar7 & 0x40) ^ 0x40 | bVar7 & 0x1b;
        bVar4 = ((bVar4 ^ 0xff) & 0x95 | bVar4 & 0x6a) ^ (bVar6 & 0x95 | bVar8 & 10) |
                (bVar6 | bVar4 ^ 0xff) ^ 0xff;
        bVar8 = (bVar7 ^ 0xff) & 0x91 | bVar7 & 0x6e;
        bVar6 = (byte)((uint)(iVar32 + 0x3039) >> 0x10);
        bVar4 = (bVar4 ^ 0xff) & 0x91 | bVar4 & 0x6e;
        puVar34[lVar28] =
             (bVar6 ^ bVar8 ^ 0xff ^ bVar4 ^ 0xff) & bVar6 |
             (((bVar6 ^ 0xff) & 0x48 | bVar6 & 0xb7) ^ 0x48 | bVar8 ^ bVar4 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_14_0012a600);
    lVar28 = lVar29;
    piVar37 = (int *)PTR_y_14_0012a600;
  } while (lVar29 != 0x29);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_14_0012a600);
  local_78 = lVar26;
  local_70 = (undefined1 *)uVar16;
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
  goto LAB_0010d0bc;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010d07c;
    while( true ) {
      lVar26 = *plVar12;
      local_90[0x29] = 0;
      uVar17 = (**(code **)(lVar26 + 0x388))(plVar12,uVar16,pcVar38);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d07c:
      lVar26 = *plVar12;
      local_90[0x29] = 0;
      (**(code **)(lVar26 + 0x388))(plVar12,uVar16,pcVar38);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d0bc:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010d77c;
    while( true ) {
      lVar26 = *plVar12;
      local_90[0x29] = 0;
      (**(code **)(lVar26 + 0x388))(plVar12,uVar16,pcVar38);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d77c:
      lVar26 = *plVar12;
      local_90[0x29] = 0;
      (**(code **)(lVar26 + 0x388))(plVar12,uVar16,pcVar38);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  lVar26 = 0x60;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010d1d8;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010d1b4;
      while( true ) {
        *pcVar38 = '\0';
        lVar28 = lVar26 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d1b4:
        *pcVar38 = '\0';
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d1d8:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010d238;
      while ((*pcVar38 = '\0', (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
             (9 < *piVar36))) {
LAB_0010d238:
        *pcVar38 = '\0';
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    lVar26 = lVar28;
    pcVar38 = pcVar38 + 1;
  } while (lVar28 != 0);
  puVar34 = local_90;
  lVar26 = 0xa0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010d318;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010d2f4;
      while( true ) {
        *puVar34 = 0;
        lVar28 = lVar26 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d2f4:
        *puVar34 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d318:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010d378;
      while ((*puVar34 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36)))
      {
LAB_0010d378:
        *puVar34 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    puVar34 = puVar34 + 1;
    lVar26 = lVar28;
  } while (lVar28 != 0);
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  iVar15 = 0x5a3cb698;
  uVar33 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar15 >> 0x10);
    cVar14 = (char)uVar33;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010d598;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010d4f8;
      while( true ) {
        bVar8 = (&DAT_00101508)[uVar33];
        bVar7 = cVar14 * '\x11' + 0x28;
        bVar6 = (bVar8 ^ ~bVar7 ^ 0xff) & bVar8;
        bVar7 = (bVar7 ^ ((bVar8 ^ 0xff) & 0xcc | bVar8 & 0x33) ^ 0xff ^ 0x33) & bVar7;
        bVar8 = ((bVar6 ^ 0xff) & 0x6b | bVar6 & 0x94) ^ ((bVar7 ^ 0xff) & 0x6b | bVar7 & 0x94) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        iVar32 = *(int *)puVar10;
        uVar23 = ~uVar33;
        puVar22[uVar33] =
             (~bVar8 ^ bVar4 ^ 0xff) & bVar8 |
             ((~bVar8 & 0x99 | bVar8 & 0x66) ^ 0x99 | bVar4 ^ 0xff) ^ 0xff;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d4f8:
        bVar8 = (&DAT_00101508)[uVar33];
        bVar7 = cVar14 * '\x11' + 0x28;
        bVar6 = (bVar8 ^ ~bVar7 ^ 0xff) & bVar8;
        bVar7 = (bVar7 ^ ((bVar8 ^ 0xff) & 0xcc | bVar8 & 0x33) ^ 0xff ^ 0x33) & bVar7;
        bVar8 = ((bVar6 ^ 0xff) & 0x6b | bVar6 & 0x94) ^ ((bVar7 ^ 0xff) & 0x6b | bVar7 & 0x94) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar22[uVar33] =
             (~bVar8 ^ bVar4 ^ 0xff) & bVar8 |
             ((~bVar8 & 0x99 | bVar8 & 0x66) ^ 0x99 | bVar4 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d598:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010d674;
      while( true ) {
        bVar8 = (&DAT_00101508)[uVar33];
        bVar7 = cVar14 * '\x11' + 0x28;
        bVar6 = (bVar8 ^ ~bVar7 ^ 0xff) & bVar8;
        bVar7 = (bVar7 ^ ((bVar8 ^ 0xff) & 0xcc | bVar8 & 0x33) ^ 0xff ^ 0x33) & bVar7;
        bVar8 = ((bVar6 ^ 0xff) & 0x6b | bVar6 & 0x94) ^ ((bVar7 ^ 0xff) & 0x6b | bVar7 & 0x94) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        iVar32 = *(int *)puVar10;
        puVar22[uVar33] =
             (~bVar8 ^ bVar4 ^ 0xff) & bVar8 |
             ((~bVar8 & 0x99 | bVar8 & 0x66) ^ 0x99 | bVar4 ^ 0xff) ^ 0xff;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d674:
        bVar8 = (&DAT_00101508)[uVar33];
        bVar7 = cVar14 * '\x11' + 0x28;
        bVar6 = (bVar8 ^ ~bVar7 ^ 0xff) & bVar8;
        bVar7 = (bVar7 ^ ((bVar8 ^ 0xff) & 0xcc | bVar8 & 0x33) ^ 0xff ^ 0x33) & bVar7;
        bVar8 = ((bVar6 ^ 0xff) & 0x6b | bVar6 & 0x94) ^ ((bVar7 ^ 0xff) & 0x6b | bVar7 & 0x94) |
                (~bVar6 | bVar7 ^ 0xff) ^ 0xff;
        puVar22[uVar33] =
             (~bVar8 ^ bVar4 ^ 0xff) & bVar8 |
             ((~bVar8 & 0x99 | bVar8 & 0x66) ^ 0x99 | bVar4 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    uVar33 = -uVar23;
  } while (-uVar23 != 0x14);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010d82c;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010d7f4;
    while( true ) {
      lVar26 = *plVar12;
      puVar22[0x14] = 0;
      uVar18 = (**(code **)(lVar26 + 0x538))(plVar12,puVar22);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d7f4:
      lVar26 = *plVar12;
      puVar22[0x14] = 0;
      (**(code **)(lVar26 + 0x538))(plVar12,puVar22);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d82c:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010d9d4;
    while( true ) {
      lVar26 = *plVar12;
      puVar22[0x14] = 0;
      (**(code **)(lVar26 + 0x538))(plVar12,puVar22);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d9d4:
      lVar26 = *plVar12;
      puVar22[0x14] = 0;
      (**(code **)(lVar26 + 0x538))(plVar12,puVar22);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  lVar26 = 0x80;
  do {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010d918;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010d8f4;
      while( true ) {
        *puVar22 = 0;
        lVar28 = lVar26 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d8f4:
        *puVar22 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010d918:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010d978;
      while ((*puVar22 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36)))
      {
LAB_0010d978:
        *puVar22 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    lVar26 = lVar28;
    puVar22 = puVar22 + 1;
  } while (lVar28 != 0);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010da38;
  while( true ) {
    lVar26 = FUN_00125634(plVar12,uVar16,uVar17,uVar18);
    (**(code **)(*plVar12 + 0xb8))(plVar12,uVar18);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010da38:
    FUN_00125634(plVar12,uVar16,uVar17,uVar18);
    (**(code **)(*plVar12 + 0xb8))(plVar12,uVar18);
  }
  if (lVar26 != 0) {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010db24;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010daf4;
      while ((cVar14 = (**(code **)(*plVar12 + 0x720))(plVar12), puVar22 = local_c0,
             plVar13 = local_d0, puVar34 = local_120, piVar37 = (int *)PTR_y_14_0012a600,
             (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_0010daf4:
        (**(code **)(*plVar12 + 0x720))(plVar12);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010db24:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010dbec;
      while (((**(code **)(*plVar12 + 0x720))(plVar12),
             (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_0010dbec:
        (**(code **)(*plVar12 + 0x720))(plVar12);
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (cVar14 == '\0') {
      uVar40 = *(undefined4 *)puVar10;
      do {
        if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
      } while (9 < *piVar36);
      iVar15 = *(int *)puVar10;
      do {
        if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar36 < 10)) {
          uVar40 = *(undefined4 *)puVar10;
          do {
            if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
          } while (9 < *piVar36);
          if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10))
          goto LAB_0010dca4;
        }
        iVar15 = *(int *)puVar10;
      } while( true );
    }
  }
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010dc2c;
  while (((**(code **)(*plVar12 + 0x88))(plVar12),
         (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_0010dc2c:
    (**(code **)(*plVar12 + 0x88))(plVar12);
  }
  goto LAB_0010c784;
LAB_0010dca4:
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  iVar15 = 0x5a3ca3dc;
  lVar28 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar15 >> 0x10);
    cVar14 = (char)lVar28;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010def0;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010de4c;
      while( true ) {
        bVar8 = 0x36 - (cVar14 * '\x11' + 't');
        bVar7 = bVar8 | bVar4;
        bVar6 = bVar4 & (bVar8 ^ bVar4 ^ 0xff);
        bVar8 = (&DAT_00101870)[lVar28];
        iVar32 = *(int *)puVar10;
        bVar6 = ((bVar6 ^ 0xff) & 0xbe | bVar6 & 0x41) ^ (bVar7 & 0xbe | ~bVar7 & 0x41) |
                (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        puVar21[lVar28] =
             ~(((bVar8 ^ 0xff) & 0xb6 | bVar8 & 0x49) ^ 0xb6 | bVar6 ^ 0xff) |
             (((bVar6 ^ 0xff) & 0xf0 | bVar6 & 0xf) ^ 0xf0 | bVar8 ^ 0xff) ^ 0xff;
        lVar29 = lVar28 + 1;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010de4c:
        bVar8 = 0x36 - (cVar14 * '\x11' + 't');
        bVar7 = bVar8 | bVar4;
        bVar6 = bVar4 & (bVar8 ^ bVar4 ^ 0xff);
        bVar8 = (&DAT_00101870)[lVar28];
        bVar6 = ((bVar6 ^ 0xff) & 0xbe | bVar6 & 0x41) ^ (bVar7 & 0xbe | ~bVar7 & 0x41) |
                (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        puVar21[lVar28] =
             ~(((bVar8 ^ 0xff) & 0xb6 | bVar8 & 0x49) ^ 0xb6 | bVar6 ^ 0xff) |
             (((bVar6 ^ 0xff) & 0xf0 | bVar6 & 0xf) ^ 0xf0 | bVar8 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010def0:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0010dfd0;
      while( true ) {
        bVar8 = 0x36 - (cVar14 * '\x11' + 't');
        bVar7 = bVar8 | bVar4;
        bVar6 = bVar4 & (bVar8 ^ bVar4 ^ 0xff);
        bVar8 = (&DAT_00101870)[lVar28];
        iVar32 = *(int *)puVar10;
        bVar6 = ((bVar6 ^ 0xff) & 0xbe | bVar6 & 0x41) ^ (bVar7 & 0xbe | ~bVar7 & 0x41) |
                (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        puVar21[lVar28] =
             ~(((bVar8 ^ 0xff) & 0xb6 | bVar8 & 0x49) ^ 0xb6 | bVar6 ^ 0xff) |
             (((bVar6 ^ 0xff) & 0xf0 | bVar6 & 0xf) ^ 0xf0 | bVar8 ^ 0xff) ^ 0xff;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010dfd0:
        bVar8 = 0x36 - (cVar14 * '\x11' + 't');
        bVar7 = bVar8 | bVar4;
        bVar6 = bVar4 & (bVar8 ^ bVar4 ^ 0xff);
        bVar8 = (&DAT_00101870)[lVar28];
        bVar6 = ((bVar6 ^ 0xff) & 0xbe | bVar6 & 0x41) ^ (bVar7 & 0xbe | ~bVar7 & 0x41) |
                (bVar7 | bVar6 ^ 0xff) ^ 0xff;
        puVar21[lVar28] =
             ~(((bVar8 ^ 0xff) & 0xb6 | bVar8 & 0x49) ^ 0xb6 | bVar6 ^ 0xff) |
             (((bVar6 ^ 0xff) & 0xf0 | bVar6 & 0xf) ^ 0xf0 | bVar8 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    lVar28 = lVar29;
  } while (lVar29 != 0x10);
  lVar28 = 0x10;
  iVar15 = 0x5a3c1c8a;
  do {
    cVar14 = (char)lVar28;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
    goto LAB_0010e37c;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
      goto LAB_0010e260;
      while( true ) {
        iVar32 = iVar15 * 0x41c64e6d + 0x3039;
        bVar4 = (&DAT_00101870)[lVar28];
        bVar6 = (cVar14 + -0x10) * '\x11' + 0x82;
        bVar7 = (byte)((uint)iVar32 >> 0x10);
        bVar8 = ((bVar6 ^ 0xff) & 0x66 | bVar6 & 0x99) ^ 0x66 | bVar7 ^ 0xff;
        bVar6 = (~bVar6 ^ bVar7 ^ 0xff) & bVar6;
        iVar2 = *(int *)puVar10;
        bVar8 = (bVar8 & 100 | ~bVar8 & 0x9b) ^ ((bVar6 ^ 0xff) & 100 | bVar6 & 0x9b) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar4 = ((((bVar4 ^ 0xff) & 0x25 | bVar4 & 0x10) ^ 0x8f) & 0x9e | (bVar4 ^ 0xff) & 0x21) ^
                ((bVar4 ^ 0xff) & 0x9e | 0x14 | bVar4 & 0x40);
        bVar8 = (bVar8 ^ 0xff) & 0x35 | (bVar8 ^ 0x35) & bVar8;
        local_c0[lVar28] =
             ((bVar4 ^ 0xff) & 0x93 | bVar4 & 0x6c) ^ ((bVar8 ^ 0xff) & 0x93 | bVar8 & 0x6c);
        lVar29 = lVar28 + 1;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_0010e260:
        bVar4 = (&DAT_00101870)[lVar28];
        bVar6 = (cVar14 + -0x10) * '\x11' + 0x82;
        bVar7 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar8 = ((bVar6 ^ 0xff) & 0x66 | bVar6 & 0x99) ^ 0x66 | bVar7 ^ 0xff;
        bVar6 = (~bVar6 ^ bVar7 ^ 0xff) & bVar6;
        bVar8 = (bVar8 & 100 | ~bVar8 & 0x9b) ^ ((bVar6 ^ 0xff) & 100 | bVar6 & 0x9b) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar4 = ((((bVar4 ^ 0xff) & 0x25 | bVar4 & 0x10) ^ 0x8f) & 0x9e | (bVar4 ^ 0xff) & 0x21) ^
                ((bVar4 ^ 0xff) & 0x9e | 0x14 | bVar4 & 0x40);
        bVar8 = (bVar8 ^ 0xff) & 0x35 | (bVar8 ^ 0x35) & bVar8;
        local_c0[lVar28] =
             ((bVar4 ^ 0xff) & 0x93 | bVar4 & 0x6c) ^ ((bVar8 ^ 0xff) & 0x93 | bVar8 & 0x6c);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)
         ) break;
LAB_0010e37c:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
      goto LAB_0010e4dc;
      while( true ) {
        bVar4 = (&DAT_00101870)[lVar28];
        bVar6 = (cVar14 + -0x10) * '\x11' + 0x82;
        bVar7 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar8 = ((bVar6 ^ 0xff) & 0x66 | bVar6 & 0x99) ^ 0x66 | bVar7 ^ 0xff;
        bVar6 = (~bVar6 ^ bVar7 ^ 0xff) & bVar6;
        iVar32 = *(int *)puVar10;
        bVar8 = (bVar8 & 100 | ~bVar8 & 0x9b) ^ ((bVar6 ^ 0xff) & 100 | bVar6 & 0x9b) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar4 = ((((bVar4 ^ 0xff) & 0x25 | bVar4 & 0x10) ^ 0x8f) & 0x9e | (bVar4 ^ 0xff) & 0x21) ^
                ((bVar4 ^ 0xff) & 0x9e | 0x14 | bVar4 & 0x40);
        bVar8 = (bVar8 ^ 0xff) & 0x35 | (bVar8 ^ 0x35) & bVar8;
        local_c0[lVar28] =
             ((bVar4 ^ 0xff) & 0x93 | bVar4 & 0x6c) ^ ((bVar8 ^ 0xff) & 0x93 | bVar8 & 0x6c);
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_0010e4dc:
        bVar4 = (&DAT_00101870)[lVar28];
        bVar6 = (cVar14 + -0x10) * '\x11' + 0x82;
        bVar7 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar8 = ((bVar6 ^ 0xff) & 0x66 | bVar6 & 0x99) ^ 0x66 | bVar7 ^ 0xff;
        bVar6 = (~bVar6 ^ bVar7 ^ 0xff) & bVar6;
        bVar8 = (bVar8 & 100 | ~bVar8 & 0x9b) ^ ((bVar6 ^ 0xff) & 100 | bVar6 & 0x9b) |
                (bVar8 | bVar6 ^ 0xff) ^ 0xff;
        bVar4 = ((((bVar4 ^ 0xff) & 0x25 | bVar4 & 0x10) ^ 0x8f) & 0x9e | (bVar4 ^ 0xff) & 0x21) ^
                ((bVar4 ^ 0xff) & 0x9e | 0x14 | bVar4 & 0x40);
        bVar8 = (bVar8 ^ 0xff) & 0x35 | (bVar8 ^ 0x35) & bVar8;
        local_c0[lVar28] =
             ((bVar4 ^ 0xff) & 0x93 | bVar4 & 0x6c) ^ ((bVar8 ^ 0xff) & 0x93 | bVar8 & 0x6c);
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_14_0012a600);
    lVar28 = lVar29;
    iVar15 = iVar32;
  } while (lVar29 != 0x20);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_14_0012a600);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
  goto LAB_0010e8b0;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010e778;
    while( true ) {
      lVar28 = *plVar13;
      puVar22[0x20] = 0;
      uVar16 = (**(code **)(lVar28 + 0x538))(plVar13,puVar22);
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      puVar22[4] = 0;
      puVar22[5] = 0;
      puVar22[6] = 0;
      puVar22[7] = 0;
      puVar22[8] = 0;
      puVar22[9] = 0;
      puVar22[10] = 0;
      puVar22[0xb] = 0;
      puVar22[0xc] = 0;
      puVar22[0xd] = 0;
      puVar22[0xe] = 0;
      puVar22[0xf] = 0;
      puVar22[0x10] = 0;
      puVar22[0x11] = 0;
      puVar22[0x12] = 0;
      puVar22[0x13] = 0;
      puVar22[0x14] = 0;
      puVar22[0x15] = 0;
      puVar22[0x16] = 0;
      puVar22[0x17] = 0;
      puVar22[0x18] = 0;
      puVar22[0x19] = 0;
      puVar22[0x1a] = 0;
      puVar22[0x1b] = 0;
      puVar22[0x1c] = 0;
      puVar22[0x1d] = 0;
      puVar22[0x1e] = 0;
      puVar22[0x1f] = 0;
      puVar22[0x20] = 0;
      puVar22[0x21] = 0;
      puVar22[0x22] = 0;
      puVar22[0x23] = 0;
      puVar22[0x24] = 0;
      puVar22[0x25] = 0;
      puVar22[0x26] = 0;
      puVar22[0x27] = 0;
      puVar22[0x28] = 0;
      puVar22[0x29] = 0;
      puVar22[0x2a] = 0;
      puVar22[0x2b] = 0;
      puVar22[0x2c] = 0;
      puVar22[0x2d] = 0;
      puVar22[0x2e] = 0;
      puVar22[0x2f] = 0;
      puVar22[0x30] = 0;
      puVar22[0x31] = 0;
      puVar22[0x32] = 0;
      puVar22[0x33] = 0;
      puVar22[0x34] = 0;
      puVar22[0x35] = 0;
      puVar22[0x36] = 0;
      puVar22[0x37] = 0;
      puVar22[0x38] = 0;
      puVar22[0x39] = 0;
      puVar22[0x3a] = 0;
      puVar22[0x3b] = 0;
      puVar22[0x3c] = 0;
      puVar22[0x3d] = 0;
      puVar22[0x3e] = 0;
      puVar22[0x3f] = 0;
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010e778:
      lVar28 = *plVar13;
      puVar22[0x20] = 0;
      (**(code **)(lVar28 + 0x538))(plVar13,puVar22);
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      puVar22[4] = 0;
      puVar22[5] = 0;
      puVar22[6] = 0;
      puVar22[7] = 0;
      puVar22[8] = 0;
      puVar22[9] = 0;
      puVar22[10] = 0;
      puVar22[0xb] = 0;
      puVar22[0xc] = 0;
      puVar22[0xd] = 0;
      puVar22[0xe] = 0;
      puVar22[0xf] = 0;
      puVar22[0x10] = 0;
      puVar22[0x11] = 0;
      puVar22[0x12] = 0;
      puVar22[0x13] = 0;
      puVar22[0x14] = 0;
      puVar22[0x15] = 0;
      puVar22[0x16] = 0;
      puVar22[0x17] = 0;
      puVar22[0x18] = 0;
      puVar22[0x19] = 0;
      puVar22[0x1a] = 0;
      puVar22[0x1b] = 0;
      puVar22[0x1c] = 0;
      puVar22[0x1d] = 0;
      puVar22[0x1e] = 0;
      puVar22[0x1f] = 0;
      puVar22[0x20] = 0;
      puVar22[0x21] = 0;
      puVar22[0x22] = 0;
      puVar22[0x23] = 0;
      puVar22[0x24] = 0;
      puVar22[0x25] = 0;
      puVar22[0x26] = 0;
      puVar22[0x27] = 0;
      puVar22[0x28] = 0;
      puVar22[0x29] = 0;
      puVar22[0x2a] = 0;
      puVar22[0x2b] = 0;
      puVar22[0x2c] = 0;
      puVar22[0x2d] = 0;
      puVar22[0x2e] = 0;
      puVar22[0x2f] = 0;
      puVar22[0x30] = 0;
      puVar22[0x31] = 0;
      puVar22[0x32] = 0;
      puVar22[0x33] = 0;
      puVar22[0x34] = 0;
      puVar22[0x35] = 0;
      puVar22[0x36] = 0;
      puVar22[0x37] = 0;
      puVar22[0x38] = 0;
      puVar22[0x39] = 0;
      puVar22[0x3a] = 0;
      puVar22[0x3b] = 0;
      puVar22[0x3c] = 0;
      puVar22[0x3d] = 0;
      puVar22[0x3e] = 0;
      puVar22[0x3f] = 0;
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010e8b0:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010ed38;
    while( true ) {
      lVar28 = *plVar13;
      puVar22[0x20] = 0;
      (**(code **)(lVar28 + 0x538))(plVar13,puVar22);
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      puVar22[4] = 0;
      puVar22[5] = 0;
      puVar22[6] = 0;
      puVar22[7] = 0;
      puVar22[8] = 0;
      puVar22[9] = 0;
      puVar22[10] = 0;
      puVar22[0xb] = 0;
      puVar22[0xc] = 0;
      puVar22[0xd] = 0;
      puVar22[0xe] = 0;
      puVar22[0xf] = 0;
      puVar22[0x10] = 0;
      puVar22[0x11] = 0;
      puVar22[0x12] = 0;
      puVar22[0x13] = 0;
      puVar22[0x14] = 0;
      puVar22[0x15] = 0;
      puVar22[0x16] = 0;
      puVar22[0x17] = 0;
      puVar22[0x18] = 0;
      puVar22[0x19] = 0;
      puVar22[0x1a] = 0;
      puVar22[0x1b] = 0;
      puVar22[0x1c] = 0;
      puVar22[0x1d] = 0;
      puVar22[0x1e] = 0;
      puVar22[0x1f] = 0;
      puVar22[0x20] = 0;
      puVar22[0x21] = 0;
      puVar22[0x22] = 0;
      puVar22[0x23] = 0;
      puVar22[0x24] = 0;
      puVar22[0x25] = 0;
      puVar22[0x26] = 0;
      puVar22[0x27] = 0;
      puVar22[0x28] = 0;
      puVar22[0x29] = 0;
      puVar22[0x2a] = 0;
      puVar22[0x2b] = 0;
      puVar22[0x2c] = 0;
      puVar22[0x2d] = 0;
      puVar22[0x2e] = 0;
      puVar22[0x2f] = 0;
      puVar22[0x30] = 0;
      puVar22[0x31] = 0;
      puVar22[0x32] = 0;
      puVar22[0x33] = 0;
      puVar22[0x34] = 0;
      puVar22[0x35] = 0;
      puVar22[0x36] = 0;
      puVar22[0x37] = 0;
      puVar22[0x38] = 0;
      puVar22[0x39] = 0;
      puVar22[0x3a] = 0;
      puVar22[0x3b] = 0;
      puVar22[0x3c] = 0;
      puVar22[0x3d] = 0;
      puVar22[0x3e] = 0;
      puVar22[0x3f] = 0;
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010ed38:
      lVar28 = *plVar13;
      puVar22[0x20] = 0;
      (**(code **)(lVar28 + 0x538))(plVar13,puVar22);
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      puVar22[4] = 0;
      puVar22[5] = 0;
      puVar22[6] = 0;
      puVar22[7] = 0;
      puVar22[8] = 0;
      puVar22[9] = 0;
      puVar22[10] = 0;
      puVar22[0xb] = 0;
      puVar22[0xc] = 0;
      puVar22[0xd] = 0;
      puVar22[0xe] = 0;
      puVar22[0xf] = 0;
      puVar22[0x10] = 0;
      puVar22[0x11] = 0;
      puVar22[0x12] = 0;
      puVar22[0x13] = 0;
      puVar22[0x14] = 0;
      puVar22[0x15] = 0;
      puVar22[0x16] = 0;
      puVar22[0x17] = 0;
      puVar22[0x18] = 0;
      puVar22[0x19] = 0;
      puVar22[0x1a] = 0;
      puVar22[0x1b] = 0;
      puVar22[0x1c] = 0;
      puVar22[0x1d] = 0;
      puVar22[0x1e] = 0;
      puVar22[0x1f] = 0;
      puVar22[0x20] = 0;
      puVar22[0x21] = 0;
      puVar22[0x22] = 0;
      puVar22[0x23] = 0;
      puVar22[0x24] = 0;
      puVar22[0x25] = 0;
      puVar22[0x26] = 0;
      puVar22[0x27] = 0;
      puVar22[0x28] = 0;
      puVar22[0x29] = 0;
      puVar22[0x2a] = 0;
      puVar22[0x2b] = 0;
      puVar22[0x2c] = 0;
      puVar22[0x2d] = 0;
      puVar22[0x2e] = 0;
      puVar22[0x2f] = 0;
      puVar22[0x30] = 0;
      puVar22[0x31] = 0;
      puVar22[0x32] = 0;
      puVar22[0x33] = 0;
      puVar22[0x34] = 0;
      puVar22[0x35] = 0;
      puVar22[0x36] = 0;
      puVar22[0x37] = 0;
      puVar22[0x38] = 0;
      puVar22[0x39] = 0;
      puVar22[0x3a] = 0;
      puVar22[0x3b] = 0;
      puVar22[0x3c] = 0;
      puVar22[0x3d] = 0;
      puVar22[0x3e] = 0;
      puVar22[0x3f] = 0;
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  iVar15 = 0x5a3c4eb4;
  lVar28 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar15 >> 0x10);
    cVar14 = (char)lVar28;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010eaac;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010ea20;
      while( true ) {
        bVar8 = cVar14 * '\x11' - 0x30;
        bVar8 = (bVar8 ^ (&DAT_00101528)[lVar28]) & ((&DAT_00101528)[lVar28] | bVar8);
        iVar32 = *(int *)puVar10;
        bVar6 = ((bVar8 ^ 0xff) & 0x10 | bVar8 & 3) ^ 3 | (bVar8 ^ 0x13) & bVar8;
        bVar8 = ((bVar4 | 0xcc) & 0x5d | (bVar4 ^ 0xff) & 2) ^
                ((~bVar4 | 0x33) & 0x5d | bVar4 & 0xa0);
        puVar34[lVar28] = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
        lVar29 = lVar28 + 1;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010ea20:
        bVar8 = cVar14 * '\x11' - 0x30;
        bVar8 = (bVar8 ^ (&DAT_00101528)[lVar28]) & ((&DAT_00101528)[lVar28] | bVar8);
        bVar6 = ((bVar8 ^ 0xff) & 0x10 | bVar8 & 3) ^ 3 | (bVar8 ^ 0x13) & bVar8;
        bVar8 = ((bVar4 | 0xcc) & 0x5d | (bVar4 ^ 0xff) & 2) ^
                ((~bVar4 | 0x33) & 0x5d | bVar4 & 0xa0);
        puVar34[lVar28] = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010eaac:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010eb74;
      while( true ) {
        bVar8 = cVar14 * '\x11' - 0x30;
        iVar32 = *(int *)puVar10;
        bVar8 = (bVar8 ^ (&DAT_00101528)[lVar28]) & ((&DAT_00101528)[lVar28] | bVar8);
        bVar6 = ((bVar8 ^ 0xff) & 0x10 | bVar8 & 3) ^ 3 | (bVar8 ^ 0x13) & bVar8;
        bVar8 = ((bVar4 | 0xcc) & 0x5d | (bVar4 ^ 0xff) & 2) ^
                ((~bVar4 | 0x33) & 0x5d | bVar4 & 0xa0);
        puVar34[lVar28] = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010eb74:
        bVar8 = cVar14 * '\x11' - 0x30;
        bVar8 = (bVar8 ^ (&DAT_00101528)[lVar28]) & ((&DAT_00101528)[lVar28] | bVar8);
        bVar6 = ((bVar8 ^ 0xff) & 0x10 | bVar8 & 3) ^ 3 | (bVar8 ^ 0x13) & bVar8;
        bVar8 = ((bVar4 | 0xcc) & 0x5d | (bVar4 ^ 0xff) & 2) ^
                ((~bVar4 | 0x33) & 0x5d | bVar4 & 0xa0);
        puVar34[lVar28] = bVar8 & (bVar6 ^ 0xff) | bVar6 & (bVar8 ^ 0xff);
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
  } while (lVar29 != 0x10);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010eee0;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010eea8;
    while( true ) {
      lVar28 = *plVar13;
      puVar34[0x10] = 0;
      uVar17 = (**(code **)(lVar28 + 0x30))(plVar13,puVar34);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010eea8:
      lVar28 = *plVar13;
      puVar34[0x10] = 0;
      (**(code **)(lVar28 + 0x30))(plVar13,puVar34);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010eee0:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010f0f8;
    while( true ) {
      lVar28 = *plVar13;
      puVar34[0x10] = 0;
      (**(code **)(lVar28 + 0x30))(plVar13,puVar34);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f0f8:
      lVar28 = *plVar13;
      puVar34[0x10] = 0;
      (**(code **)(lVar28 + 0x30))(plVar13,puVar34);
    }
  }
  lVar28 = 0x80;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010f00c;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010efe8;
      while( true ) {
        *puVar34 = 0;
        lVar29 = lVar28 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010efe8:
        *puVar34 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f00c:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010f06c;
      while ((*puVar34 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37)))
      {
LAB_0010f06c:
        *puVar34 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
    puVar34 = puVar34 + 1;
  } while (lVar29 != 0);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010f1d8;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010f184;
    while( true ) {
      pcVar27 = *(code **)(*plVar13 + 0x108);
      local_e8[8] = '\0';
      *(undefined8 *)local_e8 = s_getBytes_base_apFile_00101350._0_8_;
      *puStack_e0 = (int)ram0x001013f0;
      *(undefined1 *)(puStack_e0 + 1) = 0;
      uVar18 = (*pcVar27)(plVar13,uVar17,local_e8,puStack_e0);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f184:
      pcVar27 = *(code **)(*plVar13 + 0x108);
      local_e8[8] = '\0';
      *(undefined8 *)local_e8 = s_getBytes_base_apFile_00101350._0_8_;
      *puStack_e0 = (int)ram0x001013f0;
      *(undefined1 *)(puStack_e0 + 1) = 0;
      (*pcVar27)(plVar13,uVar17,local_e8,puStack_e0);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f1d8:
    pcVar27 = *(code **)(*plVar13 + 0x108);
    local_e8[8] = '\0';
    *(undefined8 *)local_e8 = s_getBytes_base_apFile_00101350._0_8_;
    *puStack_e0 = (int)ram0x001013f0;
    *(undefined1 *)(puStack_e0 + 1) = 0;
    (*pcVar27)(plVar13,uVar17,local_e8,puStack_e0);
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  pcVar24 = local_e8;
  lVar28 = 0x60;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010f2ec;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010f2c8;
      while( true ) {
        *pcVar24 = '\0';
        lVar29 = lVar28 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f2c8:
        *pcVar24 = '\0';
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f2ec:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010f34c;
      while ((*pcVar24 = '\0', (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
             (9 < *piVar37))) {
LAB_0010f34c:
        *pcVar24 = '\0';
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    pcVar24 = pcVar24 + 1;
    lVar28 = lVar29;
  } while (lVar29 != 0);
  lVar28 = 0xa0;
  puVar31 = puStack_e0;
  do {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010f404;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010f3e0;
      while( true ) {
        *(undefined1 *)puVar31 = 0;
        lVar29 = lVar28 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f3e0:
        *(undefined1 *)puVar31 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f404:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_0010f464;
      while ((*(undefined1 *)puVar31 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
             (9 < *piVar37))) {
LAB_0010f464:
        *(undefined1 *)puVar31 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
    puVar31 = (undefined4 *)((long)puVar31 + 1);
  } while (lVar29 != 0);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010f554;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010f510;
    while( true ) {
      uVar17 = FUN_00125094(plVar13,uVar16,uVar18);
      (**(code **)(*plVar13 + 0xb8))(plVar13,uVar16);
      piVar36 = (int *)PTR_y_14_0012a600;
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f510:
      FUN_00125094(plVar13,uVar16,uVar18);
      (**(code **)(*plVar13 + 0xb8))(plVar13,uVar16);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f554:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0010f9fc;
    while( true ) {
      FUN_00125094(plVar13,uVar16,uVar18);
      (**(code **)(*plVar13 + 0xb8))(plVar13,uVar16);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0010f9fc:
      FUN_00125094(plVar13,uVar16,uVar18);
      (**(code **)(*plVar13 + 0xb8))(plVar13,uVar16);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  iVar15 = 0x5a3c988e;
  lVar28 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar15 >> 0x10);
    cVar14 = (char)lVar28;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
    goto LAB_0010f878;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
      goto LAB_0010f784;
      while( true ) {
        bVar8 = (&DAT_001018a0)[lVar28];
        bVar7 = cVar14 * '\x11' + 6;
        bVar6 = (bVar8 ^ 0xff) & 0xd2 | bVar8 & 0x2d;
        bVar8 = (bVar6 ^ 4) & (bVar6 ^ 0x2d) | bVar8 & 0x29;
        bVar6 = (bVar7 & 4 | ((bVar7 ^ 0xff) & 0x90 | bVar7 & 0x42) ^ 0x42) ^ (bVar7 & 0x2d | 4);
        bVar6 = ((bVar6 ^ 0xff) & 100 | bVar6 & 0x9b) ^ ((bVar8 ^ 0xff) & 100 | bVar8 & 0x9b);
        iVar32 = *(int *)puVar10;
        bVar8 = ((bVar6 ^ 0xff) & 0xb7 | bVar6 & 0x48) ^ 0xb7 | bVar4 ^ 0xff;
        bVar6 = ((bVar4 ^ 0xff) & 0x7b | bVar4 & 0x84) ^ 0x7b | bVar6 ^ 0xff;
        local_a0[lVar28] =
             (bVar8 & 0x99 | ~bVar8 & 0x66) ^ (bVar6 & 0x99 | ~bVar6 & 0x66) |
             (bVar8 | bVar6) ^ 0xff;
        lVar29 = lVar28 + 1;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_0010f784:
        bVar8 = (&DAT_001018a0)[lVar28];
        bVar7 = cVar14 * '\x11' + 6;
        bVar6 = (bVar8 ^ 0xff) & 0xd2 | bVar8 & 0x2d;
        bVar8 = (bVar6 ^ 4) & (bVar6 ^ 0x2d) | bVar8 & 0x29;
        bVar6 = (bVar7 & 4 | ((bVar7 ^ 0xff) & 0x90 | bVar7 & 0x42) ^ 0x42) ^ (bVar7 & 0x2d | 4);
        bVar6 = ((bVar6 ^ 0xff) & 100 | bVar6 & 0x9b) ^ ((bVar8 ^ 0xff) & 100 | bVar8 & 0x9b);
        bVar8 = ((bVar6 ^ 0xff) & 0xb7 | bVar6 & 0x48) ^ 0xb7 | bVar4 ^ 0xff;
        bVar6 = ((bVar4 ^ 0xff) & 0x7b | bVar4 & 0x84) ^ 0x7b | bVar6 ^ 0xff;
        local_a0[lVar28] =
             (bVar8 & 0x99 | ~bVar8 & 0x66) ^ (bVar6 & 0x99 | ~bVar6 & 0x66) |
             (bVar8 | bVar6) ^ 0xff;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)
         ) break;
LAB_0010f878:
      bVar8 = (&DAT_001018a0)[lVar28];
      bVar7 = cVar14 * '\x11' + 6;
      bVar6 = (bVar8 ^ 0xff) & 0xd2 | bVar8 & 0x2d;
      bVar8 = (bVar6 ^ 4) & (bVar6 ^ 0x2d) | bVar8 & 0x29;
      bVar6 = (bVar7 & 4 | ((bVar7 ^ 0xff) & 0x90 | bVar7 & 0x42) ^ 0x42) ^ (bVar7 & 0x2d | 4);
      bVar6 = ((bVar6 ^ 0xff) & 100 | bVar6 & 0x9b) ^ ((bVar8 ^ 0xff) & 100 | bVar8 & 0x9b);
      bVar8 = ((bVar6 ^ 0xff) & 0xb7 | bVar6 & 0x48) ^ 0xb7 | bVar4 ^ 0xff;
      bVar6 = ((bVar4 ^ 0xff) & 0x7b | bVar4 & 0x84) ^ 0x7b | bVar6 ^ 0xff;
      local_a0[lVar28] =
           (bVar8 & 0x99 | ~bVar8 & 0x66) ^ (bVar6 & 0x99 | ~bVar6 & 0x66) | (bVar8 | bVar6) ^ 0xff;
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_14_0012a600);
    lVar28 = lVar29;
    piVar37 = (int *)PTR_y_14_0012a600;
  } while (lVar29 != 0x1f);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_14_0012a600);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
  goto LAB_0010fab8;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010fa7c;
    while( true ) {
      lVar28 = *plVar13;
      local_a0[0x1f] = 0;
      uVar16 = (**(code **)(lVar28 + 0x30))(plVar13,local_a0);
      puVar31 = local_d8;
      piVar37 = (int *)PTR_y_14_0012a600;
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010fa7c:
      lVar28 = *plVar13;
      local_a0[0x1f] = 0;
      (**(code **)(lVar28 + 0x30))(plVar13,local_a0);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010fab8:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010fbe4;
    while( true ) {
      lVar28 = *plVar13;
      local_a0[0x1f] = 0;
      (**(code **)(lVar28 + 0x30))(plVar13,local_a0);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010fbe4:
      lVar28 = *plVar13;
      local_a0[0x1f] = 0;
      (**(code **)(lVar28 + 0x30))(plVar13,local_a0);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  lVar28 = 0;
  do {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010fb80;
    while ((local_a0[lVar28] = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
           (9 < *piVar36))) {
LAB_0010fb80:
      local_a0[lVar28] = 0;
    }
    lVar28 = lVar28 + 1;
  } while (lVar28 != 0x80);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0010fc34;
  while( true ) {
    iVar15 = *(int *)puVar10;
    *(undefined1 *)((long)puVar31 + 6) = 0;
    *puVar31 = (int)ram0x001013c0;
    *(undefined2 *)(puVar31 + 1) = 0x3e74;
    plVar12 = local_d0;
    puVar39 = local_118;
    if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0010fc34:
    *(undefined1 *)((long)puVar31 + 6) = 0;
    *(undefined2 *)(puVar31 + 1) = 0x3e74;
    *puVar31 = (int)ram0x001013c0;
  }
  lVar28 = 0;
  iVar15 = 0x5a3c867c;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    cVar14 = (char)lVar28;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
    goto LAB_0010fde8;
    while( true ) {
      bVar4 = (&DAT_001018d0)[lVar28];
      bVar6 = cVar14 * '\x11' + 0x18;
      bVar8 = (bVar6 ^ 0x33) & bVar6;
      iVar32 = iVar15 * 0x41c64e6d + 0x3039;
      bVar8 = ((bVar6 | 0xcc) & 0xa3 | (bVar6 ^ 0x33) & 0x10) ^
              ((bVar8 ^ 0xff) & 0xa3 | bVar8 & 0x5c) | (bVar6 | 0xcc | bVar8 ^ 0xff) ^ 0xff;
      bVar4 = (bVar4 ^ 0xff) & 0x33 | (bVar4 ^ 0x33) & bVar4;
      bVar6 = (byte)((uint)iVar32 >> 0x10);
      bVar8 = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
      iVar2 = *(int *)puVar10;
      bVar4 = (bVar6 ^ 0xff) & 0x7e | bVar6 & 0x81;
      bVar8 = (bVar8 ^ 0xff) & 0x5d | bVar8 & 0xa2;
      bVar4 = (bVar4 ^ 0x23) & (bVar4 ^ 0x81) | (bVar6 ^ 0x5d) & bVar6;
      local_b8[lVar28] = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
      if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_0010fde8:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
      goto LAB_0010ff24;
      while( true ) {
        bVar4 = (&DAT_001018d0)[lVar28];
        bVar6 = cVar14 * '\x11' + 0x18;
        bVar8 = (bVar6 ^ 0x33) & bVar6;
        bVar8 = ((bVar6 | 0xcc) & 0xa3 | (bVar6 ^ 0x33) & 0x10) ^
                ((bVar8 ^ 0xff) & 0xa3 | bVar8 & 0x5c) | (bVar6 | 0xcc | bVar8 ^ 0xff) ^ 0xff;
        bVar4 = (bVar4 ^ 0xff) & 0x33 | (bVar4 ^ 0x33) & bVar4;
        bVar6 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar8 = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
        bVar4 = (bVar6 ^ 0xff) & 0x7e | bVar6 & 0x81;
        iVar32 = *(int *)puVar10;
        bVar8 = (bVar8 ^ 0xff) & 0x5d | bVar8 & 0xa2;
        bVar4 = (bVar4 ^ 0x23) & (bVar4 ^ 0x81) | (bVar6 ^ 0x5d) & bVar6;
        local_b8[lVar28] = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_0010ff24:
        bVar4 = (&DAT_001018d0)[lVar28];
        bVar6 = cVar14 * '\x11' + 0x18;
        bVar8 = (bVar6 ^ 0x33) & bVar6;
        bVar8 = ((bVar6 | 0xcc) & 0xa3 | (bVar6 ^ 0x33) & 0x10) ^
                ((bVar8 ^ 0xff) & 0xa3 | bVar8 & 0x5c) | (bVar6 | 0xcc | bVar8 ^ 0xff) ^ 0xff;
        bVar4 = (bVar4 ^ 0xff) & 0x33 | (bVar4 ^ 0x33) & bVar4;
        bVar6 = (byte)((uint)(iVar15 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar8 = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
        bVar4 = (bVar6 ^ 0xff) & 0x7e | bVar6 & 0x81;
        bVar8 = (bVar8 ^ 0xff) & 0x5d | bVar8 & 0xa2;
        bVar4 = (bVar4 ^ 0x23) & (bVar4 ^ 0x81) | (bVar6 ^ 0x5d) & bVar6;
        local_b8[lVar28] = bVar4 & (bVar8 ^ 0xff) | bVar8 & (bVar4 ^ 0xff);
      }
    }
    lVar28 = lVar28 + 1;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_14_0012a600);
    piVar36 = (int *)PTR_y_14_0012a600;
    iVar15 = iVar32;
  } while (lVar28 != 0x17);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_14_0012a600);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
  goto LAB_001100d8;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_00110094;
    while( true ) {
      lVar28 = *plVar12;
      local_b8[0x17] = 0;
      uVar18 = (**(code **)(lVar28 + 0x108))(plVar12,uVar16,local_d8,local_b8);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00110094:
      lVar28 = *plVar12;
      local_b8[0x17] = 0;
      (**(code **)(lVar28 + 0x108))(plVar12,uVar16,local_d8,local_b8);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001100d8:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_001103a0;
    while( true ) {
      lVar28 = *plVar12;
      local_b8[0x17] = 0;
      (**(code **)(lVar28 + 0x108))(plVar12,uVar16,local_d8,local_b8);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001103a0:
      lVar28 = *plVar12;
      local_b8[0x17] = 0;
      (**(code **)(lVar28 + 0x108))(plVar12,uVar16,local_d8,local_b8);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  lVar28 = 0x60;
  puVar31 = local_d8;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_001101ec;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_001101c8;
      while( true ) {
        *(undefined1 *)puVar31 = 0;
        lVar29 = lVar28 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001101c8:
        *(undefined1 *)puVar31 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001101ec:
      *(undefined1 *)puVar31 = 0;
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
    puVar31 = (undefined4 *)((long)puVar31 + 1);
  } while (lVar29 != 0);
  lVar28 = 0xa0;
  puVar34 = local_b8;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_001102d4;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_001102b0;
      while( true ) {
        *puVar34 = 0;
        lVar29 = lVar28 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001102b0:
        *puVar34 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_001102d4:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_00110334;
      while ((*puVar34 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar37)))
      {
LAB_00110334:
        *puVar34 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
    puVar34 = puVar34 + 1;
  } while (lVar29 != 0);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0011045c;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_00110420;
    while( true ) {
      pcVar27 = *(code **)(*plVar12 + 0x538);
      *puVar39 = (int)DAT_00101408;
      uVar19 = (*pcVar27)(plVar12,puVar39);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00110420:
      pcVar27 = *(code **)(*plVar12 + 0x538);
      *puVar39 = (int)DAT_00101408;
      (*pcVar27)(plVar12,puVar39);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0011045c:
    pcVar27 = *(code **)(*plVar12 + 0x538);
    *puVar39 = (int)DAT_00101408;
    (*pcVar27)(plVar12,puVar39);
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  lVar28 = 0x80;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_00110558;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_00110534;
      while( true ) {
        *(undefined1 *)puVar39 = 0;
        lVar29 = lVar28 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00110534:
        *(undefined1 *)puVar39 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00110558:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37))
      goto LAB_001105b8;
      while ((*(undefined1 *)puVar39 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
             (9 < *piVar37))) {
LAB_001105b8:
        *(undefined1 *)puVar39 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    lVar28 = lVar29;
    puVar39 = (undefined4 *)((long)puVar39 + 1);
  } while (lVar29 != 0);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_0011070c;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar37)) goto LAB_00110698;
    while( true ) {
      plVar12 = local_d0;
      uVar20 = FUN_00124e5c(local_d0,uVar16,uVar18,uVar17,uVar19);
      (**(code **)(*plVar12 + 0xb8))(plVar12,uVar19);
      (**(code **)(*plVar12 + 0xb8))(plVar12,uVar17);
      puVar31 = local_f0;
      piVar36 = (int *)PTR_y_14_0012a600;
      iVar15 = *(int *)puVar10;
      *local_f0 = (int)DAT_00101390;
      *(undefined1 *)(puVar31 + 1) = 0;
      puVar34 = local_70;
      lVar28 = local_78;
      plVar12 = local_d0;
      puVar31 = local_f0;
      uVar11 = local_110;
      if (((iVar15 * (iVar15 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_00110698:
      plVar12 = local_d0;
      FUN_00124e5c(local_d0,uVar16,uVar18,uVar17,uVar19);
      (**(code **)(*plVar12 + 0xb8))(plVar12,uVar19);
      (**(code **)(*plVar12 + 0xb8))(plVar12,uVar17);
      puVar31 = local_f0;
      *local_f0 = (int)DAT_00101390;
      *(undefined1 *)(puVar31 + 1) = 0;
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar37 < 10)) break;
LAB_0011070c:
    plVar12 = local_d0;
    FUN_00124e5c(local_d0,uVar16,uVar18,uVar17,uVar19);
    (**(code **)(*plVar12 + 0xb8))(plVar12,uVar19);
    (**(code **)(*plVar12 + 0xb8))(plVar12,uVar17);
    puVar31 = local_f0;
    *local_f0 = (int)DAT_00101390;
    *(undefined1 *)(puVar31 + 1) = 0;
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar37);
  iVar15 = 0x5a3ca357;
  lVar29 = 0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar37);
    iVar15 = iVar15 * 0x41c64e6d + 0x3039;
    bVar4 = (byte)((uint)iVar15 >> 0x10);
    cVar14 = (char)lVar29;
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
    goto LAB_00110a1c;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
      goto LAB_00110944;
      while( true ) {
        bVar8 = (&DAT_001018f8)[lVar29];
        bVar7 = cVar14 * '\x11' + 0x3d;
        bVar6 = (bVar7 ^ 0xff) & 6;
        bVar8 = ((bVar8 ^ 0xff) & 4 | bVar8 & 0x12) ^ 0x12 | (bVar8 ^ 0x16) & bVar8;
        bVar6 = ((bVar6 ^ 0xff) & 0xd | ((bVar6 | bVar7 & 0x10) ^ 0x10) & 0xf3) ^
                (~bVar7 & 0xd | 4 | bVar7 & 0xe0);
        bVar8 = ((bVar6 ^ 0xff) & 0x45 | bVar6 & 0xba) ^ ((bVar8 ^ 0xff) & 0x45 | bVar8 & 0xba);
        iVar32 = *(int *)puVar10;
        local_f8[lVar29] =
             (bVar4 ^ ((bVar8 ^ 0xff) & 0xe5 | bVar8 & 0x1a) ^ 0xff ^ 0x1a) & bVar4 |
             (((bVar4 ^ 0xff) & 0x6f | bVar4 & 0x90) ^ 0x6f | bVar8 ^ 0xff) ^ 0xff;
        lVar30 = lVar29 + 1;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_00110944:
        bVar8 = (&DAT_001018f8)[lVar29];
        bVar7 = cVar14 * '\x11' + 0x3d;
        bVar6 = (bVar7 ^ 0xff) & 6;
        bVar6 = ((bVar6 ^ 0xff) & 0xd | ((bVar6 | bVar7 & 0x10) ^ 0x10) & 0xf3) ^
                (~bVar7 & 0xd | 4 | bVar7 & 0xe0);
        bVar8 = ((bVar8 ^ 0xff) & 4 | bVar8 & 0x12) ^ 0x12 | (bVar8 ^ 0x16) & bVar8;
        bVar8 = ((bVar6 ^ 0xff) & 0x45 | bVar6 & 0xba) ^ ((bVar8 ^ 0xff) & 0x45 | bVar8 & 0xba);
        local_f8[lVar29] =
             (bVar4 ^ ((bVar8 ^ 0xff) & 0xe5 | bVar8 & 0x1a) ^ 0xff ^ 0x1a) & bVar4 |
             (((bVar4 ^ 0xff) & 0x6f | bVar4 & 0x90) ^ 0x6f | bVar8 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)
         ) break;
LAB_00110a1c:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
      goto LAB_00110b40;
      while( true ) {
        bVar8 = (&DAT_001018f8)[lVar29];
        bVar7 = cVar14 * '\x11' + 0x3d;
        bVar6 = (bVar7 ^ 0xff) & 6;
        bVar8 = ((bVar8 ^ 0xff) & 4 | bVar8 & 0x12) ^ 0x12 | (bVar8 ^ 0x16) & bVar8;
        bVar6 = ((bVar6 ^ 0xff) & 0xd | ((bVar6 | bVar7 & 0x10) ^ 0x10) & 0xf3) ^
                (~bVar7 & 0xd | 4 | bVar7 & 0xe0);
        bVar8 = ((bVar6 ^ 0xff) & 0x45 | bVar6 & 0xba) ^ ((bVar8 ^ 0xff) & 0x45 | bVar8 & 0xba);
        iVar32 = *(int *)puVar10;
        local_f8[lVar29] =
             (bVar4 ^ ((bVar8 ^ 0xff) & 0xe5 | bVar8 & 0x1a) ^ 0xff ^ 0x1a) & bVar4 |
             (((bVar4 ^ 0xff) & 0x6f | bVar4 & 0x90) ^ 0x6f | bVar8 ^ 0xff) ^ 0xff;
        if (((iVar32 * (iVar32 + -1) & 1U) == 0) || (*(int *)PTR_y_14_0012a600 < 10)) break;
LAB_00110b40:
        bVar8 = (&DAT_001018f8)[lVar29];
        bVar7 = cVar14 * '\x11' + 0x3d;
        bVar6 = (bVar7 ^ 0xff) & 6;
        bVar6 = ((bVar6 ^ 0xff) & 0xd | ((bVar6 | bVar7 & 0x10) ^ 0x10) & 0xf3) ^
                (~bVar7 & 0xd | 4 | bVar7 & 0xe0);
        bVar8 = ((bVar8 ^ 0xff) & 4 | bVar8 & 0x12) ^ 0x12 | (bVar8 ^ 0x16) & bVar8;
        bVar8 = ((bVar6 ^ 0xff) & 0x45 | bVar6 & 0xba) ^ ((bVar8 ^ 0xff) & 0x45 | bVar8 & 0xba);
        local_f8[lVar29] =
             (bVar4 ^ ((bVar8 ^ 0xff) & 0xe5 | bVar8 & 0x1a) ^ 0xff ^ 0x1a) & bVar4 |
             (((bVar4 ^ 0xff) & 0x6f | bVar4 & 0x90) ^ 0x6f | bVar8 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_14_0012a600);
    lVar29 = lVar30;
    piVar37 = (int *)PTR_y_14_0012a600;
  } while (lVar30 != 0x17);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_14_0012a600);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *(int *)PTR_y_14_0012a600))
  goto LAB_00110cd4;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00110c94;
    while( true ) {
      lVar29 = *plVar12;
      local_f8[0x17] = 0;
      uVar16 = (**(code **)(lVar29 + 0x108))(plVar12,puVar34,puVar31);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00110c94:
      lVar29 = *plVar12;
      local_f8[0x17] = 0;
      (**(code **)(lVar29 + 0x108))(plVar12,puVar34,puVar31);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00110cd4:
    lVar29 = *plVar12;
    local_f8[0x17] = 0;
    (**(code **)(lVar29 + 0x108))(plVar12,puVar34,puVar31);
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  lVar29 = 0x60;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00110e04;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_00110de0;
      while( true ) {
        *(undefined1 *)puVar31 = 0;
        lVar30 = lVar29 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00110de0:
        *(undefined1 *)puVar31 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00110e04:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_00110e40;
      while ((*(undefined1 *)puVar31 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 &&
             (9 < *piVar36))) {
LAB_00110e40:
        *(undefined1 *)puVar31 = 0;
      }
    }
    lVar29 = lVar30;
    puVar31 = (undefined4 *)((long)puVar31 + 1);
  } while (lVar30 != 0);
  puVar34 = local_f8;
  lVar29 = 0xa0;
  do {
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00110f08;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_00110ee4;
      while( true ) {
        *puVar34 = 0;
        lVar30 = lVar29 + -1;
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00110ee4:
        *puVar34 = 0;
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00110f08:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_00110f68;
      while ((*puVar34 = 0, (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36)))
      {
LAB_00110f68:
        *puVar34 = 0;
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    puVar34 = puVar34 + 1;
    lVar29 = lVar30;
  } while (lVar30 != 0);
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0011105c;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00111014;
    while( true ) {
      FUN_00125904(plVar12,lVar26,uVar16,2,uVar20);
      cVar14 = (**(code **)(*plVar12 + 0x720))(plVar12);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111014:
      FUN_00125904(plVar12,lVar26,uVar16,2,uVar20);
      (**(code **)(*plVar12 + 0x720))(plVar12);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0011105c:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0011115c;
    while( true ) {
      FUN_00125904(plVar12,lVar26,uVar16,2,uVar20);
      (**(code **)(*plVar12 + 0x720))(plVar12);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0011115c:
      FUN_00125904(plVar12,lVar26,uVar16,2,uVar20);
      (**(code **)(*plVar12 + 0x720))(plVar12);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  if (cVar14 == '\0') {
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00111378;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_001112ec;
      while( true ) {
        uVar16 = FUN_001137ec(plVar12);
        uVar17 = FUN_00113f18(plVar12,uVar16);
        uVar16 = FUN_00124e5c(plVar12,uVar16,uVar17,lVar28,lVar26);
        uVar17 = FUN_001147dc(plVar12);
        uVar18 = FUN_00103b60(plVar12,uVar17,&DAT_00101628,&DAT_00101638);
        lVar29 = FUN_00124e5c(plVar12,uVar17,uVar18,uVar11);
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_001112ec:
        uVar16 = FUN_001137ec(plVar12);
        uVar17 = FUN_00113f18(plVar12,uVar16);
        FUN_00124e5c(plVar12,uVar16,uVar17,lVar28,lVar26);
        uVar16 = FUN_001147dc(plVar12);
        uVar17 = FUN_00103b60(plVar12,uVar16,&DAT_00101628,&DAT_00101638);
        FUN_00124e5c(plVar12,uVar16,uVar17,uVar11);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111378:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_001114c8;
      while( true ) {
        uVar16 = FUN_001137ec(plVar12);
        uVar17 = FUN_00113f18(plVar12,uVar16);
        FUN_00124e5c(plVar12,uVar16,uVar17,lVar28,lVar26);
        uVar16 = FUN_001147dc(plVar12);
        uVar17 = FUN_00103b60(plVar12,uVar16,&DAT_00101628,&DAT_00101638);
        FUN_00124e5c(plVar12,uVar16,uVar17,uVar11);
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_001114c8:
        uVar16 = FUN_001137ec(plVar12);
        uVar17 = FUN_00113f18(plVar12,uVar16);
        FUN_00124e5c(plVar12,uVar16,uVar17,lVar28,lVar26);
        uVar16 = FUN_001147dc(plVar12);
        uVar17 = FUN_00103b60(plVar12,uVar16,&DAT_00101628,&DAT_00101638);
        FUN_00124e5c(plVar12,uVar16,uVar17,uVar11);
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (lVar29 != 0) {
      uVar40 = *(undefined4 *)puVar10;
      do {
        if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
      } while (9 < *piVar36);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_001115b0;
      while( true ) {
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
        goto LAB_00111580;
        while ((cVar14 = (**(code **)(*plVar12 + 0x720))(plVar12),
               (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_00111580:
          (**(code **)(*plVar12 + 0x720))(plVar12);
        }
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_001115b0:
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
        goto LAB_001116b0;
        while (((**(code **)(*plVar12 + 0x720))(plVar12),
               (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_001116b0:
          (**(code **)(*plVar12 + 0x720))(plVar12);
        }
      }
      do {
        if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
      } while (9 < *piVar36);
      if (cVar14 == '\0') {
        uVar40 = *(undefined4 *)puVar10;
        do {
          if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
        } while (9 < *piVar36);
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
        goto LAB_00111898;
        while( true ) {
          if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
          goto LAB_00111810;
          while( true ) {
            plVar12 = local_d0;
            uVar17 = FUN_00112c50(local_d0,&DAT_001019a8);
            local_70 = (undefined1 *)FUN_00114f70(plVar12,uVar17);
            uVar18 = FUN_001154f4(plVar12);
            uVar19 = FUN_00115cb8(plVar12,uVar18);
            local_80 = (undefined1 *)FUN_00116104(plVar12,uVar17);
            uVar17 = FUN_00116104(plVar12,uVar18);
            uVar18 = (**(code **)(*plVar12 + 0x580))(plVar12,0x400);
            if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111810:
            plVar12 = local_d0;
            uVar17 = FUN_00112c50(local_d0,&DAT_001019a8);
            FUN_00114f70(plVar12,uVar17);
            uVar18 = FUN_001154f4(plVar12);
            FUN_00115cb8(plVar12,uVar18);
            FUN_00116104(plVar12,uVar17);
            FUN_00116104(plVar12,uVar18);
            (**(code **)(*plVar12 + 0x580))(plVar12,0x400);
          }
          if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111898:
          if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
          goto LAB_00111dcc;
          while( true ) {
            plVar12 = local_d0;
            uVar17 = FUN_00112c50(local_d0,&DAT_001019a8);
            FUN_00114f70(plVar12,uVar17);
            uVar18 = FUN_001154f4(plVar12);
            FUN_00115cb8(plVar12,uVar18);
            FUN_00116104(plVar12,uVar17);
            FUN_00116104(plVar12,uVar18);
            (**(code **)(*plVar12 + 0x580))(plVar12,0x400);
            if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111dcc:
            plVar12 = local_d0;
            uVar17 = FUN_00112c50(local_d0,&DAT_001019a8);
            FUN_00114f70(plVar12,uVar17);
            uVar18 = FUN_001154f4(plVar12);
            FUN_00115cb8(plVar12,uVar18);
            FUN_00116104(plVar12,uVar17);
            FUN_00116104(plVar12,uVar18);
            (**(code **)(*plVar12 + 0x580))(plVar12,0x400);
          }
        }
        do {
          local_88 = (undefined4 *)uVar17;
          if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
        } while (9 < *piVar36);
LAB_001118e4:
        uVar40 = *(undefined4 *)puVar10;
        do {
          if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
        } while (9 < *piVar36);
        if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
        goto LAB_00111970;
        while( true ) {
          plVar12 = local_d0;
          iVar15 = FUN_00125bb8(local_d0,uVar16,local_70,uVar18);
          cVar14 = (**(code **)(*plVar12 + 0x720))(plVar12);
          if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111970:
          if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
          goto LAB_00111a40;
          while( true ) {
            plVar12 = local_d0;
            FUN_00125bb8(local_d0,uVar16,local_70,uVar18);
            (**(code **)(*plVar12 + 0x720))(plVar12);
            if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111a40:
            plVar12 = local_d0;
            FUN_00125bb8(local_d0,uVar16,local_70,uVar18);
            (**(code **)(*plVar12 + 0x720))(plVar12);
          }
        }
        do {
          if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
        } while (9 < *piVar36);
        if (cVar14 == '\0') {
          uVar40 = *(undefined4 *)puVar10;
          do {
            if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
          } while (9 < *piVar36);
          if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
          goto LAB_00111ab0;
          do {
            uVar40 = *(undefined4 *)puVar10;
            do {
              if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
            } while (9 < *piVar36);
            if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10))
            goto LAB_00111adc;
LAB_00111ab0:
            uVar40 = *(undefined4 *)puVar10;
            do {
              if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
            } while (9 < *piVar36);
          } while( true );
        }
        goto LAB_00111cbc;
      }
    }
    uVar40 = *(undefined4 *)puVar10;
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_0011173c;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0011170c;
      while (((**(code **)(*plVar12 + 0x88))(plVar12),
             (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_0011170c:
        (**(code **)(*plVar12 + 0x88))(plVar12);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_0011173c:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_00111d34;
      while (((**(code **)(*plVar12 + 0x88))(plVar12),
             (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_00111d34:
        (**(code **)(*plVar12 + 0x88))(plVar12);
      }
    }
  }
  else {
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00111200;
    while( true ) {
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_001111d0;
      while (((**(code **)(*plVar12 + 0x88))(plVar12),
             (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_001111d0:
        (**(code **)(*plVar12 + 0x88))(plVar12);
      }
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111200:
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36))
      goto LAB_0011142c;
      while (((**(code **)(*plVar12 + 0x88))(plVar12),
             (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_0011142c:
        (**(code **)(*plVar12 + 0x88))(plVar12);
      }
    }
    do {
      if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
    } while (9 < *piVar36);
  }
  goto LAB_0010c784;
LAB_00111adc:
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  if (iVar15 < 1) goto LAB_00111eec;
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00111bfc;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00111bac;
    while( true ) {
      plVar12 = local_d0;
      FUN_00125904(local_d0,lVar29,uVar19,uVar18,0,iVar15);
      cVar14 = (**(code **)(*plVar12 + 0x720))(plVar12);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111bac:
      plVar12 = local_d0;
      FUN_00125904(local_d0,lVar29,uVar19,uVar18,0,iVar15);
      (**(code **)(*plVar12 + 0x720))(plVar12);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111bfc:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00111c88;
    while( true ) {
      plVar12 = local_d0;
      FUN_00125904(local_d0,lVar29,uVar19,uVar18,0,iVar15);
      (**(code **)(*plVar12 + 0x720))(plVar12);
      if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111c88:
      plVar12 = local_d0;
      FUN_00125904(local_d0,lVar29,uVar19,uVar18,0,iVar15);
      (**(code **)(*plVar12 + 0x720))(plVar12);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  if (cVar14 != '\0') goto LAB_00111cbc;
  goto LAB_001118e4;
LAB_00111cbc:
  plVar12 = local_d0;
  uVar40 = *(undefined4 *)puVar10;
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
  if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00111eb0;
  while( true ) {
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00111e80;
    while (((**(code **)(*plVar12 + 0x88))(plVar12),
           (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_00111e80:
      (**(code **)(*plVar12 + 0x88))(plVar12);
    }
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) || (*piVar36 < 10)) break;
LAB_00111eb0:
    if (((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0) && (9 < *piVar36)) goto LAB_00112000;
    while (((**(code **)(*plVar12 + 0x88))(plVar12),
           (*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) != 0 && (9 < *piVar36))) {
LAB_00112000:
      (**(code **)(*plVar12 + 0x88))(plVar12);
    }
  }
  do {
    if ((*(int *)puVar10 * (*(int *)puVar10 + -1) & 1U) == 0) break;
  } while (9 < *piVar36);
LAB_00111eec:
  puVar34 = local_80;
  plVar12 = local_d0;
  FUN_00125904(local_d0,uVar16,local_80);
  (**(code **)(*plVar12 + 0x88))(plVar12);
  lVar28 = local_78;
  FUN_00125904(plVar12,local_78,puVar34);
  (**(code **)(*plVar12 + 0x88))(plVar12);
  FUN_00125904(plVar12,lVar29,local_88);
  (**(code **)(*plVar12 + 0x88))(plVar12);
  (**(code **)(*plVar12 + 0xb8))(plVar12,uVar18);
  (**(code **)(*plVar12 + 0xb8))(plVar12,lVar29);
  (**(code **)(*plVar12 + 0xb8))(plVar12,uVar16);
  (**(code **)(*plVar12 + 0xb8))(plVar12,uVar20);
  (**(code **)(*plVar12 + 0xb8))(plVar12,lVar26);
  (**(code **)(*plVar12 + 0xb8))(plVar12,lVar28);
  goto LAB_0010c784;
}


