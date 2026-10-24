// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0020ef18; body: [[0020ef18, 0020f01f]]

void FUN_0020ef18(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = -0x3768c81d078975fb;
  if (param_1 != (undefined8 *)0x0) {
    lVar1 = 0x52cde6c2dea1be4;
  }
  lVar2 = 0x312910f1547c7c77;
  do {
    while (lVar3 = lVar2, lVar3 < 0x312910f1547c7c77) {
      if (lVar3 == -0x3768c81d078975fb) {
        lVar2 = 0x49b9b00eeff4c15a;
      }
      else {
        lVar2 = lVar3;
        if (lVar3 == 0x52cde6c2dea1be4) {
          FUN_0020ee10(*param_1);
          free(param_1);
          lVar2 = 0x49b9b00eeff4c15a;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar3 == 0x312910f1547c7c77) || (lVar2 = lVar3, lVar3 != 0x49b9b00eeff4c15a));
  return;
}


