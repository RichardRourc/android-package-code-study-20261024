// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 0010721c; body: [[0010721c, 001072b7]]

void FUN_0010721c(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_2 != -1) {
    iVar1 = close(*param_2);
    if (iVar1 != 0) {
      piVar2 = (int *)__errno();
      if (*piVar2 != 4) {
        FUN_00103dc8(param_1,0,"Eventfd close failed ");
      }
    }
    iVar1 = pthread_join(*(pthread_t *)(param_2 + 0xe),(void **)0x0);
    piVar2 = (int *)__errno();
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      FUN_00103dc8(param_1,0,"Slurp thread join failed ");
    }
    *param_2 = -1;
  }
  return;
}


