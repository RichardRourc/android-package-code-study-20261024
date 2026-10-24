// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001503d0; body: [[001503d0, 001504c3]]

void FUN_001503d0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined1 *param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pvVar8 = *(void **)(param_1 + 0x1330);
  lVar4 = *(long *)((long)pvVar8 + 8);
  puVar3 = pvVar8;
  if (lVar4 - 4000U < 0xfffffffffffff010) {
    puVar3 = malloc(0x1000);
    if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar3 = pvVar8;
    puVar3[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar3;
  }
  *(long *)((long)puVar3 + 8) = lVar4 + 0x50;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_00173218;
  uVar1 = *param_7;
  uVar2 = *param_8;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x13;
  uVar5 = *param_3;
  uVar6 = *param_5;
  uVar7 = *param_6;
  uVar10 = param_4[1];
  uVar9 = *param_4;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = *param_2;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = uVar5;
  *(ushort *)((long)puVar3 + lVar4 + 0x19) =
       *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | 0x100;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x38) = uVar10;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x30) = uVar9;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x40) = uVar6;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x48) = uVar7;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x50) = uVar1;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x54) = uVar2;
  return;
}


