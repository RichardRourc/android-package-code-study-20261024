// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bd65c; body: [[001bd65c, 001bd73b]]

/* WARNING: Removing unreachable block (ram,0x001bd71c) */

bool FUN_001bd65c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  
  pcVar5 = (code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcd)];
  do {
    uVar2 = (*pcVar5)(param_2);
    bVar1 = false;
    iVar4 = -0x6c52e3a8;
    if ((uVar2 & 1) == 0) {
      iVar4 = 0x392ae9f3;
    }
  } while (iVar4 == 0x2021fdb1);
  while (iVar4 == 0x392ae9f3) {
    lVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcc)])(param_1,param_2,0);
    bVar1 = lVar3 != -1;
    iVar4 = -0x6c52e3a8;
  }
  return bVar1;
}


