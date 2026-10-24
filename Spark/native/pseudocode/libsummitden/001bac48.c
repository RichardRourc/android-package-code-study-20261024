// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bac48; body: [[001bac48, 001bad2b]]

void FUN_001bac48(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -0x478871e;
  if (param_2 != -1) {
    iVar1 = -0x2c0eaa4b;
  }
  iVar2 = 0x4b93666e;
  do {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == 0x4b93666e);
    if (iVar3 == -0x2c0eaa4b) {
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caac2)])(param_1,param_3,param_2);
    }
    else {
      if (iVar3 != -0x478871e) {
        return;
      }
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caac1)])(param_1,param_3);
    }
    iVar2 = 0x5ba61dff;
  } while( true );
}


