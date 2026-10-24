// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001666a8; body: [[001666a8, 001668db]]

void FUN_001666a8(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  
  lVar5 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar5 + 8)) goto LAB_00166748;
  }
  else if ((lVar5 != param_1) &&
          (iVar4 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar5 + 8)), iVar4 != 0)) {
LAB_00166748:
    bVar10 = *(byte *)(param_2 + 0x4c);
    bVar9 = *(byte *)(param_2 + 0x4d);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(undefined2 *)(param_2 + 0x4c) = 0;
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar5 = (long)uVar6 >> 8;
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(*param_4 + lVar5);
    }
    iVar4 = 2;
    if ((uVar6 & 2) != 0) {
      iVar4 = param_5;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
    bVar2 = *(byte *)(param_2 + 0x4c);
    bVar3 = *(byte *)(param_2 + 0x4d);
    bVar10 = bVar2 | bVar10;
    bVar9 = bVar3 | bVar9;
    if (1 < uVar1) {
      puVar8 = (undefined8 *)(param_1 + 0x28);
      do {
        if ((*(byte *)(param_2 + 0x4e) & 1) != 0) break;
        if (bVar2 == 0) {
          if (bVar3 != 0) {
            bVar2 = *(byte *)(param_1 + 0x10);
            goto joined_r0x00166840;
          }
        }
        else {
          if (*(int *)(param_2 + 0x30) == 1) break;
          bVar2 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x00166840:
          if ((bVar2 & 1) == 0) break;
        }
        *(undefined2 *)(param_2 + 0x4c) = 0;
        uVar6 = puVar8[1];
        lVar5 = (long)uVar6 >> 8;
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)(*param_4 + lVar5);
        }
        puVar7 = puVar8 + 2;
        iVar4 = 2;
        if ((uVar6 & 2) != 0) {
          iVar4 = param_5;
        }
        (**(code **)(*(long *)*puVar8 + 0x28))
                  ((long *)*puVar8,param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
        bVar2 = *(byte *)(param_2 + 0x4c);
        bVar3 = *(byte *)(param_2 + 0x4d);
        bVar10 = bVar2 | bVar10 & 1;
        bVar9 = bVar3 | bVar9 & 1;
        puVar8 = puVar7;
      } while (puVar7 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
    }
    *(byte *)(param_2 + 0x4c) = bVar10 & 1;
    *(byte *)(param_2 + 0x4d) = bVar9 & 1;
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long **)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    iVar4 = param_5;
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_001668b4;
    }
    iVar4 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar4 = param_5;
    }
  }
  if (iVar4 != 1) {
    return;
  }
  if (*(int *)(param_2 + 0x48) != 1) {
    return;
  }
LAB_001668b4:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}


