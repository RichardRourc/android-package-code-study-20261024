// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106fdc; body: [[00106fdc, 001070a3]]

void Java_pl_droidsonroids_gif_GifInfoHandle_startDecoderThread
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  if ((param_3 != (undefined8 *)0x0) && (piVar3 = (int *)param_3[0x14], *piVar3 == -1)) {
    *(undefined2 *)(piVar3 + 1) = 1;
    iVar1 = eventfd(0,0);
    *piVar3 = iVar1;
    if (iVar1 == -1) {
      free(piVar3);
      pcVar2 = "Eventfd creation failed ";
    }
    else {
      param_3[0x14] = piVar3;
      *param_3 = FUN_001070a4;
      iVar1 = pthread_create((pthread_t *)(piVar3 + 0xe),(pthread_attr_t *)0x0,FUN_00107118,param_3)
      ;
      piVar3 = (int *)__errno();
      *piVar3 = iVar1;
      if (iVar1 == 0) {
        return;
      }
      pcVar2 = "Slurp thread creation failed ";
    }
    FUN_00103dc8(param_1,0,pcVar2);
    return;
  }
  return;
}


