// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e352c; body: [[001e352c, 001e35cf]]

void FUN_001e352c(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = pvVar5;
  if (lVar3 - 0xfe0U < 0xfffffffffffff010) {
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
  lVar4 = *param_2;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x10;
  puVar2 = (undefined8 *)(lVar3 + 0x10 + (long)puVar2);
  *(undefined1 *)(puVar2 + 1) = 0x2f;
  *puVar2 = &PTR_FUN_001f5878;
  uVar1 = *(undefined4 *)(lVar4 + 0xc);
  *(ushort *)((long)puVar2 + 9) = *(ushort *)((long)puVar2 + 9) & 0xf000 | 0x540;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


