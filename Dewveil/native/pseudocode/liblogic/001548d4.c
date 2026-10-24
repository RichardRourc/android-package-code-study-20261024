// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001548d4; body: [[001548d4, 00154993]]

void FUN_001548d4(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar4 + 8);
  puVar2 = pvVar4;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = malloc(0x1000);
    if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar4;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_00171928;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3f;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = *param_2;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar5;
  return;
}


