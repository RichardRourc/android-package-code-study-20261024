// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bad2c; body: [[001bad2c, 001bade7]]

ulong FUN_001bad2c(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong extraout_x8;
  ulong uVar4;
  int iVar5;
  
  uVar3 = (*(code *)(&PTR_FUN_002026b0)[(long)DAT_00202f98 ^ 0x1ffffffff28caa23])
                    (param_1,param_2,param_3 & 0xffffffff);
  iVar1 = -0x6b252e8d;
  if (uVar3 != 0) {
    iVar1 = 0x39168fe7;
  }
  uVar4 = extraout_x8;
  iVar2 = -0xd74ddec;
  while( true ) {
    while( true ) {
      do {
        iVar5 = iVar2;
        iVar2 = iVar1;
      } while (iVar5 == -0xd74ddec);
      if (iVar5 != -0x6b252e8d) break;
      uVar4 = (ulong)(*(char *)(param_1 + (param_3 & 0xffffffff)) != '\0');
      iVar2 = 0x4ed1cb0a;
    }
    if (iVar5 != 0x39168fe7) break;
    uVar4 = (ulong)uVar3;
    iVar2 = 0x4ed1cb0a;
  }
  return uVar4 & 0xffffffff;
}


