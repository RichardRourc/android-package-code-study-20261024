// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cea48; body: [[001cea48, 001ceb63]]

void FUN_001cea48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  ulong local_80;
  size_t local_78;
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  __n = strlen(param_4);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_001cc8e4();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001ceadc;
  }
  else {
    uVar1 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar1 = (__n | 7) + 1;
    }
    __dest = (void *)FUN_001eeb4c(uVar1);
    local_80 = uVar1 | 1;
    local_78 = __n;
    local_70 = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_001ceadc:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_001ce964(local_68,&local_50,&local_80);
  FUN_001ce5f0(param_1,local_68);
  if ((local_68[0] & 1) != 0) {
    free(local_58);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  *param_1 = &PTR_thunk_FUN_001cf124_001f3848;
  param_1[3] = uStack_48;
  param_1[2] = local_50;
  return;
}


