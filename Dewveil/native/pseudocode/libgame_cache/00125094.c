// Ghidra pseudocode. Not original C/C++ source.
// Program: libgame_cache.so
// Executable SHA256: a3121028ad9d0d985eaa5e9bf747dc3fd5c7b8899f55d559ad1d38c5558aaef8
// Entry: 00125094; body: [[00125094, 00125363]]

void FUN_00125094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 local_f0 [2];
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar3 = PTR_y_6_0012a5c0;
  puVar2 = PTR_x_5_0012a5b8;
  puVar4 = local_f0;
  uVar1 = *(undefined4 *)PTR_x_5_0012a5b8;
  do {
    if ((*(int *)PTR_x_5_0012a5b8 * (*(int *)PTR_x_5_0012a5b8 + -1) & 1U) == 0) break;
  } while (9 < *(int *)PTR_y_6_0012a5c0);
  puVar5 = local_f0;
  local_f0[0] = param_1;
  uStack_e0 = param_2;
  local_d0 = param_3;
  uStack_c0 = param_4;
  local_b0 = param_5;
  uStack_a0 = param_6;
  local_90 = param_7;
  uStack_80 = param_8;
  local_68 = param_12;
  uStack_60 = param_13;
  local_58 = param_14;
  uStack_50 = param_15;
  local_48 = param_16;
  if (((*(int *)PTR_x_5_0012a5b8 * (*(int *)PTR_x_5_0012a5b8 + -1) & 1U) != 0) &&
     (puVar5 = local_f0, 9 < *(int *)PTR_y_6_0012a5c0)) goto LAB_00125238;
  while( true ) {
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) &&
       (puVar4 = puVar5, 9 < *(int *)puVar3)) goto LAB_001251bc;
    while( true ) {
      puVar4 = (undefined8 *)((long)puVar5 + -0x40);
      *(BADSPACEBASE **)((long)puVar5 + -0x20) = register0x00000008;
      *(undefined1 **)((long)puVar5 + -0x18) = &stack0xffffffffffffffc0;
      *(undefined1 **)((long)puVar5 + -0x10) = auStack_70;
      *(undefined8 *)((long)puVar5 + -8) = 0xffffff80ffffffd8;
      pcVar6 = *(code **)(*param_9 + 0x118);
      *(undefined8 *)((long)puVar5 + -0x38) = *(undefined8 *)((long)puVar5 + -0x18);
      *(undefined8 *)((long)puVar5 + -0x40) = *(undefined8 *)((long)puVar5 + -0x20);
      *(undefined8 *)((long)puVar5 + -0x28) = *(undefined8 *)((long)puVar5 + -8);
      *(undefined8 *)((long)puVar5 + -0x30) = *(undefined8 *)((long)puVar5 + -0x10);
      (*pcVar6)(param_9,param_10,param_11);
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_001251bc:
      puVar5 = (undefined8 *)((long)puVar4 + -0x40);
      *(BADSPACEBASE **)((long)puVar4 + -0x20) = register0x00000008;
      *(undefined1 **)((long)puVar4 + -0x18) = &stack0xffffffffffffffc0;
      *(undefined1 **)((long)puVar4 + -0x10) = auStack_70;
      *(undefined8 *)((long)puVar4 + -8) = 0xffffff80ffffffd8;
      pcVar6 = *(code **)(*param_9 + 0x118);
      *(undefined8 *)((long)puVar4 + -0x38) = *(undefined8 *)((long)puVar4 + -0x18);
      *(undefined8 *)((long)puVar4 + -0x40) = *(undefined8 *)((long)puVar4 + -0x20);
      *(undefined8 *)((long)puVar4 + -0x28) = *(undefined8 *)((long)puVar4 + -8);
      *(undefined8 *)((long)puVar4 + -0x30) = *(undefined8 *)((long)puVar4 + -0x10);
      (*pcVar6)(param_9,param_10,param_11);
    }
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_00125238:
    if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) != 0) &&
       (puVar5 = puVar4, 9 < *(int *)puVar3)) goto LAB_00125304;
    while( true ) {
      puVar5 = (undefined8 *)((long)puVar4 + -0x40);
      *(BADSPACEBASE **)((long)puVar4 + -0x20) = register0x00000008;
      *(undefined1 **)((long)puVar4 + -0x18) = &stack0xffffffffffffffc0;
      *(undefined1 **)((long)puVar4 + -0x10) = auStack_70;
      *(undefined8 *)((long)puVar4 + -8) = 0xffffff80ffffffd8;
      pcVar6 = *(code **)(*param_9 + 0x118);
      *(undefined8 *)((long)puVar4 + -0x38) = *(undefined8 *)((long)puVar4 + -0x18);
      *(undefined8 *)((long)puVar4 + -0x40) = *(undefined8 *)((long)puVar4 + -0x20);
      *(undefined8 *)((long)puVar4 + -0x28) = *(undefined8 *)((long)puVar4 + -8);
      *(undefined8 *)((long)puVar4 + -0x30) = *(undefined8 *)((long)puVar4 + -0x10);
      (*pcVar6)(param_9,param_10,param_11);
      if (((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) || (*(int *)puVar3 < 10)) break;
LAB_00125304:
      puVar4 = (undefined8 *)((long)puVar5 + -0x40);
      *(BADSPACEBASE **)((long)puVar5 + -0x20) = register0x00000008;
      *(undefined1 **)((long)puVar5 + -0x18) = &stack0xffffffffffffffc0;
      *(undefined1 **)((long)puVar5 + -0x10) = auStack_70;
      *(undefined8 *)((long)puVar5 + -8) = 0xffffff80ffffffd8;
      pcVar6 = *(code **)(*param_9 + 0x118);
      *(undefined8 *)((long)puVar5 + -0x38) = *(undefined8 *)((long)puVar5 + -0x18);
      *(undefined8 *)((long)puVar5 + -0x40) = *(undefined8 *)((long)puVar5 + -0x20);
      *(undefined8 *)((long)puVar5 + -0x28) = *(undefined8 *)((long)puVar5 + -8);
      *(undefined8 *)((long)puVar5 + -0x30) = *(undefined8 *)((long)puVar5 + -0x10);
      (*pcVar6)(param_9,param_10,param_11);
    }
  }
  do {
    if ((*(int *)puVar2 * (*(int *)puVar2 + -1) & 1U) == 0) {
      return;
    }
  } while (9 < *(int *)puVar3);
  return;
}


