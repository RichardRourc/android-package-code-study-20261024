// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd63c; body: [[001cd63c, 001cd753]]

ulong * FUN_001cd63c(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__ptr;
  ulong uVar3;
  void *__dest;
  
  uVar3 = *param_1 & 0xfffffffffffffffe;
  if (param_3 < uVar3) {
    __dest = (void *)param_1[2];
    param_1[1] = param_3;
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
  }
  else {
    if (-uVar3 - 9 < (param_3 - uVar3) + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_001cc8e4();
    }
    __ptr = (void *)param_1[2];
    if ((*param_1 & 1) == 0) {
      __ptr = (void *)((long)param_1 + 1);
    }
    if (uVar3 - 1 < 0x7ffffffffffffff3) {
      uVar3 = (uVar3 - 1) * 2;
      uVar1 = param_3;
      if (param_3 <= uVar3) {
        uVar1 = uVar3;
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
    if (param_3 != 0) {
      memcpy(__dest,param_2,param_3);
    }
    free(__ptr);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
  return param_1;
}


