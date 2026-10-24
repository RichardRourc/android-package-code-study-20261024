// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00114f70; body: [[00114f70, 001154f3]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00114f70(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  
  puVar3 = PTR_y_30_0012a680;
  puVar2 = PTR_x_29_0012a678;
  puVar8 = &stack0xffffffffffffffb0;
  uVar1 = *(undefined4 *)PTR_x_29_0012a678;
  do {
    if ((*(int *)PTR_x_29_0012a678 * (*(int *)PTR_x_29_0012a678 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_30_0012a680);
  puVar4 = &stack0xffffffffffffffb0;
  if (((*(int *)PTR_x_29_0012a678 * (*(int *)PTR_x_29_0012a678 + -1) & 1U) != 0) &&
     (puVar4 = &stack0xffffffffffffffb0, 9 < *(int *)PTR_y_30_0012a680)) goto LAB_001150dc;
  while( true ) {
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) &&
       (puVar8 = puVar4, 9 < *(int *)puVar3)) goto LAB_00115074;
    while( true ) {
      puVar8 = puVar4 + -0x100;
      lVar5 = *param_1;
      puVar4[-0x5c] = 0;
      pcVar6 = *(code **)(lVar5 + 0x108);
      *(int *)(puVar4 + -0x60) = (int)ram0x00101370;
      *(int *)(puVar4 + -0x100) = (int)DAT_00101438;
      *(undefined2 *)(puVar4 + -0xfc) = 0x49;
      (*pcVar6)(param_1,param_2,puVar4 + -0x60,puVar8);
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_00115074:
      puVar4 = puVar8 + -0x100;
      lVar5 = *param_1;
      puVar8[-0x5c] = 0;
      pcVar6 = *(code **)(lVar5 + 0x108);
      *(int *)(puVar8 + -0x60) = (int)ram0x00101370;
      *(int *)(puVar8 + -0x100) = (int)DAT_00101438;
      *(undefined2 *)(puVar8 + -0xfc) = 0x49;
      (*pcVar6)(param_1,param_2);
    }
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001150dc:
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) &&
       (puVar4 = puVar8, 9 < *(int *)puVar3)) goto LAB_001154a8;
    while( true ) {
      puVar4 = puVar8 + -0x100;
      lVar5 = *param_1;
      puVar8[-0x5c] = 0;
      pcVar6 = *(code **)(lVar5 + 0x108);
      *(int *)(puVar8 + -0x60) = (int)ram0x00101370;
      *(int *)(puVar8 + -0x100) = (int)DAT_00101438;
      *(undefined2 *)(puVar8 + -0xfc) = 0x49;
      (*pcVar6)(param_1,param_2);
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001154a8:
      puVar8 = puVar4 + -0x100;
      lVar5 = *param_1;
      puVar4[-0x5c] = 0;
      pcVar6 = *(code **)(lVar5 + 0x108);
      *(int *)(puVar4 + -0x60) = (int)ram0x00101370;
      *(int *)(puVar4 + -0x100) = (int)DAT_00101438;
      *(undefined2 *)(puVar4 + -0xfc) = 0x49;
      (*pcVar6)(param_1,param_2);
    }
  }
  do {
    if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar3);
  lVar5 = 0x60;
  puVar4 = puVar4 + -0x60;
  do {
    uVar1 = *(undefined4 *)puVar2;
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
    goto LAB_001151f0;
    while( true ) {
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
      goto LAB_001151cc;
      while( true ) {
        *puVar4 = 0;
        lVar7 = ~(0xaf9c8ba20fa90125U - lVar5) + 0xaf9c8ba20fa90125;
        if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001151cc:
        *puVar4 = 0;
      }
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001151f0:
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
      goto LAB_00115250;
      while ((*puVar4 = 0, (*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar3))) {
LAB_00115250:
        *puVar4 = 0;
      }
    }
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    lVar5 = lVar7;
    puVar4 = puVar4 + 1;
  } while (lVar7 != 0);
  lVar5 = 0xa0;
  do {
    uVar1 = *(undefined4 *)puVar2;
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
    goto LAB_00115318;
    while( true ) {
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
      goto LAB_001152f4;
      while( true ) {
        *puVar8 = 0;
        lVar7 = lVar5 + -1;
        if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001152f4:
        *puVar8 = 0;
      }
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_00115318:
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
      goto LAB_00115378;
      while ((*puVar8 = 0, (*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar3))) {
LAB_00115378:
        *puVar8 = 0;
      }
    }
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    lVar5 = lVar7;
    puVar8 = puVar8 + 1;
  } while (lVar7 != 0);
  uVar1 = *(undefined4 *)puVar2;
  do {
    if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar3);
LAB_001153b8:
  do {
    if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar3) goto LAB_001153b8;
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


