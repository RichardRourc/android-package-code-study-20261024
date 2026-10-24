// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001078a0; body: [[001078a0, 001079a3]]

void FUN_001078a0(long param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int *__ptr;
  
  __ptr = *(int **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  free(*(void **)(__ptr + 2));
  iVar1 = close(*__ptr);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    if (*piVar2 != 4) {
      FUN_00103dc8(param_2,0,"Eventfd close failed ");
    }
  }
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(__ptr + 5));
  piVar2 = (int *)__errno();
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    FUN_00103dc8(param_2,0,"Slurp mutex destroy failed ");
  }
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(__ptr + 0x1c));
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    FUN_00103dc8(param_2,0,"Render mutex destroy failed ");
  }
  iVar1 = pthread_cond_destroy((pthread_cond_t *)(__ptr + 0xf));
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    FUN_00103dc8(param_2,0,"Slurp cond destroy failed ");
  }
  iVar1 = pthread_cond_destroy((pthread_cond_t *)(__ptr + 0x26));
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    FUN_00103dc8(param_2,0,"Render cond  destroy failed ");
  }
  free(__ptr);
  return;
}


