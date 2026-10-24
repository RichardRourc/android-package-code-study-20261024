// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00165008; body: [[00165008, 00165193]]

int FUN_00165008(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  size_t __n;
  int iVar6;
  int iVar7;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = *(long **)(param_1 + 0x10);
  local_88 = (undefined8 *)&stack0xffffffffffffffc0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  iVar6 = *(int *)(param_1 + 0x18);
  local_98 = &local_80;
  local_90 = &local_80;
  do {
    do {
      lVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
      if (*(char *)(lVar2 + 8) != '\r') {
        if (local_98 == &local_80) {
          return iVar6;
        }
        goto LAB_00165144;
      }
      plVar5 = *(long **)(lVar2 + 0x10);
      iVar7 = *(int *)(lVar2 + 0x18);
      if (iVar6 <= *(int *)(lVar2 + 0x18)) {
        iVar7 = iVar6;
      }
      if (local_90 == local_88) {
        __n = (long)local_90 - (long)local_98;
        if (local_98 == &local_80) {
          local_98 = malloc(__n * 2);
          if (local_98 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (local_90 != &local_80) {
            memcpy(local_98,&local_80,__n);
          }
        }
        else {
          local_98 = realloc(local_98,__n * 2);
          if (local_98 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        local_90 = (undefined8 *)((long)local_98 + __n);
        local_88 = local_98 + ((long)__n >> 2);
      }
      puVar1 = local_90 + 1;
      *local_90 = plVar5;
      uVar3 = (long)puVar1 - (long)local_98 >> 3;
      iVar6 = iVar7;
      local_90 = puVar1;
    } while (uVar3 < 2);
    uVar4 = uVar3 - 1 >> 1;
    if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_0014ce10("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x95,
                   "Invalid access!");
    }
  } while (plVar5 != (long *)local_98[uVar4]);
  if (local_98 != &local_80) {
LAB_00165144:
    free(local_98);
    iVar7 = iVar6;
  }
  return iVar7;
}


