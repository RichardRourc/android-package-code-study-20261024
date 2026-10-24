// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d7b08; body: [[001d7b08, 001d7bd3]]

void FUN_001d7b08(long param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
                 ushort *param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar4 = *(long *)((long)pvVar6 + 8);
  puVar3 = pvVar6;
  if (lVar4 - 0xfc0U < 0xfffffffffffff010) {
    puVar3 = malloc(0x1000);
    if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_001cee20();
    }
    lVar4 = 0;
    *puVar3 = pvVar6;
    puVar3[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar3;
  }
  uVar5 = *param_2;
  *(long *)((long)puVar3 + 8) = lVar4 + 0x30;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_001f44b0;
  uVar2 = *param_5;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = uVar5;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x3f;
  uVar5 = *param_3;
  uVar1 = *param_4;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x30) = param_3[1];
  *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = uVar5;
  *(ushort *)((long)puVar3 + lVar4 + 0x19) =
       *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | uVar2 & 0x3f | 0x540;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x38) = uVar1;
  return;
}


