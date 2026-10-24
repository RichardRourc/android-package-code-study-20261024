// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001df878; body: [[001df878, 001dfbcf]]

void FUN_001df878(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 4) = 0;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3e1;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar5) = 0x3c;
    param_2[1] = param_2[1] + 1;
    FUN_001db7f8(param_1 + 0x10,param_2);
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3e1;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar5) = 0x3e;
    *(undefined4 *)(param_2 + 4) = uVar2;
    param_2[1] = param_2[1] + 1;
  }
  lVar5 = param_2[1];
  if (*(long *)(param_1 + 0x20) != 0) {
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 10U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3ea;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar3 = s_requires_0011ed5b._0_8_;
    pcVar1 = (char *)((long)pvVar4 + lVar5);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar3;
    plVar8 = *(long **)(param_1 + 0x20);
    lVar5 = *plVar8;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar5 + 0x20))(plVar8,param_2);
    if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
    }
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3e1;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar5) = 0x20;
    lVar5 = param_2[1] + 1;
    param_2[1] = lVar5;
  }
  uVar7 = lVar5 + 1;
  pvVar4 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar7) {
    sVar6 = param_2[2] * 2;
    uVar7 = lVar5 + 0x3e1;
    if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
      sVar6 = uVar7;
    }
    param_2[2] = sVar6;
    pvVar4 = realloc(pvVar4,sVar6);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar7 = lVar5 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar4 + lVar5) = 0x28;
  FUN_001db7f8(param_1 + 0x28,param_2);
  lVar5 = param_2[1];
  pvVar4 = (void *)*param_2;
  uVar7 = lVar5 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar7) {
    sVar6 = param_2[2] * 2;
    uVar7 = lVar5 + 0x3e1;
    if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
      sVar6 = uVar7;
    }
    param_2[2] = sVar6;
    pvVar4 = realloc(pvVar4,sVar6);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar7 = lVar5 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar4 + lVar5) = 0x29;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 10U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3ea;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar3 = s_requires_0011ed5b._0_8_;
    pcVar1 = (char *)((long)pvVar4 + lVar5);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar3;
    plVar8 = *(long **)(param_1 + 0x38);
    lVar5 = *plVar8;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar5 + 0x20))(plVar8,param_2);
    if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x001dfbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      return;
    }
  }
  return;
}


