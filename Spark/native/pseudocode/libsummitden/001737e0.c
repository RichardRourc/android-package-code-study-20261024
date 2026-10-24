// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001737e0; body: [[001737e0, 001738c3]]

void FUN_001737e0(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528cf)])();
  iVar1 = 0x573ae7eb;
  if (*param_1 != 0) {
    iVar1 = 0xbabe8f0;
  }
  iVar2 = -0x6a10be63;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x6a10be63);
    if (iVar4 != 0xbabe8f0) break;
    lVar5 = param_1[4];
    lVar6 = *param_1;
    uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528cc)])(param_1);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e3)])(lVar5,lVar6,uVar3);
    iVar2 = 0x573ae7eb;
  }
  return;
}


