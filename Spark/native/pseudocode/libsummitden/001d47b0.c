// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d47b0; body: [[001d47b0, 001d482f]]

undefined8 FUN_001d47b0(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  *param_2 = 0;
  if ((pbVar2 != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
    if (*pbVar1 - 0x30 < 10) {
      lVar4 = 0;
      do {
        pbVar3 = pbVar1 + 1;
        *param_1 = (long)pbVar3;
        *param_2 = lVar4 * 10;
        lVar4 = (ulong)*pbVar1 + lVar4 * 10 + -0x30;
        *param_2 = lVar4;
        if (pbVar3 == pbVar2) {
          return 0;
        }
        pbVar1 = pbVar3;
      } while (*pbVar3 - 0x30 < 10);
    }
    return 0;
  }
  return 1;
}


