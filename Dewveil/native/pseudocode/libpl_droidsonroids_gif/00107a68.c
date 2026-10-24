// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00107a68; body: [[00107a68, 00107aef]]

void Java_pl_droidsonroids_gif_GifInfoHandle_postUnbindSurface
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((param_3 != 0) && (piVar3 = *(int **)(param_3 + 0xa0), piVar3 != (int *)0x0)) {
    do {
      iVar1 = eventfd_write(*piVar3,1);
      if (iVar1 != -1) {
        if (iVar1 == 0) {
          return;
        }
        piVar3 = (int *)__errno();
        if (*piVar3 == 9) {
          return;
        }
        goto LAB_00107ad4;
      }
      piVar2 = (int *)__errno();
    } while (*piVar2 == 4);
    if (*piVar2 != 9) {
LAB_00107ad4:
      FUN_00103dc8(param_1,0,"Could not write to eventfd ");
      return;
    }
  }
  return;
}


