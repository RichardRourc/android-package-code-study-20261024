// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106008; body: [[00106008, 00106087]]

void FUN_00106008(long param_1)

{
  void *__ptr;
  long lVar1;
  void *__ptr_00;
  void *pvVar2;
  
  if ((param_1 != 0) && (__ptr = *(void **)(param_1 + 0x58), __ptr != (void *)0x0)) {
    lVar1 = *(long *)(param_1 + 0x20);
    pvVar2 = __ptr;
    if (0 < lVar1) {
      do {
        __ptr_00 = *(void **)((long)pvVar2 + 0x28);
        if (__ptr_00 != (void *)0x0) {
          free(*(void **)((long)__ptr_00 + 0x10));
          free(__ptr_00);
          *(undefined8 *)((long)pvVar2 + 0x28) = 0;
          __ptr = *(void **)(param_1 + 0x58);
          lVar1 = *(long *)(param_1 + 0x20);
        }
        pvVar2 = (void *)((long)pvVar2 + 0x30);
      } while (pvVar2 < (void *)((long)__ptr + lVar1 * 0x30));
    }
    free(__ptr);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}


