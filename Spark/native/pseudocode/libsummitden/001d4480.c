// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d4480; body: [[001d4480, 001d45f7]]

void FUN_001d4480(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  long *plVar8;
  
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 0x18U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3f8;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar5 = realloc(pvVar5,sVar7);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  uVar4 = s_construction_vtable_for_0011e9fb._16_8_;
  uVar3 = s_construction_vtable_for_0011e9fb._0_8_;
  pcVar2 = (char *)((long)pvVar5 + lVar6);
  *(undefined8 *)(pcVar2 + 8) = s_construction_vtable_for_0011e9fb._8_8_;
  *(undefined8 *)pcVar2 = uVar3;
  *(undefined8 *)(pcVar2 + 0x10) = uVar4;
  plVar8 = *(long **)(param_1 + 0x10);
  lVar6 = *plVar8;
  param_2[1] = param_2[1] + 0x18;
  (**(code **)(lVar6 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 4U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3e4;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar5 = realloc(pvVar5,sVar7);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  *(undefined4 *)((long)pvVar5 + lVar6) = 0x2d6e692d;
  plVar8 = *(long **)(param_1 + 0x18);
  lVar6 = *plVar8;
  param_2[1] = param_2[1] + 4;
  (**(code **)(lVar6 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001d45ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  return;
}


