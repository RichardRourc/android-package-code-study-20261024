// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106f1c; body: [[00106f1c, 00106fdb]]

void Java_pl_droidsonroids_gif_GifInfoHandle_initTexImageDescriptor
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *__ptr;
  void *pvVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_3 == 0) {
    return;
  }
  __ptr = malloc(0x40);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0xffffffff;
    lVar1 = **(long **)(param_3 + 8);
    pvVar3 = malloc(lVar1 * (*(long **)(param_3 + 8))[1] * 4);
    *(void **)(__ptr + 2) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      *(int *)(param_3 + 0x8c) = (int)lVar1;
      *(undefined4 **)(param_3 + 0xa0) = __ptr;
      iVar2 = pthread_mutex_init((pthread_mutex_t *)(__ptr + 4),(pthread_mutexattr_t *)0x0);
      piVar4 = (int *)__errno();
      *piVar4 = iVar2;
      if (iVar2 == 0) {
        return;
      }
      pcVar6 = "Render mutex initialization failed ";
      uVar5 = 0;
      goto LAB_00106fcc;
    }
    free(__ptr);
  }
  pcVar6 = "Failed to allocate native memory";
  uVar5 = 2;
LAB_00106fcc:
  FUN_00103dc8(param_1,uVar5,pcVar6);
  return;
}


