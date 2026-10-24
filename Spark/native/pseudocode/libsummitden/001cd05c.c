// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd05c; body: [[001cd05c, 001cd183]]

void FUN_001cd05c(ulong *param_1,undefined1 param_2)

{
  byte bVar1;
  void *__dest;
  size_t __n;
  ulong uVar2;
  void *__src;
  ulong uVar3;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    if (bVar1 != 0x2c) {
      uVar3 = (ulong)(bVar1 >> 1);
      uVar2 = (long)param_1 + 1;
      *(byte *)param_1 = bVar1 + 2;
      goto LAB_001cd158;
    }
    __src = (void *)((long)param_1 + 1);
    __n = 0x16;
    uVar3 = 0x30;
LAB_001cd0f0:
    uVar2 = __n + 1;
LAB_001cd110:
    __dest = (void *)FUN_001eeb4c(uVar3);
    memmove(__dest,__src,__n);
    if (uVar2 != 0x17) {
      free(__src);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
    uVar3 = __n;
  }
  else {
    uVar3 = param_1[1];
    uVar2 = *param_1 & 0xfffffffffffffffe;
    __n = uVar2 - 1;
    if (uVar3 == __n) {
      if (uVar2 == 0xfffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
        FUN_001cc8e4();
      }
      __src = (void *)param_1[2];
      if (__n < 0x7ffffffffffffff3) {
        uVar3 = __n * 2 | 7;
        uVar2 = 0x1a;
        if (uVar3 != 0x17) {
          uVar2 = uVar3 + 1;
        }
        uVar3 = 0x17;
        if (0xb < __n) {
          uVar3 = uVar2;
        }
        goto LAB_001cd0f0;
      }
      uVar3 = 0xfffffffffffffff7;
      goto LAB_001cd110;
    }
  }
  uVar2 = param_1[2];
  param_1[1] = uVar3 + 1;
LAB_001cd158:
  *(undefined1 *)(uVar2 + uVar3) = param_2;
  ((undefined1 *)(uVar2 + uVar3))[1] = 0;
  return;
}


