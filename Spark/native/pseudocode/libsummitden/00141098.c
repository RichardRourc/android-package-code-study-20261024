// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00141098; body: [[00141098, 0014118f]]

long FUN_00141098(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = 0x2f96ba61;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = -0x2c15dd1d;
  }
  iVar2 = 0x44086db9;
  do {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x44086db9);
    if (iVar4 == -0x2c15dd1d) {
      uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370db)])(param_1,param_2);
    }
    else {
      if (iVar4 == 0x40708ee) {
        *(ulong *)(param_1 + 8) = uVar3;
        return uVar3 - 1;
      }
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370d8)])(param_1,param_2);
      uVar3 = uVar3 + 1;
    }
    iVar2 = 0x40708ee;
  } while( true );
}


