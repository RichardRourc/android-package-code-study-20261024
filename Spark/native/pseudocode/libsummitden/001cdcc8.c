// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cdcc8; body: [[001cdcc8, 001cded3]]

void FUN_001cdcc8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 *__dest;
  ulong __n;
  undefined1 local_44 [20];
  
  puVar5 = (undefined2 *)local_44;
  puVar6 = (undefined2 *)&stack0xffffffffffffffd0;
  if ((long)param_2 < 0) {
    puVar5 = (undefined2 *)((ulong)puVar5 | 1);
    param_2 = -param_2;
    local_44[0] = 0x2d;
  }
  if ((0x13 < (long)puVar6 - (long)puVar5) ||
     (uVar2 = (uint)((0x40 - (int)LZCOUNT(param_2 | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar2 - (param_2 < *(ulong *)(&DAT_0011f268 + (ulong)uVar2 * 8))) + 1) <=
     (long)puVar6 - (long)puVar5)) {
    if (param_2 >> 0x20 == 0) {
      puVar6 = (undefined2 *)FUN_001ce1b0(puVar5,param_2 & 0xffffffff);
    }
    else {
      if (9999999999 < param_2) {
        puVar5 = (undefined2 *)FUN_001ce1b0(puVar5,param_2 / 10000000000);
        param_2 = param_2 % 10000000000;
      }
      puVar6 = puVar5 + 5;
      uVar2 = (int)param_2 + (int)(param_2 / 100000000) * -100000000;
      uVar3 = uVar2 % 1000000;
      uVar4 = uVar3 % 10000;
      *puVar5 = *(undefined2 *)(&DAT_0011f1a0 + (param_2 / 100000000) * 2);
      puVar5[1] = *(undefined2 *)(&DAT_0011f1a0 + ((ulong)uVar2 / 1000000) * 2);
      puVar5[2] = *(undefined2 *)(&DAT_0011f1a0 + ((ulong)uVar3 / 10000) * 2);
      puVar5[3] = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(uVar4 / 100) * 2);
      puVar5[4] = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(uVar4 % 100) * 2);
    }
  }
  __n = (long)puVar6 - (long)local_44;
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
    if (puVar6 != (undefined2 *)local_44) {
      memcpy(__dest,local_44,__n);
    }
    __dest[__n] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cc8e4();
}


