// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00107af0; body: [[00107af0, 00107bb7]]

void FUN_00107af0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  timespec local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_3 == 0) {
    lVar3 = -1;
  }
  else {
    if (*(float *)(param_1 + 0x88) != 1.0) {
      param_3 = (long)((float)param_3 / *(float *)(param_1 + 0x88));
    }
    clock_gettime(4,&local_48);
    lVar1 = (local_48.tv_sec * 1000 - param_2) + local_48.tv_nsec / 1000000;
    lVar3 = param_3 - lVar1;
    if (lVar3 == 0 || param_3 < lVar1) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x30) = lVar3 + param_2;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


