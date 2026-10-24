// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bd248; body: [[001bd248, 001bd353]]

void FUN_001bd248(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x18ba3a98;
  if (param_4 != -1) {
    iVar1 = 0x78b5fbc;
  }
  iVar2 = -0x27ac8bfe;
  while( true ) {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == -0x27ac8bfe);
    if (iVar3 == -0x473bfeef) break;
    if (iVar3 == 0x78b5fbc) {
      (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fdb)])
                (param_1,param_3,param_5,param_2,param_4);
    }
    else {
      (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fda)])
                (param_1,param_3,param_5,param_2);
    }
    iVar2 = -0x473bfeef;
  }
  return;
}


