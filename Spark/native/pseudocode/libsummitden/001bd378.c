// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bd378; body: [[001bd378, 001bd463]]

void FUN_001bd378(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x684608db;
  if (param_2 != -1) {
    iVar1 = 0x4ccc0ede;
  }
  iVar2 = 0x4ab733ce;
  while( true ) {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == 0x4ab733ce);
    if (iVar3 == -0x4adfd697) break;
    if (iVar3 == 0x4ccc0ede) {
      (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fee)])(param_1,param_3,param_2);
    }
    else {
      (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fef)])(param_1,param_3);
    }
    iVar2 = -0x4adfd697;
  }
  return;
}


