// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e0ed0; body: [[001e0ed0, 001e0fff]]

void FUN_001e0ed0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_1 + 0x18);
    if ((uVar2 & 1) != 0) {
      return;
    }
    plVar1 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    }
  }
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar2 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar2) {
    sVar5 = param_2[2] * 2;
    uVar2 = lVar4 + 0x3e1;
    if (sVar5 < uVar2 || sVar5 - uVar2 == 0) {
      sVar5 = uVar2;
    }
    param_2[2] = sVar5;
    pvVar3 = realloc(pvVar3,sVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar2 = lVar4 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x7b;
  FUN_001db7f8(param_1 + 0x18,param_2);
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar2 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar2) {
    sVar5 = param_2[2] * 2;
    uVar2 = lVar4 + 0x3e1;
    if (sVar5 < uVar2 || sVar5 - uVar2 == 0) {
      sVar5 = uVar2;
    }
    param_2[2] = sVar5;
    pvVar3 = realloc(pvVar3,sVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar2 = lVar4 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x7d;
  return;
}


