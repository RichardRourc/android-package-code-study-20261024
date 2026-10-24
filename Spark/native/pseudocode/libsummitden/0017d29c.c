// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017d29c; body: [[0017d29c, 0017d357]]

/* WARNING: Removing unreachable block (ram,0x0017d318) */

uint FUN_0017d29c(uint param_1)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f5)];
  iVar2 = 0x6dd7875a;
  while (iVar2 == 0x6dd7875a) {
    uVar1 = (*pcVar3)();
    param_1 = 1;
    iVar2 = 0x1b0aa9cc;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0xf0620f9;
    }
    if (iVar2 == -0xf0620f9) {
      param_1 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f4)])();
      iVar2 = 0x1b0aa9cc;
    }
  }
  return param_1 & 1;
}


