// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001520f0; body: [[001520f0, 001521fb]]

void FUN_001520f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7b)];
  iVar2 = 0xcf76554;
  while( true ) {
    while (0x33d86675 < iVar2) {
      if (iVar2 == 0x33d86676) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bdd)])
                  (param_1,param_2 * 0x18,param_3);
        iVar2 = -0x6f4dfb2c;
      }
      else {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bde)])(param_1,param_2 * 0x18);
        iVar2 = -0x6f4dfb2c;
      }
    }
    if (iVar2 != 0xcf76554) break;
    uVar1 = (*pcVar3)(param_3);
    iVar2 = 0x33d86676;
    if ((uVar1 & 1) == 0) {
      iVar2 = 0x3851cccc;
    }
  }
  return;
}


