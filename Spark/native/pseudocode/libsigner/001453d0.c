// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001453d0; body: [[001453d0, 0014555b]]

void FUN_001453d0(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  lVar1 = -0x7ef388dba0dcec1f;
  if (param_3 == (ulong *)0x0 || param_1 == 0) {
    lVar1 = -0x3b131567841c69de;
  }
  lVar2 = -0x5a2405f8da1725a0;
  while( true ) {
    while (lVar4 = lVar2, lVar4 < -0x3b131567841c69de) {
      if (lVar4 == -0x7ef388dba0dcec1f) {
        uVar3 = FUN_0013a038(param_1);
        lVar2 = -0x48037b8f5dd08a99;
        if ((uVar3 & 1) == 0) {
          lVar2 = 0x2cf80519e31e1425;
        }
      }
      else {
        lVar2 = lVar1;
        if ((lVar4 != -0x5a2405f8da1725a0) && (lVar2 = lVar4, lVar4 == -0x48037b8f5dd08a99)) {
          fVar5 = *param_2;
          *param_3 = *param_3 | 0x80000;
          *param_2 = fVar5 + (1.0 - fVar5);
          lVar2 = 0x7cc37bc84589a0a4;
        }
      }
    }
    if (lVar4 == 0x7cc37bc84589a0a4) break;
    if (lVar4 == 0x2cf80519e31e1425) {
      lVar2 = 0x7cc37bc84589a0a4;
    }
    else {
      lVar2 = lVar4;
      if (lVar4 == -0x3b131567841c69de) {
        lVar2 = 0x7cc37bc84589a0a4;
      }
    }
  }
  return;
}


