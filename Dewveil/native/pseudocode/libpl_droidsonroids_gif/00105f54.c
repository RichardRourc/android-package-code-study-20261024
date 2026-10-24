// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00105f54; body: [[00105f54, 00105fd7]]

long * FUN_00105f54(uint param_1,void *param_2)

{
  long *__ptr;
  void *__dest;
  long lVar1;
  
  __ptr = malloc(0x18);
  if (__ptr != (long *)0x0) {
    __dest = calloc(0x100,3);
    __ptr[2] = (long)__dest;
    if (__dest == (void *)0x0) {
      free(__ptr);
      __ptr = (long *)0x0;
    }
    else {
      lVar1 = (long)(1 << (ulong)(param_1 & 0x1f));
      *__ptr = lVar1;
      *(char *)(__ptr + 1) = (char)param_1;
      if (param_2 != (void *)0x0) {
        memcpy(__dest,param_2,lVar1 * 3);
      }
    }
  }
  return __ptr;
}


