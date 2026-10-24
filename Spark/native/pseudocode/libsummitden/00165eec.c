// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165eec; body: [[00165eec, 00165fb3]]

/* WARNING: Removing unreachable block (ram,0x00165f74) */

undefined8 FUN_00165eec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afb)];
  iVar2 = 0x276ead1d;
  while (iVar2 == 0x276ead1d) {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = -0x78099ff6;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0x3d2a3a0b;
    }
    if (iVar2 == -0x3d2a3a0b) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afa)])(param_2);
      iVar2 = -0x78099ff6;
    }
  }
  return param_2;
}


