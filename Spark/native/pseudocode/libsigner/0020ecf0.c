// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0020ecf0; body: [[0020ecf0, 0020ee0f]]

int FUN_0020ecf0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *__ptr;
  
  __ptr = (int *)*param_1;
  iVar2 = *__ptr + -1;
  lVar1 = -0x3dc07bfa902cf42a;
  if (iVar2 != 0) {
    lVar1 = -0xab3a208b03543bf;
  }
  *__ptr = iVar2;
  lVar3 = -0x9c4c91856260990;
  do {
    while (lVar4 = lVar3, lVar4 < -0x9c4c91856260990) {
      if (lVar4 == -0x3dc07bfa902cf42a) {
        *param_1 = *(undefined8 *)(__ptr + 2);
        free(__ptr);
        lVar3 = -0x938e289074b7147;
      }
      else {
        lVar3 = lVar4;
        if (lVar4 == -0xab3a208b03543bf) {
          lVar3 = -0x938e289074b7147;
        }
      }
    }
    lVar3 = lVar1;
  } while ((lVar4 == -0x9c4c91856260990) || (lVar3 = lVar4, lVar4 != -0x938e289074b7147));
  return iVar2;
}


