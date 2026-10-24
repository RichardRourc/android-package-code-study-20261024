// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ccc9c; body: [[001ccc9c, 001ccddf]]

void FUN_001ccc9c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *__ptr;
  void *__src;
  uint uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar5 = (uVar3 & 0xfffffffffffffffe) - 1;
  uVar2 = 0x16;
  if ((*param_1 & 1) != 0) {
    uVar2 = uVar5;
  }
  uVar1 = uVar3 >> 1 & 0x7f;
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (param_2 < 0x17) {
    __src = (void *)param_1[2];
    __ptr = (void *)((long)param_1 + 1);
    uVar4 = 1;
  }
  else {
    if (uVar2 < param_2) {
      __ptr = (void *)FUN_001eeb4c(param_2 + 1);
    }
    else {
      __ptr = (void *)FUN_001eeb4c(param_2 + 1);
      uVar2 = 0x16;
      if ((uVar3 & 1) != 0) {
        uVar2 = uVar5;
      }
      if (uVar2 < param_2) {
        free(__ptr);
        return;
      }
    }
    __src = (void *)param_1[2];
    uVar4 = (uint)uVar3 & 1;
    if ((uVar3 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
    }
  }
  if (uVar1 != 0xffffffffffffffff) {
    memmove(__ptr,__src,uVar1 + 1);
  }
  if (uVar4 != 0) {
    free(__src);
  }
  if (param_2 < 0x17) {
    *(char *)param_1 = (char)((int)uVar1 << 1);
  }
  else {
    param_1[2] = (ulong)__ptr;
    *param_1 = param_2 + 1 | 1;
    param_1[1] = uVar1;
  }
  return;
}


