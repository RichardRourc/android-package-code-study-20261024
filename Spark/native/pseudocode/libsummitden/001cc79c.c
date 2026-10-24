// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cc79c; body: [[001cc79c, 001cc8e3]]

void FUN_001cc79c(ulong *param_1,ulong param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,size_t param_7,void *param_8)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  void *__dest;
  byte *__src;
  ulong uVar3;
  
  if (-param_2 - 10 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_001cc8e4();
  }
  __src = (byte *)param_1[2];
  if ((*param_1 & 1) == 0) {
    __src = (byte *)((long)param_1 + 1);
  }
  if (param_2 < 0x7ffffffffffffff3) {
    uVar1 = param_3 + param_2;
    if (param_3 + param_2 <= param_2 * 2) {
      uVar1 = param_2 * 2;
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
  if (param_5 != 0) {
    memmove(__dest,__src,param_5);
  }
  if (param_7 != 0) {
    memcpy((void *)((long)__dest + param_5),param_8,param_7);
  }
  __n = param_4 - (param_6 + param_5);
  if (__n != 0) {
    memmove((void *)((long)__dest + param_7 + param_5),__src + param_6 + param_5,__n);
  }
  if (param_2 != 0x16) {
    free(__src);
  }
  uVar1 = param_7 + param_5 + __n;
  *param_1 = uVar3 | 1;
  param_1[1] = uVar1;
  param_1[2] = (ulong)__dest;
  *(undefined1 *)((long)__dest + uVar1) = 0;
  return;
}


