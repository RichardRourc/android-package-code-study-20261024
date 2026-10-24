// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 0010374c; body: [[0010374c, 001037a3]]

void FUN_0010374c(void *param_1)

{
  free(*(void **)((long)param_1 + 0x48));
  *(undefined8 *)((long)param_1 + 0x48) = 0;
  free(*(void **)((long)param_1 + 0x40));
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  free(*(void **)((long)param_1 + 0x58));
  *(undefined8 *)((long)param_1 + 0x58) = 0;
  free(*(void **)((long)param_1 + 0x68));
  *(undefined8 *)((long)param_1 + 0x68) = 0;
  FUN_00105edc(*(undefined8 *)((long)param_1 + 8));
  free(param_1);
  return;
}


