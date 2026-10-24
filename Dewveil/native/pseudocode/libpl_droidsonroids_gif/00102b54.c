// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102b54; body: [[00102b54, 00102ce3]]

undefined8 FUN_00102b54(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x38);
  plVar7 = *(long **)(param_1 + 8);
  if (param_2 <= uVar3 - 1) {
    iVar1 = (**(code **)(param_1 + 0x80))(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(plVar7 + 0xc) = 0x3ec;
      return 0;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
    FUN_001037a4(param_3,param_1);
    uVar3 = *(ulong *)(param_1 + 0x38);
  }
  if ((ulong)plVar7[4] <= param_2) {
    param_2 = plVar7[4] - 1;
  }
  uVar4 = param_2;
  if (uVar3 < param_2) {
    lVar6 = param_2 * 0x18;
    plVar5 = (long *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + param_2 * 0x30 + 0x18);
    do {
      if (((*plVar7 == plVar5[-1]) && (plVar7[1] == *plVar5)) &&
         ((*(int *)(*(long *)(param_1 + 0x40) + lVar6 + 0x10) == -1 ||
          (*(char *)(*(long *)(param_1 + 0x40) + lVar6) == '\x02')))) goto LAB_00102c6c;
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + -6;
      lVar6 = lVar6 + -0x18;
    } while (uVar3 < uVar4);
  }
  if (uVar4 != 0) {
LAB_00102c6c:
    while (uVar3 < uVar4 - 1) {
      FUN_00102fd8(param_1,0,1);
      uVar3 = *(long *)(param_1 + 0x38) + 1;
      *(ulong *)(param_1 + 0x38) = uVar3;
    }
  }
  do {
    FUN_00102fd8(param_1,1,0);
    FUN_00103884(param_3,param_1);
    uVar3 = *(ulong *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar3 + 1;
  } while (uVar3 < param_2);
  *(ulong *)(param_1 + 0x38) = uVar3;
  uVar2 = FUN_00103c84(param_1);
  return uVar2;
}


