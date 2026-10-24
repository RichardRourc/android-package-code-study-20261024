// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e2d68; body: [[001e2d68, 001e2f1b]]

void FUN_001e2d68(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  size_t __size;
  long lVar4;
  size_t sVar5;
  char *__src;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 5U) {
    sVar5 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e5;
    if (sVar5 < uVar1 || sVar5 - uVar1 == 0) {
      sVar5 = uVar1;
    }
    param_2[2] = sVar5;
    pvVar3 = realloc(pvVar3,sVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar3 + lVar4) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar3 + lVar4) = 0x3a647473;
  uVar2 = *(uint *)(param_1 + 0xc);
  lVar4 = param_2[1] + 5;
  param_2[1] = lVar4;
  if ((int)uVar2 < 3) {
    if (1 < uVar2 - 1) {
      __src = "allocator";
      sVar5 = 9;
      goto LAB_001e2e8c;
    }
    __src = (char *)&DAT_0011e9cf;
    if (uVar2 < 2) {
      sVar5 = 0xc;
      goto LAB_001e2e8c;
    }
    sVar5 = 6;
  }
  else {
    if (uVar2 == 3) {
      __src = "basic_istream";
    }
    else {
      if (uVar2 == 5) {
        __src = "basic_iostream";
        sVar5 = 8;
        goto LAB_001e2e68;
      }
      __src = "basic_ostream";
    }
    sVar5 = 7;
  }
LAB_001e2e68:
  if (*(int *)__src != 0x69736162 || (short)*(int *)((long)__src + 4) != 0x5f63) {
                    /* WARNING: Subroutine does not return */
    FUN_001cf218("%s:%d: %s","75h2tvbqqiyelu6ergavx69288j4fh21moacaekj9a5g1ychamkwv5wxa",0x6be,
                 &DAT_0011dd07);
  }
  __src = (char *)((long)__src + 6);
LAB_001e2e8c:
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + sVar5) {
    __size = param_2[2] * 2;
    uVar1 = lVar4 + sVar5 + 0x3e0;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    pvVar3 = realloc(pvVar3,__size);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  memcpy((void *)((long)pvVar3 + lVar4),__src,sVar5);
  param_2[1] = param_2[1] + sVar5;
  return;
}


