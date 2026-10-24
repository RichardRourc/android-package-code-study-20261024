// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00171748; body: [[00171748, 00171847]]

void FUN_00171748(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  iVar2 = -0x1f8df5d1;
  while( true ) {
    while (-0x3b6f1fa7 < iVar2) {
      if (iVar2 == -0x3b6f1fa6) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b01)])(param_1,param_2 << 3);
        iVar2 = -0x556972e0;
      }
      else {
        uVar1 = (*pcVar3)(param_3);
        iVar2 = -0x4d013d7c;
        if ((uVar1 & 1) == 0) {
          iVar2 = -0x3b6f1fa6;
        }
      }
    }
    if (iVar2 != -0x4d013d7c) break;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b00)])(param_1,param_2 << 3,param_3);
    iVar2 = -0x556972e0;
  }
  return;
}


