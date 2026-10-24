// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a551c; body: [[001a551c, 001a55e7]]

long FUN_001a551c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar1 = 0x6eb1c652;
  if (*(long *)(lVar3 + 0x58) != 0) {
    iVar1 = 0x5043aacb;
  }
  lVar4 = lVar3;
  iVar2 = -0x184db7fd;
  while( true ) {
    do {
      iVar5 = iVar2;
      iVar2 = iVar1;
    } while (iVar5 == -0x184db7fd);
    if (iVar5 == -0x4d636b63) break;
    if (iVar5 == 0x5043aacb) {
      lVar4 = (**(code **)(lVar3 + 0x58))(param_1);
      iVar2 = -0x4d636b63;
    }
    else {
      lVar4 = -1;
      iVar2 = -0x4d636b63;
    }
  }
  return lVar4;
}


