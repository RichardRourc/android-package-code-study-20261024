// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d4a2c; body: [[001d4a2c, 001d4b5f]]

void FUN_001d4a2c(long param_1,undefined8 *param_2)

{
  void *__ptr;
  long lVar1;
  size_t __size;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
LAB_001d4aa8:
    if (*(char *)(param_1 + 0x20) != '\x01') goto LAB_001d4afc;
    uVar3 = 0x3a;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
    if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_001d4aa8;
    uVar3 = 0x3a;
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar3 = 0x2e;
    }
  }
  lVar1 = param_2[1];
  __ptr = (void *)*param_2;
  uVar2 = lVar1 + 1;
  if ((ulong)param_2[2] < uVar2) {
    __size = param_2[2] * 2;
    uVar2 = lVar1 + 0x3e1;
    if (__size < uVar2 || __size - uVar2 == 0) {
      __size = uVar2;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar1 = param_2[1];
    uVar2 = lVar1 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)((long)__ptr + lVar1) = uVar3;
LAB_001d4afc:
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x001d4b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
    return;
  }
  return;
}


