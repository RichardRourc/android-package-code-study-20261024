// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001037a4; body: [[001037a4, 00103883]]

void FUN_001037a4(undefined2 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(param_2 + 8);
  if ((*(long *)(lVar5 + 0x18) == 0) || (*(int *)(*(long *)(param_2 + 0x40) + 0x10) != -1)) {
    memset(param_1,0,(ulong)*(uint *)(param_2 + 0x8c) * *(long *)(lVar5 + 8) * 4);
  }
  else {
    puVar6 = (undefined2 *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x10) + *(long *)(lVar5 + 0x10) * 3)
    ;
    uVar1 = *(undefined1 *)(puVar6 + 1);
    uVar2 = *puVar6;
    puVar6 = param_1;
    if (0 < (long)(*(long *)(lVar5 + 8) * (ulong)*(uint *)(param_2 + 0x8c))) {
      do {
        *(undefined1 *)((long)puVar6 + 3) = 0xff;
        *(undefined1 *)(puVar6 + 1) = uVar1;
        puVar7 = puVar6 + 2;
        *puVar6 = uVar2;
        puVar6 = puVar7;
      } while (puVar7 < param_1 + *(long *)(*(long *)(param_2 + 8) + 8) *
                                  (ulong)*(uint *)(param_2 + 0x8c) * 2);
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


