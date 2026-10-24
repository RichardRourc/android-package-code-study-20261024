// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014f4f8; body: [[0014f4f8, 0014f69f]]

void FUN_0014f4f8(long *param_1,long param_2)

{
  size_t sVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long *__dest;
  long *plVar6;
  
  pvVar4 = (void *)(param_2 + 0x2b0);
  plVar2 = param_1 + 4;
  param_1[5] = 0;
  *plVar2 = 0;
  *param_1 = param_2;
  param_1[1] = (long)plVar2;
  __dest = param_1 + 0xb;
  param_1[0xc] = 0;
  *__dest = 0;
  plVar6 = param_1 + 8;
  *plVar6 = (long)__dest;
  param_1[2] = (long)plVar2;
  param_1[3] = (long)plVar6;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = (long)__dest;
  param_1[10] = (long)(param_1 + 0x13);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  pvVar3 = *(void **)(param_2 + 0x298);
  if (pvVar3 == pvVar4) {
    sVar1 = *(long *)(param_2 + 0x2a0) - (long)pvVar3;
    pvVar4 = pvVar3;
    if (sVar1 != 0) {
      memmove(plVar2,pvVar3,sVar1);
      pvVar3 = *(void **)(param_2 + 0x298);
      pvVar4 = *(void **)(param_2 + 0x2a0);
    }
    param_1[2] = (long)plVar2 + ((long)pvVar4 - (long)pvVar3);
    *(void **)(param_2 + 0x2a0) = pvVar3;
  }
  else {
    param_1[1] = (long)pvVar3;
    lVar5 = *(long *)(param_2 + 0x2a0);
    param_1[3] = *(long *)(param_2 + 0x2a8);
    param_1[2] = lVar5;
    *(void **)(param_2 + 0x298) = pvVar4;
    *(void **)(param_2 + 0x2a0) = pvVar4;
    *(long *)(param_2 + 0x2a8) = param_2 + 0x2d0;
  }
  pvVar3 = *(void **)(param_2 + 0x240);
  pvVar4 = (void *)(param_2 + 600);
  plVar2 = (long *)*plVar6;
  if (pvVar3 == pvVar4) {
    if (plVar2 != __dest) {
      free(plVar2);
      param_1[8] = (long)__dest;
      param_1[9] = (long)__dest;
      pvVar3 = *(void **)(param_2 + 0x240);
      param_1[10] = (long)(param_1 + 0x13);
    }
    sVar1 = *(long *)(param_2 + 0x248) - (long)pvVar3;
    pvVar4 = pvVar3;
    if (sVar1 != 0) {
      memmove(__dest,pvVar3,sVar1);
      pvVar3 = *(void **)(param_2 + 0x240);
      pvVar4 = *(void **)(param_2 + 0x248);
    }
    param_1[9] = (long)__dest + ((long)pvVar4 - (long)pvVar3);
    *(void **)(param_2 + 0x248) = pvVar3;
  }
  else {
    *plVar6 = (long)pvVar3;
    if (plVar2 == __dest) {
      lVar5 = *(long *)(param_2 + 0x248);
      param_1[10] = *(long *)(param_2 + 0x250);
      param_1[9] = lVar5;
      *(void **)(param_2 + 0x240) = pvVar4;
      *(void **)(param_2 + 0x248) = pvVar4;
      *(long *)(param_2 + 0x250) = param_2 + 0x298;
    }
    else {
      *(long **)(param_2 + 0x240) = plVar2;
      lVar5 = param_1[9];
      param_1[9] = *(long *)(param_2 + 0x248);
      *(long *)(param_2 + 0x248) = lVar5;
      lVar5 = param_1[10];
      param_1[10] = *(long *)(param_2 + 0x250);
      *(long *)(param_2 + 0x250) = lVar5;
      *(undefined8 *)(param_2 + 0x248) = *(undefined8 *)(param_2 + 0x240);
    }
  }
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0x2a0) = *(undefined8 *)(lVar5 + 0x298);
  *(undefined8 *)(lVar5 + 0x248) = *(undefined8 *)(lVar5 + 0x240);
  return;
}


