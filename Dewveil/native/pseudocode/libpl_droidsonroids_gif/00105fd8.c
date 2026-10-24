// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00105fd8; body: [[00105fd8, 00106007]]

void FUN_00105fd8(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x10));
    free(param_1);
    return;
  }
  return;
}


