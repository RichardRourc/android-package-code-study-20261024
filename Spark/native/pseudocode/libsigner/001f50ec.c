// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f50ec; body: [[001f50ec, 001f51e7]]

bool FUN_001f50ec(undefined4 *param_1,FILE *param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = fseek(param_2,param_3,param_4);
  lVar1 = 0x2ce2edddaf334d81;
  if (iVar3 != 0) {
    lVar1 = -0x2ddd98d59c65e2d2;
  }
  lVar2 = 0x353e7cd16df664a2;
  while( true ) {
    while (lVar4 = lVar2, 0x2ce2edddaf334d80 < lVar4) {
      lVar2 = lVar1;
      if ((lVar4 != 0x353e7cd16df664a2) && (lVar2 = lVar4, lVar4 == 0x2ce2edddaf334d81)) {
        lVar2 = -0x55b9520f58750739;
      }
    }
    if (lVar4 == -0x55b9520f58750739) break;
    lVar2 = lVar4;
    if (lVar4 == -0x2ddd98d59c65e2d2) {
      *param_1 = 2;
      lVar2 = -0x55b9520f58750739;
    }
  }
  return iVar3 == 0;
}


