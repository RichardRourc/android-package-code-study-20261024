// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013e5a4; body: [[0013e5a4, 0013e673]]

uint FUN_0013e5a4(ulong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  
  uVar3 = 0;
  uVar4 = 0;
LAB_0013e5f0:
  iVar2 = 0x14968da6;
  do {
    iVar1 = -0x3befed30;
    if (3 < uVar4) {
      iVar1 = -0x6983431e;
    }
    while( true ) {
      while (iVar5 = iVar2, 0x14968da5 < iVar5) {
        iVar2 = iVar1;
        if (iVar5 != 0x14968da6) {
          if (iVar5 == 0x27b96081) {
            return uVar3;
          }
          uVar4 = uVar4 + 1;
          goto LAB_0013e5f0;
        }
      }
      if (iVar5 != -0x6983431e) break;
      iVar2 = 0x27b96081;
    }
    uVar3 = (uint)((&DAT_0011d770)[uVar4 + (param_1 & 3) * 4] ^ 0xa7) <<
            (ulong)(((uint)uVar4 & 3) << 3) | uVar3;
    iVar2 = 0x7f362fdc;
  } while( true );
}


