// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0016de70; body: [[0016de70, 0016df9b]]

bool FUN_0016de70(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x78))();
  lVar1 = 0x6b5051bf1aed633d;
  if (lVar2 == 0) {
    lVar1 = -0x938e289074b7147;
  }
  lVar3 = -0x3dc07bfa902cf42a;
  while( true ) {
    while (-0x938e289074b7148 < lVar3) {
      if (lVar3 == 0x6b5051bf1aed633d) {
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
        lVar3 = -0x408ee13b050179d2;
      }
      else if (lVar3 == -0x938e289074b7147) {
        lVar3 = -0x408ee13b050179d2;
      }
    }
    if (lVar3 == -0x408ee13b050179d2) break;
    if (lVar3 == -0x3dc07bfa902cf42a) {
      lVar3 = lVar1;
    }
  }
  return lVar2 != 0;
}


