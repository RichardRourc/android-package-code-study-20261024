// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e2060; body: [[001e2060, 001e21d3]]

void FUN_001e2060(long *param_1)

{
  char cVar1;
  long lVar2;
  void *__dest;
  size_t __n;
  long *__ptr;
  long *plVar3;
  
  if ((char *)param_1[1] == (char *)*param_1) {
LAB_001e20e8:
    FUN_001d5748();
    return;
  }
  cVar1 = *(char *)*param_1;
  if (cVar1 == 'D') {
    lVar2 = FUN_001d5618();
    if (lVar2 == 0) {
      return;
    }
    plVar3 = (long *)param_1[0x26];
    if (plVar3 != (long *)param_1[0x27]) goto LAB_001e2194;
    __ptr = (long *)param_1[0x25];
    __n = (long)plVar3 - (long)__ptr;
    if (__ptr == param_1 + 0x28) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar3 != __ptr) {
LAB_001e2164:
        memmove(__dest,__ptr,__n);
      }
LAB_001e2178:
      param_1[0x25] = (long)__dest;
    }
    else {
      __dest = realloc(__ptr,__n * 2);
      param_1[0x25] = (long)__dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  else {
    if (cVar1 != 'T') goto LAB_001e20e8;
    lVar2 = FUN_001d5250();
    if (lVar2 == 0) {
      return;
    }
    plVar3 = (long *)param_1[0x26];
    if (plVar3 != (long *)param_1[0x27]) goto LAB_001e2194;
    __ptr = (long *)param_1[0x25];
    __n = (long)plVar3 - (long)__ptr;
    if (__ptr == param_1 + 0x28) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar3 != param_1 + 0x28) goto LAB_001e2164;
      goto LAB_001e2178;
    }
    __dest = realloc(__ptr,__n * 2);
    param_1[0x25] = (long)__dest;
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  plVar3 = (long *)((long)__dest + __n);
  param_1[0x27] = (long)((long)__dest + ((long)__n >> 2) * 8);
LAB_001e2194:
  *plVar3 = lVar2;
  param_1[0x26] = (long)(plVar3 + 1);
  return;
}


