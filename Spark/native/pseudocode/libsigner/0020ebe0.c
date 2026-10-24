// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0020ebe0; body: [[0020ebe0, 0020ecef]]

void FUN_0020ebe0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = calloc(1,0x10);
  lVar1 = 0x2ce2edddaf334d81;
  if (puVar3 != (undefined4 *)0x0) {
    lVar1 = -0x2ddd98d59c65e2d2;
  }
  lVar2 = 0x353e7cd16df664a2;
  while( true ) {
    while (lVar4 = lVar2, 0x2ce2edddaf334d80 < lVar4) {
      lVar2 = lVar1;
      if ((lVar4 != 0x353e7cd16df664a2) && (lVar2 = lVar4, lVar4 == 0x2ce2edddaf334d81)) {
        *param_1 = 2;
        lVar2 = -0x55b9520f58750739;
      }
    }
    if (lVar4 == -0x55b9520f58750739) break;
    lVar2 = lVar4;
    if (lVar4 == -0x2ddd98d59c65e2d2) {
      uVar5 = *param_2;
      *puVar3 = param_3;
      *param_2 = puVar3;
      *(undefined8 *)(puVar3 + 2) = uVar5;
      lVar2 = -0x55b9520f58750739;
    }
  }
  return;
}


