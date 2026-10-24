// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cdbb0; body: [[001cdbb0, 001cdcc7]]

void FUN_001cdbb0(ulong *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong __n;
  undefined1 local_3c [11];
  undefined1 uStack_31;
  
  puVar3 = local_3c;
  puVar4 = &uStack_31;
  if ((int)param_2 < 0) {
    puVar3 = (undefined1 *)((ulong)puVar3 | 1);
    param_2 = -param_2;
    local_3c[0] = 0x2d;
  }
  if ((9 < (long)puVar4 - (long)puVar3) ||
     (uVar2 = (uint)((0x20 - (int)LZCOUNT(param_2 | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar2 - (param_2 < *(uint *)(&DAT_0011f178 + (ulong)uVar2 * 4))) + 1) <=
     (long)puVar4 - (long)puVar3)) {
    puVar4 = (undefined1 *)FUN_001ce1b0();
  }
  __n = (long)puVar4 - (long)local_3c;
  if (__n < 0xfffffffffffffff8) {
    if (__n < 0x17) {
      puVar3 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar1 = 0x1a;
      if ((__n | 7) != 0x17) {
        uVar1 = (__n | 7) + 1;
      }
      puVar3 = (undefined1 *)FUN_001eeb4c(uVar1);
      param_1[1] = __n;
      param_1[2] = (ulong)puVar3;
      *param_1 = uVar1 | 1;
    }
    if (local_3c != puVar4) {
      memcpy(puVar3,local_3c,__n);
    }
    puVar3[__n] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cc8e4();
}


