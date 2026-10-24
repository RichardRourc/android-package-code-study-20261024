// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001547e8; body: [[001547e8, 001548d3]]

void FUN_001547e8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 *param_5,undefined1 *param_6,ushort *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar7 = *(void **)(param_1 + 0x1330);
  lVar5 = *(long *)((long)pvVar7 + 8);
  puVar4 = pvVar7;
  if (lVar5 - 0xfb0U < 0xfffffffffffff010) {
    puVar4 = malloc(0x1000);
    if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = 0;
    *puVar4 = pvVar7;
    puVar4[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar4;
  }
  *(long *)((long)puVar4 + 8) = lVar5 + 0x40;
  uVar6 = *param_3;
  *(undefined ***)((long)puVar4 + lVar5 + 0x10) = &PTR_FUN_00171848;
  uVar3 = *param_7;
  *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x40;
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar1 = *param_5;
  uVar2 = *param_6;
  uVar11 = param_4[1];
  uVar10 = *param_4;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x28) = uVar9;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x20) = uVar8;
  *(undefined1 *)((long)puVar4 + lVar5 + 0x48) = uVar1;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x40) = uVar11;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x38) = uVar10;
  *(ushort *)((long)puVar4 + lVar5 + 0x19) =
       *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | uVar3 & 0x3f | 0x540;
  *(undefined1 *)((long)puVar4 + lVar5 + 0x49) = uVar2;
  return;
}


