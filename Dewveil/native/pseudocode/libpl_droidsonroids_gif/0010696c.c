// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 0010696c; body: [[0010696c, 00106a43]]

ulong Java_pl_droidsonroids_gif_GifInfoHandle_getAllocationByteCount
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar5 = *(ulong *)(param_3 + 0x60);
  if (uVar5 == 0) {
    uVar8 = *(ulong *)(*(long *)(param_3 + 8) + 0x20);
    if (uVar8 == 0) {
      uVar5 = 0;
      lVar9 = *(long *)(param_3 + 0x48);
      goto joined_r0x00106a04;
    }
    lVar9 = *(long *)(param_3 + 0x10);
    lVar2 = *(long *)(param_3 + 0x18);
    uVar10 = 0;
    plVar12 = (long *)(*(long *)(*(long *)(param_3 + 8) + 0x58) + 0x18);
    uVar6 = 0;
    do {
      lVar1 = plVar12[-1];
      lVar3 = *plVar12;
      uVar10 = uVar10 + 1;
      plVar12 = plVar12 + 6;
      lVar13 = lVar3 - lVar2;
      uVar5 = lVar3 * lVar1;
      bVar4 = lVar1 - lVar9 < 0;
      if (((lVar3 == lVar2 || lVar13 < 0) && lVar1 == lVar9 || lVar13 < 1 && bVar4) && uVar5 < uVar6
          || ((lVar3 == lVar2 || lVar13 < 0) && lVar1 == lVar9 || lVar13 < 1 && bVar4) &&
             uVar5 - uVar6 == 0) {
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (uVar10 < uVar8);
  }
  lVar9 = *(long *)(param_3 + 0x48);
joined_r0x00106a04:
  if (lVar9 == 0) {
    uVar8 = *(ulong *)(*(long *)(param_3 + 8) + 0x20);
    if (1 < uVar8) {
      pcVar11 = *(char **)(param_3 + 0x40);
      uVar10 = 1;
      do {
        pcVar11 = pcVar11 + 0x18;
        if (*pcVar11 == '\x03') goto LAB_001069d0;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
    }
  }
  else {
LAB_001069d0:
    iVar7 = *(int *)(param_3 + 0x8c);
    if (iVar7 == 0) {
      iVar7 = **(int **)(param_3 + 8);
    }
    uVar5 = uVar5 + (long)iVar7 * *(long *)(*(int **)(param_3 + 8) + 2) * 4;
  }
  return uVar5;
}


