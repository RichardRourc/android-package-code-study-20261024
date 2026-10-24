// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e907c; body: [[001e907c, 001e928b]]

void FUN_001e907c(long param_1,undefined8 *param_2)

{
  undefined *__src;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  size_t __size;
  size_t sVar9;
  undefined1 auVar10 [16];
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  if ((bVar1 & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  auVar10 = FUN_001e93c0();
  plVar7 = auVar10._8_8_;
  if (plVar7 == (long *)0x0) goto LAB_001e9264;
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (((*(byte *)((long)plVar7 + 10) & 3) == 0) ||
     (((*(byte *)((long)plVar7 + 10) & 3) == 2 &&
      (uVar5 = (**(code **)(*plVar7 + 8))(plVar7,param_2), (uVar5 & 1) != 0)))) {
    lVar8 = param_2[1];
    pvVar6 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 1U) {
      sVar9 = param_2[2] * 2;
      uVar5 = lVar8 + 0x3e1;
      if (sVar9 < uVar5 || sVar9 - uVar5 == 0) {
        sVar9 = uVar5;
      }
      param_2[2] = sVar9;
      pvVar6 = realloc(pvVar6,sVar9);
      *param_2 = pvVar6;
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    *(undefined1 *)((long)pvVar6 + lVar8) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  uVar2 = *(ushort *)((long)plVar7 + 9);
  uVar3 = uVar2 >> 8 & 3;
  if (uVar3 == 0) {
LAB_001e91a4:
    lVar8 = param_2[1];
    pvVar6 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 1U) {
      sVar9 = param_2[2] * 2;
      uVar5 = lVar8 + 0x3e1;
      if (sVar9 < uVar5 || sVar9 - uVar5 == 0) {
        sVar9 = uVar5;
      }
      param_2[2] = sVar9;
      pvVar6 = realloc(pvVar6,sVar9);
      *param_2 = pvVar6;
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    *(undefined1 *)((long)pvVar6 + lVar8) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (uVar3 == 2) {
      uVar5 = (**(code **)(*plVar7 + 8))(plVar7,param_2);
      if ((uVar5 & 1) != 0) goto LAB_001e91a4;
      uVar2 = *(ushort *)((long)plVar7 + 9);
    }
    if (((uVar2 >> 10 & 3) == 0) ||
       (((uVar2 >> 10 & 3) == 2 &&
        (uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2), (uVar5 & 1) != 0))))
    goto LAB_001e91a4;
  }
  bVar4 = (auVar10._0_8_ & 0xffffffff) != 0;
  sVar9 = 1;
  if (bVar4) {
    sVar9 = 2;
  }
  lVar8 = param_2[1];
  pvVar6 = (void *)*param_2;
  __src = &UNK_0011defe;
  if (bVar4) {
    __src = &DAT_0011df00;
  }
  if ((ulong)param_2[2] < lVar8 + sVar9) {
    __size = param_2[2] * 2;
    uVar5 = lVar8 + sVar9 + 0x3e0;
    if (__size < uVar5 || __size - uVar5 == 0) {
      __size = uVar5;
    }
    param_2[2] = __size;
    pvVar6 = realloc(pvVar6,__size);
    *param_2 = pvVar6;
    if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = param_2[1];
  }
  memcpy((void *)((long)pvVar6 + lVar8),__src,sVar9);
  param_2[1] = param_2[1] + sVar9;
LAB_001e9264:
  *(byte *)(param_1 + 0x1c) = bVar1;
  return;
}


