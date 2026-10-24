// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd838; body: [[001cd838, 001cd9c3]]

long FUN_001cd838(ulong *param_1,void *param_2,undefined1 param_3)

{
  void *pvVar1;
  void *__src;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  bool bVar5;
  void *__dest;
  void *pvVar6;
  ulong uVar7;
  size_t __n;
  
  uVar7 = *param_1;
  uVar3 = param_1[1];
  pvVar6 = (void *)param_1[2];
  pvVar1 = (void *)((long)param_1 + 1);
  bVar5 = ((byte)*param_1 & 1) == 0;
  pvVar4 = pvVar6;
  if (bVar5) {
    uVar3 = (ulong)(byte)((byte)*param_1 >> 1);
    pvVar4 = (void *)((long)param_1 + 1);
  }
  uVar2 = 0x16;
  if (!bVar5) {
    uVar2 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  __n = (long)param_2 - (long)pvVar4;
  if (uVar2 == uVar3) {
    if (uVar3 == 0xfffffffffffffff7) {
                    /* WARNING: Subroutine does not return */
      FUN_001cc8e4();
    }
    __src = pvVar1;
    if ((uVar7 & 1) != 0) {
      __src = pvVar6;
    }
    if (uVar3 < 0x7ffffffffffffff3) {
      uVar7 = uVar3 << 1 | 7;
      uVar2 = 0x1a;
      if (uVar7 != 0x17) {
        uVar2 = uVar7 + 1;
      }
      uVar7 = 0x17;
      if (0xb < uVar3) {
        uVar7 = uVar2;
      }
    }
    else {
      uVar7 = 0xfffffffffffffff7;
    }
    __dest = (void *)FUN_001eeb4c(uVar7);
    if (param_2 != pvVar4) {
      memmove(__dest,__src,__n);
    }
    if (uVar3 - __n != 0) {
      memmove((void *)((long)__dest + __n + 1),(void *)((long)__src + __n),uVar3 - __n);
    }
    if (uVar3 + 1 != 0x17) {
      free(__src);
    }
    param_1[1] = uVar3 + 1;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar7 | 1;
  }
  else {
    __dest = pvVar1;
    if ((uVar7 & 1) != 0) {
      __dest = pvVar6;
    }
    if (uVar3 - __n != 0) {
      memmove((void *)((long)((long)__dest + __n) + 1),(void *)((long)__dest + __n),uVar3 - __n);
    }
  }
  uVar3 = uVar3 + 1;
  *(undefined1 *)((long)__dest + __n) = param_3;
  *(undefined1 *)((long)__dest + uVar3) = 0;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    *(char *)param_1 = (char)((int)uVar3 << 1);
  }
  else {
    param_1[1] = uVar3;
  }
  if ((uVar7 & 1) != 0) {
    pvVar1 = (void *)param_1[2];
  }
  return __n + (long)pvVar1;
}


