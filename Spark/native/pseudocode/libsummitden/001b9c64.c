// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b9c64; body: [[001b9c64, 001b9d6f]]

void FUN_001b9c64(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5e)];
  iVar2 = 0x53d909ba;
  while( true ) {
    while (iVar2 < 0x2d7c3a3c) {
      if (iVar2 == -0xdf05e27) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5d)])
                  (param_1,param_2 * 0x30,param_3);
        iVar2 = 0x2d7c3a3c;
      }
      else {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5c)])(param_1,param_2 * 0x30);
        iVar2 = 0x2d7c3a3c;
      }
    }
    if (iVar2 != 0x53d909ba) break;
    uVar1 = (*pcVar3)(param_3);
    iVar2 = -0xdf05e27;
    if ((uVar1 & 1) == 0) {
      iVar2 = 0x6d6a24a;
    }
  }
  return;
}


