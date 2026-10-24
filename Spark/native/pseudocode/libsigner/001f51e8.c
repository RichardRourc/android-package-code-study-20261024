// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f51e8; body: [[001f51e8, 001f52ef]]

uint FUN_001f51e8(undefined4 *param_1,FILE *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = ftell(param_2);
  lVar1 = -0x3dc07bfa902cf42a;
  if (lVar3 < 0) {
    lVar1 = -0xab3a208b03543bf;
  }
  lVar2 = -0x9c4c91856260990;
  do {
    while (lVar4 = lVar2, lVar4 < -0x9c4c91856260990) {
      if (lVar4 == -0x3dc07bfa902cf42a) {
        *param_3 = lVar3;
        lVar2 = -0x938e289074b7147;
      }
      else {
        lVar2 = lVar4;
        if (lVar4 == -0xab3a208b03543bf) {
          *param_1 = 2;
          lVar2 = -0x938e289074b7147;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar4 == -0x9c4c91856260990) || (lVar2 = lVar4, lVar4 != -0x938e289074b7147));
  return (uint)((ulong)lVar3 >> 0x3f) ^ 1;
}


