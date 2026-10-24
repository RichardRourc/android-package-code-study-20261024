// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cded4; body: [[001cded4, 001cdf87]]

void FUN_001cded4(ulong *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *__dest;
  ulong __n;
  undefined1 auStack_3b [11];
  
  puVar2 = (undefined1 *)FUN_001ce1b0(auStack_3b,param_2);
  __n = (long)puVar2 - (long)auStack_3b;
  if (__n < 0xfffffffffffffff8) {
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar1 = 0x1a;
      if ((__n | 7) != 0x17) {
        uVar1 = (__n | 7) + 1;
      }
      __dest = (undefined1 *)FUN_001eeb4c(uVar1);
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 | 1;
    }
    if (puVar2 != auStack_3b) {
      memcpy(__dest,auStack_3b,__n);
    }
    __dest[__n] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cc8e4();
}


