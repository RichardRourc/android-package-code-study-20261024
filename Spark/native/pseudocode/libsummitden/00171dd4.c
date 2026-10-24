// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00171dd4; body: [[00171dd4, 00171ed3]]

void FUN_00171dd4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  iVar2 = 0x277fe767;
  while( true ) {
    while (0x1d6027a < iVar2) {
      if (iVar2 == 0x1d6027b) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b13)])
                  (param_1,param_2 << 2,param_3);
        iVar2 = -0x1d3a1b57;
      }
      else {
        uVar1 = (*pcVar3)(param_3);
        iVar2 = 0x1d6027b;
        if ((uVar1 & 1) == 0) {
          iVar2 = -0x6f2370f7;
        }
      }
    }
    if (iVar2 != -0x6f2370f7) break;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b10)])(param_1,param_2 << 2);
    iVar2 = -0x1d3a1b57;
  }
  return;
}


