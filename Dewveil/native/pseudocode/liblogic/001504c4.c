// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001504c4; body: [[001504c4, 001506a3]]

void FUN_001504c4(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  plVar4 = (long *)param_1[1];
  plVar1 = param_1 + 4;
  pvVar3 = *(void **)(lVar8 + 0x298);
  pvVar2 = (void *)(lVar8 + 0x2b0);
  if (plVar4 == plVar1) {
    if (pvVar3 != pvVar2) {
      free(pvVar3);
      *(void **)(lVar8 + 0x298) = pvVar2;
      plVar4 = (long *)param_1[1];
      *(void **)(lVar8 + 0x2a0) = pvVar2;
      *(long *)(lVar8 + 0x2a8) = lVar8 + 0x2d0;
    }
    plVar5 = plVar4;
    if (param_1[2] - (long)plVar4 != 0) {
      memmove(pvVar2,plVar4,param_1[2] - (long)plVar4);
      plVar4 = (long *)param_1[1];
      plVar5 = (long *)param_1[2];
    }
    *(long *)(lVar8 + 0x2a0) = (long)pvVar2 + ((long)plVar5 - (long)plVar4);
    param_1[2] = (long)plVar4;
  }
  else {
    *(long **)(lVar8 + 0x298) = plVar4;
    if (pvVar3 == pvVar2) {
      lVar7 = param_1[2];
      *(long *)(lVar8 + 0x2a8) = param_1[3];
      *(long *)(lVar8 + 0x2a0) = lVar7;
      param_1[1] = (long)plVar1;
      param_1[2] = (long)plVar1;
      param_1[3] = (long)(param_1 + 8);
    }
    else {
      param_1[1] = (long)pvVar3;
      lVar7 = *(long *)(lVar8 + 0x2a0);
      *(long *)(lVar8 + 0x2a0) = param_1[2];
      param_1[2] = lVar7;
      lVar7 = *(long *)(lVar8 + 0x2a8);
      *(long *)(lVar8 + 0x2a8) = param_1[3];
      param_1[2] = param_1[1];
      param_1[3] = lVar7;
    }
  }
  lVar8 = *param_1;
  plVar5 = (long *)param_1[8];
  plVar4 = param_1 + 0xb;
  pvVar3 = *(void **)(lVar8 + 0x240);
  pvVar2 = (void *)(lVar8 + 600);
  if (plVar5 == plVar4) {
    if (pvVar3 != pvVar2) {
      free(pvVar3);
      *(void **)(lVar8 + 0x240) = pvVar2;
      plVar5 = (long *)param_1[8];
      *(void **)(lVar8 + 0x248) = pvVar2;
      *(long *)(lVar8 + 0x250) = lVar8 + 0x298;
    }
    plVar6 = plVar5;
    if (param_1[9] - (long)plVar5 != 0) {
      memmove(pvVar2,plVar5,param_1[9] - (long)plVar5);
      plVar5 = (long *)param_1[8];
      plVar6 = (long *)param_1[9];
    }
    *(long *)(lVar8 + 0x248) = (long)pvVar2 + ((long)plVar6 - (long)plVar5);
  }
  else {
    *(long **)(lVar8 + 0x240) = plVar5;
    if (pvVar3 == pvVar2) {
      lVar7 = param_1[9];
      *(long *)(lVar8 + 0x250) = param_1[10];
      *(long *)(lVar8 + 0x248) = lVar7;
      param_1[8] = (long)plVar4;
      param_1[9] = (long)plVar4;
      param_1[10] = (long)(param_1 + 0x13);
      goto LAB_00150668;
    }
    param_1[8] = (long)pvVar3;
    lVar7 = *(long *)(lVar8 + 0x248);
    *(long *)(lVar8 + 0x248) = param_1[9];
    param_1[9] = lVar7;
    lVar7 = *(long *)(lVar8 + 0x250);
    *(long *)(lVar8 + 0x250) = param_1[10];
    plVar5 = (long *)param_1[8];
    param_1[10] = lVar7;
  }
  param_1[9] = (long)plVar5;
  if (plVar5 != plVar4) {
    free(plVar5);
  }
LAB_00150668:
  if ((long *)param_1[1] == plVar1) {
    return;
  }
  free((long *)param_1[1]);
  return;
}


