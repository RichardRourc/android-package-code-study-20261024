// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cc94c; body: [[001cc94c, 001cc9df]]

void FUN_001cc94c(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *__dest;
  
  if (0xfffffffffffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_001cc8e4();
  }
  if (param_3 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 == 0) goto LAB_001cc9c4;
  }
  else {
    uVar1 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      uVar1 = (param_3 | 7) + 1;
    }
    __dest = (undefined1 *)FUN_001eeb4c(uVar1);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memmove(__dest,param_2,param_3);
LAB_001cc9c4:
  __dest[param_3] = 0;
  return;
}


