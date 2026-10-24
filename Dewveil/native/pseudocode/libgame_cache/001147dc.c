// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 001147dc; body: [[001147dc, 00114f6f]]

void FUN_001147dc(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  
  puVar10 = PTR_y_28_0012a670;
  puVar9 = PTR_x_27_0012a668;
  uVar3 = *(undefined4 *)PTR_x_27_0012a668;
  do {
    if ((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_28_0012a670);
  puVar12 = &stack0xffffffffffffffb0;
  if (((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) != 0) &&
     (puVar12 = &stack0xffffffffffffffb0, puVar14 = &stack0xffffffffffffffb0,
     9 < *(int *)PTR_y_28_0012a670)) goto LAB_001148b4;
  while( true ) {
    if (((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) != 0) &&
       (puVar14 = puVar12, 9 < *(int *)PTR_y_28_0012a670)) goto LAB_0011488c;
    while ((puVar14 = puVar12 + -0x80,
           (*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_28_0012a670))) {
LAB_0011488c:
      puVar12 = puVar14 + -0x80;
    }
    if (((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) == 0) ||
       (*(int *)PTR_y_28_0012a670 < 10)) break;
LAB_001148b4:
    puVar12 = puVar14;
    if (((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_28_0012a670)) goto LAB_00114f14;
    while ((puVar12 = puVar12 + -0x80,
           (*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) != 0 &&
           (9 < *(int *)PTR_y_28_0012a670))) {
LAB_00114f14:
      puVar12 = puVar12 + -0x80;
    }
  }
  do {
    if ((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_28_0012a670);
  lVar13 = 0;
  iVar11 = 0x5a3ced19;
  do {
    uVar3 = *(undefined4 *)PTR_x_27_0012a668;
    do {
      if ((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_28_0012a670);
    cVar8 = (char)lVar13;
    if (((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) != 0) &&
       (9 < *(int *)PTR_y_28_0012a670)) goto LAB_00114b24;
    while( true ) {
      if (((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_28_0012a670)) goto LAB_00114a6c;
      while( true ) {
        bVar5 = (&DAT_00101980)[lVar13];
        bVar7 = cVar8 * '\x11' + 0x73;
        iVar4 = *(int *)PTR_x_27_0012a668;
        bVar7 = (((bVar7 ^ 0xff) & 0xbb | bVar7 & 0x44) ^ bVar5 ^ 0xbb) & bVar5 |
                bVar7 & (bVar7 ^ bVar5 ^ 0xff ^ 0xff);
        iVar2 = iVar11 * 0x41c64e6d + 0x3039;
        bVar6 = (byte)((uint)iVar2 >> 0x10);
        bVar5 = ((bVar7 ^ 0xff) & 0x86 | bVar7 & 0x79) ^ 0x86 | bVar6 ^ 0xff;
        bVar7 = (~bVar7 ^ bVar6 ^ 0xff) & bVar7;
        puVar14[lVar13] =
             (bVar5 & 0x8a | (bVar5 ^ 0xff) & 0x75) ^ ((bVar7 ^ 0xff) & 0x8a | bVar7 & 0x75) |
             (bVar5 | bVar7 ^ 0xff) ^ 0xff;
        lVar1 = lVar13 + 1;
        if (((iVar4 * (iVar4 + -1) & 1U) == 0) || (*(int *)PTR_y_28_0012a670 < 10)) break;
LAB_00114a6c:
        bVar5 = (&DAT_00101980)[lVar13];
        bVar7 = cVar8 * '\x11' + 0x73;
        bVar7 = (((bVar7 ^ 0xff) & 0xbb | bVar7 & 0x44) ^ bVar5 ^ 0xbb) & bVar5 |
                bVar7 & (bVar7 ^ bVar5 ^ 0xff ^ 0xff);
        bVar6 = (byte)((uint)(iVar11 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar5 = ((bVar7 ^ 0xff) & 0x86 | bVar7 & 0x79) ^ 0x86 | bVar6 ^ 0xff;
        bVar7 = (~bVar7 ^ bVar6 ^ 0xff) & bVar7;
        puVar14[lVar13] =
             (bVar5 & 0x8a | (bVar5 ^ 0xff) & 0x75) ^ ((bVar7 ^ 0xff) & 0x8a | bVar7 & 0x75) |
             (bVar5 | bVar7 ^ 0xff) ^ 0xff;
      }
      if (((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) == 0) ||
         (*(int *)PTR_y_28_0012a670 < 10)) break;
LAB_00114b24:
      if (((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) != 0) &&
         (9 < *(int *)PTR_y_28_0012a670)) goto LAB_00114c18;
      while( true ) {
        bVar5 = (&DAT_00101980)[lVar13];
        bVar7 = cVar8 * '\x11' + 0x73;
        iVar2 = *(int *)PTR_x_27_0012a668;
        bVar7 = (((bVar7 ^ 0xff) & 0xbb | bVar7 & 0x44) ^ bVar5 ^ 0xbb) & bVar5 |
                bVar7 & (bVar7 ^ bVar5 ^ 0xff ^ 0xff);
        bVar6 = (byte)((uint)(iVar11 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar5 = ((bVar7 ^ 0xff) & 0x86 | bVar7 & 0x79) ^ 0x86 | bVar6 ^ 0xff;
        bVar7 = (~bVar7 ^ bVar6 ^ 0xff) & bVar7;
        puVar14[lVar13] =
             (bVar5 & 0x8a | (bVar5 ^ 0xff) & 0x75) ^ ((bVar7 ^ 0xff) & 0x8a | bVar7 & 0x75) |
             (bVar5 | bVar7 ^ 0xff) ^ 0xff;
        if (((iVar2 * (iVar2 + -1) & 1U) == 0) || (*(int *)PTR_y_28_0012a670 < 10)) break;
LAB_00114c18:
        bVar5 = (&DAT_00101980)[lVar13];
        bVar7 = cVar8 * '\x11' + 0x73;
        bVar7 = (((bVar7 ^ 0xff) & 0xbb | bVar7 & 0x44) ^ bVar5 ^ 0xbb) & bVar5 |
                bVar7 & (bVar7 ^ bVar5 ^ 0xff ^ 0xff);
        bVar6 = (byte)((uint)(iVar11 * 0x41c64e6d + 0x3039) >> 0x10);
        bVar5 = ((bVar7 ^ 0xff) & 0x86 | bVar7 & 0x79) ^ 0x86 | bVar6 ^ 0xff;
        bVar7 = (~bVar7 ^ bVar6 ^ 0xff) & bVar7;
        puVar14[lVar13] =
             (bVar5 & 0x8a | (bVar5 ^ 0xff) & 0x75) ^ ((bVar7 ^ 0xff) & 0x8a | bVar7 & 0x75) |
             (bVar5 | bVar7 ^ 0xff) ^ 0xff;
      }
    }
    do {
      if ((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) == 0) break;
    } while (9 < *(int *)PTR_y_28_0012a670);
    lVar13 = lVar1;
    iVar11 = iVar2;
  } while (lVar1 != 0x18);
  uVar3 = *(undefined4 *)PTR_x_27_0012a668;
  do {
    if ((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_28_0012a670);
  if (((*(int *)PTR_x_27_0012a668 * (*(int *)PTR_x_27_0012a668 + -1) & 1U) != 0) &&
     (9 < *(int *)PTR_y_28_0012a670)) goto LAB_00114d80;
  while( true ) {
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_00114d48;
    while( true ) {
      lVar13 = *param_1;
      puVar12[-0x68] = 0;
      (**(code **)(lVar13 + 0x30))(param_1,puVar14);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00114d48:
      lVar13 = *param_1;
      puVar12[-0x68] = 0;
      (**(code **)(lVar13 + 0x30))(param_1,puVar14);
    }
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00114d80:
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_00114f54;
    while( true ) {
      lVar13 = *param_1;
      puVar12[-0x68] = 0;
      (**(code **)(lVar13 + 0x30))(param_1,puVar14);
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00114f54:
      lVar13 = *param_1;
      puVar12[-0x68] = 0;
      (**(code **)(lVar13 + 0x30))(param_1,puVar14);
    }
  }
  lVar13 = 0x80;
  do {
    uVar3 = *(undefined4 *)puVar9;
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
    goto LAB_00114e90;
    while( true ) {
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) != 0) && (9 < *(int *)puVar10))
      goto LAB_00114e6c;
      while( true ) {
        *puVar14 = 0;
        lVar1 = ~(0x8b86c141a9d470e1U - lVar13) + 0x8b86c141a9d470e1;
        if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00114e6c:
        *puVar14 = 0;
      }
      if (((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) || (*(int *)puVar10 < 10)) break;
LAB_00114e90:
      *puVar14 = 0;
    }
    do {
      if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar10);
    lVar13 = lVar1;
    puVar14 = puVar14 + 1;
    if (lVar1 == 0) {
      do {
        if ((*(int *)puVar9 * (*(int *)puVar9 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *(int *)puVar10);
      return;
    }
  } while( true );
}


