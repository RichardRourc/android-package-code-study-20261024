// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001706d8; body: [[001706d8, 001707f7]]

void FUN_001706d8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = -0x1d6a050721dd3e21;
  if (param_3 == 0 || param_2 == 0) {
    lVar1 = 0x41a203875b031c3;
  }
  lVar2 = -0x1600a62692a3eebb;
  while( true ) {
    while (lVar3 = lVar2, -0x1600a62692a3eebc < lVar3) {
      lVar2 = lVar1;
      if ((lVar3 != -0x1600a62692a3eebb) && (lVar2 = lVar3, lVar3 == 0x41a203875b031c3)) {
        lVar2 = -0x56bb61885886ae54;
      }
    }
    if (lVar3 == -0x56bb61885886ae54) break;
    lVar2 = lVar3;
    if (lVar3 == -0x1d6a050721dd3e21) {
      (**(code **)(*param_1 + 0x550))(param_1,param_2,param_3);
      lVar2 = -0x56bb61885886ae54;
    }
  }
  return;
}


