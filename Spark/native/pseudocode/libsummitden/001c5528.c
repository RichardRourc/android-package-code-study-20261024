// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c5528; body: [[001c5528, 001c5613]]

void FUN_001c5528(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x739873ce;
  if (param_2 != -1) {
    iVar1 = -0x5a34f790;
  }
  iVar2 = 0xb95172;
  do {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == 0xb95172);
    if (iVar3 == -0x5a34f790) {
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bae1)])(param_1,param_3,param_2);
    }
    else {
      if (iVar3 == -0x13f65bcd) {
        return;
      }
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bae0)])(param_1,param_3);
    }
    iVar2 = -0x13f65bcd;
  } while( true );
}


