// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ab128; body: [[001ab128, 001ab213]]

/* WARNING: Removing unreachable block (ram,0x001ab1e0) */

ulong FUN_001ab128(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b435])();
  uVar4 = 0;
  uVar3 = 0xcbf29ce484222325;
LAB_001ab19c:
  uVar5 = 0x77592018;
  do {
    uVar1 = 0x971b190c;
    if (uVar2 <= uVar4) {
      uVar1 = 0x167c74f7;
    }
    if (0x6155b125 < uVar5) {
      do {
        if (uVar5 != 0x77592018) {
          uVar4 = uVar4 + 1;
          goto LAB_001ab19c;
        }
        uVar5 = uVar1;
      } while (0x6155b125 < (int)uVar1);
    }
    while (uVar5 == 0x167c74f7) {
      uVar5 = 0xf85e88c0;
    }
    if (uVar5 != 0x971b190c) {
      return uVar3;
    }
    uVar3 = (uVar3 ^ *(byte *)(param_1 + uVar4)) * 0x100000001b3;
    uVar5 = 0x6155b126;
  } while( true );
}


