// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00172e48; body: [[00172e48, 00172f53]]

void FUN_00172e48(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  uVar2 = 0x6301d;
  while( true ) {
    while (0x5ae9505b < uVar2) {
      if (uVar2 == 0x5ae9505c) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f9)])(param_1,param_2 * 0x30);
        uVar2 = 0x1a86e205;
      }
      else {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f8)])
                  (param_1,param_2 * 0x30,param_3);
        uVar2 = 0x1a86e205;
      }
    }
    if (uVar2 != 0x6301d) break;
    uVar1 = (*pcVar3)(param_3);
    uVar2 = 0x6c9e2eb3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0x5ae9505c;
    }
  }
  return;
}


