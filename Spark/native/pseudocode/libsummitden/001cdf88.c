// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cdf88; body: [[001cdf88, 001ce13f]]

void FUN_001cdf88(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 *__dest;
  ulong uVar6;
  undefined2 auStack_45 [10];
  
  if (param_2 >> 0x20 == 0) {
    puVar4 = (undefined2 *)FUN_001ce1b0(auStack_45,param_2 & 0xffffffff);
  }
  else {
    if (param_2 < 10000000000) {
      puVar5 = auStack_45;
    }
    else {
      puVar5 = (undefined2 *)FUN_001ce1b0(auStack_45,param_2 / 10000000000);
      param_2 = param_2 % 10000000000;
    }
    puVar4 = puVar5 + 5;
    uVar6 = param_2 % 100000000;
    uVar2 = (int)uVar6 + (int)(uVar6 / 1000000) * -1000000;
    uVar3 = uVar2 % 10000;
    *puVar5 = *(undefined2 *)(&DAT_0011f1a0 + (param_2 / 100000000) * 2);
    puVar5[1] = *(undefined2 *)(&DAT_0011f1a0 + (uVar6 / 1000000) * 2);
    puVar5[2] = *(undefined2 *)(&DAT_0011f1a0 + ((ulong)uVar2 / 10000) * 2);
    puVar5[3] = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(uVar3 / 100) * 2);
    puVar5[4] = *(undefined2 *)(&DAT_0011f1a0 + (ulong)(uVar3 % 100) * 2);
  }
  uVar6 = (long)puVar4 - (long)auStack_45;
  if (uVar6 < 0xfffffffffffffff8) {
    if (uVar6 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar6 << 1);
    }
    else {
      uVar1 = 0x1a;
      if ((uVar6 | 7) != 0x17) {
        uVar1 = (uVar6 | 7) + 1;
      }
      __dest = (undefined1 *)FUN_001eeb4c(uVar1);
      param_1[1] = uVar6;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 | 1;
    }
    if (puVar4 != auStack_45) {
      memcpy(__dest,auStack_45,uVar6);
    }
    __dest[uVar6] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cc8e4();
}


