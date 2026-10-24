// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00115cb8; body: [[00115cb8, 00116103]]

void FUN_00115cb8(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  
  puVar4 = PTR_y_34_0012a6a0;
  puVar3 = PTR_x_33_0012a698;
  puVar10 = &stack0xffffffffffffffb0;
  puVar5 = &stack0xffffffffffffffb0;
  if (((*(int *)PTR_x_33_0012a698 * (*(int *)PTR_x_33_0012a698 + -1) & 1U) != 0) &&
     (puVar5 = &stack0xffffffffffffffb0, 9 < *(int *)PTR_y_34_0012a6a0)) goto LAB_00115d74;
  while( true ) {
    puVar10 = puVar5 + -0x100;
    lVar8 = *param_1;
    *(undefined2 *)(puVar5 + -0x5c) = 0x65;
    *(int *)(puVar5 + -0x60) = (int)DAT_00101448;
    pcVar6 = *(code **)(lVar8 + 0x108);
    *(undefined8 *)(puVar5 + -0x100) = s_Asia_MangetFiles__BII_V_00101450._16_8_;
    (*pcVar6)(param_1,param_2,puVar5 + -0x60,puVar10);
    if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) || (*(int *)puVar4 < 10)) break;
LAB_00115d74:
    puVar5 = puVar10 + -0x100;
    lVar8 = *param_1;
    *(undefined2 *)(puVar10 + -0x5c) = 0x65;
    *(int *)(puVar10 + -0x60) = (int)DAT_00101448;
    pcVar6 = *(code **)(lVar8 + 0x108);
    *(undefined8 *)(puVar10 + -0x100) = s_Asia_MangetFiles__BII_V_00101450._16_8_;
    (*pcVar6)(param_1,param_2);
  }
  do {
    if ((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar4);
  uVar7 = 0x60;
  puVar5 = puVar5 + -0x60;
  do {
    uVar1 = *(undefined4 *)puVar3;
    do {
      if ((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar4);
    if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) != 0) && (9 < *(int *)puVar4))
    goto LAB_00115eb0;
    while( true ) {
      if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) != 0) && (9 < *(int *)puVar4))
      goto LAB_00115e8c;
      while( true ) {
        *puVar5 = 0;
        uVar2 = -uVar7;
        if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) || (*(int *)puVar4 < 10)) break;
LAB_00115e8c:
        *puVar5 = 0;
      }
      if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) || (*(int *)puVar4 < 10)) break;
LAB_00115eb0:
      if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) != 0) && (9 < *(int *)puVar4))
      goto LAB_00115f10;
      while ((*puVar5 = 0, (*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar4))) {
LAB_00115f10:
        *puVar5 = 0;
      }
    }
    do {
      if ((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar4);
    uVar7 = ~uVar2;
    puVar5 = puVar5 + 1;
  } while (~uVar2 != 0);
  lVar8 = 0xa0;
  do {
    uVar1 = *(undefined4 *)puVar3;
    do {
      if ((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar4);
    if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) != 0) && (9 < *(int *)puVar4))
    goto LAB_00115fd8;
    while( true ) {
      if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) != 0) && (9 < *(int *)puVar4))
      goto LAB_00115fb4;
      while( true ) {
        *puVar10 = 0;
        lVar9 = lVar8 + -1;
        if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) || (*(int *)puVar4 < 10)) break;
LAB_00115fb4:
        *puVar10 = 0;
      }
      if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) || (*(int *)puVar4 < 10)) break;
LAB_00115fd8:
      if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) != 0) && (9 < *(int *)puVar4))
      goto LAB_00116038;
      while ((*puVar10 = 0, (*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar4))) {
LAB_00116038:
        *puVar10 = 0;
      }
    }
    do {
      if ((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar4);
    lVar8 = lVar9;
    puVar10 = puVar10 + 1;
  } while (lVar9 != 0);
  uVar1 = *(undefined4 *)puVar3;
  do {
    if ((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar4);
LAB_00116078:
  do {
    if ((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar4) goto LAB_00116078;
    }
    uVar1 = *(undefined4 *)puVar3;
    do {
      if ((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar4);
    if (((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) || (*(int *)puVar4 < 10)) {
      do {
        if ((*(int *)puVar3 * (*(int *)puVar3 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *(int *)puVar4);
      return;
    }
  } while( true );
}


