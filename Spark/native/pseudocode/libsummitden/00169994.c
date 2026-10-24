// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00169994; body: [[00169994, 00169a9f]]

void FUN_00169994(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  iVar2 = 0x2fd0eb8e;
  while( true ) {
    while (0x2fd0eb8d < iVar2) {
      if (iVar2 == 0x2fd0eb8e) {
        uVar1 = (*pcVar3)(param_3);
        iVar2 = -0x61df650d;
        if ((uVar1 & 1) == 0) {
          iVar2 = 0x513a0958;
        }
      }
      else {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b6a)])(param_1,param_2 * 0x18);
        iVar2 = -0x1077ac82;
      }
    }
    if (iVar2 != -0x61df650d) break;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b95)])(param_1,param_2 * 0x18,param_3)
    ;
    iVar2 = -0x1077ac82;
  }
  return;
}


