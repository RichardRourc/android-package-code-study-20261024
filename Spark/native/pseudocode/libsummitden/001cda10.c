// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cda10; body: [[001cda10, 001cdb07]]

void FUN_001cda10(ulong *param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  size_t __n_00;
  void *__dest;
  uint uVar4;
  byte *__src;
  
  __n_00 = strlen(param_2);
  bVar3 = *param_3;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_3 + 8);
  }
  uVar1 = __n + __n_00;
  if (uVar1 < 0xfffffffffffffff8) {
    if (uVar1 < 0x17) {
      uVar4 = (int)uVar1 << 1;
      __dest = (void *)0x0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(char *)param_1 = (char)uVar4;
    }
    else {
      uVar2 = 0x1a;
      if ((uVar1 | 7) != 0x17) {
        uVar2 = (uVar1 | 7) + 1;
      }
      __dest = (void *)FUN_001eeb4c(uVar2);
      param_1[1] = uVar1;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar2 | 1;
      uVar4 = (uint)(uVar2 | 1) & 0xff;
    }
    if ((uVar4 & 1) == 0) {
      __dest = (void *)((long)param_1 + 1);
    }
    if (__n_00 != 0) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__n != 0) {
      __src = *(byte **)(param_3 + 0x10);
      if ((bVar3 & 1) == 0) {
        __src = param_3 + 1;
      }
      memmove((void *)((long)__dest + __n_00),__src,__n);
    }
    *(undefined1 *)((long)((long)__dest + __n_00) + __n) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cc8e4();
}


