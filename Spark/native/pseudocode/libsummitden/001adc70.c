// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001adc70; body: [[001adc70, 001add33]]

long FUN_001adc70(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar1 = -0x5fbb44fa;
  if (*(long *)(lVar3 + 0x50) != 0) {
    iVar1 = -0x6c46cbe3;
  }
  lVar4 = lVar3;
  iVar2 = -0x51835b91;
  while( true ) {
    while( true ) {
      do {
        iVar5 = iVar2;
        iVar2 = iVar1;
      } while (iVar5 == -0x51835b91);
      if (iVar5 != -0x6c46cbe3) break;
      lVar4 = (**(code **)(lVar3 + 0x50))(param_1);
      iVar2 = 0x4bd3dcea;
    }
    if (iVar5 != -0x5fbb44fa) break;
    lVar4 = -1;
    iVar2 = 0x4bd3dcea;
  }
  return lVar4;
}


