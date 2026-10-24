// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e9294; body: [[001e9294, 001e93a3]]

void FUN_001e9294(long param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  void *__ptr;
  long *extraout_x1;
  long lVar5;
  size_t __size;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  if ((bVar1 & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  FUN_001e93c0();
  if (extraout_x1 == (long *)0x0) goto LAB_001e9388;
  uVar2 = *(ushort *)((long)extraout_x1 + 9);
  uVar3 = uVar2 >> 8 & 3;
  if (uVar3 == 0) {
LAB_001e9328:
    lVar5 = param_2[1];
    __ptr = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      __size = param_2[2] * 2;
      uVar4 = lVar5 + 0x3e1;
      if (__size < uVar4 || __size - uVar4 == 0) {
        __size = uVar4;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)__ptr + lVar5) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (uVar3 == 2) {
      uVar4 = (**(code **)(*extraout_x1 + 8))(extraout_x1,param_2);
      if ((uVar4 & 1) != 0) goto LAB_001e9328;
      uVar2 = *(ushort *)((long)extraout_x1 + 9);
    }
    if (((uVar2 >> 10 & 3) == 0) ||
       (((uVar2 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*extraout_x1 + 0x10))(extraout_x1,param_2), (uVar4 & 1) != 0))))
    goto LAB_001e9328;
  }
  (**(code **)(*extraout_x1 + 0x28))(extraout_x1,param_2);
LAB_001e9388:
  *(byte *)(param_1 + 0x1c) = bVar1;
  return;
}


