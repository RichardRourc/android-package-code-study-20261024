// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001515f0; body: [[001515f0, 0015166f]]

undefined8 FUN_001515f0(long *param_1,long *param_2)

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
        lVar4 = lVar4 * 10 + (ulong)*pbVar1 + -0x30;
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


