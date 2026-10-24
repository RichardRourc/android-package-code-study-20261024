// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cc784; body: [[001cc784, 001cc79b]]

void FUN_001cc784(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,size_t param_7,void *param_8)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  ulong *puVar3;
  void *__dest;
  ulong uVar4;
  byte *__src;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_001cdb5c(&DAT_0011e9cf);
  uVar4 = auVar6._8_8_;
  puVar3 = auVar6._0_8_;
  if (-uVar4 - 10 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_001cc8e4();
  }
  __src = (byte *)puVar3[2];
  if ((*puVar3 & 1) == 0) {
    __src = (byte *)((long)puVar3 + 1);
  }
  if (uVar4 < 0x7ffffffffffffff3) {
    uVar1 = param_3 + uVar4;
    if (param_3 + uVar4 <= uVar4 * 2) {
      uVar1 = uVar4 * 2;
    }
    uVar2 = 0x1a;
    if ((uVar1 | 7) != 0x17) {
      uVar2 = (uVar1 | 7) + 1;
    }
    uVar5 = 0x17;
    if (0x16 < uVar1) {
      uVar5 = uVar2;
    }
  }
  else {
    uVar5 = 0xfffffffffffffff7;
  }
  __dest = (void *)FUN_001eeb4c(uVar5);
  if (param_5 != 0) {
    memmove(__dest,__src,param_5);
  }
  if (param_7 != 0) {
    memcpy((void *)((long)__dest + param_5),param_8,param_7);
  }
  __n = param_4 - (param_6 + param_5);
  if (__n != 0) {
    memmove((void *)((long)__dest + param_7 + param_5),__src + param_6 + param_5,__n);
  }
  if (uVar4 != 0x16) {
    free(__src);
  }
  uVar4 = param_7 + param_5 + __n;
  *puVar3 = uVar5 | 1;
  puVar3[1] = uVar4;
  puVar3[2] = (ulong)__dest;
  *(undefined1 *)((long)__dest + uVar4) = 0;
  return;
}


