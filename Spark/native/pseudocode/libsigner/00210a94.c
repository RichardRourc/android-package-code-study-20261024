// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00210a94; body: [[00210a94, 00210bc7]]

undefined4 FUN_00210a94(undefined4 *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *__ptr;
  long lVar3;
  undefined4 unaff_w21;
  
  iVar2 = *param_2;
  lVar1 = -0x408ee13b050179d2;
  if (iVar2 != 0) {
    lVar1 = 0x1cba5f82f77e481f;
  }
  lVar3 = 0x6b5051bf1aed633d;
  while( true ) {
    while (lVar3 < 0x3b36a7a007b21166) {
      if (lVar3 == -0x408ee13b050179d2) {
        unaff_w21 = 0;
        *param_1 = 3;
        lVar3 = 0x3b36a7a007b21166;
      }
      else if (lVar3 == 0x1cba5f82f77e481f) {
        __ptr = *(undefined4 **)(param_2 + 2);
        *param_2 = iVar2 + -1;
        unaff_w21 = *__ptr;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(__ptr + 2);
        free(__ptr);
        lVar3 = 0x3b36a7a007b21166;
      }
    }
    if (lVar3 == 0x3b36a7a007b21166) break;
    if (lVar3 == 0x6b5051bf1aed633d) {
      lVar3 = lVar1;
    }
  }
  return unaff_w21;
}


