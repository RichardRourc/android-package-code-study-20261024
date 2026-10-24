// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001fde30; body: [[001fde30, 001fe013]]

void FUN_001fde30(long *param_1)

{
  long lVar1;
  long lVar2;
  FILE *local_88;
  
  lVar1 = -0x408ee13b050179d2;
  if (param_1 != (long *)0x0) {
    lVar1 = 0x1cba5f82f77e481f;
  }
  lVar2 = 0x6b5051bf1aed633d;
  do {
    while( true ) {
      while( true ) {
        while (0x1cba5f82f77e481e < lVar2) {
          if (lVar2 < 0x3b36a7a007b21166) {
            if (lVar2 == 0x1cba5f82f77e481f) {
              local_88 = (FILE *)*param_1;
              lVar2 = 0x3b36a7a007b21166;
              if (local_88 != (FILE *)0x0) {
                lVar2 = 0x312910f1547c7c77;
              }
            }
            else if (lVar2 == 0x312910f1547c7c77) {
              fclose(local_88);
              *param_1 = 0;
              lVar2 = -0x3768c81d078975fb;
            }
          }
          else if (lVar2 == 0x3b36a7a007b21166) {
            lVar2 = -0x3768c81d078975fb;
          }
          else if (lVar2 == 0x6b5051bf1aed633d) {
            lVar2 = lVar1;
          }
        }
        if (lVar2 != -0x408ee13b050179d2) break;
        lVar2 = 0x52cde6c2dea1be4;
      }
      if (lVar2 != -0x3768c81d078975fb) break;
      thunk_FUN_001fad90(param_1 + 3);
      thunk_FUN_001fd070(param_1 + 5);
      thunk_FUN_001fd070(param_1 + 7);
      free(param_1);
      lVar2 = 0x52cde6c2dea1be4;
    }
  } while (lVar2 != 0x52cde6c2dea1be4);
  return;
}


