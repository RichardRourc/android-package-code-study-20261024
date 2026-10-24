// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00107bb8; body: [[00107bb8, 00107c2b]]

long FUN_00107bb8(void)

{
  long lVar1;
  int iVar2;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = clock_gettime(4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_38.tv_nsec / 1000000 + local_38.tv_sec * 1000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


