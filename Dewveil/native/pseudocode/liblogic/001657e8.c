// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001657e8; body: [[001657e8, 001659b7]]

void FUN_001657e8(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      *(long **)(param_2 + 0x20) = param_3;
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x50);
    }
    else if ((*(long *)(param_2 + 0x28) == *(long *)(param_2 + 0x50)) &&
            (*(long **)(param_2 + 0x20) == param_3)) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
      }
    }
    else {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar4 = *(ulong *)(param_1 + 0x20);
    lVar6 = (long)uVar4 >> 8;
    plVar7 = param_3;
    if (*(char *)(param_2 + 0x4f) == '\0') {
      if ((uVar4 & 1) != 0) {
        lVar6 = 0;
        *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
        plVar7 = (long *)0x0;
      }
    }
    else if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(*param_3 + lVar6);
    }
    uVar1 = 2;
    if ((uVar4 & 2) != 0) {
      uVar1 = param_4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),param_2,(long)plVar7 + lVar6,uVar1);
    if (1 < uVar2) {
      uVar4 = param_1 + 0x38;
      do {
        uVar5 = *(ulong *)(uVar4 - 8);
        lVar6 = (long)uVar5 >> 8;
        plVar7 = param_3;
        if (*(char *)(param_2 + 0x4f) == '\0') {
          if ((uVar5 & 1) != 0) {
            lVar6 = 0;
            *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(*(long *)(uVar4 - 0x10) + 8);
            plVar7 = (long *)0x0;
          }
        }
        else if ((uVar5 & 1) != 0) {
          lVar6 = *(long *)(*param_3 + lVar6);
        }
        uVar1 = 2;
        if ((uVar5 & 2) != 0) {
          uVar1 = param_4;
        }
        (**(code **)(**(long **)(uVar4 - 0x10) + 0x38))
                  (*(long **)(uVar4 - 0x10),param_2,(long)plVar7 + lVar6,uVar1);
      } while (((*(byte *)(param_2 + 0x4e) & 1) == 0) &&
              (bVar3 = uVar4 < param_1 + (ulong)uVar2 * 0x10 + 0x18, uVar4 = uVar4 + 0x10, bVar3));
    }
  }
  return;
}


