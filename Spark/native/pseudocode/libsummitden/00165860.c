// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165860; body: [[00165860, 00165967]]

void FUN_00165860(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
  iVar2 = -0x3bc61f9e;
  while( true ) {
    while (iVar2 < -0x3bc61f9e) {
      if (iVar2 == -0x76143fc3) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf0)])(param_1,param_2 << 3);
        iVar2 = 0x6870dab7;
      }
      else {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bf3)])
                  (param_1,param_2 << 3,param_3);
        iVar2 = 0x6870dab7;
      }
    }
    if (iVar2 != -0x3bc61f9e) break;
    uVar1 = (*pcVar3)(param_3);
    iVar2 = -0x6e12694a;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0x76143fc3;
    }
  }
  return;
}


