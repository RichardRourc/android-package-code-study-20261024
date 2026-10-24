// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd184; body: [[001cd184, 001cd2fb]]

ulong * FUN_001cd184(ulong *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  void *__dest;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar3 = *param_1;
    uVar4 = 0x16;
    if ((*param_1 & 1) != 0) {
      uVar4 = (uVar3 & 0xfffffffffffffffe) - 1;
    }
    __n = uVar3 >> 1 & 0x7f;
    if ((uVar3 & 1) != 0) {
      __n = param_1[1];
    }
    if (uVar4 - __n < param_2) {
      uVar1 = __n + param_2;
      if (-uVar4 - 9 < uVar1 - uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_001cc8e4();
      }
      __src = (void *)param_1[2];
      if ((uVar3 & 1) == 0) {
        __src = (void *)((long)param_1 + 1);
      }
      if (uVar4 < 0x7ffffffffffffff3) {
        if (uVar1 <= uVar4 * 2) {
          uVar1 = uVar4 * 2;
        }
        uVar2 = 0x1a;
        if ((uVar1 | 7) != 0x17) {
          uVar2 = (uVar1 | 7) + 1;
        }
        uVar3 = 0x17;
        if (0x16 < uVar1) {
          uVar3 = uVar2;
        }
      }
      else {
        uVar3 = 0xfffffffffffffff7;
      }
      __dest = (void *)FUN_001eeb4c(uVar3);
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      if (uVar4 != 0x16) {
        free(__src);
      }
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar3 | 1;
    }
    else {
      __dest = (void *)param_1[2];
      if ((uVar3 & 1) == 0) {
        __dest = (void *)((long)param_1 + 1);
      }
    }
    uVar4 = __n + param_2;
    memset((void *)((long)__dest + __n),param_3,param_2);
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar4 << 1);
    }
    else {
      param_1[1] = uVar4;
    }
    *(undefined1 *)((long)__dest + uVar4) = 0;
  }
  return param_1;
}


