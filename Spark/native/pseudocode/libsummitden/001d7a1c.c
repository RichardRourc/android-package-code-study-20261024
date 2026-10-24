// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d7a1c; body: [[001d7a1c, 001d7b07]]

void FUN_001d7a1c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  
  pvVar7 = *(void **)(param_1 + 0x1330);
  lVar5 = *(long *)((long)pvVar7 + 8);
  puVar4 = pvVar7;
  if (lVar5 - 0xfb0U < 0xfffffffffffff010) {
    puVar4 = malloc(0x1000);
    if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_001cee20();
    }
    lVar5 = 0;
    *puVar4 = pvVar7;
    puVar4[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar4;
  }
  uVar6 = *param_3;
  *(long *)((long)puVar4 + 8) = lVar5 + 0x40;
  *(undefined ***)((long)puVar4 + lVar5 + 0x10) = &PTR_FUN_001f43c0;
  uVar3 = *param_7;
  *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x40;
  uVar9 = param_2[1];
  uVar8 = *param_2;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x30) = uVar6;
  uVar1 = *param_5;
  uVar2 = *param_6;
  uVar10 = param_4[1];
  uVar6 = *param_4;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x28) = uVar9;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x20) = uVar8;
  *(undefined1 *)((long)puVar4 + lVar5 + 0x48) = uVar1;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x40) = uVar10;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x38) = uVar6;
  *(ushort *)((long)puVar4 + lVar5 + 0x19) =
       *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | uVar3 & 0x3f | 0x540;
  *(undefined1 *)((long)puVar4 + lVar5 + 0x49) = uVar2;
  return;
}


