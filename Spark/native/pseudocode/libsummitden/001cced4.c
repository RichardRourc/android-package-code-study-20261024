// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cced4; body: [[001cced4, 001ccf9f]]

void FUN_001cced4(ulong *param_1,byte *param_2,ulong param_3,ulong param_4)

{
  ulong __n;
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *__dest;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_001cc784();
  }
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  __n = uVar1 - param_3;
  if (param_4 <= uVar1 - param_3) {
    __n = param_4;
  }
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_001cc8e4();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_001ccf7c;
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
  memmove(__dest,pbVar3 + param_3,__n);
LAB_001ccf7c:
  __dest[__n] = 0;
  return;
}


