// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00124ae8; body: [[00124ae8, 00124e5b]]

undefined8 JNI_OnLoad(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar3 = PTR_y_52_0012a730;
  puVar2 = PTR_x_51_0012a728;
  puVar7 = (undefined8 *)&stack0xffffffffffffffc0;
  uVar1 = *(undefined4 *)PTR_x_51_0012a728;
  do {
    if ((*(int *)PTR_x_51_0012a728 * (*(int *)PTR_x_51_0012a728 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_52_0012a730);
  puVar6 = (undefined8 *)&stack0xffffffffffffffc0;
  if (((*(int *)PTR_x_51_0012a728 * (*(int *)PTR_x_51_0012a728 + -1) & 1U) != 0) &&
     (puVar6 = (undefined8 *)&stack0xffffffffffffffc0, 9 < *(int *)PTR_y_52_0012a730))
  goto LAB_00124bfc;
  while( true ) {
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) &&
       (puVar7 = puVar6, 9 < *(int *)puVar3)) goto LAB_00124bb8;
    while( true ) {
      puVar7 = puVar6 + -2;
      lVar8 = *param_1;
      puVar6[-2] = 0;
      iVar4 = (**(code **)(lVar8 + 0x30))(param_1,puVar7,0x10001);
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_00124bb8:
      puVar6 = puVar7 + -2;
      lVar8 = *param_1;
      puVar7[-2] = 0;
      (**(code **)(lVar8 + 0x30))(param_1,puVar6,0x10001);
    }
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_00124bfc:
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) &&
       (puVar6 = puVar7, 9 < *(int *)puVar3)) goto LAB_00124e04;
    while( true ) {
      puVar6 = (undefined8 *)((long)puVar7 + -0x10);
      lVar8 = *param_1;
      *(undefined8 *)((long)puVar7 + -0x10) = 0;
      (**(code **)(lVar8 + 0x30))(param_1,puVar6,0x10001);
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_00124e04:
      puVar7 = (undefined8 *)((long)puVar6 + -0x10);
      lVar8 = *param_1;
      *(undefined8 *)((long)puVar6 + -0x10) = 0;
      (**(code **)(lVar8 + 0x30))(param_1,puVar7,0x10001);
    }
  }
  do {
    if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
  } while (9 < *(int *)puVar3);
  if (iVar4 == 0) {
    uVar1 = *(undefined4 *)puVar2;
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
    goto LAB_00124cf0;
    while( true ) {
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
      goto LAB_00124cc8;
      while ((FUN_00121758(*puVar7), (*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar3))) {
LAB_00124cc8:
        FUN_00121758(*puVar7);
      }
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_00124cf0:
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) && (9 < *(int *)puVar3))
      goto LAB_00124e50;
      while ((FUN_00121758(*puVar7), (*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0 &&
             (9 < *(int *)puVar3))) {
LAB_00124e50:
        FUN_00121758(*puVar7);
      }
    }
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    uVar5 = 0x10006;
  }
  else {
    uVar5 = 0;
  }
LAB_00124d30:
  do {
    if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) {
      if (9 < *(int *)puVar3) goto LAB_00124d30;
    }
    uVar1 = *(undefined4 *)puVar2;
    do {
      if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) break;
    } while (9 < *(int *)puVar3);
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) {
      do {
        if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) {
          return uVar5;
        }
      } while (9 < *(int *)puVar3);
      return uVar5;
    }
  } while( true );
}


