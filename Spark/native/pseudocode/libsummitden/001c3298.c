// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c3298; body: [[001c3298, 001c33a3]]

void FUN_001c3298(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb1e)])
                    (param_2,0x2f,0xffffffffffffffff);
  iVar1 = -0x33c29658;
  if (lVar3 != -1) {
    iVar1 = 0x1f4eccce;
  }
  iVar4 = -0x417ff194;
  while( true ) {
    while (iVar4 < -0x79d4c34) {
      bVar2 = iVar4 != -0x417ff194;
      iVar4 = iVar1;
      if (bVar2) {
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb1d)])(param_1,param_2);
        iVar4 = -0x79d4c34;
      }
    }
    if (iVar4 != 0x1f4eccce) break;
    (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf2)])
              (param_1,param_2,lVar3 + 1,0xffffffffffffffff);
    iVar4 = -0x79d4c34;
  }
  return;
}


