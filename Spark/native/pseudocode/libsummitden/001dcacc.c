// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001dcacc; body: [[001dcacc, 001dcb73]]

void FUN_001dcacc(long param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar4 + 8);
  puVar2 = pvVar4;
  if (lVar3 - 0xfe0U < 0xfffffffffffff010) {
    puVar2 = malloc(0x1000);
    if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_001cee20();
    }
    lVar3 = 0;
    *puVar2 = pvVar4;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  iVar1 = *param_2;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x10;
  puVar2 = (undefined8 *)(lVar3 + 0x10 + (long)puVar2);
  *(undefined1 *)(puVar2 + 1) = 0x49;
  *puVar2 = &PTR_FUN_001f4780;
  *(ushort *)((long)puVar2 + 9) = *(ushort *)((long)puVar2 + 9) & 0xf000 | 0x540;
  *(bool *)((long)puVar2 + 0xb) = iVar1 != 0;
  return;
}


