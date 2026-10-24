// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001dd58c; body: [[001dd58c, 001dd86f]]

void FUN_001dd58c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  char *__src;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  
  if (3 < *(ulong *)(param_1 + 0x18)) {
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar6 = lVar3 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    sVar5 = *(size_t *)(param_1 + 0x18);
    lVar3 = param_2[1];
    if (sVar5 != 0) {
      pvVar7 = *(void **)(param_1 + 0x10);
      pvVar2 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar3 + sVar5) {
        sVar4 = param_2[2] * 2;
        uVar6 = lVar3 + sVar5 + 0x3e0;
        if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
          sVar4 = uVar6;
        }
        param_2[2] = sVar4;
        pvVar2 = realloc(pvVar2,sVar4);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = param_2[1];
      }
      memcpy((void *)((long)pvVar2 + lVar3),pvVar7,sVar5);
      lVar3 = param_2[1] + sVar5;
      param_2[1] = lVar3;
    }
    uVar6 = lVar3 + 1;
    pvVar2 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  }
  __src = *(char **)(param_1 + 0x20);
  if (*__src == 'n') {
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar6 = lVar3 + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x2d;
    sVar5 = *(long *)(param_1 + 0x28) - 1;
    if (sVar5 == 0) goto LAB_001dd7d8;
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    lVar8 = *(long *)(param_1 + 0x20);
    if ((ulong)param_2[2] < lVar3 + sVar5) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar3 + sVar5 + 0x3e0;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),(void *)(lVar8 + 1),sVar5);
    lVar3 = param_2[1] + sVar5;
  }
  else {
    sVar5 = *(size_t *)(param_1 + 0x28);
    if (sVar5 == 0) goto LAB_001dd7d8;
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + sVar5) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar3 + sVar5 + 0x3e0;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),__src,sVar5);
    lVar3 = param_2[1] + sVar5;
  }
  param_2[1] = lVar3;
LAB_001dd7d8:
  uVar6 = *(ulong *)(param_1 + 0x18);
  if ((uVar6 < 4) && (uVar6 != 0)) {
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    pvVar7 = *(void **)(param_1 + 0x10);
    if ((ulong)param_2[2] < lVar3 + uVar6) {
      sVar5 = param_2[2] * 2;
      uVar1 = lVar3 + uVar6 + 0x3e0;
      if (sVar5 < uVar1 || sVar5 - uVar1 == 0) {
        sVar5 = uVar1;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),pvVar7,uVar6);
    param_2[1] = param_2[1] + uVar6;
  }
  return;
}


