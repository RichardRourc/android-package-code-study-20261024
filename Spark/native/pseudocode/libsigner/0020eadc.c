// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0020eadc; body: [[0020eadc, 0020eadf]]

void thunk_FUN_00210978(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = calloc(1,0x10);
  lVar1 = 0x2ce2edddaf334d81;
  if (puVar4 != (undefined4 *)0x0) {
    lVar1 = -0x2ddd98d59c65e2d2;
  }
  lVar3 = 0x353e7cd16df664a2;
  while( true ) {
    while (lVar5 = lVar3, 0x2ce2edddaf334d80 < lVar5) {
      lVar3 = lVar1;
      if ((lVar5 != 0x353e7cd16df664a2) && (lVar3 = lVar5, lVar5 == 0x2ce2edddaf334d81)) {
        *param_1 = 2;
        lVar3 = -0x55b9520f58750739;
      }
    }
    if (lVar5 == -0x55b9520f58750739) break;
    lVar3 = lVar5;
    if (lVar5 == -0x2ddd98d59c65e2d2) {
      iVar2 = *param_2;
      *puVar4 = param_3;
      uVar6 = *(undefined8 *)(param_2 + 2);
      *(undefined4 **)(param_2 + 2) = puVar4;
      *(undefined8 *)(puVar4 + 2) = uVar6;
      *param_2 = iVar2 + 1;
      lVar3 = -0x55b9520f58750739;
    }
  }
  return;
}


