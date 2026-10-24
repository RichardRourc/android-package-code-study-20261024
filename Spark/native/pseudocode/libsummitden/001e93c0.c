// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e93c0; body: [[001e93c0, 001e9547]]

int FUN_001e93c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  size_t __n;
  int iVar6;
  int iVar7;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar5 = *(long **)(param_1 + 0x10);
  local_98 = (undefined8 *)&stack0xffffffffffffffb0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  iVar6 = *(int *)(param_1 + 0x18);
  local_a8 = &local_90;
  local_a0 = &local_90;
  do {
    do {
      lVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
      iVar7 = iVar6;
      if (*(char *)(lVar1 + 8) != '\r') goto LAB_001e94e8;
      plVar5 = *(long **)(lVar1 + 0x10);
      iVar7 = *(int *)(lVar1 + 0x18);
      if (iVar6 <= *(int *)(lVar1 + 0x18)) {
        iVar7 = iVar6;
      }
      if (local_a0 == local_98) {
        __n = (long)local_a0 - (long)local_a8;
        if (local_a8 == &local_90) {
          puVar2 = malloc(__n * 2);
          if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (local_a0 != &local_90) {
            memmove(puVar2,local_a8,__n);
          }
        }
        else {
          puVar2 = realloc(local_a8,__n * 2);
          if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        local_a0 = (undefined8 *)((long)puVar2 + __n);
        local_98 = puVar2 + ((long)__n >> 2);
        local_a8 = puVar2;
      }
      puVar2 = local_a0 + 1;
      *local_a0 = plVar5;
      uVar3 = (long)puVar2 - (long)local_a8 >> 3;
      iVar6 = iVar7;
      local_a0 = puVar2;
    } while (uVar3 < 2);
    uVar4 = uVar3 - 1 >> 1;
    if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_001cf218("%s:%d: %s","75h2tvbqqiyelu6ergavx69288j4fh21moacaekj9a5g1ychamkwv5wxa",0x94,
                   "Invalid access!");
    }
  } while (plVar5 != (long *)local_a8[uVar4]);
LAB_001e94e8:
  if (local_a8 != &local_90) {
    free(local_a8);
  }
  return iVar7;
}


