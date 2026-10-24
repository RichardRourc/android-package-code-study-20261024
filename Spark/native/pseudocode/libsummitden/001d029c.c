// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d029c; body: [[001d029c, 001d036b]]

void FUN_001d029c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x330);
  __ptr = *(undefined8 **)(param_1 + 0x1330);
  while (__ptr != (undefined8 *)0x0) {
    while( true ) {
      puVar2 = (undefined8 *)*__ptr;
      *(undefined8 **)(param_1 + 0x1330) = puVar2;
      if (__ptr != puVar1) break;
      __ptr = puVar2;
      if (puVar2 == (undefined8 *)0x0) goto LAB_001d02e4;
    }
    free(__ptr);
    __ptr = *(undefined8 **)(param_1 + 0x1330);
  }
LAB_001d02e4:
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 **)(param_1 + 0x1330) = puVar1;
  if (*(void **)(param_1 + 0x2d0) != (void *)(param_1 + 0x2e8)) {
    free(*(void **)(param_1 + 0x2d0));
  }
  if (*(void **)(param_1 + 0x298) != (void *)(param_1 + 0x2b0)) {
    free(*(void **)(param_1 + 0x298));
  }
  if (*(void **)(param_1 + 0x240) != (void *)(param_1 + 600)) {
    free(*(void **)(param_1 + 0x240));
  }
  if (*(void **)(param_1 + 0x128) != (void *)(param_1 + 0x140)) {
    free(*(void **)(param_1 + 0x128));
  }
  if (*(void **)(param_1 + 0x10) != (void *)(param_1 + 0x28)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


