// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00116104; body: [[00116104, 001165a7]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00116104(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  
  puVar3 = PTR_y_36_0012a6b0;
  puVar2 = PTR_x_35_0012a6a8;
  puVar8 = &stack0xffffffffffffffb0;
  uVar1 = *(undefined4 *)PTR_x_35_0012a6a8;
  do {
    if ((*(int *)PTR_x_35_0012a6a8 * (*(int *)PTR_x_35_0012a6a8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_36_0012a6b0);
  puVar4 = &stack0xffffffffffffffb0;
  if (((*(int *)PTR_x_35_0012a6a8 * (*(int *)PTR_x_35_0012a6a8 + -1) & 1U) != 0) &&
     (puVar4 = &stack0xffffffffffffffb0, 9 < *(int *)PTR_y_36_0012a6b0)) goto LAB_001161e8;
  while( true ) {
    puVar8 = puVar4 + -0x100;
    lVar6 = *param_1;
    *(undefined2 *)(puVar4 + -0x5c) = 0x65;
    *(int *)(puVar4 + -0x60) = (int)ram0x00101400;
    pcVar5 = *(code **)(lVar6 + 0x108);
    *(int *)(puVar4 + -0x100) = (int)DAT_001013c8;
    (*pcVar5)(param_1,param_2,puVar4 + -0x60,puVar8);
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001161e8:
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) &&
       (puVar4 = puVar8, 9 < *(int *)puVar3)) goto LAB_00116560;
    while( true ) {
      puVar4 = puVar8 + -0x100;
      lVar6 = *param_1;
      *(undefined2 *)(puVar8 + -0x5c) = 0x65;
      *(int *)(puVar8 + -0x60) = (int)ram0x00101400;
      pcVar5 = *(code **)(lVar6 + 0x108);
      *(int *)(puVar8 + -0x100) = (int)DAT_001013c8;
      (*pcVar5)(param_1,param_2);
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_00116560:
      puVar8 = puVar4 + -0x100;
      lVar6 = *param_1;
      *(undefined2 *)(puVar4 + -0x5c) = 0x65;
      *(int *)(puVar4 + -0x60) = (int)ram0x00101400;
      pcVar5 = *(code **)(lVar6 + 0x108);
      *(int *)(puVar4 + -0x100) = (int)DAT_001013c8;
      (*pcVar5)(param_1,param_2);
    }
  }
  do {
    if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar3);
  lVar6 = 0x60;
  puVar4 = puVar4 + -0x60;
  do {
    uVar1 = *(undefined4 *)puVar2;
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
    goto LAB_001162b8;
    while( true ) {
      *puVar4 = 0;
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001162b8:
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
      goto LAB_00116330;
      while ((*puVar4 = 0, (*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar3))) {
LAB_00116330:
        *puVar4 = 0;
      }
    }
    lVar6 = ~(0x7d778c0f12b9e5e6U - lVar6) + 0x7d778c0f12b9e5e6;
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  lVar6 = 0xa0;
  do {
    uVar1 = *(undefined4 *)puVar2;
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
    goto LAB_001163f8;
    while( true ) {
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
      goto LAB_001163d4;
      while( true ) {
        *puVar8 = 0;
        lVar7 = lVar6 + -1;
        if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001163d4:
        *puVar8 = 0;
      }
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001163f8:
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
      goto LAB_00116434;
      while ((*puVar8 = 0, (*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar3))) {
LAB_00116434:
        *puVar8 = 0;
      }
    }
    lVar6 = lVar7;
    puVar8 = puVar8 + 1;
  } while (lVar7 != 0);
  uVar1 = *(undefined4 *)puVar2;
  do {
    if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar3);
LAB_00116474:
  do {
    if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar3) goto LAB_00116474;
    }
    uVar1 = *(undefined4 *)puVar2;
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) {
      do {
        if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) {
          return;
        }
      } while (9 < *(int *)puVar3);
      return;
    }
  } while( true );
}


