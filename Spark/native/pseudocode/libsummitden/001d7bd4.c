// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d7bd4; body: [[001d7bd4, 001d7c93]]

void FUN_001d7bd4(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = pvVar5;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = malloc(0x1000);
    if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_001cee20();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  uVar4 = *param_2;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_001f4528;
  uVar1 = *param_4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x44;
  uVar6 = param_3[1];
  uVar4 = *param_3;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar4;
  return;
}


