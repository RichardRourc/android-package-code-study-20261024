// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cce00; body: [[001cce00, 001cced3]]

ulong * FUN_001cce00(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_1;
  lVar2 = 0x16;
  if ((*param_1 & 1) != 0) {
    lVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  uVar1 = uVar3 >> 1 & 0x7f;
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (lVar2 - uVar1 < param_3) {
    FUN_001cc79c(param_1,lVar2,(param_3 - lVar2) + uVar1,uVar1,uVar1,0,param_3);
  }
  else if (param_3 != 0) {
    uVar4 = param_1[2];
    if ((uVar3 & 1) == 0) {
      uVar4 = (long)param_1 + 1;
    }
    memmove((void *)(uVar4 + uVar1),param_2,param_3);
    uVar1 = uVar1 + param_3;
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


