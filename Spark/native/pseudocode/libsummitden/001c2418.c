// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c2418; body: [[001c2418, 001c250b]]

void FUN_001c2418(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar3 = -0x4bef5949;
    if (param_2 != param_3) {
      iVar3 = -0x45222211;
    }
    iVar2 = -0x74917949;
    do {
      if (iVar2 != -0x74917949) {
        return;
      }
      iVar2 = iVar3;
    } while (iVar3 < -0x45222211);
    while (iVar3 == -0x45222211) {
      uVar1 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb6f)])(param_2);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb02)])(param_1,uVar1);
      iVar3 = 0x5c0ca89d;
    }
    param_2 = param_2 + 0x30;
  } while( true );
}


