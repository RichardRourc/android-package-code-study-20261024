// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bb8c4; body: [[001bb8c4, 001bb9a3]]

void FUN_001bb8c4(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab00)])();
  iVar1 = 0x6a195646;
  if (*param_1 != 0) {
    iVar1 = 0x2a64f2b5;
  }
  iVar4 = 0x7b1697f5;
  do {
    while (iVar4 == 0x2a64f2b5) {
      lVar5 = param_1[4];
      lVar6 = *param_1;
      uVar3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab07)])(param_1);
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa40)])(lVar5,lVar6,uVar3);
      iVar4 = 0x6a195646;
    }
    bVar2 = iVar4 == 0x7b1697f5;
    iVar4 = iVar1;
  } while (bVar2);
  return;
}


