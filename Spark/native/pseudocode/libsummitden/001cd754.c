// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd754; body: [[001cd754, 001cd837]]

ulong * FUN_001cd754(ulong *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  size_t __n;
  ulong uVar4;
  
  __n = strlen(param_2);
  uVar3 = *param_1;
  lVar2 = 0x16;
  if ((*param_1 & 1) != 0) {
    lVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  uVar1 = uVar3 >> 1 & 0x7f;
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (lVar2 - uVar1 < __n) {
    FUN_001cc79c(param_1,lVar2,(__n - lVar2) + uVar1,uVar1,uVar1,0,__n,param_2);
  }
  else if (__n != 0) {
    uVar4 = param_1[2];
    if ((uVar3 & 1) == 0) {
      uVar4 = (long)param_1 + 1;
    }
    memmove((void *)(uVar4 + uVar1),param_2,__n);
    uVar1 = uVar1 + __n;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar1 << 1);
    }
    else {
      param_1[1] = uVar1;
    }
    *(undefined1 *)(uVar4 + uVar1) = 0;
  }
  return param_1;
}


