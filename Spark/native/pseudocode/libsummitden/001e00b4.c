// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e00b4; body: [[001e00b4, 001e0837]]

void FUN_001e00b4(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  undefined **local_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined8 local_38;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar6 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar6) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3e1;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar6 = lVar2 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar7 = *(long **)(param_1 + 0x18);
  if ((*(char *)(param_1 + 0x30) == '\x01') && (plVar7 == (long *)0x0)) {
    lVar2 = param_2[1];
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\0') {
      lVar2 = param_2[1];
      pvVar1 = (void *)*param_2;
      uVar6 = lVar2 + 1;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      if ((ulong)param_2[2] < uVar6) {
        sVar4 = param_2[2] * 2;
        uVar6 = lVar2 + 0x3e1;
        if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
          sVar4 = uVar6;
        }
        param_2[2] = sVar4;
        pvVar1 = realloc(pvVar1,sVar4);
        *param_2 = pvVar1;
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar2 = param_2[1];
        uVar6 = lVar2 + 1;
      }
      param_2[1] = uVar6;
      *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
      local_40 = 0x2a;
      local_38 = *(undefined8 *)(param_1 + 0x10);
      local_3f = 0x540;
      local_48 = &PTR_FUN_001f4f78;
      FUN_001e0844(&local_48,param_2);
      lVar2 = param_2[1];
      pvVar1 = (void *)*param_2;
      uVar6 = lVar2 + 1;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
      if ((ulong)param_2[2] < uVar6) {
        sVar4 = param_2[2] * 2;
        uVar6 = lVar2 + 0x3e1;
        if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
          sVar4 = uVar6;
        }
        param_2[2] = sVar4;
        pvVar1 = realloc(pvVar1,sVar4);
        *param_2 = pvVar1;
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
LAB_001e02e8:
        lVar2 = param_2[1];
        uVar6 = lVar2 + 1;
      }
LAB_001e02f0:
      param_2[1] = uVar6;
      *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
    }
    else {
      if ((*(ushort *)((long)plVar7 + 9) & 0x3c) != 0) {
        lVar2 = param_2[1];
        pvVar1 = (void *)*param_2;
        uVar6 = lVar2 + 1;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
        if ((ulong)param_2[2] < uVar6) {
          sVar4 = param_2[2] * 2;
          uVar6 = lVar2 + 0x3e1;
          if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
            sVar4 = uVar6;
          }
          param_2[2] = sVar4;
          pvVar1 = realloc(pvVar1,sVar4);
          *param_2 = pvVar1;
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar2 = param_2[1];
          uVar6 = lVar2 + 1;
        }
        param_2[1] = uVar6;
        *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
        (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
        if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
          (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
        }
        lVar2 = param_2[1];
        pvVar1 = (void *)*param_2;
        uVar6 = lVar2 + 1;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
        if ((ulong)param_2[2] < uVar6) {
          sVar4 = param_2[2] * 2;
          uVar6 = lVar2 + 0x3e1;
          if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
            sVar4 = uVar6;
          }
          param_2[2] = sVar4;
          pvVar1 = realloc(pvVar1,sVar4);
          *param_2 = pvVar1;
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_001e02e8;
        }
        goto LAB_001e02f0;
      }
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + 1U) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar2 + 0x3e1;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
    lVar2 = param_2[1] + 1;
    param_2[1] = lVar2;
    sVar4 = *(size_t *)(param_1 + 0x28);
    if (sVar4 != 0) {
      pvVar8 = *(void **)(param_1 + 0x20);
      pvVar1 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar2 + sVar4) {
        sVar3 = param_2[2] * 2;
        uVar6 = lVar2 + sVar4 + 0x3e0;
        if (sVar3 < uVar6 || sVar3 - uVar6 == 0) {
          sVar3 = uVar6;
        }
        param_2[2] = sVar3;
        pvVar1 = realloc(pvVar1,sVar3);
        *param_2 = pvVar1;
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar2 = param_2[1];
      }
      memcpy((void *)((long)pvVar1 + lVar2),pvVar8,sVar4);
      lVar2 = param_2[1] + sVar4;
      param_2[1] = lVar2;
    }
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + 1U) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar2 + 0x3e1;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
    lVar2 = param_2[1] + 1;
    param_2[1] = lVar2;
  }
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 3U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3e3;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar2) + 1) = 0x2e;
  *(undefined2 *)((long)pvVar1 + lVar2) = 0x2e2e;
  lVar5 = param_2[1];
  lVar2 = lVar5 + 3;
  param_2[1] = lVar2;
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(long *)(param_1 + 0x18) == 0)) goto LAB_001e0718;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 4U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar5 + 0x3e4;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
  lVar2 = param_2[1] + 1;
  param_2[1] = lVar2;
  sVar4 = *(size_t *)(param_1 + 0x28);
  if (sVar4 != 0) {
    pvVar8 = *(void **)(param_1 + 0x20);
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + sVar4) {
      sVar3 = param_2[2] * 2;
      uVar6 = lVar2 + sVar4 + 0x3e0;
      if (sVar3 < uVar6 || sVar3 - uVar6 == 0) {
        sVar3 = uVar6;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)pvVar1 + lVar2),pvVar8,sVar4);
    lVar2 = param_2[1] + sVar4;
    param_2[1] = lVar2;
  }
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3e1;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
  lVar5 = param_2[1];
  lVar2 = lVar5 + 1;
  param_2[1] = lVar2;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar6 = lVar5 + 2;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3e2;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar6 = lVar2 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    local_40 = 0x2a;
    local_38 = *(undefined8 *)(param_1 + 0x10);
    local_3f = 0x540;
    local_48 = &PTR_FUN_001f4f78;
    FUN_001e0844(&local_48,param_2);
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar6 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar2 + 0x3e1;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_001e0704:
      lVar2 = param_2[1];
      uVar6 = lVar2 + 1;
    }
  }
  else {
    plVar7 = *(long **)(param_1 + 0x18);
    if ((*(ushort *)((long)plVar7 + 9) & 0x3c) == 0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
      goto LAB_001e0718;
    }
    uVar6 = lVar5 + 2;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3e2;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar6 = lVar2 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
    if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar6 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar2 + 0x3e1;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_001e0704;
    }
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
LAB_001e0718:
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar6 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar6) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3e1;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar6 = lVar2 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


