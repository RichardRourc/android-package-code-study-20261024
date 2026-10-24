// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0015f7cc; body: [[0015f7cc, 0015f983]]

void FUN_0015f7cc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  size_t __size;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  
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
  iVar2 = *(int *)(param_1 + 0xc);
  lVar4 = param_2[1] + 5;
  param_2[1] = lVar4;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      pcVar6 = "allocator";
      sVar5 = 9;
      goto LAB_0015f8f4;
    }
    if (iVar2 == 1) {
      pcVar6 = "basic_string";
      sVar5 = 0xc;
      goto LAB_0015f8f4;
    }
    pcVar6 = "basic_string";
    sVar5 = 6;
  }
  else if (iVar2 == 3) {
    pcVar6 = "basic_istream";
    sVar5 = 7;
  }
  else if (iVar2 == 4) {
    pcVar6 = "basic_ostream";
    sVar5 = 7;
  }
  else {
    pcVar6 = "basic_iostream";
    sVar5 = 8;
  }
  if (*(int *)pcVar6 != 0x69736162 || (short)*(int *)((long)pcVar6 + 4) != 0x5f63) {
                    /* WARNING: Subroutine does not return */
    FUN_0014ce10("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6a9,
                 &DAT_00136b27);
  }
  pcVar6 = (char *)((long)pcVar6 + 6);
LAB_0015f8f4:
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
  memcpy((void *)((long)pvVar3 + lVar4),pcVar6,sVar5);
  param_2[1] = param_2[1] + sVar5;
  return;
}


