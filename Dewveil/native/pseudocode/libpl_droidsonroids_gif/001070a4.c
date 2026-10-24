// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001070a4; body: [[001070a4, 00107117]]

void FUN_001070a4(long param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0xa0);
  FUN_0010721c(param_2,__ptr);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  free(*(void **)((long)__ptr + 8));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)((long)__ptr + 0x10));
  piVar2 = (int *)__errno();
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    FUN_00103dc8(param_2,0,"Render mutex destroy failed ");
  }
  free(__ptr);
  return;
}


